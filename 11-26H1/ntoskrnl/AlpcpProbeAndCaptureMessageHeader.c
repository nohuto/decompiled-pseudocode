/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x1408ECEA0
 * Callers:
 *     NtAlpcOpenSenderThread @ 0x1408EB720 (NtAlpcOpenSenderThread.c)
 *     NtAlpcOpenSenderProcess @ 0x1408ECAD0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 (*__fastcall AlpcpProbeAndCaptureMessageHeader(void *Src, _WORD *a2, int a3))(void)
{
  __int64 (*result)(void); // rax
  __int16 v5; // ax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  if ( a3 >= 0 || (a3 & 0x40000000) != 0 )
    return RtlCopyFromUser(a2, Src, 0x28uLL);
  RtlCopyFromUser(&v7, Src, 0x18uLL);
  v5 = v7;
  v6 = HIDWORD(v8);
  *a2 = v7;
  a2[1] = v5 + 40;
  *((_DWORD *)a2 + 1) = DWORD1(v7);
  *((_QWORD *)a2 + 1) = DWORD2(v7);
  *((_QWORD *)a2 + 2) = HIDWORD(v7);
  result = (__int64 (*)(void))(unsigned int)v8;
  *((_QWORD *)a2 + 4) = v6;
  *((_DWORD *)a2 + 6) = (_DWORD)result;
  *((_DWORD *)a2 + 8) = v6;
  return result;
}
