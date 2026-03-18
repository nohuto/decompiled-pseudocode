/*
 * XREFs of GreGetRegionData @ 0x1400103C0
 * Callers:
 *     NtGdiGetRegionData @ 0x1400102B0 (NtGdiGetRegionData.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  REGION_CORE *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD **v11; // rcx
  __int64 result; // rax
  ULONG v13; // ecx
  unsigned int *v14; // rdx
  int v15; // r10d
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  unsigned int v18; // r14d
  int v19; // ebx
  _OWORD *v20; // r8
  __int64 v21; // rcx
  int v22; // edi
  struct SCAN *pScan; // r8
  int i; // eax
  __int128 v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v28; // [rsp+40h] [rbp-30h]
  int v29; // [rsp+60h] [rbp-10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v26, a1, 1, 0);
  if ( !v26 )
  {
    v13 = 6;
    goto LABEL_18;
  }
  v5 = (REGION_CORE *)((v26 + 24) & -(__int64)(v26 != 0));
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v6 = (*(__int64 (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 248LL))(v5);
  }
  else
  {
    v22 = *(_DWORD *)(((v26 + 24) & -(__int64)(v26 != 0)) + 0x18);
    pScan = REGION_CORE::get_pScan(v5);
    for ( i = 0; v22; --v22 )
    {
      i += *(_DWORD *)pScan >> 1;
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    }
    v6 = 16 * i;
  }
  v7 = v6 + 32;
  if ( a3 )
  {
    if ( v7 <= a2 )
    {
      *(_DWORD *)a3 = 32;
      *(_DWORD *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = v6 >> 4;
      *(_DWORD *)(a3 + 12) = v6;
      if ( v6 >> 4 )
      {
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v26 + 52);
      }
      else
      {
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
      }
      v8 = v6 >> 4;
      v9 = a3 + 32;
      if ( WPP_MAIN_CB.Dpc.DeferredContext )
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 256LL))(
          (v26 + 24) & -(__int64)(v26 != 0),
          a3 + 32,
          (unsigned int)v8);
      }
      else
      {
        v14 = *(unsigned int **)((v26 + 24) & -(__int64)(v26 != 0));
        v15 = *(_DWORD *)(((v26 + 24) & -(__int64)(v26 != 0)) + 0x18);
        v16 = 0LL;
        while ( v15 )
        {
          --v15;
          DWORD1(v25) = v14[1];
          v17 = (unsigned __int64)*v14 >> 1;
          HIDWORD(v25) = v14[2];
          if ( v17 >= v8 - v16 )
            v17 = v8 - v16;
          v18 = 0;
          if ( v17 )
          {
            v19 = 0;
            v20 = (_OWORD *)(v9 + 16 * v16);
            do
            {
              v21 = v19;
              ++v18;
              ++v16;
              v19 += 2;
              LODWORD(v25) = v14[v21 + 3];
              DWORD2(v25) = v14[v21 + 4];
              *v20++ = v25;
            }
            while ( v18 < v17 );
          }
          v14 += *v14 + 4;
        }
      }
      goto LABEL_10;
    }
    v13 = 87;
LABEL_18:
    EngSetLastError(v13);
    v7 = 0;
  }
LABEL_10:
  if ( !v29 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v26);
  if ( v26 )
    _InterlockedDecrement16((volatile signed __int16 *)(v26 + 12));
  v10 = v27;
  v11 = v28;
  if ( *(__int64 **)(v27 + 8) != &v27 || *v28 != &v27 )
    __fastfail(3u);
  *v28 = (_QWORD *)v27;
  result = v7;
  *(_QWORD *)(v10 + 8) = v11;
  return result;
}
