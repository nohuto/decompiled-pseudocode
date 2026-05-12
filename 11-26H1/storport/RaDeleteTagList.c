/*
 * XREFs of RaDeleteTagList @ 0x1401B9B74
 * Callers:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaDeleteTagList(_QWORD *a1)
{
  __int64 v1; // rax
  void *v3; // rcx
  void *v4; // rcx

  v1 = a1[3];
  if ( *(_DWORD *)v1 != 1094997074 || (*(_BYTE *)(v1 + 111) & 4) == 0 )
  {
    v3 = (void *)a1[80];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4D546152u);
    v4 = (void *)a1[72];
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4D546152u);
  }
}
