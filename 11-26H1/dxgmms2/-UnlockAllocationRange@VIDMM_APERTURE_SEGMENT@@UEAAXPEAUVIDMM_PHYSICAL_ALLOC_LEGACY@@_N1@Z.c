/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z @ 0x1400BDD00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x14010BCAC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3)
{
  int v5; // r15d
  __int64 v6; // rsi
  __int64 v7; // r13
  void *v8; // rax
  _QWORD *v9; // rsi
  char v10; // [rsp+50h] [rbp-A8h]
  void *v11[6]; // [rsp+58h] [rbp-A0h] BYREF
  struct VIDMM_PHYSICAL_ALLOC_LEGACY *v12; // [rsp+88h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-68h] BYREF

  v10 = a3;
  v11[1] = this;
  v11[2] = a2;
  v11[5] = a2;
  v12 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v5 = 0;
  v6 = *(_QWORD *)a2;
  v11[3] = (void *)v6;
  v7 = *(_QWORD *)(v6 + 48);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v6;
    WdLogGlobalForLineNumber = 1426;
    a3 = v10;
  }
  v11[4] = (char *)a2 + 192;
  if ( (*((_DWORD *)a2 + 48) & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( (**(_DWORD **)(v6 + 368) & 8) == 0 && v7 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v7 + 8) + 16LL), &ApcState);
        v5 = 1;
      }
      v11[0] = 0LL;
      v8 = VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v6, *((_QWORD *)a2 + 22), *((_QWORD *)a2 + 23), v11);
      if ( v8 )
      {
        memmove(v8, *(const void **)(*((_QWORD *)this + 1) + 45272LL), *((_QWORD *)a2 + 23));
        VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v6, v11[0]);
      }
      else
      {
        memset(*(void **)(*((_QWORD *)this + 1) + 45272LL), 0, *((_QWORD *)a2 + 23));
        *(_DWORD *)(v6 + 24) |= 0x10000u;
      }
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
    v9 = (_QWORD *)((char *)v12 + 168);
  }
  else
  {
    v9 = (_QWORD *)((char *)a2 + 168);
    VidMmiUnlockAllocation(*((PVOID *)a2 + 21));
  }
  *((_QWORD *)a2 + 22) = 0LL;
  *((_QWORD *)a2 + 23) = 0LL;
  *((_DWORD *)a2 + 48) &= 0xFFFFFFF8;
  *v9 = 0LL;
}
