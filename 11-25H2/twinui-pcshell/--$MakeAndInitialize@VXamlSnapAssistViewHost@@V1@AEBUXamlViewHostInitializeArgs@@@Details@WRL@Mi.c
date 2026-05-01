/*
 * XREFs of ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1802C3C0C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18020BE08 (--$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x18020BE70 (-InternalRelease@-$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x1806818A8 (--0XamlSnapAssistViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806829CC (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlSnapAssistViewHost,XamlSnapAssistViewHost,XamlViewHostInitializeArgs const &>(
        volatile signed __int64 **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  XamlSnapAssistViewHost *v4; // rax
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  int v8; // edi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (XamlSnapAssistViewHost *)operator new(0x2D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = (volatile signed __int64 *)XamlSnapAssistViewHost::XamlSnapAssistViewHost(v4);
  v11 = (void *)v6;
  v12 = 0LL;
  v8 = XamlSnapAssistViewHost::RuntimeClassInitialize((XamlSnapAssistViewHost *)v6, a2);
  if ( v8 >= 0 )
  {
    if ( v6 )
    {
      v9 = *((_QWORD *)v6 + 23);
      while ( v9 >= 0 )
      {
        if ( (_DWORD)v9 != 0x7FFFFFFF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v6 + 23, v9 + 1, v9);
          if ( v10 != v9 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v7);
    }
LABEL_11:
    *a1 = v6;
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v8;
}
