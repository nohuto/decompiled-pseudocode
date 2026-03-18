/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401F37FC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140297258 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14029C2EC (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14004D554 (-VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  struct VIDMM_DMA_BUFFER **v6; // r15
  char *v8; // rsi
  int v9; // ebp
  int v10; // r12d
  __int64 v11; // rax
  unsigned int v12; // edi
  struct VIDMM_DMA_POOL *v13; // rbp
  int v14; // eax
  int v16; // eax
  unsigned int v17; // esi
  const char *v18; // rdx

  v6 = a2;
  if ( *((_BYTE *)this + 434) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  v8 = (char *)this + 16;
  v9 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v9 = *((_DWORD *)this + 18);
  if ( !*((_QWORD *)this + 29) )
  {
    v10 = *((_DWORD *)this + 26);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 760LL) + 8LL) + 416LL))(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 768LL),
            *((unsigned int *)this + 97),
            *(_QWORD *)(*(_QWORD *)v8 + 792LL),
            this,
            1,
            *((_DWORD *)this + 50),
            v9,
            v10,
            *((_DWORD *)this + 51),
            *((_DWORD *)this + 52));
    *((_QWORD *)this + 29) = v11;
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 760LL) + 8LL)
                                               + 424LL))(v11);
      if ( (v12 & 0x80000000) == 0 )
      {
        *((_DWORD *)this + 53) = v9;
        *((_DWORD *)this + 54) = v10;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 844;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 760LL) + 8LL) + 432LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3742;
    return v12;
  }
LABEL_12:
  v13 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 29);
  LOBYTE(a2) = 1;
  v14 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, struct VIDMM_DMA_BUFFER **, _QWORD, struct VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 760LL) + 8LL) + 472LL))(
          v13,
          a2,
          0LL,
          v6);
  v12 = v14;
  if ( v14 != -1071775486 )
  {
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v14);
      WdLogGlobalForLineNumber = 3771;
    }
    return v12;
  }
  if ( !a3 )
    return v12;
  COREDEVICEACCESS::Release(a3);
  v12 = VIDMM_EXPORT::VidMmAcquireDmaBuffer(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 760LL),
          v13,
          0LL,
          a4 != 0,
          v6);
  v16 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
    return v12;
  WdLogSingleEntry2(4LL, this, v16);
  WdLogGlobalForLineNumber = 3761;
  COREDEVICEACCESS::AcquireSharedUncheck(a3, v18);
  return v17;
}
