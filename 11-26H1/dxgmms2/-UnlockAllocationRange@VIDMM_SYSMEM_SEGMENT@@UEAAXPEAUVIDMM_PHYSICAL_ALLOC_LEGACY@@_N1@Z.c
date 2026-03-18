/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N1@Z @ 0x1400BCD70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z @ 0x14010BB78 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1_N2@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z @ 0x14011BB3C (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAPEAX@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z @ 0x14011EAA4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        char a3,
        bool a4)
{
  int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // r13
  void *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  char v12; // [rsp+50h] [rbp-A8h]
  bool v13; // [rsp+51h] [rbp-A7h]
  VIDMM_GLOBAL **v14; // [rsp+58h] [rbp-A0h]
  void *v15[7]; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  v13 = a4;
  v12 = a3;
  v14 = this;
  v15[1] = this;
  v15[2] = a2;
  v15[4] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  v7 = *(_QWORD *)a2;
  v15[3] = (void *)v7;
  v8 = *(_QWORD *)(v7 + 48);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v7;
    WdLogGlobalForLineNumber = 1068;
    this = v14;
    a3 = v12;
    a4 = v13;
  }
  v15[6] = (char *)a2 + 192;
  if ( (*((_DWORD *)a2 + 48) & 1) != 0 )
  {
    if ( !a3 )
    {
      if ( (**(_DWORD **)(v7 + 368) & 8) == 0 && v8 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v8 + 8) + 16LL), &ApcState);
        v6 = 1;
      }
      v15[0] = 0LL;
      v9 = VidMmMapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v7, *((_QWORD *)a2 + 22), *((_QWORD *)a2 + 23), v15);
      if ( v9 )
      {
        memmove(v9, *((const void **)v14[1] + 5659), *((_QWORD *)a2 + 23));
        VidMmUnmapViewOfAllocation((struct VIDMM_GLOBAL_ALLOC *)v7, v15[0]);
      }
      else
      {
        memset(*((void **)v14[1] + 5659), 0, *((_QWORD *)a2 + 23));
        *(_DWORD *)(v7 + 24) |= 0x10000u;
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
    v10 = (_QWORD *)((char *)a2 + 184);
    v11 = (_QWORD *)((char *)a2 + 176);
  }
  else
  {
    v10 = (_QWORD *)((char *)a2 + 184);
    v11 = (_QWORD *)((char *)a2 + 176);
    VIDMM_GLOBAL::UnlockAllocation(
      this[1],
      (struct VIDMM_LOCAL_ALLOC *)v8,
      *((_QWORD *)a2 + 22),
      *((_QWORD *)a2 + 23),
      1,
      a4);
  }
  *v10 = 0LL;
  *v11 = 0LL;
  *((_DWORD *)a2 + 48) &= 0xFFFFFFFC;
  *((_QWORD *)a2 + 21) = 0LL;
}
