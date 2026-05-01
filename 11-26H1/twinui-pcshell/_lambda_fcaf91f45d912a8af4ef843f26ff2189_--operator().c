/*
 * XREFs of _lambda_fcaf91f45d912a8af4ef843f26ff2189_::operator() @ 0x180364398
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcaf91f45d912a8af4ef843f26ff2189___::Run @ 0x180367920 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcaf91f45d912a8af4ef843f26ff2189___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801FF4F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18020D524 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_fcaf91f45d912a8af4ef843f26ff2189_::operator()(__int64 a1)
{
  int v1; // edx
  HRGN RectRgn; // rax
  HRGN v4; // rdx
  HWND v5; // rcx
  const char *v6; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hRgn; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int)*(float *)(a1 + 12);
  hRgn = 0LL;
  RectRgn = CreateRectRgn(0, v1, (int)*(float *)(a1 + 16), (int)(float)((float)v1 + *(float *)(a1 + 20)));
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hRgn,
    RectRgn);
  v4 = hRgn;
  v5 = *(HWND *)a1;
  hRgn = 0LL;
  if ( SetWindowRgn(v5, v4, 1) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x6B7,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                  v6);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hRgn);
  return LastError;
}
