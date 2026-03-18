/*
 * XREFs of ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x140038B40
 * Callers:
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x14003828C (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     bFToL @ 0x140038EBC (bFToL.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vScale(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct SCAN *pScan; // rbx
  __int64 v7; // r8
  __int64 i; // rsi
  unsigned int (__fastcall **v9)(const struct REGION_CORE *); // rbx
  const struct REGION_CORE *v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h] BYREF

  v3 = *a1;
  v11 = a2;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v9 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v10 = (const struct REGION_CORE *)((v3 + 24) & -(__int64)(v3 != 0));
    (*(void (__fastcall **)(const struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 280LL))(v10);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v9, v10);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 48);
    if ( v4 > 1 )
    {
      pScan = REGION_CORE::get_pScan((REGION_CORE *)(v3 + 24));
      v7 = 6LL;
      do
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)pScan; i = (unsigned int)(i + 1) )
          bFToL(v5, (char *)pScan + 4 * i + 12, v7);
        if ( *((_DWORD *)pScan + 1) != 0x80000000 )
          bFToL(v5, (char *)pScan + 4, v7);
        if ( *((_DWORD *)pScan + 2) != 0x7FFFFFFF )
          bFToL(v5, (char *)pScan + 8, v7);
        v5 = (unsigned int)(4 * *(_DWORD *)pScan + 16);
        pScan = (struct SCAN *)((char *)pScan + v5);
        --v4;
      }
      while ( v4 );
      v12 = *(_OWORD *)(*a1 + 52);
      ERECTL::vScale((ERECTL *)&v12, (const struct POINTFL *)&v11);
      *(_OWORD *)(*a1 + 52) = v12;
    }
  }
}
