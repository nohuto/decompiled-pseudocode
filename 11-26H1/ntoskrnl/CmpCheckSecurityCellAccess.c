/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x140983754
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14094D7E0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140984B90 (CmpCheckKeyAccess.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140984264 (CmpCheckKeySecurityDescriptorAccess.c)
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
