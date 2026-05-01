/*
 * XREFs of _lambda_6891a98f73bf2e0622c40a147f1ebd9e_::operator() @ 0x18036B3D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6891a98f73bf2e0622c40a147f1ebd9e___::Run @ 0x18036E300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6891a98f73bf2e0622c40a147f1ebd9e___--Run.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801FF4F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18020D524 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall lambda_6891a98f73bf2e0622c40a147f1ebd9e_::operator()(__int64 a1)
{
  bool v1; // zf
  int v3; // edx
  float v4; // xmm2_4
  float v5; // xmm1_4
  __m128i v6; // xmm0
  int v7; // ecx
  HRGN RectRgn; // rax
  HRGN v9; // rdi
  float v10; // xmm2_4
  int v11; // ecx
  int v12; // r8d
  HRGN v13; // rax
  HRGN v14; // r8
  const char *v15; // r9
  unsigned int LastError; // ebx
  HWND v17; // rcx
  const char *v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HRGN hrgnSrc2; // [rsp+30h] [rbp+8h] BYREF
  HRGN hrgnDst; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_BYTE *)(a1 + 8) == 0;
  v3 = (int)*(float *)(a1 + 16);
  hrgnDst = 0LL;
  v4 = *(float *)(a1 + 20);
  v5 = (float)v3 + *(float *)(a1 + 24);
  if ( v1 )
  {
    v7 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 28));
    v7 = 0;
    v4 = v4 - _mm_cvtepi32_ps(v6).m128_f32[0];
  }
  RectRgn = CreateRectRgn(v7, v3, (int)v4, (int)v5);
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
    (void **)&hrgnDst,
    RectRgn);
  v9 = hrgnDst;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( *(float *)(a1 + 44) > 0.0 )
    {
      v10 = *(float *)(a1 + 48);
      if ( v10 > 0.0 )
      {
        v1 = *(_BYTE *)(a1 + 8) == 0;
        hrgnSrc2 = 0LL;
        if ( v1 )
        {
          v12 = *(_DWORD *)(a1 + 28);
          v11 = 0;
        }
        else
        {
          v11 = (int)(float)(*(float *)(a1 + 20) - (float)*(int *)(a1 + 28));
          v12 = v11 + *(_DWORD *)(a1 + 28);
        }
        v13 = CreateRectRgn(v11, (int)*(float *)(a1 + 40), v12, (int)(float)((float)(int)*(float *)(a1 + 40) + v10));
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          (void **)&hrgnSrc2,
          v13);
        v14 = hrgnSrc2;
        hrgnSrc2 = 0LL;
        if ( CombineRgn(v9, v9, v14, 2) != 3 )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x369,
                        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                        v15);
          wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
          goto LABEL_16;
        }
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnSrc2);
      }
    }
  }
  v17 = *(HWND *)a1;
  hrgnDst = 0LL;
  if ( SetWindowRgn(v17, v9, 1) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x36C,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                  v18);
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)&hrgnDst);
  return LastError;
}
