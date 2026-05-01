/*
 * XREFs of ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18038D830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x1801DD140 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18038C334 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnEventQueued(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v7; // rax
  HSTRING v8; // r8
  unsigned int v9; // r8d
  int v10; // ebx
  __int64 v11; // rdx
  HSTRING_HEADER *v13; // rax
  HSTRING v14; // r8
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING v17; // r8
  HSTRING_HEADER v18; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v18,
         (const WCHAR **)&JumpViewExperienceEvents::DismissForLaunch,
         (unsigned int)a3);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v7[1].Reserved.Reserved1, v8) )
  {
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v18,
            (const WCHAR **)&JumpViewExperienceEvents::DismissToCaller,
            v9);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         a3,
                         (HSTRING)v13[1].Reserved.Reserved1,
                         v14) )
    {
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &v18,
              (const WCHAR **)&JumpViewExperienceEvents::Focus,
              v15);
      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                            a3,
                            (HSTRING)v16[1].Reserved.Reserved1,
                            v17) )
      {
        if ( *((_QWORD *)a2 + 3) )
        {
          if ( *((_DWORD *)a2 + 10) == 2 )
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 80LL))(*((_QWORD *)a2 + 10));
            if ( v10 < 0 )
            {
              v11 = 908LL;
              goto LABEL_4;
            }
          }
        }
      }
    }
    else
    {
      v10 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 1);
      if ( v10 < 0 )
      {
        v11 = 904LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v10 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 0);
    if ( v10 < 0 )
    {
      v11 = 899LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
