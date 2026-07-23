/*
 * XREFs of MxWalkBootPageTables @ 0x140CFE990
 * Callers:
 *     MxInitializePfnsForValidMappings @ 0x140CFD428 (MxInitializePfnsForValidMappings.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 */

__int64 __fastcall MxWalkBootPageTables(__int64 a1, int a2)
{
  __int64 v5; // [rsp+20h] [rbp-79h] BYREF
  int v6; // [rsp+28h] [rbp-71h]
  int v7; // [rsp+2Ch] [rbp-6Dh]
  _DWORD v8[10]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-41h]
  __int64 v10; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v11)(__int64, __int64 *, unsigned int); // [rsp+D8h] [rbp+3Fh]
  __int64 *v12; // [rsp+E8h] [rbp+4Fh]

  v7 = 0;
  memset_0(v8, 0, 0xC0uLL);
  v8[0] = 70400;
  v12 = &v5;
  v9 = 0xFFFF800000000000uLL;
  v11 = MxCreatePfnsForPtes;
  v10 = -1LL;
  v5 = a1;
  v6 = a2;
  MxCreatePfnsForPtes((__int64)v8, (__int64 *)0xFFFFF6FB7DBEDF68LL, 3u);
  return MiWalkPageTables((__int64)v8);
}
