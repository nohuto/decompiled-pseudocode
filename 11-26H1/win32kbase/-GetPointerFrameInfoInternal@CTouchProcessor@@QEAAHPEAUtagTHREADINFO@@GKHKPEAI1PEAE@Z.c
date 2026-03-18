/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x14004F438
 * Callers:
 *     NtUserGetPointerInfoList @ 0x140053E60 (NtUserGetPointerInfoList.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x14004F7EC (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x14004FE40 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        struct tagPOINTER_INFO *a9)
{
  struct _LIST_ENTRY *v9; // rsi
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v14; // rdx
  __int64 v16; // rcx

  v9 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( !ThreadPointerHookData && (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v9, a3)) == 0LL
    || (*((_DWORD *)ThreadPointerHookData + 12) & 8) != 0
    || (v14 = *((_QWORD *)ThreadPointerHookData + 3)) == 0 )
  {
LABEL_13:
    v16 = 87LL;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)ThreadPointerHookData + 12) & 1) == 0 )
  {
    v16 = 5LL;
    goto LABEL_12;
  }
  if ( a4 == 1 || a4 == *((_DWORD *)ThreadPointerHookData + 5) )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(this, v14, a4, a5, a6, a7, a8, a9) )
      return 1LL;
    goto LABEL_13;
  }
  v16 = 1629LL;
LABEL_12:
  UserSetLastError(v16);
  return 0LL;
}
