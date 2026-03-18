/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400A9E80 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140104B4C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1400C7944 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400C9374 (-AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0 (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  unsigned int v10; // r12d
  unsigned __int64 v11; // r15
  VIDMM_DEVICE *v12; // rax
  bool v13; // dl
  VIDMM_DEVICE *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  struct VIDMM_VAD *Vad; // rax
  struct VIDMM_VAD *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rax

  v5 = (char *)this + 32;
  v6 = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 12) = a4;
  *((_QWORD *)this + 13) = a5;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  v10 = 1;
  v11 = a3;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( a5 )
  {
    v10 = *((_DWORD *)a4 + 1738);
    if ( (*((_DWORD *)a5 + 34) & 2) != 0 )
    {
      v24 = *((_QWORD *)a4 + 5065);
      *((_DWORD *)this + 38) &= ~1u;
      *((_QWORD *)this + 14) = v24;
      v16 = *((_DWORD *)this + 38) | 4;
      goto LABEL_12;
    }
    if ( (*((_BYTE *)a4 + 41064) & 2) != 0 )
    {
      v12 = (VIDMM_DEVICE *)operator new(400LL, 0x4B677844u, 256LL);
      if ( v12 )
        v14 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
      else
        v14 = 0LL;
      *((_QWORD *)this + 14) = v14;
      if ( !v14 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3216;
        return 3221225495LL;
      }
      if ( (int)VIDMM_DEVICE::Init(v14, v13, a5) < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 3225;
        return 3221225495LL;
      }
    }
    if ( dword_14008A5E0 == 2 )
    {
      if ( *((char *)a4 + 41064) < 0 )
        goto LABEL_10;
    }
    else if ( !dword_14008A5E0 )
    {
LABEL_10:
      v15 = 0;
LABEL_11:
      v5 = (char *)this + 32;
      v16 = v15 | *((_DWORD *)this + 38) & 0xFFFFFFFE;
LABEL_12:
      *((_DWORD *)this + 38) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v16)) & 2;
      goto LABEL_13;
    }
    v15 = 1;
    goto LABEL_11;
  }
LABEL_13:
  Vad = CVirtualAddressAllocator::AllocateVad(this, v11, a2, v10);
  v18 = Vad;
  if ( !Vad )
  {
    _InterlockedIncrement(&dword_14008A828);
    WdLogSingleEntry0(6LL);
    v20 = 3250;
LABEL_15:
    WdLogGlobalForLineNumber = v20;
    DxgkLogInternalTriageEvent(v19, 262145LL);
    return 3221225495LL;
  }
  *((_QWORD *)this + 3) = v11;
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v22 = *(_QWORD *)v5;
  v23 = (_QWORD *)((char *)v18 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v23 = v22;
  *((_QWORD *)v18 + 6) = v5;
  *(_QWORD *)(v22 + 8) = v23;
  *(_QWORD *)v5 = v23;
  if ( a4 && (*((_BYTE *)a4 + 41064) & 2) != 0 )
  {
    v25 = v10;
    v26 = 32LL * v10;
    if ( !is_mul_ok(v10, 0x20uLL) )
      v26 = -1LL;
    v27 = operator new[](v26, 0x4B677844u, 256LL);
    *((_QWORD *)this + 16) = v27;
    if ( !v27 )
    {
      _InterlockedIncrement(&dword_14008A83C);
      WdLogSingleEntry0(6LL);
      v20 = 3263;
      goto LABEL_15;
    }
    if ( v10 )
    {
      v30 = 0LL;
      v31 = 0LL;
      do
      {
        v29 = *(_QWORD *)(v31 + *((_QWORD *)a4 + 5040));
        if ( (*(_BYTE *)(v29 + 556) & 4) != 0 )
        {
          *(_DWORD *)(v30 + *((_QWORD *)this + 16) + 16) = *(_DWORD *)(v29 + 48LL * *(unsigned int *)(v29 + 548) + 208);
          *(_DWORD *)(v30 + *((_QWORD *)this + 16) + 20) = *(_DWORD *)(v29 + 48LL * *(unsigned int *)(v29 + 548) + 216);
          if ( *((_QWORD *)this + 13) && (*((_DWORD *)a5 + 34) & 2) != 0 )
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 16) + 28) = *(_DWORD *)(v29 + 164);
            v32 = *(_DWORD *)(v29 + 180);
          }
          else
          {
            *(_DWORD *)(v30 + *((_QWORD *)this + 16) + 28) = *(_DWORD *)(v29 + 156);
            v32 = *(_DWORD *)(v29 + 172);
          }
          v28 = *((_QWORD *)this + 16);
          *(_DWORD *)(v30 + v28 + 24) = v32;
        }
        v31 += 8LL;
        v30 += 32LL;
        --v25;
      }
      while ( v25 );
    }
    if ( byte_14008A202 < 0 )
    {
      v33 = *((_QWORD *)this + 13);
      if ( v33 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(v33 + 72) + 64LL);
        v6 = *(_QWORD *)(v28 + 80);
      }
      McTemplateK0ppp_EtwWriteTransfer(
        v28,
        &CreateGpuVirtualAddressAllocator,
        v29,
        this,
        v6,
        *(_QWORD *)(*((_QWORD *)this + 12) + 24LL));
    }
  }
  return 0LL;
}
