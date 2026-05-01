/*
 * XREFs of ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180204E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18006B3B0 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::OnTitleBarHitTestVisualUpdated(CApplicationManager *this, __int64 a2)
{
  CApplicationManager *v3; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rcx
  struct IApplicationFrameProxy *v7; // rbx
  __int64 (__fastcall *v8)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct IApplicationFrameProxy *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IApplicationFrameProxy *v14; // [rsp+30h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v14);
  if ( FrameByHwnd < 0 )
  {
    v5 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)FrameByHwnd;
  }
  v15 = 0LL;
  v7 = v14;
  v8 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v14 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v9 = v8(v7, &v15);
  FrameByHwnd = v9;
  if ( v9 < 0 )
  {
    v10 = 8344LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    return (unsigned int)FrameByHwnd;
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
  FrameByHwnd = v9;
  if ( v9 < 0 )
  {
    v10 = 8345LL;
    goto LABEL_9;
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
