/*
 * XREFs of ?ContainsPath@DMMVIDPNTOPOLOGY@@QEBAEII@Z @ 0x1400544DC
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140264C80 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNTOPOLOGY::ContainsPath(DMMVIDPNTOPOLOGY *this, int a2, int a3)
{
  char *v3; // r10
  char *v4; // rcx
  char *v5; // r9
  char *v7; // rax

  v3 = (char *)this + 24;
  v4 = (char *)*((_QWORD *)this + 3);
  v5 = 0LL;
  if ( v4 != v3 )
    v5 = v4 - 8;
  while ( v5 && (*(_DWORD *)(*((_QWORD *)v5 + 11) + 24LL) != a2 || *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) != a3) )
  {
    v7 = (char *)*((_QWORD *)v5 + 1);
    v5 = v7 - 8;
    if ( v7 == v3 )
      v5 = 0LL;
  }
  return v5 != 0LL;
}
