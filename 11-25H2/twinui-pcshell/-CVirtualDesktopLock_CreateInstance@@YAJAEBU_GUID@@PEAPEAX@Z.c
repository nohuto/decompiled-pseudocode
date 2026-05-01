/*
 * XREFs of ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18009FE84
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18009E880 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopLock@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCVirtualDesktopLock@@@WRL@Microsoft@@@012@@Z @ 0x18009E300 (--$MakeAndInitialize@VCVirtualDesktopLock@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UITaskbarLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800A0C20.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopLock_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const struct _GUID *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopLock,CVirtualDesktopLock,>(&v11);
  if ( v3 >= 0 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_6f0436fc_29bf_4c71_b476_87fbdcf1e75a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v7 = v11;
      *a2 = v11;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      v6 = v11;
      *a2 = v11;
      v3 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v3 >= 0 )
      goto LABEL_11;
    v4 = 41LL;
  }
  else
  {
    v4 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoplock.cpp",
    (const char *)(unsigned int)v3);
LABEL_11:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v8);
  }
  return (unsigned int)v3;
}
