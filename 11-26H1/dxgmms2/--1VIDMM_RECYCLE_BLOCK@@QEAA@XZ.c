/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400F7D80
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400047C8 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400F2310 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043EF8 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400F8394 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  _QWORD *v1; // rsi
  void *v2; // rdx
  int *v4; // rax
  int v5; // ecx
  void *v6; // rdx
  void **v7; // rcx
  VIDMM_RECYCLE_BLOCK **v8; // rdx
  VIDMM_RECYCLE_BLOCK **v9; // rcx
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 40);
  v2 = (void *)*((_QWORD *)this + 5);
  v22 = *((_QWORD *)this + 6) - (_QWORD)v2;
  v4 = (int *)*((_QWORD *)this + 4);
  v5 = *v4;
  if ( *v4 == 9 || v5 == 10 )
  {
    v6 = (void *)*((_QWORD *)this + 16);
    if ( v6 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v6,
        *((_QWORD *)this + 17),
        v22,
        1);
    goto LABEL_4;
  }
  if ( (unsigned int)(v5 - 3) > 1 )
  {
    if ( (unsigned int)(v5 - 5) > 1 )
    {
      if ( v2 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v16 = (*((__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64 *, __int64))VirtualMemoryInterface + 2))(
                -1LL,
                v1,
                &v22,
                0x8000LL);
        if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741558 )
        {
          v17 = v16;
          WdLogSingleEntry4(
            1LL,
            *v1,
            this,
            v16,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL) + 16LL));
          v18 = *((_QWORD *)this + 4);
          WdLogGlobalForLineNumber = 6643;
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL) + 16LL);
          HIDWORD(v20) = HIDWORD(v17);
          HIDWORD(v19) = HIDWORD(this);
          DxgkLogInternalTriageEvent(v21, 0x40000LL);
        }
      }
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  if ( v5 == 6 )
  {
LABEL_13:
    if ( v2 )
      MmUnmapViewInSystemSpace(v2);
  }
  v10 = (void *)*((_QWORD *)this + 7);
  if ( !v10 || *((_QWORD *)this + 8) )
  {
    v11 = *((_QWORD *)this + 8);
    if ( !v11 )
      goto LABEL_4;
    ObCloseHandle((HANDLE)v11, (v11 & 0xFFFFFFFF80000000uLL) == 0);
    v10 = (void *)*((_QWORD *)this + 7);
  }
  VidMmDereferenceObjectAsync(v10);
LABEL_4:
  v7 = (void **)*((_QWORD *)this + 19);
  if ( v7 )
  {
    operator delete(*v7);
    operator delete(*((void **)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( (byte_14008A202 & 4) != 0 )
  {
    v12 = (unsigned int *)*((_QWORD *)this + 4);
    v13 = *v12;
    if ( (_DWORD)v13 == 3 || (v14 = 40LL, (unsigned int)(v13 - 4) <= 2) )
      v14 = 56LL;
    LODWORD(v21) = 1;
    LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL) + 24LL);
    LODWORD(v19) = *v12;
    McTemplateK0pxqqt_EtwWriteTransfer(
      v13,
      &EventDestroyProcessAllocation,
      (unsigned int)v20,
      *(_QWORD *)((char *)this + v14),
      v22,
      v19,
      v20,
      v21);
  }
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 6688;
  v8 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v8[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v9 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v9 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v9 = (VIDMM_RECYCLE_BLOCK *)v8;
  v8[1] = (VIDMM_RECYCLE_BLOCK *)v9;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
