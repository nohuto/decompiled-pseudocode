/*
 * XREFs of ??1CPersistence@ApplicationViewManagement@@QEAA@XZ @ 0x180092058
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180091E80 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x18020E61C (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplicationViewManagement::CPersistence::~CPersistence(HKEY *this)
{
  HKEY v1; // rax

  v1 = *this;
  *this = 0LL;
  if ( v1 )
    RegCloseKey(v1);
}
