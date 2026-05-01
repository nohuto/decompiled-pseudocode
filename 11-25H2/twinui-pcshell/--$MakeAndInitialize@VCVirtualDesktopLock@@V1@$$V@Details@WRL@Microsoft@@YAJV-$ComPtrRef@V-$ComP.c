/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopLock@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCVirtualDesktopLock@@@WRL@Microsoft@@@012@@Z @ 0x18009E300
 * Callers:
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18009FE84 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UITaskbarLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800A0C20.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopLock@@QEAA@XZ @ 0x180528A20 (--0CVirtualDesktopLock@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopLock,CVirtualDesktopLock,>(_QWORD *a1)
{
  unsigned int v2; // edi
  CVirtualDesktopLock *v3; // rax
  CVirtualDesktopLock *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // r8

  v2 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release)();
  }
  *a1 = 0LL;
  v3 = (CVirtualDesktopLock *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CVirtualDesktopLock::CVirtualDesktopLock(v3);
    if ( v4 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopLock *)((char *)v4 + 12), v5);
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v6);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
