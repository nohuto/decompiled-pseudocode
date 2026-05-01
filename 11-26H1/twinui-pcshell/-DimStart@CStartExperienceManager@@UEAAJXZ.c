/*
 * XREFs of ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180388400
 * Callers:
 *     <none>
 * Callees:
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18038A778 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CStartExperienceManager::DimStart(CStartExperienceManager *this)
{
  CStartExperienceManager *v1; // rcx
  __int64 result; // rax

  v1 = (CStartExperienceManager *)((char *)this - 40);
  if ( *((_BYTE *)v1 + 760) )
    return 0LL;
  result = CStartExperienceManager::ReactivateHelper(v1, L"OnDimmedStateChanged", 1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
