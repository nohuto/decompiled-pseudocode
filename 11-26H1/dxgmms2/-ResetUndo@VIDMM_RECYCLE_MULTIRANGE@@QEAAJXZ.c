/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x14011CF0C
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x14011CEC0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400F7508 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F7884 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(VIDMM_RECYCLE_MULTIRANGE *this)
{
  int v1; // esi
  unsigned __int64 v2; // r8
  int v3; // edi
  VIDMM_RECYCLE_MULTIRANGE *v4; // rbx
  int v5; // edx
  int v6; // ebp
  int v7; // eax
  void *v9; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v3 = 0;
  v4 = this;
  v10 = v2;
  v9 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    v2 = v10;
    WdLogGlobalForLineNumber = 4095;
  }
  if ( !*((_BYTE *)v4 + 121) )
  {
    v5 = **(_DWORD **)(*((_QWORD *)v4 + 10) + 32LL);
    if ( v5 == 3 || (unsigned int)(v5 - 4) <= 2 )
    {
      v6 = 1028;
      if ( v5 != 3 )
        v6 = 4;
      VIDMM_RECYCLE_MULTIRANGE::Map(v4, 0LL, v2, 1u);
      if ( *((_BYTE *)v4 + 120) && (this = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v4 + 16)) != 0LL )
      {
        this = (VIDMM_RECYCLE_MULTIRANGE *)((char *)this + *((_QWORD *)v4 + 17));
        v1 = 1;
        v9 = this;
      }
      else
      {
        v3 = -1071775472;
      }
      if ( v3 < 0 )
      {
LABEL_13:
        if ( v3 != -1071775472 )
          goto LABEL_14;
        goto LABEL_18;
      }
    }
    else
    {
      v9 = (void *)*((_QWORD *)v4 + 6);
      v6 = 4;
      if ( v5 != 2 )
        v6 = 1028;
    }
    v7 = VidMmAllocateVirtualMemory(&v9, &v10, 0x1000000u, v6, 0);
    v3 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(4LL, v7);
      WdLogGlobalForLineNumber = 4151;
    }
    goto LABEL_13;
  }
  v3 = -1071775472;
LABEL_18:
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventPerformanceWarning, v2, 18);
LABEL_14:
  if ( v1 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(v4);
  return (unsigned int)v3;
}
