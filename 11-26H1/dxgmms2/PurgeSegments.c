/*
 * XREFs of PurgeSegments @ 0x1400FEE38
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXUVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400FEE20 (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXUVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTIC.c)
 * Callees:
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140037C80 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400FF140 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1400FF47C (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400FF530 (-PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z.c)
 *     ?ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x140123BEC (-ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z.c)
 */

__int64 __fastcall PurgeSegments(struct VIDMM_PHYSICAL_ADAPTER *a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int16 v5; // di
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r10
  char v11; // bp
  _QWORD *i; // r12
  __int64 v13; // r14
  int v14; // edx
  char v15; // r15
  int v16; // ecx
  int v17; // edx
  VIDMM_MEMORY_SEGMENT *v19; // rcx
  __int16 v20; // ax
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int16 v22; // [rsp+70h] [rbp+8h]

  v4 = *((_QWORD *)a1 + 7);
  v5 = 0;
  v8 = *((_DWORD *)a1 + 34);
  v9 = 0LL;
  v22 = 0;
  v10 = a4;
  v11 = 1;
  for ( i = a3; v22 < v8; ++v22 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * (unsigned __int16)v9);
    v14 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 2508LL) & 0x20000;
    if ( *(_DWORD *)(v13 + 108) == 1 && *(_DWORD *)(v4 + 40280) != -1 )
    {
      if ( (a2 & 0x40) != 0 && *(_QWORD *)(v13 + 296) > (unsigned __int64)qword_14008A5F8 || v14 )
      {
        if ( *(_DWORD *)(v4 + 40280) == -1 )
          goto LABEL_3;
      }
      else
      {
        v11 = 0;
      }
      if ( *(_QWORD *)(v13 + 296) <= (unsigned __int64)qword_14008A5F8 && !v14 )
      {
        v15 = 0;
LABEL_11:
        v16 = *(_DWORD *)(v13 + 64);
        if ( (v16 & 0x200000) == 0
          && *(_DWORD *)(v4 + 40280) != -1
          && (a2 & 0x80u) == 0
          && *(_QWORD *)(v13 + 296) > (unsigned __int64)qword_14008A5F8
          && !v14
          && (v16 & 0x80u) != 0
          && (a2 & 0x20) != 0 )
        {
          VIDMM_GLOBAL::ScheduleEvictionTimer((VIDMM_GLOBAL *)v4, a1);
          v10 = a4;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    v15 = 1;
    if ( *(_DWORD *)(v13 + 108) == 1 )
      goto LABEL_11;
LABEL_12:
    a3 = (_QWORD *)*(unsigned int *)(v13 + 64);
    if ( (char)a3 < 0 && (a2 & 2) != 0 && v11 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 1;
      if ( (*(_DWORD *)(v13 + 64) & 0x100) == 0 || (a2 & 4) == 0 )
      {
        v17 = *(_DWORD *)(v13 + 108);
        if ( v17 != 1 || (a2 & 0x10) == 0 )
        {
          if ( (char)a3 < 0 && (a2 & 0x20) != 0 && v15 && (a2 & 0x80u) == 0 )
          {
            if ( v17 == 1 )
            {
              v21[0] = 0LL;
              VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v13, a2, v21);
              *i += v21[0];
            }
          }
          else if ( v17 == 1 || (a2 & 0x80u) == 0 )
          {
            v21[0] = 0LL;
            VIDMM_SEGMENT::PurgeContent(v13, a2, v10, v21);
            if ( *(_DWORD *)(v13 + 108) == 1 )
              *i += v21[0];
            else
              i[1] += v21[0];
            if ( (a2 & 8) == 0 )
            {
              v20 = *(_WORD *)(v13 + 70);
              if ( v20 == *((_WORD *)a1 + 94) || v20 == *((_WORD *)a1 + 92) )
                *((_BYTE *)a1 + 557) |= 0x10u;
              if ( v20 == *((_WORD *)a1 + 95) || v20 == *((_WORD *)a1 + 93) )
                *((_BYTE *)a1 + 557) |= 0x20u;
            }
            if ( *(_DWORD *)(v13 + 400) != -1 )
              VIDMM_GLOBAL::NotifyMemorySegmentHasData((VIDMM_GLOBAL *)v4);
          }
        }
      }
    }
    v9 = v22;
    v8 = *((_DWORD *)a1 + 34);
    LOWORD(v9) = v22 + 1;
    v10 = a4;
  }
  if ( (a2 & 0x20) != 0 && v8 )
  {
    do
    {
      v19 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)a1 + 219) + 8LL * v5);
      if ( *((_DWORD *)v19 + 27) == 1 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v19);
      ++v5;
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 34) );
  }
  LOBYTE(a3) = 1;
  LOBYTE(v9) = 1;
  return (*(__int64 (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *, __int64, _QWORD *))(*(_QWORD *)a1 + 208LL))(
           a1,
           v9,
           a3);
}
