/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x140193238
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // r10
  char *v2; // rcx
  char *v3; // r8
  char *v4; // r9
  int v5; // r11d
  int v6; // edx
  char *v7; // rcx

  v1 = (char *)this + 24;
  v2 = (char *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 32;
  if ( v2 != v1 )
    v3 = v2 - 8;
  while ( v3 )
  {
    v6 = *((_DWORD *)v3 + 26);
    v7 = (char *)*((_QWORD *)v3 + 1);
    if ( v6 < v5 )
      v4 = v3;
    v3 = v7 - 8;
    if ( v7 == v1 )
      v3 = 0LL;
    if ( v6 >= v5 )
      v6 = v5;
    v5 = v6;
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}
