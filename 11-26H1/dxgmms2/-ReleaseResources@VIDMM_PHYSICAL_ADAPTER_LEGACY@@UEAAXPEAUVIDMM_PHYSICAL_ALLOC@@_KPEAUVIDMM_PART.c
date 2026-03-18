/*
 * XREFs of ?ReleaseResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_KPEAUVIDMM_PARTITION@@@Z @ 0x1400B2800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::ReleaseResources(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_PARTITION *a4)
{
  (*(void (__fastcall **)(_QWORD, struct VIDMM_PHYSICAL_ALLOC *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 8) + 24LL))(
    *((_QWORD *)a2 + 8),
    a2,
    *((_QWORD *)a2 + 17),
    *((_QWORD *)a2 + 2),
    **(_QWORD **)(*(_QWORD *)a2 + 328LL));
}
