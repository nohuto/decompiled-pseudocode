/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F8548
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400B193C (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F7A80 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i v5; // xmm6
  struct CInputSpaceRegion *v6; // rbx
  char *v7; // rsi
  __int64 UserSessionState; // rax
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  int v11; // ebp
  char *v12; // rdi
  struct CInputSpaceRegion *v13; // r13
  int v14; // r15d
  _QWORD *v15; // r10
  int v16; // r14d
  int v17; // r12d
  _QWORD *v18; // rcx
  struct CInputSpaceRegion *v19; // rax
  struct CInputSpaceRegion *v20; // r8
  int v21; // ecx
  int v22; // r9d
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  __int16 v26; // ax
  struct CInputSpace *v27; // rdi
  __int64 v28; // r8
  _OWORD *v29; // rax
  _OWORD *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rax
  int v43; // [rsp+20h] [rbp-98h]
  int v44; // [rsp+28h] [rbp-90h]
  __m128i v45; // [rsp+38h] [rbp-80h] BYREF
  int v46; // [rsp+48h] [rbp-70h]
  int v47; // [rsp+4Ch] [rbp-6Ch]
  struct CInputSpace *v48; // [rsp+50h] [rbp-68h]
  _QWORD v49[3]; // [rsp+58h] [rbp-60h] BYREF

  v48 = a2;
  if ( !CInputConfig::LockExclusivelyHeld((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 691);
  v5 = 0LL;
  v6 = 0LL;
  v7 = (char *)a2 + 1456;
  v45 = 0LL;
  UserSessionState = W32GetUserSessionState(v4, v3);
  v9 = *(struct _ERESOURCE **)(UserSessionState + 18640);
  v49[0] = UserSessionState + 18640;
  ExEnterCriticalRegionAndAcquireResourceShared(v9);
  v49[1] = (char *)a2 + 1456;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  v12 = (char *)a2 + 1456;
  v13 = 0LL;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  v15 = 0LL;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v17 = _mm_cvtsi128_si32((__m128i)0LL);
  while ( 1 )
  {
    v7 = *(char **)v7;
    v18 = v15;
    v49[2] = v7;
    v44 = v11;
    v47 = v16;
    v46 = v14;
    if ( v7 != v12 )
      v18 = v7 + 16;
    v43 = v17;
    if ( !v18 )
      break;
    v19 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v49, v10);
    v20 = v19;
    v21 = *(_DWORD *)v19;
    v22 = *((_DWORD *)v19 + 4);
    if ( v17 >= *(_DWORD *)v19 )
      v17 = *(_DWORD *)v19;
    v45.m128i_i32[0] = v17;
    v17 = v21;
    if ( v43 < v21 )
      v17 = v43;
    v23 = *((_DWORD *)v19 + 1);
    v24 = *((_DWORD *)v19 + 2);
    if ( v14 >= v23 )
      v14 = v23;
    v45.m128i_i32[1] = v14;
    v14 = v23;
    if ( v46 < v23 )
      v14 = v46;
    if ( v16 <= v24 )
      v16 = v24;
    v45.m128i_i32[2] = v16;
    v16 = v24;
    if ( v47 > v24 )
      v16 = v47;
    v25 = *((_DWORD *)v20 + 3);
    if ( v11 <= v25 )
      v11 = *((_DWORD *)v20 + 3);
    v45.m128i_i32[3] = v11;
    v11 = v25;
    if ( v44 > v25 )
      v11 = v44;
    if ( (v22 & 1) != 0 )
      v13 = v20;
    v15 = 0LL;
    if ( !v6 || PtInRect(v20, 0LL) )
      v6 = v20;
    v26 = *((_WORD *)v20 + 10);
    v10 = 96LL;
    if ( (unsigned __int16)v26 < 0x60u )
    {
      v26 = *((_WORD *)v20 + 11);
      if ( (unsigned __int16)v26 <= 0x60u )
        v26 = 96;
      *((_WORD *)v20 + 10) = v26;
    }
    if ( *((_WORD *)v20 + 11) == (_WORD)v15 )
      *((_WORD *)v20 + 11) = v26;
    if ( (v22 & 2) != 0 )
    {
      CInputSpaceRegion::PopulatePanelId(v20);
      v15 = 0LL;
    }
    v45.m128i_i64[0] = __PAIR64__(v14, v17);
    v45.m128i_i64[1] = __PAIR64__(v11, v16);
    v5 = _mm_loadu_si128(&v45);
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v49[0]);
  v27 = v48;
  if ( v13 )
    v6 = v13;
  v28 = 5LL;
  *((_DWORD *)v48 + 10) = 0;
  v29 = (_OWORD *)((char *)v27 + 24);
  v30 = (_OWORD *)((char *)v27 + 736);
  *(__m128i *)((char *)v27 + 24) = v5;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) |= 1u;
    do
    {
      *v30 = *(_OWORD *)v6;
      v30[1] = *((_OWORD *)v6 + 1);
      v30[2] = *((_OWORD *)v6 + 2);
      v30[3] = *((_OWORD *)v6 + 3);
      v30[4] = *((_OWORD *)v6 + 4);
      v30[5] = *((_OWORD *)v6 + 5);
      v30[6] = *((_OWORD *)v6 + 6);
      v30 += 8;
      v31 = *((_OWORD *)v6 + 7);
      v6 = (struct CInputSpaceRegion *)((char *)v6 + 128);
      *(v30 - 1) = v31;
      --v28;
    }
    while ( v28 );
    *v30 = *(_OWORD *)v6;
    v30[1] = *((_OWORD *)v6 + 1);
    v30[2] = *((_OWORD *)v6 + 2);
    v30[3] = *((_OWORD *)v6 + 3);
    *((_QWORD *)v30 + 8) = *((_QWORD *)v6 + 8);
  }
  else
  {
    do
    {
      v32 = v29[1];
      *v30 = *v29;
      v33 = v29[2];
      v30[1] = v32;
      v34 = v29[3];
      v30[2] = v33;
      v35 = v29[4];
      v30[3] = v34;
      v36 = v29[5];
      v30[4] = v35;
      v37 = v29[6];
      v30[5] = v36;
      v38 = v29[7];
      v29 += 8;
      v30[6] = v37;
      v30 += 8;
      *(v30 - 1) = v38;
      --v28;
    }
    while ( v28 );
    v39 = v29[1];
    *v30 = *v29;
    v40 = v29[2];
    v30[1] = v39;
    v41 = v29[3];
    v42 = *((_QWORD *)v29 + 8);
    v30[2] = v40;
    v30[3] = v41;
    *((_QWORD *)v30 + 8) = v42;
    *((_WORD *)v27 + 378) = 96;
  }
  *((_WORD *)v27 + 22) = *((_WORD *)v27 + 378);
}
