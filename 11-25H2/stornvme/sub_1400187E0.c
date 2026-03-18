/*
 * XREFs of sub_1400187E0 @ 0x1400187E0
 * Callers:
 *     sub_14000D6D0 @ 0x14000D6D0 (sub_14000D6D0.c)
 *     sub_140018790 @ 0x140018790 (sub_140018790.c)
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1400187E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  bool v4; // cf
  bool v5; // zf

  v3 = *(unsigned __int16 *)(a1 + 186);
  v4 = v3 < a2;
  v5 = v3 == a2;
  if ( v3 == a2 )
  {
    if ( *(unsigned __int8 *)(a1 + 185) >= a3 )
      return 1;
    v4 = v3 < a2;
    v5 = v3 == a2;
  }
  return !v4 && !v5;
}
