/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1400BE2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400472B4 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x14004FA90 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400B5F20 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DeferredSetVprCallback(char *a1)
{
  char v2; // si
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _BYTE v9[32]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v10[12]; // [rsp+70h] [rbp-68h] BYREF

  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
    *((VIDMM_GLOBAL **)a1 + 5),
    *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 16LL) + 68LL));
  v2 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 6) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56));
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0qqqxxp_EtwWriteTransfer(
      *((unsigned int *)a1 + 16),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL),
      v3,
      *((_DWORD *)a1 + 14),
      *((_DWORD *)a1 + 15),
      *((_DWORD *)a1 + 16),
      *((_QWORD *)a1 + 11),
      *((_QWORD *)a1 + 12),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 3168LL),
              (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56)) < 0
    && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( v2 )
  {
    memset(v10, 0, 0x58uLL);
    v4 = *((_QWORD *)a1 + 6);
    LODWORD(v10[0]) = 128;
    LODWORD(v10[6]) = 1;
    v10[5] = *(_QWORD *)(v4 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 5), (struct _VIDMM_SYSTEM_COMMAND *)v10, 1);
  }
  v5 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( v5[3] )
  {
    v6 = *((_QWORD *)a1 + 5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)(v6 + 39976));
    v7 = v6 + 39960;
    v8 = *(_QWORD **)(v7 + 8);
    if ( *v8 != v7 )
      __fastfail(3u);
    *v5 = v7;
    v5[1] = v8;
    *v8 = v5;
    *(_QWORD *)(v7 + 8) = v5;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
