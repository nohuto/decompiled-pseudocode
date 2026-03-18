/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x140194D18
 * Callers:
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     EditionClientCharToWchar @ 0x14023E7D0 (EditionClientCharToWchar.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bx
  int (*v5)(void); // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5912LL);
  if ( v5 && v5() >= 0 )
    return (unsigned __int16)EditionClientCharToWchar(v3, v2);
  return v4;
}
