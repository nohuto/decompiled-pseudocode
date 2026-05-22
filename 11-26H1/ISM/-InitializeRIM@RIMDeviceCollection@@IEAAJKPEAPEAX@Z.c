/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004466C
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180043A70 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D32E0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x180044794 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180044AA0 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  __int64 v6; // rbx
  HANDLE v7; // r10
  const char *v8; // r9
  int Buffer; // edi
  __int64 v11; // rdx
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v14; // [rsp+60h] [rbp+8h] BYREF

  GetCurrentProcess();
  v6 = *(_QWORD *)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(&v14, this);
  if ( DuplicateHandle(v7, this[5], v7, lpTargetHandle, 0, 0, 2u) )
  {
    Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
    if ( Buffer < 0 )
    {
      v11 = 762LL;
    }
    else
    {
      Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      if ( Buffer >= 0 )
        return 0LL;
      v11 = 764LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer,
      dwDesiredAccess);
  }
  else
  {
    Buffer = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x2F4,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
               v8);
  }
  if ( *(_QWORD *)(v6 + 80) )
  {
    RIMUnregisterForInput();
    CloseHandle(*(HANDLE *)(v6 + 80));
    *(_QWORD *)(v6 + 80) = 0LL;
  }
  return (unsigned int)Buffer;
}
