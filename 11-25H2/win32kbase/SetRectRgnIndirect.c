/*
 * XREFs of SetRectRgnIndirect @ 0x140014F50
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x1400123FC (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x1400130C8 (-RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetRectRgnIndirect(HRGN a1, signed int *a2)
{
  signed int v2; // r14d
  signed int v3; // esi
  signed int v4; // ebx
  signed int v5; // r15d
  struct REGION_CORE *v6; // rdx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // r9d
  struct REGION_CORE *v10; // r15
  char *v11; // rbx
  _DWORD *v12; // rdx
  char *v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v16; // rax
  struct SCAN *v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  struct SCAN *pScan_mut; // rax
  _DWORD *v21; // rdx
  struct REGION_CORE *v22[7]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v23; // [rsp+88h] [rbp+1Fh] BYREF

  v2 = a2[3];
  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, a1, 0, 0);
  v6 = v22[0];
  v7 = 0;
  if ( v22[0] )
  {
    *(_QWORD *)&v23 = __PAIR64__(v4, v5);
    v8 = v5;
    *((_QWORD *)&v23 + 1) = __PAIR64__(v2, v3);
    v9 = v4;
    if ( ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == -134217728)
      && ((v2 & 0xF8000000) == 0 || (v2 & 0xF8000000) == 0xF8000000)
      && ((v3 & 0xF8000000) == 0 || (v3 & 0xF8000000) == 0xF8000000)
      && ((v4 & 0xF8000000) == 0 || (v4 & 0xF8000000) == 0xF8000000) )
    {
      if ( v5 > v3 )
      {
        v8 = v3;
        LODWORD(v23) = v3;
        v3 = v5;
        DWORD2(v23) = v5;
      }
      if ( v4 > v2 )
      {
        v9 = v2;
        DWORD1(v23) = v2;
        v2 = v4;
        HIDWORD(v23) = v4;
      }
      v10 = qword_1402A10B0;
      if ( qword_1402A10B0 )
      {
        v13 = (char *)v22[0] + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v10 + 8, 2LL);
        v14 = *(_QWORD *)v10;
        (*(void (__fastcall **)(char *, __int128 *))(*(_QWORD *)v10 + 176LL))(v13, &v23);
        if ( !(*(unsigned int (__fastcall **)(char *))(v14 + 216))(v13) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v13, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx((char *)v10 + 8, 2LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v11 = (char *)v22[0] + 24;
        if ( v8 == v3 || v9 == v2 )
        {
          if ( qword_1402A10B0 )
          {
            Win32kRS::RegionCore_set_to_null_scan((Win32kRS *)v11, v22[0]);
          }
          else
          {
            v19 = *((_QWORD *)v22[0] + 4);
            *((_QWORD *)v22[0] + 5) = 16LL;
            if ( v19 < 0x10 )
            {
              *((_QWORD *)v11 + 2) = v19;
              RustOnZeroSizedScanCallback();
              v10 = qword_1402A10B0;
            }
            *((_DWORD *)v11 + 6) = 1;
            *(_OWORD *)(v11 + 28) = 0LL;
            if ( v10 )
              pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v11, v6);
            else
              pScan_mut = *(struct SCAN **)v11;
            *(_DWORD *)pScan_mut = 0;
            *((_DWORD *)pScan_mut + 1) = 0x80000000;
            *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
          }
        }
        else
        {
          *(_OWORD *)((char *)v22[0] + 52) = v23;
          if ( *((_DWORD *)v11 + 4) == 56 )
          {
            v12 = *(_DWORD **)v11;
            v12[2] = DWORD1(v23);
            v21 = (_DWORD *)((char *)v12 + (unsigned int)(4 * *v12 + 16));
            v21[1] = DWORD1(v23);
            v21[2] = HIDWORD(v23);
            v21[3] = v23;
            v21[4] = DWORD2(v23);
            *(_DWORD *)((char *)v21 + (unsigned int)(4 * *v21 + 16) + 4) = HIDWORD(v23);
          }
          else
          {
            v16 = *((_QWORD *)v11 + 1);
            *((_QWORD *)v11 + 2) = 56LL;
            if ( v16 < 0x38 )
            {
              *((_QWORD *)v11 + 2) = v16;
              RustOnZeroSizedScanCallback();
              v10 = qword_1402A10B0;
            }
            *((_DWORD *)v11 + 6) = 3;
            if ( v10 )
              v17 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v11, v6);
            else
              v17 = *(struct SCAN **)v11;
            *(_DWORD *)v17 = 0;
            *((_DWORD *)v17 + 1) = 0x80000000;
            *((_DWORD *)v17 + 2) = DWORD1(v23);
            *((_DWORD *)v17 + 3) = 0;
            *((_DWORD *)v17 + 4) = 2;
            *((_DWORD *)v17 + 5) = DWORD1(v23);
            *((_DWORD *)v17 + 6) = HIDWORD(v23);
            *((_DWORD *)v17 + 7) = v23;
            *((_DWORD *)v17 + 8) = DWORD2(v23);
            *((_DWORD *)v17 + 9) = 2;
            v18 = (unsigned int)(4 * *((_DWORD *)v17 + 4) + 16);
            *(_DWORD *)((char *)v17 + v18 + 16) = 0;
            *(_DWORD *)((char *)v17 + v18 + 20) = HIDWORD(v23);
            *(_QWORD *)((char *)v17 + v18 + 24) = 0x7FFFFFFFLL;
          }
        }
      }
      v7 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v22);
  return v7;
}
