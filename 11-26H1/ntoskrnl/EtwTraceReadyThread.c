/*
 * XREFs of EtwTraceReadyThread @ 0x140218A90
 * Callers:
 *     KiFastReadyThread @ 0x140230B78 (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x14037D574 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140533BB8 (EtwpCoverageSamplerReadyThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_QWORD *__fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  int v5; // esi
  __int64 v6; // rax
  char v7; // cl
  void (__fastcall __noreturn *v8)(); // rax
  _QWORD *result; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rcx
  int v17; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+34h] [rbp-34h]
  char v19; // [rsp+35h] [rbp-33h]
  char v20; // [rsp+36h] [rbp-32h]
  char v21; // [rsp+37h] [rbp-31h]
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF

  v17 = *(_DWORD *)(a1 + 1296);
  v5 = 6298114;
  v18 = a2;
  v19 = a3;
  v21 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v20 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v7 = (8 * (a4 & 1)) | ((*(_DWORD *)(v6 + 264) & 7) != 0 ? 4 : 0) | v20 & 0xF3;
  v8 = *(void (__fastcall __noreturn **)())(a1 + 1376);
  v20 = v7;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
  {
    v5 = 6294018;
  }
  else if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4848) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v22[1] = 8LL;
  v22[0] = &v17;
  result = *(_QWORD **)(a1 + 544);
  v10 = result[190];
  v11 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = (_QWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v13 + 4556);
    if ( result && (*((_DWORD *)result + 1) & 0x200) != 0 )
      result = (_QWORD *)EtwpLogKernelEvent(
                           (unsigned int)v22,
                           EtwpHostSiloState,
                           *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4504),
                           1,
                           1330,
                           v5);
  }
  if ( v10 )
  {
    result = PsGetServerSiloGlobals(v10);
    v14 = result[104];
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v16, v15); !i; i = !_BitScanForward((unsigned int *)&v16, v15) )
      {
        v15 &= v15 - 1;
        result = (_QWORD *)(v14 + 32LL * (unsigned int)v16 + 4556);
        if ( result )
        {
          if ( (*((_DWORD *)result + 1) & 0x200) != 0 )
            result = (_QWORD *)EtwpLogKernelEvent(
                                 (unsigned int)v22,
                                 v14,
                                 *(unsigned __int8 *)(v14 + 2 * v16 + 4504),
                                 1,
                                 1330,
                                 v5);
        }
      }
    }
  }
  return result;
}
