/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x14008DF44
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400EEE34 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __m128i v6; // xmm6
  _QWORD *v7; // rbx
  char *v8; // r14
  int v9; // ebp
  _QWORD *v10; // rsi
  _QWORD *v11; // r9
  int v12; // r12d
  int v13; // r15d
  int v14; // r13d
  _QWORD *v15; // rdi
  bool v16; // al
  int v17; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int16 v22; // ax
  _QWORD *v23; // rcx
  struct CInputSpace *v24; // rsi
  __int64 v25; // r8
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  __int128 v28; // xmm1
  _WORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  _QWORD *v43; // [rsp+28h] [rbp-90h]
  __m128i v44; // [rsp+30h] [rbp-88h] BYREF
  int v45; // [rsp+40h] [rbp-78h]
  int v46; // [rsp+44h] [rbp-74h]
  int v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+4Ch] [rbp-6Ch]
  char *v49; // [rsp+58h] [rbp-60h]
  __int64 UserSessionState; // [rsp+60h] [rbp-58h]
  struct CInputSpace *v51; // [rsp+68h] [rbp-50h]

  v51 = a2;
  if ( !CInputConfig::LockExclusivelyHeld() )
  {
    v41 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 691LL);
  }
  v6 = 0LL;
  v7 = 0LL;
  v49 = (char *)a2 + 1456;
  v44 = 0LL;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18688));
  v8 = (char *)*((_QWORD *)a2 + 182);
  v9 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  v10 = 0LL;
  v11 = 0LL;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  v13 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v14 = _mm_cvtsi128_si32((__m128i)0LL);
  while ( 1 )
  {
    v15 = v11;
    v42 = v9;
    if ( v8 != v49 )
      v15 = v8 + 16;
    v47 = v13;
    v46 = v12;
    v45 = v14;
    if ( !v15 )
      break;
    v16 = CInputConfig::LockExclusivelyHeld();
    v11 = 0LL;
    if ( !v16 )
    {
      v41 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 139LL);
      v11 = 0LL;
    }
    v17 = *(_DWORD *)v15;
    v18 = *((unsigned int *)v15 + 4);
    if ( v14 >= *(_DWORD *)v15 )
      v14 = *(_DWORD *)v15;
    v44.m128i_i32[0] = v14;
    v14 = v17;
    if ( v45 < v17 )
      v14 = v45;
    v19 = *((_DWORD *)v15 + 1);
    if ( v12 >= v19 )
      v12 = *((_DWORD *)v15 + 1);
    v44.m128i_i32[1] = v12;
    v12 = v19;
    if ( v46 < v19 )
      v12 = v46;
    v20 = *((_DWORD *)v15 + 2);
    if ( v13 <= v20 )
      v13 = *((_DWORD *)v15 + 2);
    v44.m128i_i32[2] = v13;
    v13 = v20;
    if ( v47 > v20 )
      v13 = v47;
    v21 = *((_DWORD *)v15 + 3);
    if ( v9 <= v21 )
      v9 = *((_DWORD *)v15 + 3);
    v44.m128i_i32[3] = v9;
    v9 = v21;
    if ( v42 > v21 )
      v9 = v42;
    if ( (v18 & 1) != 0 )
      v10 = v15;
    if ( !v7 || (v48 = 0LL, (unsigned int)PtInRect(v15, 0LL, v18, 0LL, v41)) )
      v7 = v15;
    v22 = *((_WORD *)v15 + 10);
    if ( (unsigned __int16)v22 < 0x60u )
    {
      v22 = *((_WORD *)v15 + 11);
      if ( (unsigned __int16)v22 <= 0x60u )
        v22 = 96;
      *((_WORD *)v15 + 10) = v22;
    }
    if ( *((_WORD *)v15 + 11) == (_WORD)v11 )
      *((_WORD *)v15 + 11) = v22;
    if ( (v18 & 2) != 0 )
    {
      CInputSpaceRegion::PopulatePanelId((CInputSpaceRegion *)v15);
      v11 = 0LL;
    }
    v8 = *(char **)v8;
    v44.m128i_i64[0] = __PAIR64__(v12, v14);
    v44.m128i_i64[1] = __PAIR64__(v9, v13);
    v6 = _mm_loadu_si128(&v44);
  }
  v43 = v10;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
  v23 = v10;
  v24 = v51;
  if ( v23 )
    v7 = v43;
  v25 = 5LL;
  *((_DWORD *)v51 + 10) = 0;
  v26 = (_OWORD *)((char *)v24 + 24);
  v27 = (_OWORD *)((char *)v24 + 736);
  *(__m128i *)((char *)v24 + 24) = v6;
  if ( v7 )
  {
    *((_DWORD *)v7 + 4) |= 1u;
    do
    {
      *v27 = *(_OWORD *)v7;
      v27[1] = *((_OWORD *)v7 + 1);
      v27[2] = *((_OWORD *)v7 + 2);
      v27[3] = *((_OWORD *)v7 + 3);
      v27[4] = *((_OWORD *)v7 + 4);
      v27[5] = *((_OWORD *)v7 + 5);
      v27[6] = *((_OWORD *)v7 + 6);
      v27 += 8;
      v28 = *((_OWORD *)v7 + 7);
      v7 += 16;
      *(v27 - 1) = v28;
      --v25;
    }
    while ( v25 );
    *v27 = *(_OWORD *)v7;
    v27[1] = *((_OWORD *)v7 + 1);
    v27[2] = *((_OWORD *)v7 + 2);
    v27[3] = *((_OWORD *)v7 + 3);
    *((_QWORD *)v27 + 8) = v7[8];
    v29 = (_WORD *)((char *)v24 + 756);
  }
  else
  {
    do
    {
      v30 = v26[1];
      *v27 = *v26;
      v31 = v26[2];
      v27[1] = v30;
      v32 = v26[3];
      v27[2] = v31;
      v33 = v26[4];
      v27[3] = v32;
      v34 = v26[5];
      v27[4] = v33;
      v35 = v26[6];
      v27[5] = v34;
      v36 = v26[7];
      v26 += 8;
      v27[6] = v35;
      v27 += 8;
      *(v27 - 1) = v36;
      --v25;
    }
    while ( v25 );
    v37 = v26[1];
    *v27 = *v26;
    v38 = v26[2];
    v27[1] = v37;
    v39 = v26[3];
    v40 = *((_QWORD *)v26 + 8);
    v27[2] = v38;
    v27[3] = v39;
    *((_QWORD *)v27 + 8) = v40;
    v29 = (_WORD *)((char *)v24 + 756);
    *((_WORD *)v24 + 378) = 96;
  }
  *((_WORD *)v24 + 22) = *v29;
}
