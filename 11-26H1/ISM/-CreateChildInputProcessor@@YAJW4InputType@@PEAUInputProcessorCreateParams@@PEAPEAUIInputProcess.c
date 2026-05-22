/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18001FC78
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F8BC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180080FFC (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C4DC0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801CA620 (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?IsSingleBit@@YAHJ@Z @ 0x18001FE10 (-IsSingleBit@@YAHJ@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180021560 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateChildInputProcessor(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int i; // r9d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  int InputProcessorWorker; // eax
  unsigned int v12; // ebx
  GUID Buf2; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Buf2 = GUID_NULL;
  if ( !(unsigned int)IsSingleBit(a1) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      Buf2.Data1);
  if ( !a2 || !*a2 || !a2[1] || (v6 = a2[2]) == 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      Buf2.Data1);
  if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v6 + 24LL))(v6, &Buf2) < 0
    || !memcmp_0(&GUID_NULL, &Buf2, 0x10uLL) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL,
      Buf2.Data1);
  }
  for ( i = 0; ; ++i )
  {
    if ( (unsigned __int64)i >= 0x13 )
      goto LABEL_21;
    v8 = 48LL * i;
    v9 = *(_QWORD *)&Buf2.Data1 - *(_QWORD *)((char *)&unk_180251360 + v8);
    if ( *(_QWORD *)&Buf2.Data1 == *(_QWORD *)((char *)&unk_180251360 + v8) )
      v9 = *(_QWORD *)Buf2.Data4 - *(_QWORD *)((char *)&unk_180251360 + v8 + 8);
    if ( !v9 )
      break;
  }
  if ( i < 0 )
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL,
      Buf2.Data1);
  v10 = (unsigned int)(i + 1);
  if ( *(_DWORD *)((char *)&unk_180251360 + v8 + 16) != a1 )
    v10 = 0LL;
  InputProcessorWorker = CreateInputProcessorWorker(a2, a3, a1, v10);
  v12 = InputProcessorWorker;
  if ( InputProcessorWorker >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
    (const char *)(unsigned int)InputProcessorWorker,
    Buf2.Data1);
  return v12;
}
