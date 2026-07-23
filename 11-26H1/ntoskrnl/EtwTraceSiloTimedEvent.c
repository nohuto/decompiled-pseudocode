/*
 * XREFs of EtwTraceSiloTimedEvent @ 0x14038E9A8
 * Callers:
 *     PfHardFaultLog @ 0x140390674 (PfHardFaultLog.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceSiloTimedEvent(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  result = EtwpHostSiloState;
  v20 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v21 = 32LL;
  while ( 1 )
  {
    v12 = !_BitScanForward((unsigned int *)&v13, v10);
    if ( v12 )
      break;
    v10 &= v10 - 1;
    result = EtwpHostSiloState + 32LL * (unsigned int)v13 + 4556;
    if ( result )
    {
      if ( (*(_DWORD *)result & 0x2000) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4505) - 1LL;
        v19 = 8LL;
        v18 = a7 + 8 * v11;
        result = EtwpLogKernelEvent(
                   (__int64)&v18,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v13 + 4504),
                   2u,
                   a2,
                   0x501802u);
      }
    }
  }
  if ( a1 )
  {
    result = (__int64)PsGetServerSiloGlobals(a1);
    v14 = *(_QWORD *)(result + 832);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 4520);
      while ( 1 )
      {
        v12 = !_BitScanForward((unsigned int *)&v17, v15);
        if ( v12 )
          break;
        v15 &= v15 - 1;
        result = v14 + 32LL * (unsigned int)v17 + 4556;
        if ( result && (*(_DWORD *)result & 0x2000) != 0 )
        {
          v16 = *(unsigned __int8 *)(v14 + 2 * v17 + 4505) - 1LL;
          v19 = 8LL;
          v18 = a7 + 8 * v16;
          result = EtwpLogKernelEvent(
                     (__int64)&v18,
                     v14,
                     *(unsigned __int8 *)(v14 + 2LL * (unsigned int)v17 + 4504),
                     2u,
                     a2,
                     0x501802u);
        }
      }
    }
  }
  return result;
}
