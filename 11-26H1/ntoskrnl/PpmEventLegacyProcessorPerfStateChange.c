/*
 * XREFs of PpmEventLegacyProcessorPerfStateChange @ 0x1404A8878
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PpmFireWmiEvent @ 0x14060FA28 (PpmFireWmiEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventLegacyProcessorPerfStateChange(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  bool v8; // cf
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]

  v1 = *(_DWORD **)(a1 + 35272);
  v2 = *(_QWORD *)(a1 + 35264);
  v12 = 0LL;
  v13 = 0LL;
  v4 = v1[16];
  v5 = v1[21];
  if ( (xmmword_140FC0C10 & 0x8000) != 0 )
  {
    v6 = *(_DWORD *)(v2 + 536);
    v7 = v1[20];
    *((_QWORD *)&v10 + 1) = 24LL;
    if ( v7 >= v6 )
      v7 = v6;
    v8 = v7 < *(_DWORD *)(v2 + 464);
    DWORD1(v12) = v5;
    LODWORD(v12) = v8 + 1;
    DWORD2(v12) = v1[38];
    v13 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)&v10 = &v12;
    EtwTraceKernelEvent((int)&v10, 1, 0x80008000, 4659, 5249026);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v11 = *(_DWORD *)(a1 + 36);
    *(_QWORD *)((char *)&v10 + 4) = 0LL;
    LODWORD(v10) = v4;
    HIDWORD(v10) = v5;
    return PpmFireWmiEvent(a1 + 35128, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v10);
  }
  return result;
}
