/*
 * XREFs of RtlResetNtUserPfn @ 0x18013A870
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801E0350 )
    return 3221225485LL;
  if ( !byte_1801CB8C8 )
  {
    LdrProtectMrdata(0);
    byte_1801E0350 = 0;
    memset64(off_1801E02C0, (unsigned __int64)UninitUser32Proc, 0x12uLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801E0200, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
