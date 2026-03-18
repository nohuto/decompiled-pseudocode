/*
 * XREFs of GreSetRectRgn @ 0x140014720
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     SetEmptyRgn @ 0x140105750 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1401C8030 (NtGdiSetRectRgn.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x1400130C8 (-RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, signed int a2, int a3, signed int a4, struct REGION_CORE *a5)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  int v10; // r10d
  int v11; // r8d
  struct REGION_CORE *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  struct REGION_CORE *v16; // rdx
  struct SCAN *v17; // rdx
  char *v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rdi
  unsigned __int64 v22; // rax
  bool v23; // zf
  struct SCAN *v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  struct SCAN *pScan_mut; // rax
  _DWORD *v28; // rdx
  _QWORD v29[7]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v30; // [rsp+88h] [rbp+17h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, a1, 0, 0);
  v8 = 0;
  if ( v29[0] )
  {
    v9 = (unsigned int)a5;
    *(_QWORD *)&v30 = __PAIR64__(a3, a2);
    v10 = a2;
    *((_QWORD *)&v30 + 1) = __PAIR64__((unsigned int)a5, a4);
    v11 = a3;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((unsigned int)a5 & 0xF8000000) == 0 || ((unsigned int)a5 & 0xF8000000) == 0xF8000000)
      && ((a4 & 0xF8000000) == 0 || (a4 & 0xF8000000) == 0xF8000000)
      && ((a3 & 0xF8000000) == 0 || (a3 & 0xF8000000) == 0xF8000000) )
    {
      if ( a2 > a4 )
      {
        v10 = a4;
        LODWORD(v30) = a4;
        a4 = a2;
        DWORD2(v30) = a2;
      }
      if ( a3 > (int)a5 )
      {
        v11 = (int)a5;
        DWORD1(v30) = (_DWORD)a5;
        v9 = (unsigned int)a3;
        HIDWORD(v30) = a3;
      }
      v12 = qword_1402A10B0;
      v13 = v29[0] + 24LL;
      if ( qword_1402A10B0 )
      {
        v18 = (char *)qword_1402A10B0 + 8;
        v19 = v13 & -(__int64)(v29[0] != 0LL);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v12 + 8, 2LL);
        v20 = *(_QWORD *)v12;
        (*(void (__fastcall **)(__int64, __int128 *))(v20 + 176))(v19, &v30);
        if ( !(*(unsigned int (__fastcall **)(__int64))(v20 + 216))(v19) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v19, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v18, 2LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v14 = -v29[0];
        v15 = v13 & -(__int64)(v29[0] != 0LL);
        if ( v10 == a4 || v11 == (_DWORD)v9 )
        {
          if ( qword_1402A10B0 )
          {
            Win32kRS::RegionCore_set_to_null_scan(
              (Win32kRS *)(v13 & -(__int64)(v29[0] != 0LL)),
              (struct REGION_CORE *)v9);
          }
          else
          {
            v26 = *(_QWORD *)((v13 & -(__int64)(v29[0] != 0LL)) + 8);
            *(_QWORD *)(v15 + 16) = 16LL;
            if ( v26 < 0x10 )
            {
              *(_QWORD *)(v15 + 16) = v26;
              RustOnZeroSizedScanCallback();
              v12 = qword_1402A10B0;
            }
            *(_DWORD *)(v15 + 24) = 1;
            *(_OWORD *)(v15 + 28) = 0LL;
            if ( v12 )
              pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v15, (struct REGION_CORE *)v9);
            else
              pScan_mut = *(struct SCAN **)v15;
            *(_DWORD *)pScan_mut = 0;
            *((_DWORD *)pScan_mut + 1) = 0x80000000;
            *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
          }
        }
        else
        {
          *(_OWORD *)((v13 & -(__int64)(v29[0] != 0LL)) + 0x1C) = v30;
          if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v13 & -(__int64)(v14 != 0))) == 56 )
          {
            if ( qword_1402A10B0 )
              v17 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v15, v16);
            else
              v17 = *(struct SCAN **)v15;
            *((_DWORD *)v17 + 2) = DWORD1(v30);
            v28 = (_DWORD *)((char *)v17 + (unsigned int)(4 * *(_DWORD *)v17 + 16));
            v28[1] = DWORD1(v30);
            v28[2] = HIDWORD(v30);
            v28[3] = v30;
            v28[4] = DWORD2(v30);
            *(_DWORD *)((char *)v28 + (unsigned int)(4 * *v28 + 16) + 4) = HIDWORD(v30);
          }
          else
          {
            if ( qword_1402A10B0 )
            {
              Win32kRS::RegionCore_set_sizeScan((Win32kRS *)v15, (struct REGION_CORE *)0x38);
            }
            else
            {
              v22 = *(_QWORD *)(v15 + 8);
              *(_QWORD *)(v15 + 16) = 56LL;
              if ( v22 < 0x38 )
              {
                *(_QWORD *)(v15 + 16) = v22;
                RustOnZeroSizedScanCallback();
              }
            }
            v23 = qword_1402A10B0 == 0LL;
            *(_DWORD *)(v15 + 24) = 3;
            if ( v23 )
              v24 = *(struct SCAN **)v15;
            else
              v24 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v15, v16);
            *(_DWORD *)v24 = 0;
            *((_DWORD *)v24 + 1) = 0x80000000;
            *((_DWORD *)v24 + 2) = DWORD1(v30);
            *((_DWORD *)v24 + 3) = 0;
            *((_DWORD *)v24 + 4) = 2;
            *((_DWORD *)v24 + 5) = DWORD1(v30);
            *((_DWORD *)v24 + 6) = HIDWORD(v30);
            *((_DWORD *)v24 + 7) = v30;
            *((_DWORD *)v24 + 8) = DWORD2(v30);
            *((_DWORD *)v24 + 9) = 2;
            v25 = (unsigned int)(4 * *((_DWORD *)v24 + 4) + 16);
            *(_DWORD *)((char *)v24 + v25 + 16) = 0;
            *(_DWORD *)((char *)v24 + v25 + 20) = HIDWORD(v30);
            *(_QWORD *)((char *)v24 + v25 + 24) = 0x7FFFFFFFLL;
          }
        }
      }
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
  return v8;
}
