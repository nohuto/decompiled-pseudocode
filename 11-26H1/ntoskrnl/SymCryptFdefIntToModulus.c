/*
 * XREFs of SymCryptFdefIntToModulus @ 0x14056E2E4
 * Callers:
 *     SymCryptIntToModulus @ 0x14055E990 (SymCryptIntToModulus.c)
 * Callees:
 *     SymCryptIntGetValueLsbits64 @ 0x14055E7EC (SymCryptIntGetValueLsbits64.c)
 *     SymCryptIntToDivisor @ 0x14055E944 (SymCryptIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x14056E118 (SymCryptFdefDecideModulusType.c)
 *     SymCryptInverseMod2e64 @ 0x140570154 (SymCryptInverseMod2e64.c)
 *     _guard_dispatch_icall_nop @ 0x140727520 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptFdefIntToModulus(__int64 a1, int *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bl
  __int64 ValueLsbits64; // rax
  __int64 v11; // rax
  int v12; // ecx

  v6 = a4;
  a2[3] = a4;
  SymCryptIntToDivisor(a1, (_DWORD)a2 + 64, a3, a4 & 1, a5, a6);
  *a2 = SymCryptFdefDecideModulusType(a1, a2[1], a3, v6);
  ValueLsbits64 = SymCryptIntGetValueLsbits64();
  v11 = SymCryptInverseMod2e64(ValueLsbits64);
  v12 = *a2;
  *((_QWORD *)a2 + 3) = -v11;
  return (*(__int64 (__fastcall **)(int *, __int64, __int64))((char *)&off_140005E78
                                                            + (v12 & (unsigned int)g_SymCryptModFnsMask)))(
           a2,
           a5,
           a6);
}
