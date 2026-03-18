/*
 * XREFs of ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DBAF8
 * Callers:
 *     NtUserGetDwmCursorShape @ 0x1402977E0 (NtUserGetDwmCursorShape.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1402DB8BC (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     GreGetBitmapBits @ 0x14030EDA8 (GreGetBitmapBits.c)
 */

void __fastcall CursorApiRouter::GetTelemetryInfo(CursorApiRouter *this, struct CursorTelemetryInfo *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r9
  Gre::Base *v22; // rcx
  __int128 v23; // xmm1
  __int16 v24; // ax
  __int64 v25; // rcx
  unsigned int BitmapBits; // eax
  unsigned int v27; // esi
  __int64 v28; // rax
  void *v29; // r14
  Gre::Base *v30; // rcx
  __m128i v31; // xmm2
  __int128 v32; // xmm0
  __m128i v33; // xmm1
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rsi
  unsigned int *v36; // rax
  unsigned int *v37; // r15
  struct tagBITMAP v38; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  _OWORD v43[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+90h] [rbp-70h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  _OWORD v47[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+160h] [rbp+60h] BYREF

  memset(v47, 0, sizeof(v47));
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  *(_OWORD *)a2 = 0u;
  v3 = v43[0];
  *((_OWORD *)a2 + 1) = 0u;
  v4 = v43[1];
  *((_OWORD *)a2 + 2) = v3;
  v5 = v43[2];
  *((_OWORD *)a2 + 3) = v4;
  v6 = v44;
  *((_OWORD *)a2 + 4) = v5;
  v7 = v45;
  *((_OWORD *)a2 + 5) = v6;
  *((_OWORD *)a2 + 6) = v7;
  v8 = v47[0];
  *((_OWORD *)a2 + 7) = v46;
  v9 = v47[1];
  *((_OWORD *)a2 + 8) = v8;
  v10 = v47[2];
  *((_OWORD *)a2 + 9) = v9;
  v11 = v47[3];
  *((_OWORD *)a2 + 10) = v10;
  v12 = v47[4];
  *((_OWORD *)a2 + 11) = v11;
  v13 = v47[5];
  v14 = v48;
  *((_OWORD *)a2 + 12) = v12;
  *((_OWORD *)a2 + 13) = v13;
  *((_QWORD *)a2 + 28) = v14;
  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_BYTE *)a2 + 4) = *((_BYTE *)this + 12);
  *((_BYTE *)a2 + 5) = *((_BYTE *)this + 13);
  *((_BYTE *)a2 + 6) = *((_BYTE *)this + 14);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 7);
  *((_BYTE *)a2 + 24) = *((_DWORD *)this + 8) == 1;
  *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)((char *)this + 72);
  *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)this + 88);
  *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)this + 104);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 30);
  UserSessionState = W32GetUserSessionState((char *)a2 + 128, 128LL);
  v16 = *(_DWORD *)(UserSessionState + 66804) >> 14;
  LOBYTE(v16) = (*(_DWORD *)(UserSessionState + 66804) & 0x4000) != 0;
  *((_BYTE *)a2 + 25) = v16;
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v17) + 36328) )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 36328);
    *((_OWORD *)a2 + 5) = *(_OWORD *)(v20 + 80);
    *((_OWORD *)a2 + 6) = *(_OWORD *)(v20 + 96);
    *((_OWORD *)a2 + 7) = *(_OWORD *)(v20 + 112);
    *((_QWORD *)a2 + 16) = *(_QWORD *)(v20 + 128);
    v22 = *(Gre::Base **)(v20 + 88);
    if ( v22 )
    {
      memset(&v38, 0, sizeof(v38));
      if ( (unsigned int)GreExtGetObjectW(v22, 32LL, &v38, v21) )
      {
        v23 = *(_OWORD *)&v38.bmPlanes;
        v24 = _mm_cvtsi128_si32(*(__m128i *)&v38.bmPlanes);
        *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)&v38.bmType;
        *(_OWORD *)((char *)a2 + 152) = v23;
        if ( v24 == 1 && v38.bmBitsPixel == 1 )
        {
          v25 = *(_QWORD *)(v20 + 88);
          v49 = 0;
          BitmapBits = GreGetBitmapBits(v25, 0LL, 0LL, &v49);
          v27 = BitmapBits;
          if ( BitmapBits )
          {
            v28 = Win32AllocPoolZInit(BitmapBits, 1129607282LL);
            v29 = (void *)v28;
            if ( v28 )
            {
              if ( (unsigned int)GreGetBitmapBits(*(_QWORD *)(v20 + 88), v27, v28, &v49) == v27 )
              {
                *((_QWORD *)a2 + 21) = v29;
                *((_DWORD *)a2 + 44) = v27;
              }
              else
              {
                Win32FreePool(v29);
              }
            }
          }
        }
      }
    }
    v30 = *(Gre::Base **)(v20 + 96);
    if ( v30 )
    {
      memset(&v38, 0, sizeof(v38));
      if ( (unsigned int)GreExtGetObjectW(v30, 32LL, &v38, v21) )
      {
        v31 = *(__m128i *)&v38.bmType;
        v32 = *(_OWORD *)&v38.bmPlanes;
        v33 = *(__m128i *)&v38.bmType;
        *(_OWORD *)((char *)a2 + 184) = *(_OWORD *)&v38.bmType;
        *(_OWORD *)((char *)a2 + 200) = v32;
        v34 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v31, 8))
            * (unsigned __int64)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v33, 4));
        if ( v34 <= 0xFFFFFFFF )
        {
          v35 = 4LL * (unsigned int)v34;
          if ( v35 <= 0xFFFFFFFF )
          {
            v36 = (unsigned int *)Win32AllocPoolZInit((unsigned int)v35, 1129607282LL);
            v37 = v36;
            if ( v36 )
            {
              if ( CursorApiRouter::GetCursorColorPixels(*(HSURF *)(v20 + 96), &v38, v34, v36) )
              {
                *((_QWORD *)a2 + 27) = v37;
                *((_DWORD *)a2 + 56) = v35;
              }
              else
              {
                Win32FreePool(v37);
              }
            }
          }
        }
      }
    }
  }
}
