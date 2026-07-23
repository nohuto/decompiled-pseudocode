/*
 * XREFs of RtlResetNtUserPfn @ 0x18013A5E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 */

__int64 RtlResetNtUserPfn()
{
  if ( !byte_1801DF350 )
    return 3221225485LL;
  if ( !byte_1801CA908 )
  {
    LdrProtectMrdata(0);
    byte_1801DF350 = 0;
    memset64(off_1801DF2C0, (unsigned __int64)UninitUser32Proc, 0x12uLL);
    memset64(NtUserPfn, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    memset64(off_1801DF200, (unsigned __int64)UninitUser32Proc, 0x18uLL);
    LdrProtectMrdata(1);
  }
  return 0LL;
}
