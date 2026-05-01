/*
 * XREFs of DPA_Grow @ 0x1806CC560
 * Callers:
 *     DPA_Clone @ 0x1806CC370 (DPA_Clone.c)
 *     DPA_InsertPtr @ 0x1806CC600 (DPA_InsertPtr.c)
 * Callees:
 *     ??$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z @ 0x1806CC2E8 (--$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z.c)
 */

BOOL __stdcall DPA_Grow(HDPA pdpa, int cp)
{
  __int64 v2; // r9
  BOOL v3; // edi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // esi
  int v10; // eax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( pdpa )
  {
    if ( cp <= *((_DWORD *)pdpa + 6) )
      return 1;
    v5 = *((_DWORD *)pdpa + 7);
    v6 = v5 + cp - 1;
    if ( v6 >= (unsigned int)cp && (unsigned int)v6 <= 0x7FFFFFFF )
    {
      v7 = *((_QWORD *)pdpa + 1);
      v8 = (unsigned int)(v6 >> 31);
      LODWORD(v8) = v6 % v5;
      v12[0] = 0LL;
      v9 = v5 * (v6 / v5);
      if ( (int)CCv6s_HeapReallocArray<void *>(*((_QWORD *)pdpa + 2), v8, v7, v2, v9, v12) >= 0 )
      {
        *((_QWORD *)pdpa + 1) = v12[0];
        v10 = *((_DWORD *)pdpa + 7);
        *((_DWORD *)pdpa + 6) = v9;
        if ( v10 < 256 )
          *((_DWORD *)pdpa + 7) = 2 * v10;
        return 1;
      }
    }
  }
  return v3;
}
