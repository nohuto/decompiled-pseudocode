/*
 * XREFs of RtlpHpVsContextHandleContention @ 0x1800977E0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsSlotCreate @ 0x180075AE0 (RtlpHpVsSlotCreate.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x1800938F0 (RtlpHpGetCurrentProcessorNumber.c)
 *     RtlpHpAffinityMgrUpdateProcess @ 0x180094978 (RtlpHpAffinityMgrUpdateProcess.c)
 *     RtlpHpAffinityMgrUpdateComplete @ 0x180094B04 (RtlpHpAffinityMgrUpdateComplete.c)
 *     RtlpHpVsContextGetSlotInfo @ 0x180097620 (RtlpHpVsContextGetSlotInfo.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

signed __int8 __fastcall RtlpHpVsContextHandleContention(volatile signed __int8 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  signed __int8 result; // al
  __int64 v5; // rbp
  int v6; // edi
  unsigned int v7; // ebx
  unsigned int SlotInfo; // eax
  char v9; // r8
  union _SLIST_HEADER *v10; // rax
  __int64 updated; // [rsp+30h] [rbp-148h]
  unsigned __int16 v12[128]; // [rsp+40h] [rbp-138h] BYREF

  v2 = a2;
  result = RtlpHpGetCurrentProcessorNumber();
  if ( (_DWORD)v2 != (unsigned __int8)(result & a1[2]) )
  {
    BYTE1(NtCurrentTeb()->HeapThreadData) = result;
    return result;
  }
  v5 = v2 + 16LL * *(unsigned __int16 *)a1;
  v6 = 0;
  result = _InterlockedCompareExchange8(a1 + 72, 1, 0);
  if ( !result )
  {
    v7 = *(unsigned __int16 *)&a1[4 * v5];
    SlotInfo = RtlpHpVsContextGetSlotInfo((unsigned __int16 *)a1, v12);
    v9 = 0;
    if ( *(unsigned __int16 *)&a1[4 * v5 + 2] >= SlotInfo - 1 )
      v9 = SlotInfo < (unsigned int)*((unsigned __int8 *)a1 + 2) + 1;
    updated = RtlpHpAffinityMgrUpdateProcess((__int64)(a1 + 72), v7, v12, SlotInfo, v9);
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
          return RtlpHpAffinityMgrUpdateComplete((__int64)(a1 + 72), updated, v6);
        v10 = RtlpHpVsSlotCreate((unsigned __int64)a1);
        if ( !v10 )
          return RtlpHpAffinityMgrUpdateComplete((__int64)(a1 + 72), updated, v6);
        *(_DWORD *)&a1[4 * v5] = (unsigned __int16)((unsigned __int64)((char *)v10 - a1) >> 6);
      }
    }
    v6 = 1;
    return RtlpHpAffinityMgrUpdateComplete((__int64)(a1 + 72), updated, v6);
  }
  return result;
}
