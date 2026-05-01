/*
 * XREFs of ?EnableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x1802ED8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18005A828 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRotationManagerSync::EnableAutoRotationPreferences(CRotationManagerSync *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( ++*((_DWORD *)this + 11) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
