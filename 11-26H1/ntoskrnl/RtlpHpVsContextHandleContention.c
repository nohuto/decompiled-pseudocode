/*
 * XREFs of RtlpHpVsContextHandleContention @ 0x1403560AC
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsContextGetSlotInfo @ 0x1403561FC (RtlpHpVsContextGetSlotInfo.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x140356274 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x14035642C (RtlpHpAffinityMgrUpdateComplete.c)
 *     RtlpHpVsSlotCreate @ 0x1404FE7E8 (RtlpHpVsSlotCreate.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpVsContextHandleContention(volatile signed __int8 *a1, unsigned int a2)
{
  unsigned int Number; // ecx
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int SlotInfo; // eax
  char v9; // r8
  __int64 v10; // rax
  __int64 updated; // [rsp+30h] [rbp-148h]
  _BYTE v12[256]; // [rsp+40h] [rbp-138h] BYREF

  Number = KeGetCurrentPrcb()->Number;
  if ( a2 != (Number & a1[2]) )
  {
    result = (__int64)KeGetCurrentThread();
    *(_BYTE *)(result + 1909) = Number;
    return result;
  }
  v5 = a2 + 16LL * *(unsigned __int16 *)a1;
  v6 = 0;
  result = (unsigned __int8)_InterlockedCompareExchange8(a1 + 72, 1, 0);
  if ( !(_BYTE)result )
  {
    v7 = *(unsigned __int16 *)&a1[4 * v5];
    SlotInfo = RtlpHpVsContextGetSlotInfo(a1, v12);
    v9 = 0;
    if ( *(unsigned __int16 *)&a1[4 * v5 + 2] >= SlotInfo - 1 )
      v9 = SlotInfo < (unsigned int)*((unsigned __int8 *)a1 + 2) + 1;
    updated = RtlpHpAffinityMgrUpdateProcess((int)a1 + 72, v7, (unsigned int)v12, SlotInfo, v9);
    if ( (_DWORD)updated )
    {
      if ( (_DWORD)updated == 1 )
      {
        ++*(_WORD *)&a1[4 * v5 + 2];
        *(_WORD *)&a1[4 * v5] = WORD2(updated);
      }
      else if ( (_DWORD)updated != 2 )
      {
        if ( (_DWORD)updated != 3 )
          return RtlpHpAffinityMgrUpdateComplete(a1 + 72, (unsigned int)updated, v6);
        v10 = RtlpHpVsSlotCreate(a1);
        if ( !v10 )
          return RtlpHpAffinityMgrUpdateComplete(a1 + 72, (unsigned int)updated, v6);
        *(_DWORD *)&a1[4 * v5] = (unsigned __int16)((unsigned __int64)(v10 - (_QWORD)a1) >> 6);
      }
    }
    v6 = 1;
    return RtlpHpAffinityMgrUpdateComplete(a1 + 72, (unsigned int)updated, v6);
  }
  return result;
}
