/*
 * XREFs of ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1800BF00C
 * Callers:
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18022A380 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x180469CEC (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1800BA754 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x1800BA814 (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z @ 0x1800BED40 (-HostedPosSet_@TouchKeyboardExperienceTelemetryLogger@@QEBAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::SetHostedPos(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrame *a3,
        const struct tagRECT *a4)
{
  struct IApplicationFrame *v5; // r9
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall *v15)(struct IApplicationFrameWrapper *, struct IApplicationFrame **); // rbx
  int v16; // eax
  __int64 v17; // rcx
  float v18[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationFrame *v20; // [rsp+60h] [rbp+20h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+74h] [rbp+34h]

  v5 = a3;
  v20 = 0LL;
  if ( !a3 )
  {
    v15 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrame **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    v16 = v15(a2, &v20);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4CA,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      v17 = (__int64)v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      return v11;
    }
    v5 = v20;
  }
  v7 = a4->left - a4->right;
  if ( v7 < 0 )
    v7 = a4->right - a4->left;
  v21 = v7;
  v8 = a4->top - a4->bottom;
  if ( v8 < 0 )
    v8 = a4->bottom - a4->top;
  v22 = v8;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, int *, _QWORD))(*(_QWORD *)v5 + 184LL))(v5, &v21, 0LL);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4CF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, const struct tagRECT *))(*(_QWORD *)a2 + 64LL))(
          a2,
          a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D0,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    return v11;
  }
  v18[0] = (float)a4->left;
  v18[1] = (float)a4->top;
  v18[2] = (float)(a4->right - a4->left);
  v18[3] = (float)(a4->bottom - a4->top);
  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::HostedPosSet_(v12, v18);
  }
  v13 = (__int64)v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
