/*
 * XREFs of ?InitDragData@WindowArrangementView@@AEAAJXZ @ 0x1805073C4
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x180507BB4 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x18050F4AC (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659884 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowArrangementView::InitDragData(WindowArrangementView *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  enum DEVICE_SCALE_FACTOR v4; // r8d
  int Instance; // eax
  unsigned int v6; // ebx
  int pvParam; // [rsp+30h] [rbp-40h] BYREF
  ImmersiveApplicationLayout *v9; // [rsp+34h] [rbp-3Ch]
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  struct tagSIZE v11[2]; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL) < 2;
  pvParam = 0;
  if ( SystemParametersInfoW(0x82u, 0, &pvParam, 0) && !pvParam
    || *((_DWORD *)this + 72) == 1
    || (v3 = *((_QWORD *)this + 15),
        v12 = 0LL,
        v10 = 0LL,
        *(_OWORD *)&v11[0].cx = 0LL,
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 24LL))(v3, &v10),
        LODWORD(v9) = DWORD2(v10) - v10,
        HIDWORD(v9) = HIDWORD(v10) - DWORD1(v10),
        ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v9, (struct tagSIZE)(unsigned int)v11[0].cx, v4) == 1) )
  {
    v2 |= 4u;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  Instance = DragData_CreateInstance(
               *((_QWORD *)this + 2),
               *((_QWORD *)this + 15),
               *((_QWORD *)this + 11),
               v2,
               &GUID_37174fc0_9131_4a7e_a52f_f91d0258105f,
               (char *)this + 96);
  v6 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3ED,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
  return v6;
}
