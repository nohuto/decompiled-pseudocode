/*
 * XREFs of ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1400AC26C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1400ABC7C (--1VIDMM_PARTITION@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiClosePerfCounters(struct VIDMM_PARTITION_ADAPTER_INFO *a1)
{
  __int64 v1; // rax
  unsigned int i; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  struct _PCW_INSTANCE *v6; // rcx

  v1 = *((_QWORD *)a1 + 1);
  for ( i = 0; i < *(_DWORD *)(v1 + 6952); ++i )
  {
    v4 = 344LL * i;
    v5 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v1 + 24) + 240LL) + *(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24);
    v6 = *(struct _PCW_INSTANCE **)(v5 + v4 + 336);
    if ( v6 )
    {
      if ( *(_DWORD *)(v5 + 344LL * i) <= 1u )
      {
        PcwCloseInstance(v6);
        *(_QWORD *)(v5 + v4 + 336) = 0LL;
      }
    }
    v1 = *((_QWORD *)a1 + 1);
  }
}
