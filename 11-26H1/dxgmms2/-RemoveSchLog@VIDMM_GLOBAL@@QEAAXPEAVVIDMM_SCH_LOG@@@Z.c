/*
 * XREFs of ?RemoveSchLog@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SCH_LOG@@@Z @ 0x140046D98
 * Callers:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14004BE30 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RemoveSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v3; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 LogicalAddress; // rax
  char v10; // [rsp+20h] [rbp-28h]

  v3 = (char *)this + 3768;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (_QWORD *)((char *)a2 + 8);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = *((_QWORD *)a2 + 1);
  if ( *(struct VIDMM_SCH_LOG **)(v6 + 8) != (struct VIDMM_SCH_LOG *)((char *)a2 + 8)
    || (v7 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v7 != v5) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( *((_BYTE *)this + 40100) )
  {
    v8 = *((_QWORD *)a2 + 9);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL);
    v10 = 0;
    SysMmUnmapPagesFromIommu(
      *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
      LogicalAddress,
      v8 + 48,
      (unsigned __int64)*(unsigned int *)(v8 + 40) >> 12,
      v10,
      5,
      a2);
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  *v5 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
}
