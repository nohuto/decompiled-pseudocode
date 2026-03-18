/*
 * XREFs of ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010B81C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x14010BCAC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this)
{
  char *v1; // rdi
  PVOID *v2; // rbx
  _QWORD *v3; // rax
  PVOID v4; // rcx

  v1 = (char *)this + 39944;
  while ( 1 )
  {
    v2 = *(PVOID **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = *v2, *((PVOID **)*v2 + 1) != v2) )
      __fastfail(3u);
    *(_QWORD *)v1 = v3;
    v3[1] = v1;
    if ( v2 == (PVOID *)v1 )
      break;
    VidMmiUnlockAllocation(v2[2]);
    v4 = v2[3];
    v2[2] = 0LL;
    ObfDereferenceObject(v4);
    operator delete(v2);
  }
}
