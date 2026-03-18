/*
 * XREFs of sub_140018790 @ 0x140018790
 * Callers:
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 * Callees:
 *     sub_1400187E0 @ 0x1400187E0 (sub_1400187E0.c)
 */

char __fastcall sub_140018790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r9d
  bool v6; // cf
  bool v7; // zf
  unsigned int v8; // eax

  if ( (unsigned int)a2 < 2 )
    return sub_1400187E0(a1, a2, a3, a4);
  v5 = *(unsigned __int16 *)(a1 + 186);
  v6 = v5 < (unsigned int)a2;
  v7 = v5 == (_DWORD)a2;
  if ( v5 == (_DWORD)a2 )
  {
    v8 = *(unsigned __int8 *)(a1 + 185);
    if ( v8 == (_DWORD)a3 || v8 >= (unsigned int)a3 )
      return 1;
    v6 = v5 < (unsigned int)a2;
    v7 = v5 == (_DWORD)a2;
  }
  return !v6 && !v7;
}
