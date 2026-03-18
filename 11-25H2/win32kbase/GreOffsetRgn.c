/*
 * XREFs of GreOffsetRgn @ 0x140014370
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140089AC0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 *     NtGdiOffsetRgn @ 0x14011A1E0 (NtGdiOffsetRgn.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z @ 0x14008BD58 (-RegionCore_iComplexity@Win32kRS@@YAJPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // esi
  struct REGION_CORE *v8; // rdi
  char *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ebx
  unsigned int *v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // r8
  __int128 v23; // [rsp+50h] [rbp-78h]
  _QWORD v24[8]; // [rsp+60h] [rbp-68h] BYREF
  int v25; // [rsp+E8h] [rbp+20h] BYREF
  int v26; // [rsp+ECh] [rbp+24h]

  v3 = a2;
  v4 = a3;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a1, 0, 0);
  v6 = v24[0];
  v7 = 0;
  if ( v24[0] )
  {
    v8 = qword_1402A10B0;
    v25 = v3;
    v26 = v4;
    if ( !qword_1402A10B0 )
    {
      if ( *(_DWORD *)(v24[0] + 48LL) != 1 )
      {
        v16 = *(int *)(v24[0] + 52LL);
        v17 = *(int *)(v24[0] + 60LL);
        v5 = *(int *)(v24[0] + 56LL);
        v18 = *(int *)(v24[0] + 64LL);
        if ( (int)v16 < (int)v17 && (int)v5 < (int)v18 )
        {
          if ( (unsigned __int64)(v3 + v16 + 0x80000000LL) > 0xFFFFFFFF
            || (unsigned __int64)(v18 + v4 + 0x80000000LL) > 0xFFFFFFFF
            || (v13 = v3 + v17, (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF)
            || (v14 = v4 + v5, DWORD2(v23) = v13, (unsigned __int64)(v14 + 0x80000000LL) > 0xFFFFFFFF)
            || (DWORD1(v23) = v14,
                (((_DWORD)v3 + (_DWORD)v16) & 0xF8000000) != 0
             && (((_DWORD)v3 + (_DWORD)v16) & 0xF8000000) != -134217728)
            || (((((_DWORD)v18 + (_DWORD)v4) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v13 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
            || (((v14 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
          {
            EngSetLastError(0x216u);
            goto LABEL_14;
          }
          LODWORD(v23) = v3 + v16;
          HIDWORD(v23) = v18 + v4;
          *(_OWORD *)(v24[0] + 52LL) = v23;
          v19 = *(_DWORD *)(v24[0] + 48LL);
          v20 = *(unsigned int **)(v24[0] + 24LL);
          while ( v19 )
          {
            v20[1] += v4;
            --v19;
            v20[2] += v4;
            v21 = *v20;
            if ( (_DWORD)v21 )
            {
              v22 = &v20[v21 + 3];
              do
              {
                *--v22 += v3;
                LODWORD(v21) = v21 - 1;
              }
              while ( (_DWORD)v21 );
            }
            v20 += *v20 + 4;
          }
          v5 = (__int64)&v20[-*(v20 - 1) - 5];
          *(_DWORD *)(v5 + 12) = 0x7FFFFFFF;
          *(_DWORD *)(*(_QWORD *)(v24[0] + 24LL) + 4LL) = 0x80000000;
          v6 = v24[0];
        }
      }
      goto LABEL_17;
    }
    v9 = (char *)qword_1402A10B0 + 8;
    v10 = (v24[0] + 24LL) & -(__int64)(v24[0] != 0LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 8, 2LL);
    v11 = *(_QWORD *)v8;
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(v11 + 136))(v10, &v25);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v11 + 216))(v10) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v10, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v9, 2LL);
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v6 = v24[0];
      v8 = qword_1402A10B0;
LABEL_17:
      if ( v8 )
      {
        v7 = Win32kRS::RegionCore_iComplexity(
               (Win32kRS *)((v6 + 24) & -(__int64)(v6 != 0)),
               (const struct REGION_CORE *)v5);
      }
      else if ( *(_DWORD *)(v6 + 48) == 1 )
      {
        v7 = 1;
      }
      else
      {
        LOBYTE(v7) = (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v6 + 24)) > 0x38;
        v7 += 2;
      }
    }
  }
LABEL_14:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
  return v7;
}
