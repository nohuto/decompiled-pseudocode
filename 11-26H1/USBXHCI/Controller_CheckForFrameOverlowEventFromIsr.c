/*
 * XREFs of Controller_CheckForFrameOverlowEventFromIsr @ 0x14002AFB0
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x14003AB70 (Interrupter_WdfEvtInterruptIsr.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x140015370 (Controller_GetFrameNumber.c)
 *     Controller_AreFrameAndTimeDeltaValuesValid @ 0x14004094C (Controller_AreFrameAndTimeDeltaValuesValid.c)
 */

unsigned __int64 __fastcall Controller_CheckForFrameOverlowEventFromIsr(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r10
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 1064) )
  {
    v3 = MEMORY[0xFFFFF78000000008];
    result = *(_QWORD *)(a1 + 1152) + 15000000LL;
    if ( MEMORY[0xFFFFF78000000008] > result )
    {
      result = Controller_GetFrameNumber(a1, 0, &v6, &v7);
      v4 = result;
      if ( !v6 )
      {
        if ( v7 )
        {
          ++*(_DWORD *)(a1 + 1212);
        }
        else
        {
          KeQueryPerformanceCounter(0LL);
          result = Controller_AreFrameAndTimeDeltaValuesValid(
                     (unsigned int)(v4 - *(_DWORD *)(a1 + 1176)),
                     v3 - *(_QWORD *)(a1 + 1160));
          if ( (_BYTE)result )
          {
            *(_QWORD *)(a1 + 1192) = v5 - *(_QWORD *)(a1 + 1128);
            result = (unsigned int)(8 * (v4 - *(_DWORD *)(a1 + 1136)) - *(_DWORD *)(a1 + 1144));
            *(_QWORD *)(a1 + 1200) = (unsigned int)result;
          }
          else
          {
            ++*(_DWORD *)(a1 + 1208);
          }
          *(_QWORD *)(a1 + 1168) = v5;
          *(_QWORD *)(a1 + 1160) = v3;
          *(_DWORD *)(a1 + 1176) = v4;
        }
        *(_QWORD *)(a1 + 1152) = v3;
      }
    }
  }
  return result;
}
