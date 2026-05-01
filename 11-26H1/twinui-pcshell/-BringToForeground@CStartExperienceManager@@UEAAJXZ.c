/*
 * XREFs of ?BringToForeground@CStartExperienceManager@@UEAAJXZ @ 0x180387C90
 * Callers:
 *     <none>
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E1C (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::BringToForeground(CStartExperienceManager *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 38) )
    return 0LL;
  if ( !*((_DWORD *)this + 80) )
    return 0LL;
  result = CSingleViewShellExperience::BringToForeground((CStartExperienceManager *)((char *)this + 280));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
