/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x1408AE518
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1408AEDA8 (CmpTransMgrRollback.c)
 */

int __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  int v1; // edi
  ULONG_PTR v3; // rbx
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  v1 = 0;
  v6 = 0;
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 )
  {
    v4 = qword_140E09F00 & 1;
    if ( v4 == qword_140E09F00 )
      LODWORD(v4) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E09EE8,
                      (unsigned __int8 *)qword_140056730,
                      0LL,
                      0LL,
                      2u,
                      v7);
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    CmpTransMgrRollback(v3, &v6);
    LODWORD(v4) = CmpCleanupLightWeightTransaction(v3);
    v1 = v6;
  }
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 )
  {
    v4 = qword_140E09F00 & 1;
    if ( v4 == qword_140E09F00 )
    {
      v6 = v1;
      v8 = &v6;
      v9 = 4LL;
      LODWORD(v4) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E09EE8,
                      (unsigned __int8 *)word_1400566FA,
                      0LL,
                      0LL,
                      3u,
                      v7);
    }
  }
  return v4;
}
