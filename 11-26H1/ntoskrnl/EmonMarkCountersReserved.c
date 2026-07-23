/*
 * XREFs of EmonMarkCountersReserved @ 0x140598200
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpAllocateHalCounters @ 0x14057CB90 (HalpAllocateHalCounters.c)
 */

__int64 __fastcall EmonMarkCountersReserved(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // bp
  int HalCounters; // ebx
  __int64 v8; // r9
  bool i; // zf
  __int64 v10; // r8
  int v11; // ecx
  char v12; // r10
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // ecx
  char v21; // r10
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  HalCounters = HalpAllocateHalCounters();
  if ( HalCounters >= 0 )
  {
    v8 = (unsigned int)v1;
    while ( 1 )
    {
      i = !_BitScanForward64((unsigned __int64 *)&v10, v4);
      if ( i )
        break;
      v11 = 0;
      v12 = v10;
      if ( (unsigned int)v10 >= 0x20 )
      {
        v10 = (unsigned int)(v10 - 32);
        v11 = 1;
      }
      v8 = (unsigned int)v1;
      v13 = *(_QWORD *)(KiProcessorBlock[v1] + 88);
      if ( v11 )
      {
        v14 = v11 - 1;
        if ( v14 )
        {
          v15 = v14 - 99;
          if ( v15 )
          {
            if ( v15 == 1 )
              v13 += 72LL;
            else
              v13 = 0LL;
          }
          else
          {
            v13 += 48LL;
          }
        }
        else
        {
          v13 += 24LL;
        }
      }
      v16 = *(_QWORD *)(v13 + 16);
      v17 = 6 * v10;
      if ( *(_DWORD *)(v16 + 8 * v17 + 24) != 3 )
      {
        v18 = *(_QWORD *)(a1 + 16) ^ v4;
        HalCounters = -1073741670;
        if ( v18 )
        {
          for ( i = !_BitScanForward64((unsigned __int64 *)&v19, v18);
                !i;
                *(_DWORD *)(*(_QWORD *)(v22 + 16) + 8 * v25 + 24) = 3 )
          {
            v20 = 0;
            v21 = v19;
            if ( (unsigned int)v19 >= 0x20 )
            {
              v19 = (unsigned int)(v19 - 32);
              v20 = 1;
            }
            v22 = *(_QWORD *)(KiProcessorBlock[v1] + 88);
            if ( v20 )
            {
              v23 = v20 - 1;
              if ( v23 )
              {
                v24 = v23 - 99;
                if ( v24 )
                {
                  if ( v24 == 1 )
                    v22 += 72LL;
                  else
                    v22 = 0LL;
                }
                else
                {
                  v22 += 48LL;
                }
              }
              else
              {
                v22 += 24LL;
              }
            }
            v25 = 6 * v19;
            v18 ^= 1LL << v21;
            i = !_BitScanForward64((unsigned __int64 *)&v19, v18);
          }
        }
LABEL_45:
        _InterlockedAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[3], 0xFFFFFFFE);
        goto LABEL_46;
      }
      *(_DWORD *)(v16 + 8 * v17 + 24) = 2;
      v4 ^= 1LL << v12;
      *(_BYTE *)(*(_QWORD *)(v13 + 16) + 8 * v17 + 40) = 0;
      *(_DWORD *)(*(_QWORD *)(v13 + 16) + 8 * v17 + 32) = *(_DWORD *)a1;
    }
    v26 = 10 * v8;
    *(_QWORD *)(v5 + 8 * v26 + 32) = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(v5 + 8 * v26 + 40) = 1;
    if ( v2 )
    {
      v27 = 160 * v8;
      if ( IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] )
      {
        v28 = *(_QWORD *)(v27 + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 32);
        v29 = *(_QWORD *)(v27 + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 48);
      }
      else
      {
        v28 = *(unsigned int *)(v27 + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 16);
        v29 = *(unsigned int *)(v27 + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 24);
      }
      v30 = (unsigned int)(LODWORD(IommuInterfaceStateChangeCallbackPushLock.GlobalForegroundListEntry.Flink)
                         * *(_DWORD *)(v2 + 12))
          + v28;
      if ( v30 < v29 )
      {
        if ( !IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[25] )
          v30 = (unsigned int)v30;
        *(_QWORD *)(v27 + *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[8] + 56) = v30;
        HalCounters = 0;
      }
      else
      {
        HalCounters = -1073741811;
      }
      if ( HalCounters < 0 )
        goto LABEL_45;
    }
  }
  else
  {
    HalCounters = -1073741670;
  }
LABEL_46:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (unsigned int)HalCounters;
}
