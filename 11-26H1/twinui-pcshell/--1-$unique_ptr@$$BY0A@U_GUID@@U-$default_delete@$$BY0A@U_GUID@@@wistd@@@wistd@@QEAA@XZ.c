/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@wistd@@@wistd@@QEAA@XZ @ 0x1802C3E90
 * Callers:
 *     _IsGameManager::GetStringFromGameConfigStore_::_1_::dtor$0 @ 0x1806CF233 (_IsGameManager--GetStringFromGameConfigStore_--_1_--dtor$0.c)
 *     _IsGameManager::GetGlobalStringFromGameConfigStore_::_1_::dtor$0 @ 0x1806CF245 (_IsGameManager--GetGlobalStringFromGameConfigStore_--_1_--dtor$0.c)
 *     _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$0 @ 0x1806D47F7 (_IsGameManager--UpdateGameConfigStoreFromKGL_--_1_--dtor$0.c)
 *     _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$2 @ 0x1806D4809 (_IsGameManager--UpdateGameConfigStoreFromKGL_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<_GUID [0],wistd::default_delete<_GUID [0]>>::~unique_ptr<_GUID [0],wistd::default_delete<_GUID [0]>>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    operator delete(v2, a2);
}
