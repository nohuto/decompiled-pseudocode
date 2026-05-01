/*
 * XREFs of ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x180021F9C
 * Callers:
 *     ?PresentFramedView@FrameWrapper@@UEAAJXZ @ 0x180021D10 (-PresentFramedView@FrameWrapper@@UEAAJXZ.c)
 *     ?PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ @ 0x180023830 (-PrepareFrameForDestroy@FrameWrapper@@UEAAJXZ.c)
 *     ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1801F1F80 (-SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1803018C0 (-SetSystemVisual@FrameWrapper@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FrameWrapper::ReconcileFramedView(FrameWrapper *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  if ( !v2 )
    goto LABEL_6;
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( v3(v2, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, &v12) < 0 )
    goto LABEL_6;
  v4 = 1LL;
  if ( (*((_BYTE *)this + 80) & 1) == 0 || (*((_BYTE *)this + 80) & 2) != 0 )
    v4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 24LL))(v12, *((_QWORD *)this + 8), v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v5,
      v10);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v6;
  }
  else
  {
LABEL_6:
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return 0LL;
  }
}
