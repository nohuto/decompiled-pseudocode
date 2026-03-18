/*
 * XREFs of ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14016C570
 * Callers:
 *     <none>
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x1401BDB70 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RGNCOREOBJ::bUpload(const struct REGION_CORE **this, const int *a2, unsigned int a3)
{
  const struct REGION_CORE *v4; // rsi
  unsigned int (__fastcall **v6)(const struct REGION_CORE *); // rdi
  unsigned int v7; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  int v12; // r12d
  struct SCAN *pScan; // rax
  int v14; // ebp
  signed int v15; // r15d
  struct SCAN *v16; // rsi
  const int *v17; // rcx
  int v18; // ebx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r13
  REGION_CORE *v23; // rdi
  int v24; // ebx
  unsigned int v25; // eax
  const int *v26; // [rsp+28h] [rbp-40h]
  __int128 v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+88h] [rbp+20h]

  v4 = *this;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v6 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v7 = (*(__int64 (__fastcall **)(const struct REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 288LL))(*this);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v6, v4);
    return v7;
  }
  v9 = a3;
  v28 = a3;
  v10 = 4 * (a3 + 4LL * ((a3 + 2) / 3) + (a3 + 2) / 3) + 32;
  if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v4) < v10
    && (v10 >= 0xFFFFFFFF || !RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v10)) )
  {
    return 0LL;
  }
  RGNCOREOBJ::vSet((RGNCOREOBJ *)this);
  v11 = 4 * v9;
  v12 = 1;
  v26 = &a2[v9];
  pScan = REGION_CORE::get_pScan(*this);
  v14 = 0x7FFFFFFF;
  LODWORD(v27) = 0x7FFFFFFF;
  v15 = 0x80000000;
  DWORD2(v27) = 0x80000000;
  v16 = pScan;
  if ( v11 < 0xC )
    return 0LL;
  v17 = a2 + 1;
  v18 = a2[1];
  if ( v18 != 0x80000000 )
  {
    *((_DWORD *)pScan + 2) = v18;
    goto LABEL_11;
  }
  v19 = (unsigned int)(2 * *a2);
  *(_DWORD *)pScan = v19;
  *((_DWORD *)pScan + 1) = *v17;
  *((_DWORD *)pScan + 2) = a2[2];
  memmove((char *)pScan + 12, a2 + 3, 4 * v19);
  v20 = 4 * v19 + 12;
  *(_DWORD *)((char *)v16 + v20) = v19;
  v18 = *((_DWORD *)v16 + 2);
  if ( 4 * v28 < v20 )
    return 0LL;
  v17 = a2 + 1;
  a2 = (const int *)((char *)a2 + v20);
LABEL_11:
  DWORD1(v27) = *v17;
  if ( *(_DWORD *)v16 )
  {
    v14 = *((_DWORD *)v16 + 3);
    LODWORD(v27) = v14;
    v15 = *((_DWORD *)v16 + (unsigned int)(*(_DWORD *)v16 - 1) + 3);
    DWORD2(v27) = v15;
  }
  while ( 1 )
  {
    v21 = (char *)v26 - (char *)a2;
    if ( v26 == a2 )
      break;
    if ( v21 < 0xC )
      return 0LL;
    v22 = (unsigned int)(2 * *a2);
    if ( v21 < 4 * v22 + 12 )
      return 0LL;
    if ( a2[1] != v18 )
    {
      ++v12;
      v16 = (struct SCAN *)((char *)v16 + (unsigned int)(4 * *(_DWORD *)v16 + 16));
      *((_DWORD *)v16 + 1) = v18;
      *((_DWORD *)v16 + 2) = a2[1];
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 3) = 0;
    }
    ++v12;
    v16 = (struct SCAN *)((char *)v16 + (unsigned int)(4 * *(_DWORD *)v16 + 16));
    *((_DWORD *)v16 + 1) = a2[1];
    v18 = a2[2];
    *((_DWORD *)v16 + 2) = v18;
    *(_DWORD *)v16 = v22;
    memmove((char *)v16 + 12, a2 + 3, 4 * v22);
    a2 += v22 + 3;
    *((_DWORD *)v16 + v22 + 3) = v22;
    if ( (_DWORD)v22 )
    {
      if ( v14 >= *((_DWORD *)v16 + 3) )
        v14 = *((_DWORD *)v16 + 3);
      LODWORD(v27) = v14;
      if ( v15 <= *((_DWORD *)v16 + (unsigned int)(v22 - 1) + 3) )
      {
        v15 = *((_DWORD *)v16 + (unsigned int)(v22 - 1) + 3);
        DWORD2(v27) = v15;
      }
    }
  }
  HIDWORD(v27) = v18;
  if ( v18 != 0x7FFFFFFF )
  {
    ++v12;
    v16 = (struct SCAN *)((char *)v16 + (unsigned int)(4 * *(_DWORD *)v16 + 16));
    *(_DWORD *)v16 = 0;
    *((_DWORD *)v16 + 1) = v18;
    *((_QWORD *)v16 + 1) = 0x7FFFFFFFLL;
  }
  *(_OWORD *)((char *)*this + 28) = v27;
  *((_DWORD *)*this + 6) = v12;
  v23 = *this;
  v24 = (_DWORD)v16 + 4 * *(_DWORD *)v16 + 16;
  v25 = (unsigned int)REGION_CORE::get_pScan(v23);
  REGION_CORE::set_sizeScan(v23, v24 - v25);
  return 1LL;
}
