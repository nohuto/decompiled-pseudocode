/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400D20B0
 * Callers:
 *     NtUserGetPointerInfoList @ 0x140170AE0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1400D1BE0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D3718 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FF790 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  struct _LIST_ENTRY *v7; // rsi
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v12; // rdx
  int v14; // ecx

  v7 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( !ThreadPointerHookData && (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v7, a3)) == 0LL
    || (*((_DWORD *)ThreadPointerHookData + 12) & 8) != 0
    || (v12 = *((_QWORD *)ThreadPointerHookData + 3)) == 0 )
  {
LABEL_10:
    v14 = 87;
    goto LABEL_11;
  }
  if ( a4 == 1 || a4 == *((_DWORD *)ThreadPointerHookData + 5) )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(this, v12, a4, a5, a6, (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_10;
  }
  v14 = 1629;
LABEL_11:
  UserSetLastError(v14);
  return 0LL;
}
