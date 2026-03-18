/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x14002B390
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x14002A3F4 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x14002B310 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x14002B738 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x140054F34 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14002B678 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r15
  __int64 v5; // r14
  bool v6; // si
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD **v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _BOOL8 result; // rax
  __int64 v17; // rcx
  signed __int32 v18; // eax
  volatile signed __int32 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 504) )
    v3 = *(_QWORD *)(v1 + 504);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 444), 0, 0) == 1;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 472);
  if ( is_mul_ok(v8, 0x989680uLL) )
    v9 = v8 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v9 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
       + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  *(_QWORD *)(v1 + 456) += v9;
  *(_QWORD *)(v1 + 464) += v9;
  v4[347] += v9;
  v10 = *(_QWORD *)(v1 + 96);
  if ( (*(_DWORD *)(v10 + 12) & 0x40) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v11 = *(unsigned __int16 *)(v10 + 4);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 48LL) + 32LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v10 + 24) + 4LL));
    v13 = *(_QWORD ***)(v12 + 8);
    if ( (unsigned int)v11 < *(_DWORD *)(v12 + 80) )
      v13 += v11;
    v14 = *v13;
  }
  *v14 += v9;
  _InterlockedAdd64(*(volatile signed __int64 **)(v5 + 6856), v9);
  *(LARGE_INTEGER *)(v1 + 472) = v7;
  if ( v6 )
  {
    *(_QWORD *)(v3 + 448) -= v9;
    if ( *(__int64 *)(v3 + 448) <= 0 )
    {
      v17 = *(_QWORD *)(v1 + 504);
      v18 = 1;
      if ( v17 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 444), 2, 1);
        v18 = 0;
        v19 = (volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 444LL);
      }
      else
      {
        v19 = (volatile signed __int32 *)(v1 + 444);
      }
      _InterlockedCompareExchange(v19, 2, v18);
      v6 = 0;
    }
  }
  else if ( (*(_DWORD *)(v5 + 2824) & 8) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 412)] )
  {
    *(_QWORD *)(v3 + 448) -= v9;
  }
  if ( (byte_14008A201 & 2) != 0 )
  {
    v20 = *(_QWORD *)(v1 + 56);
    if ( !v20 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v20) = v1;
    McTemplateK0piixqq_EtwWriteTransfer(
      *(_DWORD *)(v1 + 444),
      v4[267],
      *(_QWORD *)(v1 + 448),
      v20,
      *(_QWORD *)(v1 + 456),
      *(_QWORD *)(v1 + 448),
      v4[267],
      *(_DWORD *)(v1 + 444),
      2);
  }
  v15 = *(_QWORD *)(v1 + 504);
  if ( v15 && (byte_14008A201 & 2) != 0 )
  {
    v21 = *(_QWORD *)(v15 + 56);
    if ( !v21 || (*(_DWORD *)(v15 + 112) & 0x40) != 0 )
      v21 = *(_QWORD *)(v1 + 504);
    McTemplateK0piixqq_EtwWriteTransfer(
      v15,
      *(_DWORD *)(v15 + 444),
      v4[267],
      v21,
      *(_QWORD *)(v15 + 456),
      *(_QWORD *)(v15 + 448),
      v4[267],
      *(_DWORD *)(v15 + 444),
      2);
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 448);
  a1[2] = *(_QWORD *)(v1 + 456);
  return result;
}
