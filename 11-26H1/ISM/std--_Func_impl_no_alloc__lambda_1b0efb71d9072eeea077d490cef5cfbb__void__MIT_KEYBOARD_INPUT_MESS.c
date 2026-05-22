/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x180053120
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180016490 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180016500 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180053210 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x18005356C (-ReceiveKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800535E4 (-DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE **a2)
{
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v3; // rdi
  Win32kInterop *v4; // rbx
  int v5; // eax
  int v6[16]; // [rsp+20h] [rbp-1C8h] BYREF
  _DWORD v7[92]; // [rsp+60h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MITEP_KEYBOARD_INPUT", 0LL);
  v4 = *(Win32kInterop **)(a1 + 8);
  memset_0(v7, 0, sizeof(v7));
  v7[0] = 4;
  v7[6] = 368;
  InputTraceLogging::ISM::ReceiveKeyboardInput(v3);
  if ( Win32kInterop::CreateKeyboardInputInfo(v4, v3, (struct KeyboardInputInfo *)v7) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *))(**((_QWORD **)v4 + 7) + 24LL))(*((_QWORD **)v4 + 7), v7);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2BB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v5,
        v6[0]);
  }
  else
  {
    InputTraceLogging::ISM::DropKeyboardInput(v3);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
