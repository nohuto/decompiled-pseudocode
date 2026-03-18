/*
 * XREFs of ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801931A0
 * Callers:
 *     ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801930EC (-SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z @ 0x18019317C (-ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCE.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18021ADFC (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ @ 0x1800179D0 (-IsRectangularShadow@ShadowIntermediates@CDropShadow@@QEBA_NXZ.c)
 *     ?OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180193144 (-OnChanged@ShadowIntermediates@CDropShadow@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CDropShadow::NotifyOnChanged(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *i; // rbx

  v4 = a2;
  if ( a3 && (_QWORD *)a3 != a1 )
  {
    v7 = a1 + 16;
    if ( a1[22]
      && a3 == a1[22]
      && !CDropShadow::ShadowIntermediates::IsRectangularShadow((CDropShadow::ShadowIntermediates *)(a1 + 16)) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v7 + 7);
    }
    v8 = (_QWORD *)a1[26];
    for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      CDropShadow::ShadowIntermediates::OnChanged(i + 3, a2, a3);
    if ( v4 == 1 )
      v4 = 6;
  }
  return CResource::NotifyOnChanged((__int64)a1, v4, (__int64)a1);
}
