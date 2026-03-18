/*
 * XREFs of GreGetRegionData @ 0x140013A10
 * Callers:
 *     NtGdiGetRegionData @ 0x1400207A0 (NtGdiGetRegionData.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140026F18 (-RegionCore_sizeSave@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  const struct REGION_CORE *v5; // rdx
  __int64 v6; // r8
  struct REGION_CORE *v7; // rsi
  int v8; // edi
  _DWORD *v9; // r9
  ULONG v10; // ecx
  unsigned int v11; // ebp
  unsigned int v13; // eax
  unsigned int v14; // edx
  int i; // edx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned int **v20; // rdi
  unsigned int *v21; // rdx
  __int64 v22; // r10
  int v23; // r9d
  unsigned __int64 v24; // r11
  unsigned int v25; // edi
  int v26; // ebx
  _OWORD *v27; // r8
  __int64 v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-68h]
  _QWORD v30[8]; // [rsp+30h] [rbp-58h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, a1, 1, 0);
  v6 = v30[0];
  if ( !v30[0] )
  {
    v10 = 6;
    goto LABEL_5;
  }
  v7 = qword_1402A10B0;
  if ( qword_1402A10B0 )
  {
    v13 = Win32kRS::RegionCore_sizeSave((Win32kRS *)((v30[0] + 24LL) & -(__int64)(v30[0] != 0LL)), v5);
    v6 = v30[0];
    v14 = v13;
    v7 = qword_1402A10B0;
  }
  else
  {
    v8 = *(_DWORD *)(((v30[0] + 24LL) & -(__int64)(v30[0] != 0LL)) + 0x18);
    v9 = *(_DWORD **)((v30[0] + 24LL) & -(__int64)(v30[0] != 0LL));
    for ( i = 0; v8; --v8 )
    {
      i += *v9 >> 1;
      v9 = (_DWORD *)((char *)v9 + (unsigned int)(4 * *v9 + 16));
    }
    v14 = 16 * i;
  }
  v11 = v14 + 32;
  if ( a3 )
  {
    if ( v11 <= a2 )
    {
      *(_DWORD *)a3 = 32;
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v14 >> 4;
      *(_DWORD *)(a3 + 12) = v14;
      if ( v14 >> 4 )
      {
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v6 + 52);
      }
      else
      {
        *(_DWORD *)(a3 + 16) = 0;
        *(_DWORD *)(a3 + 20) = 0;
        *(_DWORD *)(a3 + 24) = 0;
        *(_DWORD *)(a3 + 28) = 0;
      }
      v16 = v14 >> 4;
      v17 = a3 + 32;
      v18 = v6 + 24;
      v19 = -v6;
      v20 = (unsigned int **)(v18 & -(__int64)(v19 != 0));
      if ( v7 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx((char *)v7 + 8, 2LL);
        (*(void (__fastcall **)(unsigned int **, __int64, __int64))(*(_QWORD *)v7 + 296LL))(v20, a3 + 32, v16);
        ExReleasePushLockSharedEx((char *)v7 + 8, 2LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v21 = *v20;
        v22 = 0LL;
        v23 = *(_DWORD *)((v18 & -(__int64)(v19 != 0)) + 0x18);
        while ( v23 )
        {
          --v23;
          DWORD1(v29) = v21[1];
          v24 = (unsigned __int64)*v21 >> 1;
          HIDWORD(v29) = v21[2];
          if ( v24 >= v16 - v22 )
            v24 = v16 - v22;
          v25 = 0;
          if ( v24 )
          {
            v26 = 0;
            v27 = (_OWORD *)(v17 + 16 * v22);
            do
            {
              v28 = v26;
              ++v25;
              ++v22;
              v26 += 2;
              LODWORD(v29) = v21[v28 + 3];
              DWORD2(v29) = v21[v28 + 4];
              *v27++ = v29;
            }
            while ( v25 < v24 );
          }
          v21 += *v21 + 4;
        }
      }
      goto LABEL_6;
    }
    v10 = 87;
LABEL_5:
    EngSetLastError(v10);
    v11 = 0;
  }
LABEL_6:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
  return v11;
}
