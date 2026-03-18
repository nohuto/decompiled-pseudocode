/*
 * XREFs of CmLogTmRmAction @ 0x1408AF088
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpTransWriteLog @ 0x1408AD634 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1408ADAD0 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf
  __int128 v5; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 96) == 0LL;
  v9 = 0LL;
  plsnFlush.ullOffset = 0LL;
  v10 = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  v11 = 0LL;
  if ( v3 )
    return 0;
  v5 = *(_OWORD *)(a2 + 88);
  DWORD1(v9) = 48;
  *((_QWORD *)&v9 + 1) = a3;
  v10 = v5;
  LODWORD(v9) = HvBufferCheckSum((__int64)&v9, 0x30u);
  result = CmpTransWriteLog(a1, (__int64)&v9, 0x30u, 2u, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
