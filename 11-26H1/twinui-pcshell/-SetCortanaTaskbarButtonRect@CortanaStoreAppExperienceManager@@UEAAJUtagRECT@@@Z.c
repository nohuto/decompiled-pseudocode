/*
 * XREFs of ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1803A2290
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A1DD0 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SetCortanaTaskbarButtonRect(
        CortanaStoreAppExperienceManager *this,
        struct tagRECT *a2)
{
  const RECT *v4; // rcx
  __int64 result; // rax

  v4 = (const RECT *)((char *)this - 120);
  if ( LOBYTE(v4[20].left) )
    CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(v4);
  result = 0LL;
  *(struct tagRECT *)((char *)this + 184) = *a2;
  return result;
}
