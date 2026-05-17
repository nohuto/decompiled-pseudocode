/*
 * XREFs of RtlInitializeNtUserPfn @ 0x18013A740
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(void *Src, size_t Size, void *a3, size_t a4, void *Srca, size_t Sizea)
{
  __int64 v6; // r12
  __int64 v11; // rbp

  v6 = qword_1801E3518;
  v11 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_1801E0350
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
  memmove(off_1801E0200, a3, a4);
  memmove(off_1801E02C0, Srca, Sizea);
  byte_1801E0350 = 1;
  LdrProtectMrdata(1);
  if ( v6 != qword_1801E3518 || v11 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
