/*
 * XREFs of ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180019AC0
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180029070 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180029304 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800AC568 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall CAudioIdentifier::EscapeIdentifierString(__int64 *a1)
{
  const wchar_t *v1; // rbx
  int v3; // esi
  unsigned __int64 v4; // rdi
  wchar_t *i; // rax
  __int64 v6; // rax
  const wchar_t *v7; // rbx
  int v8; // esi
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  wchar_t *j; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // r14d
  int v15; // edx
  __int64 v16; // r15
  const wchar_t *v17; // rbx
  unsigned __int64 v18; // rbp
  wchar_t *v19; // rax
  void *v20; // rcx
  wchar_t *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // r14d
  int v25; // edx
  __int64 v26; // r15
  const wchar_t *v27; // rbx
  unsigned __int64 v28; // rsi
  wchar_t *v29; // rax
  wchar_t *v30; // rdi
  __int64 v31; // rax
  int v32; // esi
  int v33; // ebp

  v1 = (const wchar_t *)*a1;
  v3 = 0;
  v4 = *a1 + 2LL * *(int *)(*a1 - 16);
  if ( *a1 < v4 )
  {
    do
    {
      for ( i = wcsstr(v1, L"%"); i; i = wcsstr(i + 1, L"%") )
      {
        v1 = i + 1;
        ++v3;
      }
      if ( v1 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( v1[v6] );
      }
      else
      {
        LODWORD(v6) = 0;
      }
      v1 += (int)v6 + 1;
    }
    while ( (unsigned __int64)v1 < v4 );
    if ( v3 > 0 )
    {
      v13 = *(int *)(*a1 - 16);
      v14 = v13 + v3;
      v15 = v13 + v3;
      if ( (int)v13 + v3 <= (int)v13 )
        v15 = *(_DWORD *)(*a1 - 16);
      if ( ((*(_DWORD *)(*a1 - 12) - v15) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v15);
      v16 = *a1;
      v17 = (const wchar_t *)*a1;
      v18 = *a1 + 2 * v13;
      if ( *a1 < v18 )
      {
        do
        {
          while ( 1 )
          {
            v19 = wcsstr(v17, L"%");
            v21 = v19;
            if ( !v19 )
              break;
            v17 = v19 + 2;
            v32 = v13 - (((__int64)v19 - v16) >> 1) - 1;
            if ( 2LL * v32 )
            {
              if ( v19 == (wchar_t *)-4LL || v19 == (wchar_t *)-2LL )
              {
LABEL_48:
                *(_DWORD *)_o__errno(v20) = 22;
                invalid_parameter_noinfo();
                ATL::AtlThrowImpl(-2147024809);
              }
              memmove_0(v19 + 2, v19 + 1, 2LL * v32);
            }
            *(_DWORD *)v21 = *(_DWORD *)L"%%";
            LODWORD(v13) = v13 + 1;
            v21[v32 + 2] = 0;
          }
          if ( v17 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( v17[v22] );
          }
          else
          {
            LODWORD(v22) = 0;
          }
          v17 += (int)v22 + 1;
        }
        while ( (unsigned __int64)v17 < v18 );
      }
      if ( v14 < 0 || v14 > *(_DWORD *)(*a1 - 12) )
        goto LABEL_57;
      *(_DWORD *)(*a1 - 16) = v14;
      *(_WORD *)(*a1 + 2LL * v14) = 0;
    }
  }
  v7 = (const wchar_t *)*a1;
  v8 = 0;
  result = *(int *)(*a1 - 16);
  v10 = *a1 + 2 * result;
  if ( *a1 < v10 )
  {
    do
    {
      for ( j = wcsstr(v7, L"|"); j; j = wcsstr(j + 1, L"|") )
      {
        v7 = j + 1;
        ++v8;
      }
      if ( v7 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v7[v12] );
      }
      else
      {
        LODWORD(v12) = 0;
      }
      result = (unsigned int)(v12 + 1);
      v7 += (int)result;
    }
    while ( (unsigned __int64)v7 < v10 );
    if ( v8 > 0 )
    {
      v23 = *(int *)(*a1 - 16);
      v24 = v23 + v8;
      v25 = v23 + v8;
      if ( (int)v23 + v8 <= (int)v23 )
        v25 = *(_DWORD *)(*a1 - 16);
      if ( ((*(_DWORD *)(*a1 - 12) - v25) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v25);
      v26 = *a1;
      v27 = (const wchar_t *)*a1;
      v28 = *a1 + 2 * v23;
      if ( *a1 < v28 )
      {
        do
        {
          while ( 1 )
          {
            v29 = wcsstr(v27, L"|");
            v30 = v29;
            if ( !v29 )
              break;
            v20 = v29 + 2;
            v33 = v23 - (((__int64)v29 - v26) >> 1) - 1;
            if ( 2LL * v33 )
            {
              if ( v29 == (wchar_t *)-4LL || v29 == (wchar_t *)-2LL )
                goto LABEL_48;
              memmove_0(v20, v29 + 1, 2LL * v33);
            }
            v27 = v30 + 2;
            *(_DWORD *)v30 = *(_DWORD *)L"%b";
            LODWORD(v23) = v23 + 1;
            v30[v33 + 2] = 0;
          }
          if ( v27 )
          {
            v31 = -1LL;
            do
              ++v31;
            while ( v27[v31] );
          }
          else
          {
            LODWORD(v31) = 0;
          }
          v27 += (int)v31 + 1;
        }
        while ( (unsigned __int64)v27 < v28 );
      }
      if ( v24 >= 0 && v24 <= *(_DWORD *)(*a1 - 12) )
      {
        *(_DWORD *)(*a1 - 16) = v24;
        result = *a1;
        *(_WORD *)(*a1 + 2LL * v24) = 0;
        return result;
      }
LABEL_57:
      ATL::AtlThrowImpl(-2147024809);
    }
  }
  return result;
}
