/*
 * XREFs of MiAllocateImageVad @ 0x14099E928
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiWriteVadFlags2 @ 0x140455410 (MiWriteVadFlags2.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     MiInitializeQuotaTracker @ 0x140995B34 (MiInitializeQuotaTracker.c)
 *     MiReferenceFileObjectForMap @ 0x140A73EF0 (MiReferenceFileObjectForMap.c)
 *     PsIsImageNotifyEnabled @ 0x140AB60A0 (PsIsImageNotifyEnabled.c)
 *     MiCreateLargePageEvent @ 0x140B3EC6C (MiCreateLargePageEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateImageVad(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r15
  ULONG_PTR v4; // rsi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbp
  int v11; // ebp
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  int v14; // edx
  __int64 result; // rax
  __int64 v16; // rax
  int LargePageEvent; // r14d
  void *v18; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v1 + 88);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 0x90uLL, 543449430, CurrentProcessorColor | 0x80000000);
  v7 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  MiInitializeQuotaTracker((_BYTE *)(PoolMm + 68), v4, 0);
  *(_QWORD *)(v8 + 16) = -2LL;
  if ( *(_DWORD *)(a1 + 44) == 1 )
    *(_DWORD *)(a1 + 60) |= 4u;
  v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFFE3 | 8;
  *(_DWORD *)(v8 + 48) = v9;
  *(_DWORD *)(v7 + 48) = v9 ^ (v9 ^ (*(_DWORD *)(v1 + 48) << 10)) & 0x1FC00;
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    *(_QWORD *)(v7 + 136) = MiReferenceFileObjectForMap(*(_QWORD *)(a1 + 16));
    if ( *(int *)(v10 + 60) < 0 )
      *(_DWORD *)(a1 + 60) |= 8u;
  }
  v11 = 1;
  *(_QWORD *)(v7 + 40) = 0LL;
  if ( (*(_BYTE *)(v4 + 368) & 1) != 0 )
    *(_DWORD *)(a1 + 60) |= 0x10u;
  if ( (*(_DWORD *)(a1 + 56) & 0x800) == 0 )
  {
    v11 = 7;
    v12 = *(_QWORD *)(*(_QWORD *)v3 + 48LL);
    *(_DWORD *)(v7 + 52) = v12;
    *(_BYTE *)(v7 + 34) = BYTE4(v12);
  }
  v13 = (_QWORD *)(a1 + 88);
  *(_DWORD *)(v7 + 48) = (32 * v11) | *(_DWORD *)(v7 + 48) & 0xFFFFFC1F;
  *(_QWORD *)a1 = v7;
  if ( ((*(_DWORD *)(v1 + 56) & 1) == 0 || *v13 == 0x200000LL)
    && (*(_QWORD *)(a1 + 72) = *(_QWORD *)(*(_QWORD *)v3 + 32LL) + **(unsigned int **)(a1 + 24), *v13 == 0x200000LL)
    && (v16 = *(_QWORD *)(a1 + 64) >> 12,
        *(_DWORD *)(v7 + 52) = v16,
        *(_BYTE *)(v7 + 34) = BYTE4(v16),
        *(_DWORD *)(a1 + 60) |= 1u,
        LargePageEvent = MiCreateLargePageEvent(v4),
        LargePageEvent < 0) )
  {
    v18 = *(void **)(v7 + 136);
    if ( v18 )
      ObfDereferenceObjectWithTag(v18, 0x63536D4Du);
    MiDereferenceControlArea(v3);
    ExFreePoolWithTag((PVOID)v7, 0);
    return (unsigned int)LargePageEvent;
  }
  else
  {
    MiWriteVadFlags2(v7, *(_DWORD *)(a1 + 60), 1);
    if ( v11 == 7 && *(_QWORD *)(v4 + 464) && (*(_DWORD *)(v4 + 1532) & 0x1000) == 0 && (*(_BYTE *)(v4 + 368) & 1) == 0 )
    {
      if ( (unsigned __int8)PsIsImageNotifyEnabled() )
        *(_DWORD *)(a1 + 56) |= v14;
    }
    *(_BYTE *)(a1 + 139) = (unsigned __int8)v4 >> 4;
    result = 0LL;
    *(_WORD *)(a1 + 136) = 32;
  }
  return result;
}
