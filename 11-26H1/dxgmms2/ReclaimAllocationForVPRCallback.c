/*
 * XREFs of ReclaimAllocationForVPRCallback @ 0x1400B6F20
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

char __fastcall ReclaimAllocationForVPRCallback(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi

  if ( a2 )
  {
    v3 = (_QWORD *)a2[8];
    v4 = *a2;
    v5 = v3[2];
    (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD, _QWORD))(*v3 + 24LL))(
      v3,
      a2,
      a2[17],
      a2[2],
      **(_QWORD **)(*a2 + 328LL));
    a2[17] = 0LL;
    *(_DWORD *)(v4 + 72) = 1;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 264LL))(v5, a2);
  }
  return 1;
}
