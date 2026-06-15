/*
 * XREFs of ?DeactivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEBU_GUID@@@Z @ 0x1800EB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004EB10 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800865F4 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800AFCDC (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _lambda_23a707cc6c78406526adb642245a01c2_::operator() @ 0x1800EA614 (_lambda_23a707cc6c78406526adb642245a01c2_--operator().c)
 */

__int64 __fastcall BluetoothBroadcastProvider::DeactivateMulticastSession(
        BluetoothBroadcastProvider *this,
        const struct _GUID *a2)
{
  unsigned int v3; // ebx
  struct AudioSrvTelemetryProvider *v4; // rax
  __int64 v5; // r10
  const struct _GUID *v7; // [rsp+30h] [rbp-49h] BYREF
  double TimeSec; // [rsp+38h] [rbp-41h] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  LARGE_INTEGER v10; // [rsp+48h] [rbp-31h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v13[32]; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  const struct _GUID *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  const struct _GUID **v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  double *p_TimeSec; // [rsp+B0h] [rbp+37h]
  __int64 v21; // [rsp+B8h] [rbp+3Fh]

  PerformanceCount.QuadPart = 0LL;
  v10.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v10);
  v7 = a2;
  v3 = lambda_23a707cc6c78406526adb642245a01c2_::operator()((__int64 *)&v7);
  QueryPerformanceCounter(&PerformanceCount);
  v4 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 0x400000000000LL) )
  {
    TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v10);
    p_TimeSec = &TimeSec;
    LODWORD(v7) = v3;
    v18 = &v7;
    v9 = 50333696LL;
    v14 = &v9;
    v21 = 8LL;
    v19 = 4LL;
    v16 = a2;
    v17 = 16LL;
    v15 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v5, byte_1801A5916, 0LL, 0LL, 6, (__int64)v13);
  }
  return v3;
}
