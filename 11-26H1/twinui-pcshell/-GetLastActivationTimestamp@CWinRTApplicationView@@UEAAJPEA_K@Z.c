/*
 * XREFs of ?GetLastActivationTimestamp@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x18030C790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z @ 0x1801F6B6C (-UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWinRTApplicationView::GetLastActivationTimestamp(CWinRTApplicationView *this, unsigned __int64 *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[4]; // [rsp+20h] [rbp-48h] BYREF
  struct _FILETIME v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 26);
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)&v8[0].dwLowDateTime = 0LL;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 80LL))(v2, v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a2 = UnbiasedInterruptTimeFromFileTime(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
