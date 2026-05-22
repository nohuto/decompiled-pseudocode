/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D32E0
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800DF990 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180044154 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004466C (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004506C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  HANDLE *v8; // rbx
  RIMDeviceCollection *v9; // rdx
  int v10; // eax
  unsigned int v11; // esi
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  _QWORD v16[2]; // [rsp+58h] [rbp-30h] BYREF
  char v17; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = (HANDLE *)*_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
                    v16,
                    (__int64)this);
  v16[1] = v8;
  v17 = 1;
  v10 = RIMDeviceCollection::InitializeSyncObjects(v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
    RIMDeviceCollection::Close(v8);
    return v11;
  }
  *((_DWORD *)this + 8) = a2;
  v13 = RIMRegisterForInputEx(a2, 0LL, 0LL, 0LL);
  if ( v13 < 0 )
  {
    v14 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0xA9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v13);
    RIMDeviceCollection::Close(v8);
    return v14;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = 0LL;
  v15 = RIMDeviceCollection::InitializeRIM((HANDLE *)this, a3, a4);
  v14 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v15);
    RIMDeviceCollection::Close(v8);
    return v14;
  }
  return 0LL;
}
