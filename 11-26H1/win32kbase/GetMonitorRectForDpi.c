/*
 * XREFs of GetMonitorRectForDpi @ 0x140085450
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     CreateMonitorRegionForDpi @ 0x1400839F0 (CreateMonitorRegionForDpi.c)
 *     GetMonitorRect @ 0x140083AF4 (GetMonitorRect.c)
 *     GetScreenRectForDpi @ 0x140083BF4 (GetScreenRectForDpi.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall GetMonitorRectForDpi(unsigned __int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  unsigned int v6; // edx
  unsigned __int64 v7; // r13
  __int128 v8; // xmm0
  unsigned __int64 v9; // r9
  int v10; // r8d
  signed int v11; // ebx
  int v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // edi
  unsigned __int64 v15; // r14
  signed int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // rax
  __int128 v19; // rtt
  int v20; // ebx
  int v21; // eax
  signed int v22; // r9d
  int v23; // ecx
  unsigned __int64 v24; // rax
  signed int v25; // r9d
  int v26; // ecx
  unsigned __int64 v27; // rax
  signed int v28; // ebx
  int v29; // ecx
  unsigned __int64 v30; // rax
  int v31; // r9d
  int v32; // edx
  signed int v33; // r9d
  int v34; // ecx
  unsigned __int64 v35; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v5 = a3;
  v6 = *(unsigned __int16 *)(v3 + 62);
  v7 = *(unsigned __int16 *)(v3 + 60);
  v8 = *(_OWORD *)(v3 + 28);
  *(_OWORD *)a1 = v8;
  if ( a3 )
  {
    v9 = *a1;
    v10 = 0x80000000;
    v11 = ((int)*a1 >> 31) & 0xFFFFFFFE;
    v12 = -(int)*a1;
    if ( v12 < 0 )
      v12 = v9;
    if ( v6
      && (v13 = (__int64)(((unsigned __int64)v6 >> 1) + v12 * (unsigned __int64)(unsigned int)v5) / (int)v6,
          v14 = v13,
          v13 <= 0x7FFFFFFF) )
    {
      if ( v11 <= -1 )
        v14 = -(int)v13;
    }
    else
    {
      v14 = 0x80000000;
      if ( v11 > -1 )
        v14 = 0x7FFFFFFF;
    }
    v15 = HIDWORD(v9);
    v16 = (SHIDWORD(v9) >> 31) & 0xFFFFFFFE;
    v17 = -HIDWORD(v9);
    if ( SHIDWORD(v9) > 0 )
      v17 = HIDWORD(v9);
    if ( v6
      && (v19 = (__int64)(((unsigned __int64)v6 >> 1) + v5 * v17),
          v18 = (__int64)(((unsigned __int64)v6 >> 1) + v5 * v17) / v6,
          v20 = v19 / v6,
          v18 <= 0x7FFFFFFF) )
    {
      if ( v16 <= -1 )
        v20 = -(int)v18;
    }
    else
    {
      v20 = 0x80000000;
      if ( v16 > -1 )
        v20 = 0x7FFFFFFF;
    }
    v21 = v8 - v9;
    v22 = (((int)v8 - (int)v9) >> 31) & 0xFFFFFFFE;
    v23 = -v21;
    if ( v21 > 0 )
      v23 = v21;
    if ( (_DWORD)v7 && (v24 = (__int64)((v7 >> 1) + v23 * v5) / (int)v7, v24 <= 0x7FFFFFFF) )
    {
      if ( v22 <= -1 )
        LODWORD(v24) = -(int)v24;
    }
    else
    {
      LODWORD(v24) = 0x80000000;
      if ( v22 > -1 )
        LODWORD(v24) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v24 + v14;
    v25 = ((DWORD1(v8) - (int)v15) >> 31) & 0xFFFFFFFE;
    v26 = v15 - DWORD1(v8);
    if ( (int)v15 - DWORD1(v8) < 0 )
      v26 = DWORD1(v8) - v15;
    if ( (_DWORD)v7 && (v27 = (__int64)((v7 >> 1) + v26 * v5) / (int)v7, v27 <= 0x7FFFFFFF) )
    {
      if ( v25 <= -1 )
        LODWORD(v27) = -(int)v27;
    }
    else
    {
      LODWORD(v27) = 0x80000000;
      if ( v25 > -1 )
        LODWORD(v27) = 0x7FFFFFFF;
    }
    *((_DWORD *)a1 + 1) = v27 + v20;
    v28 = ((DWORD2(v8) - (int)v8) >> 31) & 0xFFFFFFFE;
    v29 = v8 - DWORD2(v8);
    if ( (int)v8 - DWORD2(v8) < 0 )
      v29 = DWORD2(v8) - v8;
    if ( (_DWORD)v7 && (v30 = (__int64)((v7 >> 1) + v29 * v5) / (int)v7, v31 = v30, v30 <= 0x7FFFFFFF) )
    {
      if ( v28 <= -1 )
        v31 = -(int)v30;
    }
    else
    {
      v31 = 0x80000000;
      if ( v28 > -1 )
        v31 = 0x7FFFFFFF;
    }
    v32 = v31 + *(_DWORD *)a1;
    v33 = ((HIDWORD(v8) - DWORD1(v8)) >> 31) & 0xFFFFFFFE;
    v34 = DWORD1(v8) - HIDWORD(v8);
    *((_DWORD *)a1 + 2) = v32;
    if ( HIDWORD(v8) - DWORD1(v8) > 0 )
      v34 = HIDWORD(v8) - DWORD1(v8);
    if ( (_DWORD)v7 && (v35 = (__int64)((v7 >> 1) + v34 * v5) / (__int64)v7, v35 <= 0x7FFFFFFF) )
    {
      v10 = (__int64)((v7 >> 1) + v34 * v5) / (__int64)v7;
      if ( v33 <= -1 )
        v10 = -(int)v35;
    }
    else if ( v33 > -1 )
    {
      v10 = 0x7FFFFFFF;
    }
    *((_DWORD *)a1 + 3) = v10 + *((_DWORD *)a1 + 1);
  }
  return a1;
}
