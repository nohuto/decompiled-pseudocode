/*
 * XREFs of ?RemoveOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1801A3D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 *     ?erase@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@@Z @ 0x18016049C (-erase@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@std@@@st.c)
 */

_QWORD *__fastcall DWMInputRouter::RemoveOnDeviceRemovalCallback(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  const __m128i *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 496;
  v3 = std::_Find_vectorized<InputSite * const,InputSite *>(
         *(const __m128i **)(a1 + 496),
         *(const __m128i **)(a1 + 504),
         a2);
  return std::vector<LightDismissClientProxy *>::erase(v2, &v5, (__int64)v3);
}
