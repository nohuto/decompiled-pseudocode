/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180084510
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA?AV?$shared_ptr@VGuidedSnapAssistControl@@@2@XZ @ 0x180082D58 (-shared_from_this@-$enable_shared_from_this@VGuidedSnapAssistControl@@@std@@QEAA-AV-$shared_ptr@.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800833D0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180083DD4 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_9b3391374d276f0391e9ed84fc8af55c__&_unsigned_char_const_&_ @ 0x180297030 (wistd--__invoke_void_return_wrapper_void_--__call__lambda_9b3391374d276f0391e9ed84fc8af55c__-_un.c)
 *     ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x18035356C (-lock@-$weak_ptr@UNexusPolicyManager@@@std@@QEBA-AV-$shared_ptr@UNexusPolicyManager@@@2@XZ.c)
 *     _lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_::operator() @ 0x18045E10C (_lambda_731bbbdc69a2ee96bc9f9c7d16182ee0_--operator().c)
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x18049185C (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::operator() @ 0x1805BFE90 (_lambda_84c775889c05b89f12ed6d0ff428b333_--operator().c)
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
