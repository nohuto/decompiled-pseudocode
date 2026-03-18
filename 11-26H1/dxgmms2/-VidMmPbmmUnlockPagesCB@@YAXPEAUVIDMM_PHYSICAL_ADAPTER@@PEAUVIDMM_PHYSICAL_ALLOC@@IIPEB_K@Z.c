/*
 * XREFs of ?VidMmPbmmUnlockPagesCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@IIPEB_K@Z @ 0x1400B0F18
 * Callers:
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VidMmPbmmUnlockPagesCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*(_QWORD *)a2 + 216LL)
                                                                                   + 24LL))(
    *(_QWORD *)(*(_QWORD *)a2 + 216LL),
    *(_QWORD *)(*(_QWORD *)a2 + 224LL),
    (unsigned __int64)a3 << 12,
    (unsigned __int64)a4 << 12,
    v4);
}
