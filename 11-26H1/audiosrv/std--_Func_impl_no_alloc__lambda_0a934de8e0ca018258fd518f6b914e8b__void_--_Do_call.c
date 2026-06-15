/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1801005E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call(__int64 a1)
{
  const struct Microsoft::WRL::WeakRef *v1; // rdx
  const unsigned __int16 *v2; // r8
  CAudioResourceManager *v3; // rcx

  v1 = (const struct Microsoft::WRL::WeakRef *)(a1 + 8);
  v2 = *(const unsigned __int16 **)(a1 + 16);
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(const unsigned __int16 **)v2;
  v3 = 0LL;
  if ( g_AudioResourceManager )
    v3 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::DeleteAuxiliaryInputForStreamGroup(v3, v1, v2);
}
