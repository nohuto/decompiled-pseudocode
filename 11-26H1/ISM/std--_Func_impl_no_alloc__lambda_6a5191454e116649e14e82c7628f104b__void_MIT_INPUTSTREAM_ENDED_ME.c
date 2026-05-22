/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180030010
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180016490 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180016500 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180030080 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct MIT_INPUTSTREAM_ENDED_MESSAGE **a2)
{
  const struct MIT_INPUTSTREAM_ENDED_MESSAGE *v3; // rbx
  _BYTE v4[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MITEP_INPUTSTREAM_ENDED", 0LL);
  Win32kInterop::ProcessInputStreamEndedMessage(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
