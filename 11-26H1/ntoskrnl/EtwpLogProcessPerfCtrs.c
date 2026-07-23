/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x140B3D598
 * Callers:
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v4[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v5; // [rsp+50h] [rbp-19h]
  __int64 v6; // [rsp+58h] [rbp-11h]
  __int64 v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  __int64 v9; // [rsp+70h] [rbp+7h]

  memset_0(v4, 0, 0x68uLL);
  v4[0] = *(_DWORD *)(a1 + 464);
  v5 = *(_QWORD *)(a1 + 544);
  v6 = *(_QWORD *)(a1 + 1032) << 12;
  v7 = *(_QWORD *)(a1 + 992) << 12;
  v8 = *(_QWORD *)(a1 + 536);
  v9 = *(_QWORD *)(a1 + 528);
  v3[0] = v4;
  v3[1] = 104LL;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v3, 1, 1u, 800, 6297602);
}
