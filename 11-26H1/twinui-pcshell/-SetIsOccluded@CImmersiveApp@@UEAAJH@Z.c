/*
 * XREFs of ?SetIsOccluded@CImmersiveApp@@UEAAJH@Z @ 0x1802FFD70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJ_N@Z @ 0x1802FFDCC (-SetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::SetIsOccluded(CImmersiveApp *this, int a2)
{
  unsigned int IsOccluded; // ebx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  IsOccluded = CImmersiveApp::CImmersiveWindowCollection::SetIsOccluded((CImmersiveApp *)((char *)this + 200), a2 != 0);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return IsOccluded;
}
