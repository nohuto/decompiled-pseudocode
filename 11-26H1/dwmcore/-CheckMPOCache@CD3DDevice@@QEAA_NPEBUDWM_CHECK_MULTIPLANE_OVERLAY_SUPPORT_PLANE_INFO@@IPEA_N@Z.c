/*
 * XREFs of ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18021713C
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801FF5A0 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     ??$iter_swap@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@0@0@Z @ 0x18029603C (--$iter_swap@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$unique_ptr@VCCheckMPOCache@@.c)
 *     ?Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z @ 0x180297BD0 (-Matches@CCheckMPOCache@@QEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I@Z.c)
 */

char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  CCheckMPOCache **v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx

  if ( !*((_BYTE *)this + 1493) )
  {
    ++*((_QWORD *)this + 181);
    *((_BYTE *)this + 1493) = 1;
  }
  v8 = (CCheckMPOCache **)*((_QWORD *)this + 179);
  do
  {
    if ( v8 == *((CCheckMPOCache ***)this + 178) )
      return 0;
    --v8;
  }
  while ( !CCheckMPOCache::Matches(*v8, a2, a3) );
  *((_QWORD *)*v8 + 60) = *((_QWORD *)this + 181);
  *a4 = *((_BYTE *)*v8 + 488);
  v11 = *((_QWORD *)this + 179) - 8LL;
  if ( v8 != (CCheckMPOCache **)v11 )
    std::iter_swap<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::unique_ptr<CCheckMPOCache>>>>>(
      v8,
      v11,
      v9,
      v10);
  return 1;
}
