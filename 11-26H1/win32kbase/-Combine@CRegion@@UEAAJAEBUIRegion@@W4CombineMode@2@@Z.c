/*
 * XREFs of ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x1400445B0
 * Callers:
 *     <none>
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x1401214AC (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::Combine(REGION_CORE **a1, __int64 a2, int a3)
{
  _DWORD *v4; // rbx
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // esi
  REGION_CORE *v9; // rbx
  unsigned int (__fastcall **v10)(const struct REGION_CORE *); // rdi
  REGION_CORE *v11; // rbx
  __int64 v12; // rdi
  unsigned int (__fastcall **v13)(const struct REGION_CORE *); // rsi
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  const struct REGION_CORE *v20; // r15
  _BYTE *v21; // r9
  unsigned int (__fastcall **v22)(const struct REGION_CORE *); // rsi
  char v23; // di
  REGION_CORE *v24; // rcx
  struct SCAN *pScan; // rax
  _DWORD *v26; // r8
  struct SCAN *v27; // rdx
  __int64 v28; // rax
  void *v29; // rdi
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // edx
  REGION_CORE *v35; // [rsp+30h] [rbp-30h] BYREF
  int v36[2]; // [rsp+38h] [rbp-28h] BYREF
  struct REGION_CORE *v37[2]; // [rsp+40h] [rbp-20h] BYREF

  v4 = (_DWORD *)(a2 + 12);
  v5 = *((_DWORD *)a1 + 3);
  v6 = 0;
  v7 = a3;
  if ( v5 == 2 && *v4 == 2 )
    goto LABEL_11;
  if ( !*v4 )
  {
    if ( a3 != 5 )
      goto LABEL_11;
    goto LABEL_33;
  }
  if ( *v4 == 1 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_11;
      case 2:
LABEL_41:
        (*((void (__fastcall **)(REGION_CORE **))*a1 + 4))(a1);
        goto LABEL_11;
      case 3:
        return (unsigned int)-2147020579;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_41;
    }
LABEL_33:
    (*((void (__fastcall **)(REGION_CORE **))*a1 + 2))(a1);
    goto LABEL_11;
  }
  if ( v5 )
  {
    if ( v5 != 1 )
      return (unsigned int)-1073741595;
    if ( a3 == 1 )
    {
LABEL_49:
      v6 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
      v7 = 5;
      goto LABEL_10;
    }
    if ( a3 == 2 )
      goto LABEL_11;
    if ( a3 != 3 && a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_49;
    }
    return (unsigned int)-2147020579;
  }
  v6 = -1073741801;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v35);
  v9 = v35;
  if ( v35 )
  {
    *(struct tagRECT *)v37 = CRegion::sc_rcEmpty;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v10 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      (*(void (__fastcall **)(REGION_CORE *, struct REGION_CORE **))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 136LL))(
        v35,
        v37);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v10, v9);
    }
    else if ( CRegion::sc_rcEmpty.left == CRegion::sc_rcEmpty.right
           || CRegion::sc_rcEmpty.top == CRegion::sc_rcEmpty.bottom )
    {
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v35);
    }
    else
    {
      v24 = v35;
      *(_OWORD *)((char *)v35 + 28) = *(_OWORD *)v37;
      if ( (unsigned int)REGION_CORE::get_sizeScan(v24) == 56 )
      {
        pScan = REGION_CORE::get_pScan(v9);
        *((_DWORD *)pScan + 2) = HIDWORD(v37[0]);
        v26 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        v26[1] = HIDWORD(v37[0]);
        v26[2] = HIDWORD(v37[1]);
        v26[3] = v37[0];
        v26[4] = v37[1];
        *(_DWORD *)((char *)v26 + (unsigned int)(4 * *v26 + 16) + 4) = HIDWORD(v37[1]);
      }
      else
      {
        REGION_CORE::set_sizeScan(v9, 0x38u);
        *((_DWORD *)v9 + 6) = 3;
        v27 = REGION_CORE::get_pScan(v9);
        *(_DWORD *)v27 = 0;
        *((_DWORD *)v27 + 1) = 0x80000000;
        *((_DWORD *)v27 + 2) = HIDWORD(v37[0]);
        *((_DWORD *)v27 + 3) = 0;
        *((_DWORD *)v27 + 4) = 2;
        *((_DWORD *)v27 + 5) = HIDWORD(v37[0]);
        *((_DWORD *)v27 + 6) = HIDWORD(v37[1]);
        *((_DWORD *)v27 + 7) = v37[0];
        *((_DWORD *)v27 + 8) = v37[1];
        *((_DWORD *)v27 + 9) = 2;
        v28 = (unsigned int)(4 * *((_DWORD *)v27 + 4) + 16);
        *(_DWORD *)((char *)v27 + v28 + 16) = 0;
        *(_DWORD *)((char *)v27 + (unsigned int)v28 + 20) = HIDWORD(v37[1]);
        *(_QWORD *)((char *)v27 + (unsigned int)v28 + 24) = 0x7FFFFFFFLL;
      }
    }
    a1[2] = v9;
    v6 = 0;
    *((_DWORD *)a1 + 3) = 2;
  }
  v4 = (_DWORD *)(a2 + 12);
LABEL_10:
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_11:
  if ( *((_DWORD *)a1 + 3) != 2 || *v4 != 2 )
    return v6;
  v11 = a1[2];
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)v36 = v12;
  v35 = v11;
  if ( !v11 || !v12 || (unsigned int)(v7 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( v7 == 5 )
  {
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v22 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v23 = (*(__int64 (__fastcall **)(REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 56LL))(
              v11,
              v12);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v22, v11);
      if ( v23 )
      {
LABEL_31:
        a1[2] = v11;
        return 0;
      }
      return (unsigned int)-1073741801;
    }
    LODWORD(v37[0]) = 0;
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNCOREOBJ *)&v35, (REGION_CORE **)v36, (unsigned int *)v37) )
    {
      v29 = Win32AllocPoolZInitImpl(0x100uLL, LODWORD(v37[0]), 0x6E637347u);
      if ( !v29 )
        return (unsigned int)-1073741801;
      v30 = (char *)REGION_CORE::get_pScan(v11);
      GreDeleteFastMutex(v30, v31, v32, v33);
      v34 = (unsigned int)v37[0];
      *(_QWORD *)v11 = v29;
      REGION_CORE::set_sizeScanAlloc(v11, v34);
    }
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v35, (const struct RGNCOREOBJ *)v36);
    goto LABEL_31;
  }
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)v37);
  v20 = v37[0];
  if ( v37[0] )
  {
    v21 = byte_140265428;
    LOBYTE(v21) = byte_140265428[v7];
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v13 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      v14 = (*(__int64 (__fastcall **)(struct REGION_CORE *, REGION_CORE *, __int64, _BYTE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                             + 144LL))(
              v37[0],
              v11,
              v12,
              v21);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v13, v20);
      v18 = v14 != 0;
    }
    else
    {
      v18 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
              (int)v37,
              (int)&v35,
              (int)v36,
              (int)v21,
              (RGNCOREOBJ *)v37);
    }
    if ( v18 )
    {
      v6 = 0;
      a1[2] = v37[0];
      v37[0] = v11;
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  RGNCOREOBJ::vDeleteRGNCOREOBJ((char ***)v37, v15, v16, v17);
  return v6;
}
