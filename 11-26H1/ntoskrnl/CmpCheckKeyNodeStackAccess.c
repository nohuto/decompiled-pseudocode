/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x140945690
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140943A14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 CmpCheckKeyNodeStackAccess()
{
  __int16 *v0; // r10
  ULONG_PTR v1; // rbx
  __int64 CellFlat; // rax
  __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned int v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  v6 = 0;
  v7 = 0LL;
  BugCheckParameter3[0] = 0LL;
  HvpGetCellContextInitialize(&v7);
  CmpGetSecurityCellForKeyNodeStack(v0, BugCheckParameter3, &v6);
  v1 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3[0], v6, (unsigned int *)&v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3[0], v6);
  v3 = CellFlat;
  v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
  if ( v3 )
  {
    if ( (*(_BYTE *)(v1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v1, (__int64)&v7);
    else
      HvpReleaseCellPaged(v1, (unsigned int *)&v7);
  }
  return v4;
}
