/*
 * XREFs of ?OnDisconnected@LightDismissClientProxy@@MEAAJXZ @ 0x1801600D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 *     ?erase@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVLightDismissClientProxy@@@std@@@std@@@2@@Z @ 0x18016049C (-erase@-$vector@PEAVLightDismissClientProxy@@V-$allocator@PEAVLightDismissClientProxy@@@std@@@st.c)
 */

__int64 __fastcall LightDismissClientProxy::OnDisconnected(LightDismissClientProxy *this)
{
  const __m128i *v1; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = std::_Find_vectorized<InputSite * const,InputSite *>(
         (const __m128i *)LightDismissProcessor::s_clients,
         (const __m128i *)qword_180254000,
         (unsigned __int64)this);
  std::vector<LightDismissClientProxy *>::erase(&LightDismissProcessor::s_clients, &v3, v1);
  return 0LL;
}
