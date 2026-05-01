/*
 * XREFs of ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804EE570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180113EF4 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  CDesktopPositioner *v8; // rbp
  void (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v11 = 0;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  v7 = 0;
  if ( v11 )
  {
    v8 = (CDesktopPositioner *)(a1 - 144);
    do
    {
      v12 = 0LL;
      v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v12);
      v9(a2, v7, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
      CDesktopPositioner::_PersistPosition(
        v8,
        (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12);
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
      ++v7;
    }
    while ( v7 < v11 );
  }
  return result;
}
