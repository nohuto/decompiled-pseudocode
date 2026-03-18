/*
 * XREFs of GreRectInRegion @ 0x1400D0D70
 * Callers:
 *     NtGdiRectInRegion @ 0x1400D0C50 (NtGdiRectInRegion.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400113C0 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, _DWORD *a2)
{
  unsigned int v3; // esi
  struct REGION_CORE *v4; // rdx
  struct REGION_CORE *v5; // r15
  REGION_CORE *v6; // rdi
  struct SCAN *pScan; // rax
  int v8; // r8d
  struct SCAN *v9; // rdx
  __int64 v10; // r9
  _DWORD *v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // edi
  _QWORD v15[8]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, a1, 1, 0);
  if ( a2 && v15[0] )
  {
    v5 = qword_1402A10B0;
    v6 = (REGION_CORE *)((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL));
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v5 + 8, 2LL);
      v13 = (*(__int64 (__fastcall **)(REGION_CORE *, _DWORD *))(*(_QWORD *)v5 + 120LL))(v6, a2);
      ExReleasePushLockSharedEx((char *)v5 + 8, 2LL);
      KeLeaveCriticalRegion();
      if ( v13 == 2 )
LABEL_17:
        v3 = 1;
    }
    else if ( *a2 < *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x24)
           && a2[2] > *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x1C)
           && a2[1] < *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x28)
           && a2[3] > *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x20) )
    {
      pScan = REGION_CORE::get_pScan(v6, v4);
      v8 = *((_DWORD *)v6 + 6);
      v9 = pScan;
      if ( v8 )
      {
        do
        {
          if ( a2[1] < *((_DWORD *)v9 + 2) )
            break;
          v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * *(_DWORD *)v9 + 16));
          --v8;
        }
        while ( v8 );
        while ( v8 && a2[3] > *((_DWORD *)v9 + 1) )
        {
          v10 = *(unsigned int *)v9;
          v11 = (_DWORD *)((char *)v9 + 12);
          v12 = (unsigned __int64)v9 + 4 * v10 + 12;
          if ( (unsigned __int64)v9 + 12 < v12 )
          {
            while ( *a2 >= v11[1] )
            {
              v11 += 2;
              if ( (unsigned __int64)v11 >= v12 )
                goto LABEL_15;
            }
            if ( a2[2] > *v11 )
              goto LABEL_17;
          }
LABEL_15:
          v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * v10 + 16));
          --v8;
        }
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v15);
  return v3;
}
