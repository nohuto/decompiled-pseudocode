/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x14011A5DC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1400430E4 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043EE0 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x14009AE60 (VidSchiSetPagingHwContextPageDirectory.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(_QWORD *a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  char i; // bp
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rbx
  struct _DXGKARG_SETROOTPAGETABLE v14; // [rsp+30h] [rbp-78h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1[42] + 8LL * a2) )
  {
    VidSchiSetPagingHwContextPageDirectory((__int64)a1, a2, a3, a4, a5);
  }
  else
  {
    v9 = 352LL * a2;
    v10 = 41LL;
    for ( i = 0; ; i = 1 )
    {
      v12 = (ADAPTER_RENDER *)a1[1];
      v13 = *(_QWORD *)(a1[v10] + 8 * v6);
      *(&v14.Address.SegmentId + 1) = 0;
      *(&v14.NumEntries + 1) = 0;
      v14.hContext = *(HANDLE *)(v13 + 64);
      v14.Address.SegmentId = a4;
      v14.Address.SegmentOffset = a5;
      v14.NumEntries = a3;
      ADAPTER_RENDER::DdiSetRootPageTable(v12, &v14);
      *(_QWORD *)(v13 + 832) = v14.Address.SegmentOffset;
      VidMmRecordVaPagingHistorySetPageDirectory(*(struct VIDMM_GLOBAL **)(a1[1] + 768LL), 0LL, &v14, (const void *)v13);
      if ( i || (*(_BYTE *)(*(_QWORD *)(a1[2] + 3032LL) + v9 + 16) & 0xC) != 0xC )
        break;
      v10 = 44LL;
    }
  }
}
