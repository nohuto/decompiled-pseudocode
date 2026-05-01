/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x180080C3C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18008093C (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVVirtualDesktopAcessibility@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@_EP81@EAAJK@_EPEAVVirtualDesktopAcessibility@@@Z @ 0x180080B78 (--$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktop_ea_180080B78.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x18055B040 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z.c)
 */

__int64 __fastcall VirtualDesktopAcessibility::RuntimeClassInitialize(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 24, a4);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 25, a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a1 + 27, a6);
  v10 = ___Register_UIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVVirtualDesktopAcessibility___SmartCookie__QEAAJPEAUIVirtualDesktopNotificationServicePrivate__P81_EAAJPEAUIVirtualDesktopNotification__PEAK__EP81_EAAJK__EPEAVVirtualDesktopAcessibility___Z(
          (__int64)(a1 + 8),
          a3,
          v9);
  if ( v10 < 0 )
  {
    v11 = 144LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( a2 )
  {
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            a1 + 28,
            &_ImageBase,
            13502LL);
    if ( v10 < 0 )
    {
      v11 = 153LL;
      goto LABEL_3;
    }
  }
  else
  {
    v10 = VirtualDesktopAcessibility::RecalculateDesktopName((VirtualDesktopAcessibility *)a1, 1);
    if ( v10 < 0 )
    {
      v11 = 148LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
