/*
 * XREFs of _IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor$0_0 @ 0x1806AB897
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IsGameManager::UpdateGameConfigStoreFromKGL_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  wil::unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>::~unique_struct<ExecutionModel::GameConfig,void (*)(ExecutionModel::GameConfig *),&void FreeGameConfig(ExecutionModel::GameConfig *),std::nullptr_t,0>((LPVOID *)(a2 + 112));
}
