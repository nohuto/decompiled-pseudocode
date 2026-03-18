/*
 * XREFs of ?AddReservedRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAPEAXPEAPEAU_MDL@@_K3@Z @ 0x1400BC208
 * Callers:
 *     ?VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x14009B818 (-VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_C.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1.c)
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140124588 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AddReservedRange(
        void **this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE **a2,
        void **a3,
        struct _MDL **a4,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdi
  int v9; // esi
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  struct _MDL *v13; // r14
  __int64 v14; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v22; // rax

  v6 = a6;
  a5 = 0LL;
  v9 = VIDMM_CPU_HOST_APERTURE::AcquireRange((VIDMM_CPU_HOST_APERTURE *)this, 0LL, &a5, 0x1000uLL, a6);
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(1LL, this, v6);
    WdLogGlobalForLineNumber = 991;
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return (unsigned int)v9;
  }
  v12 = (unsigned __int64)a5;
  v13 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
          (VIDMM_CPU_HOST_APERTURE *)this,
          a5,
          0LL,
          (unsigned int)(*((_DWORD *)this[6] + 31) * *((_DWORD *)this[5] + *((unsigned int *)a5 + 8))),
          0LL);
  if ( !v13 )
  {
    WdLogSingleEntry1(
      1LL,
      (unsigned int)(*((_DWORD *)this[6] + 31) * *((_DWORD *)this[5] + *(unsigned int *)(v12 + 32))));
    v14 = (__int64)this[6];
    WdLogGlobalForLineNumber = 1003;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
LABEL_16:
    VIDMM_CPU_HOST_APERTURE::ReleaseRange((VIDMM_CPU_HOST_APERTURE *)this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v12);
    return 3221225495LL;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this[6] + 1) + 556LL) & 2) != 0 )
  {
    v16 = 0LL;
  }
  else
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v16 = (void *)(*((__int64 (__fastcall **)(struct _MDL *, _QWORD, __int64))VirtualMemoryInterface + 5))(
                    v13,
                    0LL,
                    2LL);
    if ( !v16 )
    {
      WdLogSingleEntry1(
        1LL,
        (unsigned int)(*((_DWORD *)this[6] + 31) * *((_DWORD *)this[5] + *(unsigned int *)(v12 + 32))));
      v17 = (__int64)this[6];
      WdLogGlobalForLineNumber = 1014;
      DxgkLogInternalTriageEvent(v17, 0x40000LL);
LABEL_15:
      ExFreePoolWithTag(v13, 0);
      goto LABEL_16;
    }
  }
  v18 = *((unsigned int *)this[5] + *(unsigned int *)(v12 + 32));
  if ( *((_DWORD *)this + 16) < (unsigned int)v18 )
  {
    v19 = 8 * v18;
    if ( !is_mul_ok(v18, 8uLL) )
      v19 = -1LL;
    v20 = operator new[](v19, 0x36346956u, 256LL);
    if ( !v20 )
    {
      WdLogSingleEntry1(1LL, (unsigned int)v18);
      WdLogGlobalForLineNumber = 1039;
      DxgkLogInternalTriageEvent(v21, 0x40000LL);
      if ( v16 )
      {
        v22 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(void *, struct _MDL *))v22 + 6))(v16, v13);
      }
      goto LABEL_15;
    }
    operator delete(this[7]);
    this[7] = (void *)v20;
    *((_DWORD *)this + 16) = v18;
  }
  *((_DWORD *)this + 21) += v18;
  *a2 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v12;
  *a3 = v16;
  result = 0LL;
  *a4 = v13;
  return result;
}
