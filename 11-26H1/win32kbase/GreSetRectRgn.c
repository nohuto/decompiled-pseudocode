/*
 * XREFs of GreSetRectRgn @ 0x14001D700
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1400820A8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     SetEmptyRgn @ 0x140147480 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1401F09D0 (NtGdiSetRectRgn.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, signed int a2, unsigned int a3, signed int a4, unsigned int a5)
{
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  int v11; // r10d
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD **v14; // rax
  const struct REGION_CORE *v16; // rdi
  const struct BaseRustExports *v17; // rbx
  REGION_CORE *v18; // rsi
  struct SCAN *pScan; // rax
  _DWORD *v20; // r8
  struct SCAN *v21; // rax
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-60h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v27; // [rsp+38h] [rbp-48h]
  int v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v25, a1, 0, 0);
  v8 = v25;
  v9 = 0;
  if ( v25 )
  {
    v10 = a5;
    *(_QWORD *)&v29 = __PAIR64__(a3, a2);
    v11 = a2;
    *((_QWORD *)&v29 + 1) = __PAIR64__(a5, a4);
    v12 = a3;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
      && ((a4 & 0xF8000000) == 0 || (a4 & 0xF8000000) == 0xF8000000)
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      if ( a2 > a4 )
      {
        v11 = a4;
        LODWORD(v29) = a4;
        a4 = a2;
        DWORD2(v29) = a2;
      }
      if ( (int)a3 > (int)a5 )
      {
        v12 = a5;
        DWORD1(v29) = a5;
        v10 = a3;
        HIDWORD(v29) = a3;
      }
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v16 = (const struct REGION_CORE *)(v25 + 24);
        v17 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
        (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                      + 136LL))(
          v25 + 24,
          &v29,
          v10,
          v12);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v17, v16);
      }
      else
      {
        v18 = (REGION_CORE *)(v25 + 24);
        v24 = v25 + 24;
        if ( v11 == a4 || (_DWORD)v12 == (_DWORD)v10 )
        {
          RGNCOREOBJ::vSet((RGNCOREOBJ *)&v24);
        }
        else
        {
          *(_OWORD *)(v25 + 52) = v29;
          if ( REGION_CORE::get_sizeScan(v18) == 56 )
          {
            pScan = REGION_CORE::get_pScan(v18);
            *((_DWORD *)pScan + 2) = DWORD1(v29);
            v20 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
            v20[1] = DWORD1(v29);
            v20[2] = HIDWORD(v29);
            v20[3] = v29;
            v20[4] = DWORD2(v29);
            *(_DWORD *)((char *)v20 + (unsigned int)(4 * *v20 + 16) + 4) = HIDWORD(v29);
          }
          else
          {
            REGION_CORE::set_sizeScan(v18, 0x38u);
            *((_DWORD *)v18 + 6) = 3;
            v21 = REGION_CORE::get_pScan(v18);
            *(_DWORD *)v21 = 0;
            v22 = (char *)v21 + 16;
            *((_DWORD *)v21 + 1) = 0x80000000;
            *((_DWORD *)v21 + 2) = DWORD1(v29);
            *((_DWORD *)v21 + 3) = 0;
            *((_DWORD *)v21 + 4) = 2;
            *((_DWORD *)v21 + 5) = DWORD1(v29);
            *((_DWORD *)v21 + 6) = HIDWORD(v29);
            *((_DWORD *)v21 + 7) = v29;
            *((_DWORD *)v21 + 8) = DWORD2(v29);
            *((_DWORD *)v21 + 9) = 2;
            v23 = (unsigned int)(4 * *((_DWORD *)v21 + 4) + 16);
            *(_DWORD *)&v22[v23] = 0;
            *(_DWORD *)&v22[(unsigned int)v23 + 4] = HIDWORD(v29);
            *(_QWORD *)&v22[(unsigned int)v23 + 8] = 0x7FFFFFFFLL;
          }
        }
      }
      v8 = v25;
      v9 = 1;
    }
  }
  if ( !v28 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v25);
    v8 = v25;
  }
  if ( v8 )
    _InterlockedDecrement16((volatile signed __int16 *)(v8 + 12));
  v13 = v26;
  v14 = v27;
  if ( *(__int64 **)(v26 + 8) != &v26 || *v27 != &v26 )
    __fastfail(3u);
  *v27 = (_QWORD *)v26;
  *(_QWORD *)(v13 + 8) = v14;
  return v9;
}
