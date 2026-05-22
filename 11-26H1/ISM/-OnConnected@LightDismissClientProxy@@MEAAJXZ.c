/*
 * XREFs of ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x180160090
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18016023C (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 */

__int64 __fastcall LightDismissClientProxy::OnConnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( qword_180254000 == qword_180254008 )
  {
    std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
      this,
      qword_180254000,
      &v2);
  }
  else
  {
    *(_QWORD *)qword_180254000 = this;
    qword_180254000 += 8LL;
  }
  return 0LL;
}
