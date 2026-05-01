/*
 * XREFs of ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x1802C5A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z @ 0x1802DCA54 (--$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z.c)
 */

__int64 __fastcall CApplicationManager::WaitForReconstitution(CApplicationManager *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    WaitOnAddressHelper<bool>((char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5);
  else
    return (unsigned int)-2147024884;
  return v1;
}
