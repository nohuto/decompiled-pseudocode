/*
 * XREFs of SetRectRgnIndirect @ 0x14001DE10
 * Callers:
 *     <none>
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

__int64 __fastcall SetRectRgnIndirect(HRGN a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD **v11; // rax
  const struct REGION_CORE *v13; // rdi
  const struct BaseRustExports *v14; // rbx
  REGION_CORE *v15; // r14
  struct SCAN *pScan; // rax
  _DWORD *v17; // r8
  struct SCAN *v18; // rax
  char *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v24; // [rsp+38h] [rbp-48h]
  int v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF

  v2 = a2[3];
  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v22, a1, 0, 0);
  v6 = v22;
  v7 = 0;
  if ( v22 )
  {
    *(_QWORD *)&v26 = __PAIR64__(v4, v5);
    v8 = v5;
    *((_QWORD *)&v26 + 1) = __PAIR64__(v2, v3);
    v9 = v4;
    if ( ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == -134217728)
      && ((v2 & 0xF8000000) == 0 || (v2 & 0xF8000000) == 0xF8000000)
      && ((v3 & 0xF8000000) == 0 || (v3 & 0xF8000000) == 0xF8000000)
      && (((v4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      if ( (int)v5 > (int)v3 )
      {
        v8 = v3;
        LODWORD(v26) = v3;
        v3 = v5;
        DWORD2(v26) = v5;
      }
      if ( (int)v4 > (int)v2 )
      {
        v9 = v2;
        DWORD1(v26) = v2;
        v2 = v4;
        HIDWORD(v26) = v4;
      }
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        v13 = (const struct REGION_CORE *)(v22 + 24);
        v14 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
        (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                      + 136LL))(
          v22 + 24,
          &v26,
          v9,
          v8);
        RgnCaptureLiveMemoryDumpOnZeroSizedScan(v14, v13);
      }
      else
      {
        v15 = (REGION_CORE *)(v22 + 24);
        v21 = v22 + 24;
        if ( (_DWORD)v8 == v3 || (_DWORD)v9 == v2 )
        {
          RGNCOREOBJ::vSet((RGNCOREOBJ *)&v21);
        }
        else
        {
          *(_OWORD *)(v22 + 52) = v26;
          if ( REGION_CORE::get_sizeScan(v15) == 56 )
          {
            pScan = REGION_CORE::get_pScan(v15);
            *((_DWORD *)pScan + 2) = DWORD1(v26);
            v17 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
            v17[1] = DWORD1(v26);
            v17[2] = HIDWORD(v26);
            v17[3] = v26;
            v17[4] = DWORD2(v26);
            *(_DWORD *)((char *)v17 + (unsigned int)(4 * *v17 + 16) + 4) = HIDWORD(v26);
          }
          else
          {
            REGION_CORE::set_sizeScan(v15, 0x38u);
            *((_DWORD *)v15 + 6) = 3;
            v18 = REGION_CORE::get_pScan(v15);
            *(_DWORD *)v18 = 0;
            v19 = (char *)v18 + 16;
            *((_DWORD *)v18 + 1) = 0x80000000;
            *((_DWORD *)v18 + 2) = DWORD1(v26);
            *((_DWORD *)v18 + 3) = 0;
            *((_DWORD *)v18 + 4) = 2;
            *((_DWORD *)v18 + 5) = DWORD1(v26);
            *((_DWORD *)v18 + 6) = HIDWORD(v26);
            *((_DWORD *)v18 + 7) = v26;
            *((_DWORD *)v18 + 8) = DWORD2(v26);
            *((_DWORD *)v18 + 9) = 2;
            v20 = (unsigned int)(4 * *((_DWORD *)v18 + 4) + 16);
            *(_DWORD *)&v19[v20] = 0;
            *(_DWORD *)&v19[(unsigned int)v20 + 4] = HIDWORD(v26);
            *(_QWORD *)&v19[(unsigned int)v20 + 8] = 0x7FFFFFFFLL;
          }
        }
      }
      v6 = v22;
      v7 = 1;
    }
  }
  if ( !v25 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v22);
    v6 = v22;
  }
  if ( v6 )
    _InterlockedDecrement16((volatile signed __int16 *)(v6 + 12));
  v10 = v23;
  v11 = v24;
  if ( *(__int64 **)(v23 + 8) != &v23 || *v24 != &v23 )
    __fastfail(3u);
  *v24 = (_QWORD *)v23;
  *(_QWORD *)(v10 + 8) = v11;
  return v7;
}
