/*
 * XREFs of RtlInitializeNtUserPfn @ 0x18013A4B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(void *Src, size_t Size, void *a3, size_t a4, void *Srca, size_t Sizea)
{
  ULONG_PTR CfgBitMap; // r12
  __int64 v11; // rbp

  CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
  v11 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_1801DF350
    || (Size & 7) != 0
    || Size > 0xC0
    || (a4 & 7) != 0
    || a4 > 0xC0
    || (Sizea & 7) != 0
    || Sizea > 0x90 )
  {
    return 3221225485LL;
  }
  LdrProtectMrdata(0);
  memmove(NtUserPfn, Src, Size);
  memmove(off_1801DF200, a3, a4);
  memmove(off_1801DF2C0, Srca, Sizea);
  byte_1801DF350 = 1;
  LdrProtectMrdata(1);
  if ( CfgBitMap != LdrSystemDllInitBlock.CfgBitMap || v11 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
