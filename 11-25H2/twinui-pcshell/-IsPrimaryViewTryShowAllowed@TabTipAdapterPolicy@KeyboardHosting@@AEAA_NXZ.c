/*
 * XREFs of ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180474DE0
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180474640 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x18016C288 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DEC4C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( !std::_Atomic_storage<bool,1>::load((__int64)this + 661)
    || std::_Atomic_storage<bool,1>::load((__int64)this + 625)
    || KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal((RTL_SRWLOCK *)this, *((_DWORD *)this + 164)) )
  {
    goto LABEL_10;
  }
  v2 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 157);
  if ( v2 != 2 )
  {
    if ( v2 == 16 )
    {
      LOBYTE(v3) = std::_Atomic_storage<bool,1>::load((__int64)this + 608);
      return v3;
    }
LABEL_10:
    LOBYTE(v3) = 0;
    return v3;
  }
  v4 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)this + 153);
  if ( !v4 )
    goto LABEL_10;
  v3 = v4 - 1;
  if ( v3 != 1 )
    LOBYTE(v3) = std::_Atomic_storage<bool,1>::load((__int64)this + 609);
  return v3;
}
