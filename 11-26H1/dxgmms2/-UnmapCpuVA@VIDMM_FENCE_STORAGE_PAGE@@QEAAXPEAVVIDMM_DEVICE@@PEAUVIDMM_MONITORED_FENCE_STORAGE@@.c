/*
 * XREFs of ?UnmapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1401181F8
 * Callers:
 *     ?UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1401181D4 (-UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  __int64 v4; // rdi
  char *v5; // rbp
  VIDMM_FENCE_STORAGE_PAGE *v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // r14
  __int64 *v8; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  VIDMM_FENCE_STORAGE_PAGE *v13; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v14; // rax
  __int64 v15; // rdi

  if ( a2 )
  {
    v4 = *((_QWORD *)a2 + 1);
  }
  else if ( DXGPROCESS::GetCurrent() && (v15 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
  {
    v4 = *(_QWORD *)(v15 + 8);
  }
  else
  {
    v4 = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 72) + 408LL) & 0x100) == 0 )
  {
    v5 = (char *)this + 80;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 80, 0LL);
    *((_QWORD *)this + 11) = KeGetCurrentThread();
    v6 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 6);
    while ( 1 )
    {
      v7 = v6;
      if ( v6 == (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 48) )
        break;
      v8 = (__int64 *)((char *)v6 - 16);
      v6 = *(VIDMM_FENCE_STORAGE_PAGE **)v6;
      if ( v4 == v8[1] )
      {
        if ( (*((_DWORD *)v8 + 8))-- == 1 )
        {
          v10 = *v8;
          v11 = *(_QWORD *)(v4 + 16);
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v11, v10);
          v13 = *(VIDMM_FENCE_STORAGE_PAGE **)v7;
          if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v7 + 8LL) != v7
            || (v14 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v7 + 1), *v14 != v7) )
          {
            __fastfail(3u);
          }
          *v14 = v13;
          *((_QWORD *)v13 + 1) = v14;
          ExFreePoolWithTag(v8, 0);
        }
        break;
      }
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
