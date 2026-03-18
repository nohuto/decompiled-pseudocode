/*
 * XREFs of _CombineModeList @ 0x1402DA420
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401D26C0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1402D9A60 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
{
  __int64 v5; // r13
  unsigned int *v6; // r11
  unsigned int v7; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  __int64 v12; // rcx
  _DWORD *v13; // r15
  char v14; // r10
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  void *v19; // rdi
  unsigned int v21; // edi
  unsigned int v22; // ebx
  unsigned int *v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // r8d
  unsigned int v28; // ebp
  unsigned int v29; // r13d
  __int64 v30; // r15
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned int v34; // r9d
  _DWORD *v35; // r8
  __int64 v36; // r10
  __int64 v37; // rdx
  int v38; // [rsp+50h] [rbp-58h]
  unsigned int v39; // [rsp+54h] [rbp-54h]
  unsigned int v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]

  v5 = a3;
  v6 = a4;
  v7 = -1;
  v38 = -1;
  v39 = -1;
  if ( !(_DWORD)v5 )
    return 0LL;
  v10 = *a1;
  v11 = *a1;
  v40 = *a1;
  if ( a5 )
  {
    v21 = 0;
    v22 = 0;
    v23 = v6;
    v24 = v5;
    do
    {
      v25 = *v23;
      v23 += 11;
      v26 = v22;
      v22 = *(v23 - 10);
      if ( v25 <= v21 )
        v25 = v21;
      v21 = v25;
      if ( v22 <= v26 )
        v22 = v26;
      --v24;
    }
    while ( v24 );
    v27 = -1;
    v28 = 0;
    v11 = 0;
    if ( v10 )
    {
      v29 = -1;
      do
      {
        v30 = (__int64)*a2 + 44 * v28;
        if ( v27 == -1 || (v31 = *(_DWORD *)v30, *(_DWORD *)v30 > v27) )
        {
          v31 = *(_DWORD *)v30;
          v38 = *(_DWORD *)v30;
        }
        if ( v29 == -1 || (v32 = *(_DWORD *)(v30 + 4), v32 > v29) )
        {
          v29 = *(_DWORD *)(v30 + 4);
          v32 = v29;
        }
        if ( (*(_DWORD *)(v30 + 40) & 0x40) != 0 || v32 <= v22 && v31 <= v21 )
        {
          if ( v28 != v11 )
          {
            if ( v28 <= v11 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2803;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i > j", 2803LL, 0LL, 0LL, 0LL, 0LL);
            }
            v33 = (__int64)*a2 + 44 * v11;
            *(_OWORD *)v33 = *(_OWORD *)v30;
            *(_OWORD *)(v33 + 16) = *(_OWORD *)(v30 + 16);
            *(_QWORD *)(v33 + 32) = *(_QWORD *)(v30 + 32);
            *(_DWORD *)(v33 + 40) = *(_DWORD *)(v30 + 40);
          }
          ++v11;
        }
        v27 = v38;
        ++v28;
      }
      while ( v28 < *a1 );
      v10 = v40;
      v6 = a4;
      v39 = v29;
      LODWORD(v5) = a3;
    }
    v7 = v38;
    *a1 = v11;
  }
  if ( (_DWORD)v5 )
  {
    v12 = (unsigned int)v5;
    v13 = v6 + 8;
    v41 = (unsigned int)v5;
    do
    {
      v14 = 0;
      if ( (v13[2] & 0x40) != 0 || *(v13 - 8) <= v7 && *(v13 - 7) <= v39 )
      {
        v16 = 0;
        if ( *a1 )
        {
          do
          {
            v17 = (__int64)*a2 + 44 * v16;
            if ( *(v13 - 8) == *(_DWORD *)v17
              && *(_QWORD *)(v13 - 7) == *(_QWORD *)(v17 + 4)
              && *(v13 - 5) == *(_DWORD *)(v17 + 12)
              && *(v13 - 1) == *(_DWORD *)(v17 + 28)
              && *v13 == *(_DWORD *)(v17 + 32)
              && *(v13 - 2) == *(_DWORD *)(v17 + 24)
              && ((*((_BYTE *)v13 + 8) ^ *(_BYTE *)(v17 + 40)) & 0x10) == 0 )
            {
              if ( *(v13 - 4) != *(_DWORD *)(v17 + 16) || *(v13 - 3) != *(_DWORD *)(v17 + 20) )
              {
                WdLogSingleEntry4(
                  7LL,
                  (unsigned int)*(v13 - 8),
                  (unsigned int)*(v13 - 7),
                  (int)*(v13 - 6),
                  (unsigned int)*(v13 - 5));
                WdLogGlobalForLineNumber = 2855;
                WdLogSingleEntry4(
                  7LL,
                  (unsigned int)*(v13 - 4),
                  (unsigned int)*(v13 - 3),
                  *(unsigned int *)(v17 + 16),
                  *(unsigned int *)(v17 + 20));
                WdLogGlobalForLineNumber = 2861;
              }
              UpgradeDispModeFlags(v17, (__int64)(v13 - 8));
              v14 = 1;
            }
            ++v16;
          }
          while ( v16 < *a1 );
          v12 = v41;
        }
        v15 = v13[2] & 0x1FF;
        if ( !v14 )
        {
          ++v11;
          v15 |= 0x200u;
        }
      }
      else
      {
        v15 = v13[2] & 0x1FF;
      }
      v7 = v38;
      v13[2] = v15;
      v13 += 11;
      v41 = --v12;
    }
    while ( v12 );
    LODWORD(v5) = a3;
    v10 = v40;
    v6 = a4;
  }
  if ( v11 > v10 )
  {
    v18 = 44LL * v11;
    if ( !is_mul_ok(v11, 0x2CuLL) )
      v18 = -1LL;
    v19 = (void *)operator new[](v18, 0x4B677844u, 256LL);
    if ( !v19 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 2903;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for the combined mode list for %I64d of D3DKMT_DISPLAYMODE.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( *a2 )
    {
      memmove(v19, *a2, 44LL * *a1);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*a2);
    }
    v6 = a4;
    *a2 = v19;
  }
  v34 = *a1;
  if ( *a1 < v11 )
  {
    if ( (_DWORD)v5 )
    {
      v35 = v6 + 10;
      v36 = (unsigned int)v5;
      do
      {
        if ( *v35 >= 0x200u )
        {
          *v35 &= 0x1FFu;
          v37 = (__int64)*a2 + 44 * v34++;
          *(_OWORD *)v37 = *(_OWORD *)(v35 - 10);
          *(_OWORD *)(v37 + 16) = *(_OWORD *)(v35 - 6);
          *(_QWORD *)(v37 + 32) = *((_QWORD *)v35 - 1);
          *(_DWORD *)(v37 + 40) = *v35;
        }
        v35 += 11;
        --v36;
      }
      while ( v36 );
    }
    if ( v11 != v34 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2942;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TotalModes == j", 2942LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  *a1 = v11;
  return 0LL;
}
