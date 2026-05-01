/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E9500
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x18007B0A0 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800E9000 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___::_CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___ @ 0x1800E94AC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___--_CTask.c)
 *     ??1?$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E94DC (--1-$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180310E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180310E20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E20.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180310E30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E30.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x180310E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E40.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WJI@EAAKXZ @ 0x180310E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E60.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@WKA@EAAKXZ @ 0x180310E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180310E80.c)
 * Callees:
 *     ?DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180069E3C (-DecrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v4; // ebx
  signed __int64 v5; // rtt

  v1 = *(_QWORD *)(a1 + 200);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646LL;
    v4 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v1 - 1, v1);
    if ( v5 == v1 )
      goto LABEL_6;
  }
  v4 = Microsoft::WRL::Details::StrongReference::DecrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
LABEL_6:
  if ( !v4 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 528LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v4;
}
