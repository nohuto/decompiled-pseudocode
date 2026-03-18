/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400537C4
 * Callers:
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x14004F7EC (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x140053890 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  struct _LIST_ENTRY *v7; // rsi
  __int64 ThreadPointerHookData; // r10
  unsigned __int64 v12; // rdx
  __int64 v14; // rcx

  v7 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData((__int64)a2 + 1208, a3);
  if ( !ThreadPointerHookData
    && (ThreadPointerHookData = (__int64)CTouchProcessor::FindThreadPointerData(this, v7, a3)) == 0
    || (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0
    || (v12 = *(_QWORD *)(ThreadPointerHookData + 24)) == 0 )
  {
LABEL_10:
    v14 = 87LL;
    goto LABEL_11;
  }
  if ( a4 == 1 || a4 == *(_DWORD *)(ThreadPointerHookData + 20) )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(this, v12, a4, a5, a6, a7) )
      return 1LL;
    goto LABEL_10;
  }
  v14 = 1629LL;
LABEL_11:
  UserSetLastError(v14);
  return 0LL;
}
