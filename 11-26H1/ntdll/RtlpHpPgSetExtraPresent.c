/*
 * XREFs of RtlpHpPgSetExtraPresent @ 0x1800DF824
 * Callers:
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpPgSetExtraPresent(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int16 v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+42h] [rbp+Ah]

  v6 = 0;
  v7 = 0;
  ((void (__fastcall *)(_QWORD, __int64, __int16 *, __int64, int))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
    *(_QWORD *)a1,
    a2,
    &v6,
    3LL,
    1);
  v4 = RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56);
  LOBYTE(v6) = v6 | 0x80;
  return ((__int64 (__fastcall *)(_QWORD, __int64, __int16 *, __int64, _DWORD))(a1 ^ v4))(
           *(_QWORD *)a1,
           a2,
           &v6,
           3LL,
           0);
}
