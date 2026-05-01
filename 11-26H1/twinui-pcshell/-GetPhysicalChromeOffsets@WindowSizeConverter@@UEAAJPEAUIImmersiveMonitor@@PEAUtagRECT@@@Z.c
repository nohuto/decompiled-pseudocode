/*
 * XREFs of ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1804E96F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180023E4C (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180297BA4 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowSizeConverter::GetPhysicalChromeOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3)
{
  WindowSizeConverter *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int FrameForMonitor; // eax
  __int64 v9; // rdx
  struct IApplicationFrame *v10; // rbx
  __int64 (__fastcall *v11)(struct IApplicationFrame *, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  struct IApplicationFrame *v17; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  v5 = (WindowSizeConverter *)((char *)this - 88);
  v6 = WindowSizeConverter::EnsureEntry((WindowSizeConverter *)((char *)this - 88), a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor(v5, a2, &v17);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 350LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
      return v7;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, __int64))(*(_QWORD *)v17 + 112LL))(
                        v17,
                        255LL,
                        1LL);
    v7 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v9 = 351LL;
      goto LABEL_7;
    }
    v16 = 0LL;
    v10 = v17;
    v11 = *(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)v17 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v12 = v11(v10, &v16);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, 1LL, 0LL);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, 1LL);
        v7 = v12;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, struct tagRECT *))(*(_QWORD *)v17 + 120LL))(
                  v17,
                  a3);
          v7 = v12;
          if ( v12 >= 0 )
          {
LABEL_17:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
            goto LABEL_18;
          }
          v13 = 359LL;
        }
        else
        {
          v13 = 356LL;
        }
      }
      else
      {
        v13 = 355LL;
      }
    }
    else
    {
      v13 = 354LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x158,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
