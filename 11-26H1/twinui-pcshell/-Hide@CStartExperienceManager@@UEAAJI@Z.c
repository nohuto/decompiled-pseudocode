/*
 * XREFs of ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1801A9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800B4B00 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AA4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___ @ 0x180386F7C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___.c)
 *     _lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_ @ 0x180387420 (_lambda_219695f63e651180cfc7ae358f81f100_--_lambda_219695f63e651180cfc7ae358f81f100_.c)
 *     _lambda_219695f63e651180cfc7ae358f81f100_::__lambda_219695f63e651180cfc7ae358f81f100_ @ 0x180387550 (_lambda_219695f63e651180cfc7ae358f81f100_--__lambda_219695f63e651180cfc7ae358f81f100_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStartExperienceManager::Hide(CStartExperienceManager *this, struct CSingleViewShellExperience *a2)
{
  char v2; // si
  int v3; // r14d
  CStartExperienceManager *v5; // rcx
  int v6; // eax
  char v7; // di
  int v8; // eax
  volatile int *v9; // rdx
  int v10; // edi
  __int64 v11; // rdx
  char *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  bool v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch] BYREF
  int v23; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v24; // [rsp+40h] [rbp-40h] BYREF
  _WORD v25[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = 0;
  v23 = (int)a2;
  v22 = 3;
  v3 = (int)a2;
  if ( (_DWORD)a2 )
  {
    v5 = (CStartExperienceManager *)((char *)this - 40);
    if ( !*((_BYTE *)v5 + 760) )
    {
      v21 = 0;
      v24 = 0LL;
      CStartExperienceManager::GetMonitorInformation(v5, a2, &v24, (enum EDGEUI_TRAYSTUCKPLACE *)&v22, &v21, 0LL);
      v25[2] = v22;
      v25[0] = 1;
      v25[1] = v3;
      v25[3] = 0;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v6 = RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v25, 32LL) | 0x10000000;
      if ( v6 >= 0 )
        v2 = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  v7 = 1;
  if ( v3 == 7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 48LL))(*((_QWORD *)this + 66));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1CB,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    if ( v2 )
    {
      v7 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v10 = CSingleViewShellExperience::Hide((__int64)this + 280, v7);
    if ( v10 < 0 )
    {
      v11 = 466LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    if ( v2 )
    {
      v7 = 3;
      *((_BYTE *)this + 723) = 1;
    }
    v10 = CSingleViewShellExperience::Hide((__int64)this + 280, v7);
    if ( v10 < 0 )
    {
      v11 = 475LL;
      goto LABEL_13;
    }
  }
  v13 = (char *)this - 40;
  if ( v13[763] )
  {
    *(_QWORD *)&v24.left = v13;
    if ( v13 )
    {
      v14 = *((_QWORD *)v13 + 11);
      while ( v14 >= 0 )
      {
        if ( (_DWORD)v14 != 0x7FFFFFFF )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 11, v14 + 1, v14);
          if ( v15 != v14 )
            continue;
        }
        goto LABEL_26;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 16), v9);
    }
LABEL_26:
    v16 = lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_(
            (unsigned int)v25,
            (unsigned int)&v24,
            (_DWORD)v13,
            (unsigned int)&v23,
            (__int64)&v22);
    v20 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_219695f63e651180cfc7ae358f81f100___(
            v18,
            v17,
            v19,
            v16);
    lambda_219695f63e651180cfc7ae358f81f100_::__lambda_219695f63e651180cfc7ae358f81f100_(v25);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v20);
    if ( v13 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(v13);
  }
  return 0LL;
}
