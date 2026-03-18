/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x140014B10
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400ABDF8 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x1400130C8 (-RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct REGION_CORE *a2)
{
  unsigned int v2; // edi
  signed int v4; // esi
  signed int v5; // ebx
  signed int v6; // r14d
  signed int v7; // r15d
  struct REGION_CORE *v8; // rdx
  int v9; // r8d
  int v10; // r9d
  struct REGION_CORE *v11; // r15
  char *v12; // rbx
  struct REGION_CORE *v13; // rdx
  struct SCAN *v14; // rdx
  char *v15; // r14
  __int64 v16; // rsi
  __int64 RectRgnIndirect; // rax
  __int64 v19; // rsi
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  bool v22; // zf
  struct SCAN *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  struct SCAN *pScan_mut; // rax
  _DWORD *v27; // rdx
  struct REGION_CORE *v28[7]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v29; // [rsp+90h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( *a1 )
  {
    v4 = *((_DWORD *)a2 + 2);
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 3);
    v7 = *(_DWORD *)a2;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v28, *a1, 0, 0);
    v8 = v28[0];
    if ( v28[0] )
    {
      *(_QWORD *)&v29 = __PAIR64__(v5, v7);
      *((_QWORD *)&v29 + 1) = __PAIR64__(v6, v4);
      v9 = v7;
      v10 = v5;
      if ( ((v7 & 0xF8000000) == -134217728 || (v7 & 0xF8000000) == 0)
        && ((v6 & 0xF8000000) == 0 || (v6 & 0xF8000000) == 0xF8000000)
        && ((v4 & 0xF8000000) == 0 || (v4 & 0xF8000000) == 0xF8000000)
        && ((v5 & 0xF8000000) == 0 || (v5 & 0xF8000000) == 0xF8000000) )
      {
        if ( v7 > v4 )
        {
          v9 = v4;
          LODWORD(v29) = v4;
          v4 = v7;
          DWORD2(v29) = v7;
        }
        if ( v5 > v6 )
        {
          v10 = v6;
          DWORD1(v29) = v6;
          v6 = v5;
          HIDWORD(v29) = v5;
        }
        v11 = qword_1402A10B0;
        if ( qword_1402A10B0 )
        {
          v15 = (char *)v28[0] + 24;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx((char *)v11 + 8, 2LL);
          v16 = *(_QWORD *)v11;
          (*(void (__fastcall **)(char *, __int128 *))(*(_QWORD *)v11 + 176LL))(v15, &v29);
          if ( !(*(unsigned int (__fastcall **)(char *))(v16 + 216))(v15) )
            DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v15, 0LL, 0LL, 0LL, 0LL, 0);
          ExReleasePushLockSharedEx((char *)v11 + 8, 2LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          v12 = (char *)v28[0] + 24;
          if ( v9 == v4 || v10 == v6 )
          {
            if ( qword_1402A10B0 )
            {
              Win32kRS::RegionCore_set_to_null_scan((Win32kRS *)v12, v28[0]);
            }
            else
            {
              v25 = *((_QWORD *)v28[0] + 4);
              *((_QWORD *)v28[0] + 5) = 16LL;
              if ( v25 < 0x10 )
              {
                *((_QWORD *)v12 + 2) = v25;
                RustOnZeroSizedScanCallback();
                v11 = qword_1402A10B0;
              }
              *((_DWORD *)v12 + 6) = 1;
              *(_OWORD *)(v12 + 28) = 0LL;
              if ( v11 )
                pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v12, v8);
              else
                pScan_mut = *(struct SCAN **)v12;
              *(_DWORD *)pScan_mut = 0;
              *((_DWORD *)pScan_mut + 1) = 0x80000000;
              *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
            }
          }
          else
          {
            *(_OWORD *)((char *)v28[0] + 52) = v29;
            if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)v12) == 56 )
            {
              if ( qword_1402A10B0 )
                v14 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v12, v13);
              else
                v14 = *(struct SCAN **)v12;
              *((_DWORD *)v14 + 2) = DWORD1(v29);
              v27 = (_DWORD *)((char *)v14 + (unsigned int)(4 * *(_DWORD *)v14 + 16));
              v27[1] = DWORD1(v29);
              v27[2] = HIDWORD(v29);
              v27[3] = v29;
              v27[4] = DWORD2(v29);
              *(_DWORD *)((char *)v27 + (unsigned int)(4 * *v27 + 16) + 4) = HIDWORD(v29);
            }
            else
            {
              if ( qword_1402A10B0 )
              {
                Win32kRS::RegionCore_set_sizeScan((Win32kRS *)v12, (struct REGION_CORE *)0x38);
              }
              else
              {
                v21 = *((_QWORD *)v12 + 1);
                *((_QWORD *)v12 + 2) = 56LL;
                if ( v21 < 0x38 )
                {
                  *((_QWORD *)v12 + 2) = v21;
                  RustOnZeroSizedScanCallback();
                }
              }
              v22 = qword_1402A10B0 == 0LL;
              *((_DWORD *)v12 + 6) = 3;
              if ( v22 )
                v23 = *(struct SCAN **)v12;
              else
                v23 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v12, v13);
              *(_DWORD *)v23 = 0;
              *((_DWORD *)v23 + 1) = 0x80000000;
              *((_DWORD *)v23 + 2) = DWORD1(v29);
              *((_DWORD *)v23 + 3) = 0;
              *((_DWORD *)v23 + 4) = 2;
              *((_DWORD *)v23 + 5) = DWORD1(v29);
              *((_DWORD *)v23 + 6) = HIDWORD(v29);
              *((_DWORD *)v23 + 7) = v29;
              *((_DWORD *)v23 + 8) = DWORD2(v29);
              *((_DWORD *)v23 + 9) = 2;
              v24 = (unsigned int)(4 * *((_DWORD *)v23 + 4) + 16);
              *(_DWORD *)((char *)v23 + v24 + 16) = 0;
              *(_DWORD *)((char *)v23 + v24 + 20) = HIDWORD(v29);
              *(_QWORD *)((char *)v23 + v24 + 24) = 0x7FFFFFFFLL;
            }
          }
        }
        v2 = 1;
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v19 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  LOBYTE(v20) = 4;
  HmgSetOwner(v19, 0LL, v20);
  return 1LL;
}
