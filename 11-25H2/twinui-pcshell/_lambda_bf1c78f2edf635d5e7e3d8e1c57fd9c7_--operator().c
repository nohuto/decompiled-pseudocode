/*
 * XREFs of _lambda_bf1c78f2edf635d5e7e3d8e1c57fd9c7_::operator() @ 0x18035D5AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bf1c78f2edf635d5e7e3d8e1c57fd9c7___::Run @ 0x1803608A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bf1c78f2edf635d5e7e3d8e1c57fd9c7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bf1c78f2edf635d5e7e3d8e1c57fd9c7_::operator()(int *a1)
{
  HRESULT v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+4Ch] [rbp+14h]

  v7 = *a1;
  v8 = a1[1];
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v1 = CoCreateInstance(
         &GUID_31143611_ac65_4568_ae76_8a9dad50ea88,
         0LL,
         0x17u,
         &GUID_2537d644_8c2f_4449_b8b6_10928822630c,
         &ppv);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 697LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_6;
  }
  v1 = (*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)ppv + 128LL))(ppv, &v7);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = 699LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v2;
}
