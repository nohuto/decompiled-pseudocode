/*
 * XREFs of KiSendFreeze @ 0x1405F8AD8
 * Callers:
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 */

__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned __int16 *v5; // rax
  int v6; // edi
  unsigned int v7; // edx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+32h] [rbp-26h]
  __int16 v13; // [rsp+36h] [rbp-22h]
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  v13 = 0;
  v14 = 0;
  result = (unsigned int)_InterlockedIncrement(&KiFreezeNestingLevel);
  if ( (int)result <= 1 )
  {
    v5 = *(unsigned __int16 **)(a1 + 8);
    v11 = 0;
    v6 = 0;
    v10[0] = (unsigned __int16 *)a1;
    v10[1] = v5;
    result = KeEnumerateNextProcessor(&v14, v10);
    if ( !(_DWORD)result )
    {
      while ( 1 )
      {
        v7 = v14;
        v8 = KiProcessorBlock[v14];
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 11656), 5, 0);
        if ( a2 )
        {
          if ( v9 )
          {
            do
            {
              do
                _mm_pause();
              while ( *(_DWORD *)(v8 + 11656) );
            }
            while ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 11656), 5, 0) );
          }
        }
        else if ( v9 )
        {
          KeRemoveProcessorAffinityEx((unsigned __int16 *)a1, v7);
          goto LABEL_8;
        }
        ++v6;
LABEL_8:
        result = KeEnumerateNextProcessor(&v14, v10);
        if ( (_DWORD)result )
        {
          if ( v6 )
            return HalSendNMI(a1);
          return result;
        }
      }
    }
  }
  return result;
}
