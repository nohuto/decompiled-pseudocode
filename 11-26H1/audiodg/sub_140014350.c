/*
 * XREFs of sub_140014350 @ 0x140014350
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140012F60 @ 0x140012F60 (sub_140012F60.c)
 *     sub_140013CA0 @ 0x140013CA0 (sub_140013CA0.c)
 *     sub_140013D10 @ 0x140013D10 (sub_140013D10.c)
 *     sub_140013D70 @ 0x140013D70 (sub_140013D70.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     sub_140014ED0 @ 0x140014ED0 (sub_140014ED0.c)
 *     sub_1400156A0 @ 0x1400156A0 (sub_1400156A0.c)
 *     sub_140015BA8 @ 0x140015BA8 (sub_140015BA8.c)
 *     sub_140015C58 @ 0x140015C58 (sub_140015C58.c)
 *     sub_140015C88 @ 0x140015C88 (sub_140015C88.c)
 *     sub_140015D9C @ 0x140015D9C (sub_140015D9C.c)
 *     sub_140016A04 @ 0x140016A04 (sub_140016A04.c)
 *     sub_14003D1EC @ 0x14003D1EC (sub_14003D1EC.c)
 *     sub_14003F234 @ 0x14003F234 (sub_14003F234.c)
 *     sub_140041048 @ 0x140041048 (sub_140041048.c)
 *     sub_1400465F0 @ 0x1400465F0 (sub_1400465F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140014350(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rsi
  bool v4; // r12
  __int64 v5; // rcx
  int v6; // ecx
  int v7; // r15d
  DWORD LastError; // ebx
  signed __int32 v9; // eax
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rbx
  LARGE_INTEGER *v16; // rax
  void *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r8d
  unsigned __int64 v22; // rcx
  double v23; // xmm0_8
  double v24; // xmm0_8
  int v25; // ecx
  double v26; // xmm1_8
  double v27; // xmm0_8
  __int64 v28; // rbx
  int v29; // ecx
  int v30; // r8d
  int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h]
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int128 v57; // [rsp+98h] [rbp-68h]
  __int128 v58; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v59[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER *p_PerformanceCount; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  LARGE_INTEGER *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v57 = *(_OWORD *)(a1 + 4704);
  v58 = v57;
  EtwEventActivityIdControl(4LL, &v58);
  v50.QuadPart = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013CA0(v2, (int)&unk_1400C5690, a1, 3);
  *(_DWORD *)(a1 + 340) = 40;
  sub_140015C88(a1);
  v3 = *(_QWORD *)(a1 + 4688);
  if ( v3 )
  {
    GetCurrentThread();
    sub_1400B6010(v3);
  }
  sub_140015C58(*(_QWORD *)(a1 + 264));
  v4 = (int)sub_140015D9C() >= 0;
  v52 = v4;
  v5 = *(_QWORD *)(a1 + 4672);
  v51 = v5;
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013D10(v5, (int)&unk_1400C5650, a1);
  v7 = sub_140013D70(a1, (__int64)&v51);
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013CA0(v6, (int)&unk_1400C5690, a1, 4);
  if ( !*(_BYTE *)(a1 + 76) )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a1 + 4680) )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
        if ( *(_BYTE *)(a1 + 76) )
        {
          if ( a1 != -168 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
          v47 = a1 + 128;
          if ( a1 != -168 )
          {
            LastError = GetLastError();
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
            SetLastError(LastError);
          }
          v49 = 0LL;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              *(_DWORD *)(a1 + 340) = 40;
          }
          else
          {
            v35 = *(_DWORD *)(a1 + 340);
            if ( v35 && (v36 = v35 - 1, (*(_DWORD *)(a1 + 340) = v36) == 0)
              || sub_140015070 == *(__int64 (__fastcall **)())(a1 + 216)
              || *(_BYTE *)(a1 + 4680) )
            {
              *(_DWORD *)(a1 + 340) = 40;
              v37 = sub_1400B6010(*(_QWORD *)(a1 + 208));
              v38 = 0;
              if ( v37 != -2147418113 )
                v38 = v37;
              sub_14003F234(
                retaddr,
                734LL,
                "avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                (unsigned int)v38,
                "SetPinInactive failed");
              if ( v38 >= 0 )
              {
                _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
                sub_140016A04(v39, *(_QWORD *)(a1 + 296));
                sub_140015BA8(a1);
                v44 = *(_QWORD *)(a1 + 328);
                if ( v44 )
                {
                  v45 = sub_1400B6010(v44);
                  if ( v45 < 0 )
                    sub_140007934((int)retaddr, 750, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v45);
                }
              }
              else
              {
                sub_140016A04(v39, *(_QWORD *)(a1 + 296));
                sub_140015BA8(a1);
              }
              v40 = *(_QWORD *)(a1 + 432);
              if ( v40 )
                sub_140015C58(v40);
            }
          }
          if ( a1 != -128 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
        }
      }
      sub_1400B6010(*(_QWORD *)(a1 + 80));
      switch ( v7 )
      {
        case 2:
          if ( *(_BYTE *)(a1 + 4680) )
          {
            sub_1400B6010(*(_QWORD *)(a1 + 80));
            goto LABEL_48;
          }
          break;
        case 32:
          if ( *(_BYTE *)(a1 + 4680) )
          {
            sub_140041048(a1);
            sub_1400B6010(*(_QWORD *)(a1 + 80));
LABEL_98:
            v43 = *(_QWORD *)(a1 + 432);
            if ( v43 )
              sub_140015C58(v43);
            goto LABEL_48;
          }
          break;
        case 16:
          if ( *(_BYTE *)(a1 + 4680) )
          {
            sub_140041048(a1);
            sub_1400156A0(a1);
            sub_1400B6010(*(_QWORD *)(a1 + 80));
            goto LABEL_48;
          }
          break;
        default:
          if ( *(_BYTE *)(a1 + 4680) )
            goto LABEL_26;
          break;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
        goto LABEL_46;
LABEL_26:
      if ( (byte_1400E8401 & 8) != 0 )
      {
        v46 = a1;
        v60 = &v46;
        v61 = 8LL;
        sub_140014E60(v10, (unsigned int)&unk_1400C5660, v11, 2, (__int64)v59);
      }
      sub_1400B6010(*(_QWORD *)(a1 + 208));
      if ( HIDWORD(v56) )
      {
        v13 = *(_QWORD *)(a1 + 104);
        if ( *(_QWORD *)(a1 + 312) )
        {
          if ( v50.QuadPart )
          {
            v15 = 0LL;
            if ( v13 + *(_QWORD *)(a1 + 224) - v50.QuadPart > 0 )
              v15 = *(_QWORD *)(a1 + 104);
          }
          else
          {
            v15 = 2 * v13;
          }
        }
        else
        {
          v15 = v13 + *(_QWORD *)(a1 + 224) - v50.QuadPart;
          v12 = v15 % v13;
          if ( v15 % v13 )
          {
            v13 -= v12;
            v15 += v13;
          }
        }
      }
      else
      {
        v50.QuadPart = 0LL;
        v15 = 0LL;
      }
      if ( (byte_1400E8401 & 8) != 0 )
      {
        v49 = v15;
        PerformanceCount = v50;
        v46 = a1;
        v60 = &v46;
        v61 = 8LL;
        p_PerformanceCount = &PerformanceCount;
        v63 = 8LL;
        v64 = &v49;
        v65 = 8LL;
        sub_140014E60(v13, (unsigned int)&unk_1400C5670, v14, 4, (__int64)v59);
      }
      if ( !v15 )
        goto LABEL_67;
      *(_BYTE *)(a1 + 74) = 1;
      v13 = *(_QWORD *)(a1 + 368);
      if ( v13 && v13 < 10000 )
      {
        if ( (byte_1400E8401 & 8) != 0 )
        {
          LODWORD(v46) = *(unsigned __int8 *)(a1 + 75);
          v47 = v13;
          PerformanceCount.LowPart = *(_DWORD *)(a1 + 244);
          v49 = a1;
          v60 = &v49;
          p_PerformanceCount = &PerformanceCount;
          v64 = &v47;
          v16 = (LARGE_INTEGER *)&v46;
          v17 = &unk_1400C5680;
LABEL_40:
          v66 = v16;
          v61 = 8LL;
          v63 = 4LL;
          v65 = 8LL;
          v67 = 4LL;
          sub_140014E60(v13, (_DWORD)v17, v14, 5, (__int64)v59);
        }
      }
      else if ( !*(_BYTE *)(a1 + 75) )
      {
        RtwqSetLongRunning(*(_DWORD *)(a1 + 240), 1);
        *(_BYTE *)(a1 + 75) = 1;
        if ( (byte_1400E8401 & 8) != 0 )
        {
          PerformanceCount.LowPart = 1;
          v49 = *(_QWORD *)(a1 + 368);
          LODWORD(v46) = *(_DWORD *)(a1 + 244);
          v47 = a1;
          v60 = &v47;
          p_PerformanceCount = (LARGE_INTEGER *)&v46;
          v64 = &v49;
          v16 = &PerformanceCount;
          v17 = &unk_1400C56C8;
          goto LABEL_40;
        }
      }
      if ( v15 > 0 && (int)(*(float *)(a1 + 112) * (double)(int)v15 / 10000000.0 + 0.5) )
      {
        do
        {
          v18 = *(_QWORD *)(a1 + 104);
          if ( v15 <= v18 )
            v18 = v15;
          v53 = v18;
          sub_1400B6010(*(_QWORD *)(a1 + 80));
          v19 = (unsigned int)(int)(*(float *)(a1 + 112) * (double)(int)v53 / 10000000.0 + 0.5);
          *(_QWORD *)&v55 = v19 + v55;
          *((_QWORD *)&v54 + 1) += v19;
          v15 -= v53;
          sub_1400B6010(*(_QWORD *)(a1 + 208));
        }
        while ( (int)(*(float *)(a1 + 112) * (double)(int)v15 / 10000000.0 + 0.5) );
        goto LABEL_46;
      }
LABEL_67:
      if ( (byte_1400E8401 & 4) != 0 )
        sub_140012F60(v13, v12, a1, v15);
      if ( !*(_QWORD *)(a1 + 312) && v50.QuadPart > 0 )
        sub_1400B6010(*(_QWORD *)(a1 + 208));
LABEL_46:
      v20 = *(_QWORD *)(a1 + 80);
      if ( v7 == 4 )
      {
        sub_1400B6010(v20);
        v41 = *(_QWORD *)(a1 + 424);
        if ( v41 )
        {
          v42 = (void *)sub_1400B6010(v41);
          SetEvent(v42);
        }
        goto LABEL_48;
      }
      sub_1400B6010(v20);
      if ( v7 == 32 )
        goto LABEL_98;
LABEL_48:
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v22 = PerformanceCount.QuadPart - v51;
      if ( PerformanceCount.QuadPart - v51 < 0 )
        v23 = (double)(int)(v22 & 1 | (v22 >> 1)) + (double)(int)(v22 & 1 | (v22 >> 1));
      else
        v23 = (double)(int)v22;
      v24 = v23 * 10000000.0;
      v25 = qword_1400B7000;
      if ( qword_1400B7000 < 0 )
      {
        v25 = qword_1400B7000 & 1;
        v26 = (double)(int)(v25 | ((unsigned __int64)qword_1400B7000 >> 1))
            + (double)(int)(v25 | ((unsigned __int64)qword_1400B7000 >> 1));
      }
      else
      {
        v26 = (double)(int)qword_1400B7000;
      }
      v27 = v24 / v26;
      v28 = (unsigned int)(int)v27;
      *(_QWORD *)(a1 + 360) = v28;
      *(_QWORD *)(a1 + 392) += v28;
      ++*(_DWORD *)(a1 + 400);
      if ( (byte_1400E8401 & 8) != 0 )
      {
        v46 = *(_QWORD *)(a1 + 352);
        v49 = (unsigned int)(int)v27;
        v47 = a1;
        v60 = &v47;
        v61 = 8LL;
        p_PerformanceCount = (LARGE_INTEGER *)&v49;
        v63 = 8LL;
        v64 = &v46;
        v65 = 8LL;
        sub_140014E60(v25, (unsigned int)&unk_1400C5630, v21, 4, (__int64)v59);
      }
      if ( v28 > *(_QWORD *)(a1 + 352) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 336), 0, 0) )
        *(_QWORD *)(a1 + 384) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 384));
      else
        _InterlockedExchange64((volatile __int64 *)(a1 + 384), 0LL);
      sub_140014ED0(a1);
      if ( (byte_1400E8401 & 8) != 0 )
      {
        v47 = a1;
        v60 = &v47;
        v61 = 8LL;
        sub_140014E60(v29, (unsigned int)&unk_1400C5650, v30, 2, (__int64)v59);
      }
      v7 = sub_140013D70(a1, (__int64)&v51);
      v51 = *(_QWORD *)(a1 + 4672);
      if ( (byte_1400E8401 & 8) != 0 )
      {
        LODWORD(v46) = 5;
        v47 = a1;
        v60 = &v47;
        v61 = 8LL;
        p_PerformanceCount = (LARGE_INTEGER *)&v46;
        v63 = 4LL;
        sub_140014E60(v31, (unsigned int)&unk_1400C5690, v32, 3, (__int64)v59);
      }
      if ( *(_BYTE *)(a1 + 76) )
      {
        v4 = v52;
        break;
      }
    }
  }
  sub_140015BA8(a1);
  sub_1400465F0(a1 + 232, *(unsigned int *)(a1 + 244));
  *(_DWORD *)(a1 + 244) = 0;
  if ( v4 )
    sub_14003D1EC();
  if ( (byte_1400E8401 & 8) != 0 )
    sub_140013D10(v33, (int)&unk_1400C5650, a1);
  EtwEventActivityIdControl(4LL, &v58);
  return 0LL;
}
