/*
 * XREFs of ?vTighten@RGNOBJ@@QEAAXXZ @ 0x14000ECF0
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vTighten(RGNOBJ *this)
{
  __int64 v2; // rcx
  int v3; // edi
  int v4; // ebx
  signed int v5; // esi
  struct SCAN *pscnTail; // rax
  struct SCAN *pScan; // rdx
  int v8; // r8d
  int v9; // eax
  const struct BaseRustExports *v10; // rbx
  const struct REGION_CORE *v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v10 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
    v11 = (const struct REGION_CORE *)((v2 + 24) & -(__int64)(v2 != 0));
    (*(void (__fastcall **)(const struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 264LL))(v11);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v10, v11);
  }
  else
  {
    v3 = *(_DWORD *)(v2 + 48);
    if ( v3 == 1 )
    {
      *(_OWORD *)(v2 + 52) = 0LL;
    }
    else
    {
      v4 = 0x7FFFFFFF;
      v5 = 0x80000000;
      LODWORD(v12) = 0x7FFFFFFF;
      pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(v2 + 24));
      HIDWORD(v12) = *(_DWORD *)((char *)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16) + 4);
      pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
      DWORD1(v12) = *((_DWORD *)pScan + 2);
      if ( !v3 )
        goto LABEL_7;
      do
      {
        v8 = *(_DWORD *)pScan;
        --v3;
        if ( *(_DWORD *)pScan )
        {
          v9 = *((_DWORD *)pScan + 3);
          if ( v4 <= v9 )
            v9 = v4;
          v4 = v9;
          LODWORD(v12) = v9;
          if ( v5 < *((_DWORD *)pScan + (unsigned int)(v8 - 1) + 3) )
          {
            v5 = *((_DWORD *)pScan + (unsigned int)(v8 - 1) + 3);
            LODWORD(v12) = v9;
          }
        }
        pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * v8 + 16));
      }
      while ( v3 );
      DWORD2(v12) = v5;
      if ( v4 >= v5 )
      {
LABEL_7:
        LODWORD(v12) = 0;
        DWORD2(v12) = 0;
      }
      *(_OWORD *)(*(_QWORD *)this + 52LL) = v12;
    }
  }
}
