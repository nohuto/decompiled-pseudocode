/*
 * XREFs of ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x14017D850
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x140010B4C (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x1400112F0 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140095A28 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x14013E95C (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledDeviceUsageNoInline @ 0x1401C4AC0 (Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RGNCOREOBJ::bUpload(Win32kRS **this, struct REGION_CORE *a2, const int *a3)
{
  struct REGION_CORE *v3; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  struct REGION_CORE *v8; // rdx
  __int64 v9; // rax
  struct REGION_CORE *v10; // rdi
  int v11; // r13d
  struct REGION_CORE *v12; // rdx
  int v13; // ebp
  signed int v14; // r15d
  struct SCAN *pScan; // rsi
  _DWORD *v16; // rax
  int v17; // ebx
  _DWORD *v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  struct REGION_CORE *v24; // rdx
  REGION_CORE *v25; // rdi
  int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  unsigned __int64 v29; // [rsp+20h] [rbp-48h]
  _DWORD *v30; // [rsp+28h] [rbp-40h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  __int128 v32; // [rsp+30h] [rbp-38h]
  struct REGION_CORE *v33; // [rsp+88h] [rbp+20h]

  v3 = a2;
  if ( qword_1402A10B0 )
    return Win32kRS::RegionCore_upload(*this, a2, a3);
  v6 = (unsigned int)a3;
  v7 = 4 * ((unsigned int)a3 + 4LL * (((int)a3 + 2) / 3u) + ((int)a3 + 2) / 3u) + 32;
  if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(*this) < v7 && (v7 >= 0xFFFFFFFF || !RGNCOREOBJ::bExpand(this, v7)) )
    return 0LL;
  RGNCOREOBJ::vSet(this, v8);
  v9 = 4 * v6;
  v10 = (struct REGION_CORE *)((char *)v3 + 4 * v6);
  v29 = v9;
  v33 = v10;
  v11 = 1;
  v13 = 0;
  v14 = 0;
  pScan = REGION_CORE::get_pScan(*this, v12);
  LODWORD(v32) = 0;
  DWORD2(v32) = 0;
  if ( (unsigned int)Feature_Servicing_Win32kRSFloodFillBoundingBox__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = 0x7FFFFFFF;
    DWORD2(v32) = 0x80000000;
    LODWORD(v32) = 0x7FFFFFFF;
    v14 = 0x80000000;
  }
  v16 = (_DWORD *)((char *)v3 + 4);
  v17 = *((_DWORD *)v3 + 1);
  v18 = (_DWORD *)((char *)pScan + 12);
  v30 = (_DWORD *)((char *)v3 + 4);
  if ( v17 != 0x80000000 )
  {
    *((_DWORD *)pScan + 2) = v17;
    goto LABEL_12;
  }
  v19 = (unsigned int)(2 * *(_DWORD *)v3);
  *(_DWORD *)pScan = v19;
  *((_DWORD *)pScan + 1) = *v16;
  *((_DWORD *)pScan + 2) = *((_DWORD *)v3 + 2);
  memmove(v18, (char *)v3 + 12, 4 * v19);
  v20 = 4 * v19 + 12;
  *(_DWORD *)((char *)pScan + v20) = v19;
  v17 = *((_DWORD *)pScan + 2);
  if ( v29 < v20 )
    return 0LL;
  v10 = v33;
  v18 = (_DWORD *)((char *)pScan + 12);
  v3 = (struct REGION_CORE *)((char *)v3 + v20);
  v16 = v30;
LABEL_12:
  DWORD1(v32) = *v16;
  if ( *(_DWORD *)pScan )
  {
    v13 = *v18;
    LODWORD(v32) = *v18;
    v14 = *((_DWORD *)pScan + (unsigned int)(*(_DWORD *)pScan - 1) + 3);
    DWORD2(v32) = v14;
  }
  while ( v10 != v3 )
  {
    v21 = v10 - v3;
    if ( (unsigned __int64)(v10 - v3) < 0xC )
      return 0LL;
    v22 = (unsigned int)(2 * *(_DWORD *)v3);
    v31 = 4 * v22 + 12;
    if ( v21 < v31 )
      return 0LL;
    if ( *((_DWORD *)v3 + 1) != v17 )
    {
      ++v11;
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      *((_DWORD *)pScan + 1) = v17;
      v23 = *((_DWORD *)v3 + 1);
      *(_DWORD *)pScan = 0;
      *((_DWORD *)pScan + 2) = v23;
      *((_DWORD *)pScan + 3) = 0;
    }
    ++v11;
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *((_DWORD *)pScan + 1) = *((_DWORD *)v3 + 1);
    v17 = *((_DWORD *)v3 + 2);
    *((_DWORD *)pScan + 2) = v17;
    *(_DWORD *)pScan = v22;
    memmove((char *)pScan + 12, (char *)v3 + 12, 4 * v22);
    v3 = (struct REGION_CORE *)((char *)v3 + v31);
    *((_DWORD *)pScan + v22 + 3) = v22;
    if ( (_DWORD)v22 )
    {
      if ( v13 >= *((_DWORD *)pScan + 3) )
        v13 = *((_DWORD *)pScan + 3);
      LODWORD(v32) = v13;
      if ( v14 <= *((_DWORD *)pScan + (unsigned int)(v22 - 1) + 3) )
        v14 = *((_DWORD *)pScan + (unsigned int)(v22 - 1) + 3);
      DWORD2(v32) = v14;
    }
    v10 = v33;
  }
  HIDWORD(v32) = v17;
  if ( v17 != 0x7FFFFFFF )
  {
    ++v11;
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *(_DWORD *)pScan = 0;
    *((_DWORD *)pScan + 1) = v17;
    *((_DWORD *)pScan + 2) = 0x7FFFFFFF;
    *((_DWORD *)pScan + 3) = 0;
  }
  *(_OWORD *)((char *)*this + 28) = v32;
  *((_DWORD *)*this + 6) = v11;
  v24 = (struct REGION_CORE *)*(unsigned int *)pScan;
  v25 = *this;
  v26 = (_DWORD)pScan + 4 * (_DWORD)v24 + 16;
  v27 = (unsigned int)REGION_CORE::get_pScan(*this, v24);
  REGION_CORE::set_sizeScan(v25, (struct REGION_CORE *)(v26 - v27), v28);
  return 1LL;
}
