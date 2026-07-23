/*
 * XREFs of HsaInitializeInterruptRemapping @ 0x140BF6A38
 * Callers:
 *     HsaInitializeIommu @ 0x140BF6BE0 (HsaInitializeIommu.c)
 * Callees:
 *     RtlInitializeBitMap @ 0x14048B080 (RtlInitializeBitMap.c)
 *     ExtEnvClearBits @ 0x14053553C (ExtEnvClearBits.c)
 *     HalpGetIrtEntryCount @ 0x1405922EC (HalpGetIrtEntryCount.c)
 *     ExtEnvAllocateMemory @ 0x14059A320 (ExtEnvAllocateMemory.c)
 *     ExtEnvInitializeSpinLock @ 0x14059A684 (ExtEnvInitializeSpinLock.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HsaInitializeInterruptRemapping(__int64 a1)
{
  int v1; // eax
  int v2; // ebx
  __int64 v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  _RTL_BITMAP *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 176);
  v2 = 0;
  v12 = 0LL;
  BitMapBuffer = 0LL;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( !*((_QWORD *)&xmmword_140F87720 + 1) )
      {
        HIDWORD(xmmword_140F87730) = *(_DWORD *)(a1 + 180);
        LODWORD(xmmword_140F87730) = (16 * HIDWORD(xmmword_140F87730) + 4095) & 0xFFFFF000;
        v4 = guard_dispatch_icall_no_overrides(-1LL, (unsigned int)xmmword_140F87730 >> 12);
        *(_QWORD *)&xmmword_140F87720 = v4;
        if ( v4
          && (v5 = HalMapIoSpace((LARGE_INTEGER)v4, (unsigned int)xmmword_140F87730, MmCached),
              (*((_QWORD *)&xmmword_140F87720 + 1) = v5) != 0LL) )
        {
          memset_0(v5, 0, (unsigned int)xmmword_140F87730);
          v2 = ExtEnvAllocateMemory(v6, 4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5), &BitMapBuffer);
          if ( v2 >= 0 )
          {
            RtlInitializeBitMap((PRTL_BITMAP)(&xmmword_140F87730 + 1), BitMapBuffer, *(_DWORD *)(a1 + 180));
            ExtEnvClearBits(v7, 0, *(_DWORD *)(a1 + 180));
            dword_140F87748 = (unsigned int)HalpGetIrtEntryCount() >> 9;
            v2 = ExtEnvAllocateMemory(v8, 0x2000u, &v12);
            if ( v2 >= 0 )
            {
              ExtEnvInitializeSpinLock(&EmpParseLock.Padding[1]);
              v9 = v12;
              dword_140F8774C = 128;
              qword_140F87760[0] = v12;
              *(_OWORD *)(v12 + 8) = xmmword_140F87720;
              *(_OWORD *)(v9 + 24) = *(_OWORD *)&xmmword_140F87730;
              *(_QWORD *)(v9 + 40) = qword_140F87740;
              *(_DWORD *)(v9 + 48) = 1;
              *(_DWORD *)(v9 + 52) = -1;
              *(_DWORD *)(v9 + 56) = 0;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v2;
}
