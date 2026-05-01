/*
 * XREFs of ?SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x18037DA40
 * Callers:
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C898 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C924 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetViewPresentationMode(__int64 a1, int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, _OWORD *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  _OWORD v10[4]; // [rsp+20h] [rbp-39h] BYREF
  _OWORD v11[2]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v12; // [rsp+80h] [rbp+27h]
  __int128 v13; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  memset_0(v11, 0, 0x40uLL);
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 128) + 440LL))(*(_QWORD *)(a1 + 128), v11);
  v4 = *(__int64 **)(a1 + 128);
  LODWORD(v12) = a2;
  v10[0] = v11[0];
  v5 = *v4;
  v10[1] = v11[1];
  v10[2] = v12;
  v6 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v5 + 448);
  v10[3] = v13;
  v7 = v6(v4, v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B2,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
