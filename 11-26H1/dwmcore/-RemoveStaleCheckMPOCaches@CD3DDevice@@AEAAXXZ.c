/*
 * XREFs of ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x18006A464
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0 (-AdvanceFrame@CDeviceManager@@IEAA_NXZ.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180127320 (-erase@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@V-.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________CD3DDevice::RemoveStaleCheckMPOCaches_::_5_::_lambda_1___ @ 0x180212E78 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CCheckM.c)
 */

void __fastcall CD3DDevice::RemoveStaleCheckMPOCaches(CD3DDevice *this)
{
  __int64 v2; // r9
  char *v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 1493) )
  {
    v2 = *((_QWORD *)this + 181);
    v3 = (char *)this + 1424;
    *((_BYTE *)this + 1493) = 0;
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________CD3DDevice::RemoveStaleCheckMPOCaches_::_5_::_lambda_1___(
      &v4,
      *((_QWORD *)this + 178),
      *((_QWORD *)this + 179),
      v2);
    std::vector<std::unique_ptr<CCheckMPOCache>>::erase(v3, &v4, v4, *((_QWORD *)this + 179));
  }
}
