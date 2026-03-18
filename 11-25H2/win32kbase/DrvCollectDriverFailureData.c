/*
 * XREFs of DrvCollectDriverFailureData @ 0x1401CCE70
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401B55F8 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DrvCollectDriverFailureData(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  const wchar_t *v10; // r8
  __int64 Pool2; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // r11
  _OWORD *v18; // rcx
  __int64 v19; // rdi
  __int128 v20; // xmm1
  __int16 *v21; // rcx
  __int64 v22; // rsi
  __int16 v23; // di

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = ExAllocatePool2(64LL, 312LL, 1936876615LL);
  v7 = result;
  if ( result )
  {
    *(_DWORD *)result = *(_DWORD *)(v4 + 1060);
    *(_DWORD *)(result + 12) = *(_DWORD *)(v4 + 1064);
    v8 = *(unsigned __int16 *)(v4 + 1080);
    *(_WORD *)(result + 16) = v8;
    *(_QWORD *)(result + 304) = a2;
    *a1 = result;
    *(_QWORD *)(result + 4) = 0LL;
    *(_DWORD *)(result + 20) = *(_DWORD *)(v4 + 1084);
    *(_DWORD *)(result + 24) = *(_DWORD *)(v4 + 1088);
    *(_DWORD *)(result + 28) = *(_DWORD *)(v4 + 1092);
    *(_QWORD *)(result + 32) = *(_QWORD *)(v4 + 1096);
    *(_QWORD *)(result + 40) = *(_QWORD *)(v4 + 1104);
    *(_DWORD *)(result + 48) = *(_DWORD *)(v4 + 1164);
    *(_DWORD *)(result + 52) = *(_DWORD *)(v4 + 1176);
    *(_DWORD *)(result + 56) = *(_DWORD *)(v4 + 1180);
    *(_QWORD *)(result + 64) = *(_QWORD *)(v4 + 1184);
    *(_QWORD *)(result + 72) = *(_QWORD *)(v4 + 1192);
    *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 1200);
    *(_QWORD *)(result + 88) = *(_QWORD *)(v4 + 1208);
    *(_QWORD *)(result + 96) = *(_QWORD *)(v4 + 1216);
    *(_QWORD *)(result + 104) = *(_QWORD *)(v4 + 1224);
    *(_QWORD *)(result + 112) = *(_QWORD *)(v4 + 1232);
    *(_DWORD *)(result + 120) = *(_DWORD *)(v4 + 1240);
    *(_DWORD *)(result + 124) = *(_DWORD *)(v4 + 1244);
    *(_DWORD *)(result + 128) = *(_DWORD *)(v4 + 1248);
    *(_DWORD *)(result + 132) = *(_DWORD *)(v4 + 1252);
    UserSessionState = W32GetUserSessionState(v8, v6);
    v10 = *(const wchar_t **)(v4 + 2896);
    *(_WORD *)(v7 + 136) = *(_WORD *)(UserSessionState + 68752);
    if ( v10 )
      wcsncpy_s((wchar_t *)(v7 + 138), 0x50uLL, v10, 0xFFFFFFFFFFFFFFFFuLL);
    Pool2 = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v12 = Pool2;
    if ( Pool2 )
      a1[1] = Pool2;
    result = ExAllocatePool2(64LL, 4096LL, 1936876615LL);
    v13 = result;
    if ( result )
      a1[2] = result;
    v14 = *(_QWORD *)(v4 + 1096);
    v15 = 0;
    if ( v14 )
    {
      v16 = 0LL;
      v17 = 0LL;
      do
      {
        if ( v16 >= 512 )
          break;
        result = v12;
        v18 = (_OWORD *)v14;
        v19 = 2LL;
        do
        {
          *(_OWORD *)result = *v18;
          *(_OWORD *)(result + 16) = v18[1];
          *(_OWORD *)(result + 32) = v18[2];
          *(_OWORD *)(result + 48) = v18[3];
          *(_OWORD *)(result + 64) = v18[4];
          *(_OWORD *)(result + 80) = v18[5];
          *(_OWORD *)(result + 96) = v18[6];
          result += 128LL;
          v20 = v18[7];
          v18 += 8;
          *(_OWORD *)(result - 16) = v20;
          --v19;
        }
        while ( v19 );
        *(_OWORD *)result = *v18;
        *(_OWORD *)(result + 16) = v18[1];
        *(_OWORD *)(result + 32) = v18[2];
        if ( v13 )
        {
          if ( v15 < 4096 )
          {
            v21 = *(__int16 **)(v14 + 200);
            if ( v21 )
            {
              v22 = v15;
              v23 = 32;
              for ( result = v15 + 2LL; result < 0x1000; result = v15 + 2LL )
              {
                v15 += 2;
                *(_WORD *)(v17 + v13) = *v21;
                v17 += 2LL;
                result = (unsigned __int16)*v21;
                if ( !(_WORD)result && !v23 )
                  break;
                v23 = *v21++;
              }
              if ( v21 != *(__int16 **)(v14 + 200) )
              {
                result = v13 + 2 * v22;
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
