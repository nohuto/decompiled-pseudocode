/*
 * XREFs of DpiFdoInvalidateChildStatus @ 0x140244D74
 * Callers:
 *     DpiPollSingleDisplayChild @ 0x14023A744 (DpiPollSingleDisplayChild.c)
 *     DpiPdoPollingWorkItem @ 0x140256B00 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031C134 (DpiDxgkDdiDisplayDetectControl.c)
 */

__int64 __fastcall DpiFdoInvalidateChildStatus(__int64 a1, int a2, char a3, char a4, char a5, char a6, __int128 *a7)
{
  __int64 v8; // r14
  __int128 v11; // xmm0
  int v12; // eax
  unsigned int v13; // ebx
  _BYTE v15[24]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 3440), 1u);
  *(_QWORD *)&v15[16] = 0LL;
  v15[20] = a4;
  *(_OWORD *)v15 = 0LL;
  v15[21] = a3;
  v11 = *a7;
  *(_DWORD *)v15 = a2 & 0xFFFFFF | (a5 != 0 ? 285212672 : 0x1000000);
  v15[22] = a6;
  *(_OWORD *)&v15[4] = v11;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _BYTE *))DpiDxgkDdiDisplayDetectControl)(
          v8,
          *(_QWORD *)(v8 + 40),
          *(_QWORD *)(v8 + 48),
          v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*(_QWORD *)(v8 + 40) + 1128LL), v12);
    WdLogGlobalForLineNumber = 11743;
  }
  ExReleaseResourceLite((PERESOURCE)(v8 + 3440));
  KeLeaveCriticalRegion();
  return v13;
}
