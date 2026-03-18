/*
 * XREFs of ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180193144
 * Callers:
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801931A0 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x1800179D0 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::OnChanged(__int64 *a1, __int64 a2, __int64 a3)
{
  if ( a1[6]
    && a3 == a1[6]
    && !CDropShadow::ShadowIntermediates::IsRectangularShadow((CDropShadow::ShadowIntermediates *)a1) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(a1 + 7);
  }
}
