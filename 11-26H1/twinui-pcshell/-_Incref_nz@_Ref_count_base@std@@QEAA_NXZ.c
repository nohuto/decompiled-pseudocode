/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F0E88 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800F25EC (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?shared_from_this@?$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA?AV?$shared_ptr@VGuidedSnapAssistControl@@@2@XZ @ 0x1802021A8 (-shared_from_this@-$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA-AV-$shared_ptr@.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18028E4DC (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x180359980 (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046AB78 (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator().c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x1804A2544 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::reset @ 0x1805ED134 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--reset.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *((_DWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
