/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x1404BAE80
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x1404BB0A4 (IopProcessIrpStackProfiler.c)
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine2 @ 0x1407327B0 (KiCustomAccessRoutine2.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  int v13; // edx
  __int64 result; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD v18[24]; // [rsp+0h] [rbp-1E8h] BYREF
  _QWORD v19[49]; // [rsp+60h] [rbp-188h] BYREF

  v19[43] = v18;
  memset_0(v19, 0, 0x5BuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v18[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v19[10] + 3) = a3;
    *(_QWORD *)((char *)&v19[2] + 3) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v19[7] + 3) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
  }
  memset_0(v19, 0, 0xA0uLL);
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v8 += (unsigned int)(*(_DWORD *)(Prcb + 37840) - *(_DWORD *)(Prcb + 37924));
      v11 = 0LL;
      v12 = (_DWORD *)(Prcb + 37844);
      do
      {
        v19[v11++] += (unsigned int)(*(v12 - 21) - *v12);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  result = *(unsigned int *)&IopSessionNotificationLock.PriorityFloorCounts[16];
  if ( v8 > *(unsigned int *)&IopSessionNotificationLock.PriorityFloorCounts[16] )
  {
    v13 = 0;
    v17 = 0LL;
    result = *(unsigned int *)&IopSessionNotificationLock.PriorityFloorCounts[20];
    do
    {
      if ( v19[v17] > (unsigned __int64)*(unsigned int *)&IopSessionNotificationLock.PriorityFloorCounts[20] )
        break;
      ++v13;
      ++v17;
    }
    while ( v17 < 20 );
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v19);
    *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[20] *= 2;
    if ( *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[20] > 0x1900u )
      *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[20] = 6400;
    *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[16] *= 2;
    if ( *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[16] > 0x7D00u )
      *(_DWORD *)&IopSessionNotificationLock.PriorityFloorCounts[16] = 32000;
    v15 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v15 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v16 = KeGetPrcb(v15);
      if ( v16 )
      {
        *(_OWORD *)(v16 + 37844) = *(_OWORD *)(v16 + 37760);
        *(_OWORD *)(v16 + 37860) = *(_OWORD *)(v16 + 37776);
        *(_OWORD *)(v16 + 37876) = *(_OWORD *)(v16 + 37792);
        *(_OWORD *)(v16 + 37892) = *(_OWORD *)(v16 + 37808);
        *(_OWORD *)(v16 + 37908) = *(_OWORD *)(v16 + 37824);
        *(_DWORD *)(v16 + 37924) = *(_DWORD *)(v16 + 37840);
      }
      ++v15;
    }
  }
  _InterlockedOr((volatile signed __int32 *)&IopSessionNotificationLock.Timer.Header.WaitListHead.Blink, 4u);
  return result;
}
