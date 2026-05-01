/*
 * XREFs of ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805297A4
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x180529FD4 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x180531B4C (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::InitDragData(WindowArrangementView *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  enum DEVICE_SCALE_FACTOR v5; // r8d
  int Instance; // eax
  unsigned int v7; // ebx
  int pvParam; // [rsp+30h] [rbp-40h] BYREF
  ImmersiveApplicationLayout *v10; // [rsp+34h] [rbp-3Ch]
  __int128 v11; // [rsp+40h] [rbp-30h] BYREF
  struct tagSIZE v12[2]; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
  pvParam = 0;
  v3 = v2 < 2;
  if ( SystemParametersInfoW(0x82u, 0, &pvParam, 0) && !pvParam
    || *((_DWORD *)this + 72) == 1
    || (v4 = *((_QWORD *)this + 15),
        v13 = 0LL,
        v11 = 0LL,
        *(_OWORD *)&v12[0].cx = 0LL,
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 24LL))(v4, &v11),
        LODWORD(v10) = DWORD2(v11) - v11,
        HIDWORD(v10) = HIDWORD(v11) - DWORD1(v11),
        ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v10, (struct tagSIZE)(unsigned int)v12[0].cx, v5) == 1) )
  {
    v3 |= 4u;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Instance = DragData_CreateInstance(
               *((_QWORD *)this + 2),
               *((_QWORD *)this + 15),
               *((_QWORD *)this + 11),
               v3,
               &GUID_37174fc0_9131_4a7e_a52f_f91d0258105f,
               (char *)this + 96);
  v7 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3ED,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  return v7;
}
