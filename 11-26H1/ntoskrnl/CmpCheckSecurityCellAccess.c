/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x140945764
 * Callers:
 *     CmpCheckKeyAccess @ 0x140946BA0 (CmpCheckKeyAccess.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rdx
  __int64 CellFlat; // rax
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  HvpGetCellContextInitialize(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v2, (unsigned int *)&v6);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v2);
  if ( CellFlat )
  {
    v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
