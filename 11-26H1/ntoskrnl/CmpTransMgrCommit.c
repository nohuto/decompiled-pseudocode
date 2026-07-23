/*
 * XREFs of CmpTransMgrCommit @ 0x1408B5850
 * Callers:
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x1408B4A8C (CmpCommitLightWeightTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, _DWORD *a3)
{
  char v4; // si
  __int64 QuadPart; // rbx
  int v6; // edi
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-39h] BYREF
  __int128 v9; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13[2]; // [rsp+88h] [rbp+1Fh] BYREF

  Interval.QuadPart = -1000000LL;
  *a3 = 0;
  DWORD1(v9) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_140057E3F, 0LL, 0LL, 2u, v13);
  CmpAttachToRegistryProcess(&ApcState);
  v4 = 1;
  v11 = 1LL;
  v10 = a2;
  QuadPart = Interval.QuadPart;
  v9 = 0LL;
  do
  {
    if ( v4 )
    {
      v4 = 0;
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
      QuadPart *= 2LL;
      Interval.QuadPart = QuadPart;
      if ( QuadPart > -300000000 )
      {
        QuadPart = -300000000LL;
        Interval.QuadPart = -300000000LL;
      }
    }
    LODWORD(v9) = 0;
    v6 = CmpCommitLightWeightTransaction((__int64)&v9);
  }
  while ( v6 < 0 );
  CmpDetachFromRegistryProcess(&ApcState);
  if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&dword_140057E1D, 0LL, 0LL, 2u, v13);
  return (unsigned int)v6;
}
