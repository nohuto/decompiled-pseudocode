/*
 * XREFs of DrvCollectDriverFailureData @ 0x1401F67E8
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401D7CA4 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DrvCollectDriverFailureData(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rbx
  int v9; // ecx
  const wchar_t *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r10d
  __int64 v16; // r11
  _OWORD *v17; // rcx
  __int64 v18; // r9
  __int128 v19; // xmm1
  __int16 *v20; // rcx
  __int16 v21; // di
  __int64 v22; // r9
  __int64 v23; // rsi

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = Win32AllocPoolImpl(64LL, 0x138uLL, 0x73726447u);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(result + 304) = a2;
    *(_DWORD *)result = *(_DWORD *)(v4 + 1148);
    *(_QWORD *)(result + 4) = 0LL;
    *(_DWORD *)(result + 12) = *(_DWORD *)(v4 + 1152);
    v9 = *(unsigned __int16 *)(v4 + 1168);
    *(_WORD *)(result + 16) = v9;
    *a1 = result;
    *(_DWORD *)(result + 20) = *(_DWORD *)(v4 + 1172);
    *(_DWORD *)(result + 24) = *(_DWORD *)(v4 + 1176);
    *(_DWORD *)(result + 28) = *(_DWORD *)(v4 + 1180);
    *(_QWORD *)(result + 32) = *(_QWORD *)(v4 + 1184);
    *(_QWORD *)(result + 40) = *(_QWORD *)(v4 + 1192);
    *(_DWORD *)(result + 48) = *(_DWORD *)(v4 + 1252);
    *(_DWORD *)(result + 52) = *(_DWORD *)(v4 + 1264);
    *(_DWORD *)(result + 56) = *(_DWORD *)(v4 + 1268);
    *(_QWORD *)(result + 64) = *(_QWORD *)(v4 + 1272);
    *(_QWORD *)(result + 72) = *(_QWORD *)(v4 + 1280);
    *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 1288);
    *(_QWORD *)(result + 88) = *(_QWORD *)(v4 + 1296);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v4 + 1304);
    *(_QWORD *)(result + 104) = *(_QWORD *)(v4 + 1312);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v4 + 1320);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v4 + 1328);
    *(_DWORD *)(result + 124) = *(_DWORD *)(v4 + 1332);
    *(_DWORD *)(result + 128) = *(_DWORD *)(v4 + 1336);
    *(_DWORD *)(result + 132) = *(_DWORD *)(v4 + 1340);
    *(_WORD *)(result + 136) = *(_WORD *)(W32GetUserSessionState(v9, v6, v7) + 68744);
    v10 = *(const wchar_t **)(v4 + 2976);
    if ( v10 )
      wcsncpy_s((wchar_t *)(v8 + 138), 0x50uLL, v10, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = Win32AllocPoolImpl(64LL, 0x1000uLL, 0x73726447u);
    v12 = v11;
    if ( v11 )
      a1[1] = v11;
    result = Win32AllocPoolImpl(64LL, 0x1000uLL, 0x73726447u);
    v13 = result;
    if ( result )
      a1[2] = result;
    v14 = *(_QWORD *)(v4 + 1184);
    v15 = 0;
    if ( v14 )
    {
      v16 = 0LL;
      do
      {
        if ( v16 >= 512 )
          break;
        result = v12;
        v17 = (_OWORD *)v14;
        v18 = 2LL;
        do
        {
          *(_OWORD *)result = *v17;
          *(_OWORD *)(result + 16) = v17[1];
          *(_OWORD *)(result + 32) = v17[2];
          *(_OWORD *)(result + 48) = v17[3];
          *(_OWORD *)(result + 64) = v17[4];
          *(_OWORD *)(result + 80) = v17[5];
          *(_OWORD *)(result + 96) = v17[6];
          result += 128LL;
          v19 = v17[7];
          v17 += 8;
          *(_OWORD *)(result - 16) = v19;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)result = *v17;
        *(_OWORD *)(result + 16) = v17[1];
        *(_OWORD *)(result + 32) = v17[2];
        if ( v13 )
        {
          if ( v15 < 4096 )
          {
            v20 = *(__int16 **)(v14 + 200);
            if ( v20 )
            {
              v21 = 32;
              v22 = v15;
              v23 = v15;
              while ( 1 )
              {
                result = v22 + 2;
                if ( (unsigned __int64)(v22 + 2) >= 0x1000 )
                  break;
                v15 += 2;
                *(_WORD *)(v22 + v13) = *v20;
                result = (unsigned __int16)*v20;
                if ( !(_WORD)result && !v21 )
                  break;
                v21 = *v20;
                v22 = v15;
                ++v20;
              }
              if ( v20 != *(__int16 **)(v14 + 200) )
              {
                result = v13 + 2 * v23;
                *(_QWORD *)(v12 + 200) = result;
              }
            }
          }
        }
        v14 = *(_QWORD *)(v14 + 128);
        ++v16;
        v12 += 304LL;
      }
      while ( v14 );
    }
  }
  return result;
}
