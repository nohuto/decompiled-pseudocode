/*
 * XREFs of ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140045580
 * Callers:
 *     <none>
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400458FC (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14013472C (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, _RECTL *a2)
{
  int v4; // ecx
  unsigned int v5; // r15d
  unsigned int v6; // esi
  REGION_CORE *v7; // rbx
  LONG left; // edx
  LONG top; // eax
  LONG right; // r8d
  LONG bottom; // ecx
  unsigned int (__fastcall **v12)(const struct REGION_CORE *); // rdi
  int v14; // ecx
  struct REGION_CORE *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r9
  unsigned int (__fastcall **v23)(const struct REGION_CORE *); // r14
  struct REGION_CORE *v24; // rsi
  int v25; // edi
  char v26; // al
  REGION_CORE *v27; // rcx
  struct SCAN *pScan; // rax
  _DWORD *v29; // r8
  struct SCAN *v30; // rdx
  __int64 v31; // rax
  REGION_CORE *v32; // [rsp+30h] [rbp-40h] BYREF
  struct REGION_CORE *v33; // [rsp+38h] [rbp-38h] BYREF
  int v34[4]; // [rsp+40h] [rbp-30h] BYREF
  _RECTL v35; // [rsp+50h] [rbp-20h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( v4 )
  {
    v14 = v4 - 1;
    if ( !v14 )
      return v5;
    if ( v14 == 1 )
    {
      v15 = (struct REGION_CORE *)*((_QWORD *)this + 2);
      *(_QWORD *)v34 = v15;
      RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v32);
      RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v33);
      if ( v32 && v33 )
      {
        v35 = *a2;
        RGNCOREOBJ::vSet((RGNCOREOBJ *)&v32, &v35);
        LOBYTE(v22) = 14;
        if ( WPP_MAIN_CB.Dpc.DeferredContext )
        {
          v23 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
          v24 = v33;
          v25 = (*(__int64 (__fastcall **)(struct REGION_CORE *, struct REGION_CORE *, REGION_CORE *, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 144LL))(
                  v33,
                  v15,
                  v32,
                  v22);
          RgnCaptureLiveMemoryDumpOnZeroSizedScan(v23, v24);
          v26 = v25 != 0;
        }
        else
        {
          v26 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
                  (int)&v33,
                  (int)v34,
                  (int)&v32,
                  v22,
                  (RGNCOREOBJ *)&v33);
        }
        if ( v26 )
        {
          *((_QWORD *)this + 2) = v33;
          v33 = v15;
        }
        else
        {
          v5 = -1073741823;
        }
      }
      else
      {
        v5 = -1073741801;
      }
      RGNCOREOBJ::vDeleteRGNCOREOBJ((char ***)&v33, v16, v17, v18);
      RGNCOREOBJ::vDeleteRGNCOREOBJ((char ***)&v32, v19, v20, v21);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v6 = -1073741801;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v32);
  v7 = v32;
  if ( v32 )
  {
    left = a2->left;
    top = a2->top;
    right = a2->right;
    bottom = a2->bottom;
    v34[0] = a2->left;
    v34[1] = top;
    v34[2] = right;
    v34[3] = bottom;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v12 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
      (*(void (__fastcall **)(REGION_CORE *, int *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 136LL))(v32, v34);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v12, v7);
    }
    else if ( left == right || top == bottom )
    {
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v32);
    }
    else
    {
      v27 = v32;
      *(_OWORD *)((char *)v32 + 28) = *(_OWORD *)v34;
      if ( (unsigned int)REGION_CORE::get_sizeScan(v27) == 56 )
      {
        pScan = REGION_CORE::get_pScan(v7);
        *((_DWORD *)pScan + 2) = v34[1];
        v29 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        v29[1] = v34[1];
        v29[2] = v34[3];
        v29[3] = v34[0];
        v29[4] = v34[2];
        *(_DWORD *)((char *)v29 + (unsigned int)(4 * *v29 + 16) + 4) = v34[3];
      }
      else
      {
        REGION_CORE::set_sizeScan(v7, 0x38u);
        *((_DWORD *)v7 + 6) = 3;
        v30 = REGION_CORE::get_pScan(v7);
        *(_DWORD *)v30 = 0;
        *((_DWORD *)v30 + 1) = 0x80000000;
        *((_DWORD *)v30 + 2) = v34[1];
        *((_DWORD *)v30 + 3) = 0;
        *((_DWORD *)v30 + 4) = 2;
        *((_DWORD *)v30 + 5) = v34[1];
        *((_DWORD *)v30 + 6) = v34[3];
        *((_DWORD *)v30 + 7) = v34[0];
        *((_DWORD *)v30 + 8) = v34[2];
        *((_DWORD *)v30 + 9) = 2;
        v31 = (unsigned int)(4 * *((_DWORD *)v30 + 4) + 16);
        *(_DWORD *)((char *)v30 + v31 + 16) = 0;
        *(_DWORD *)((char *)v30 + (unsigned int)v31 + 20) = v34[3];
        *(_QWORD *)((char *)v30 + (unsigned int)v31 + 24) = 0x7FFFFFFFLL;
      }
    }
    *((_DWORD *)this + 3) = 2;
    v6 = 0;
    *((_QWORD *)this + 2) = v7;
  }
  return v6;
}
