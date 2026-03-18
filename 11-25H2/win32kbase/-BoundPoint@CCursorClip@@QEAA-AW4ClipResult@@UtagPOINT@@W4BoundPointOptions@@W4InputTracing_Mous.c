/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1400653C0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionReason@@KJ@Z @ 0x1400657B0 (-UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionRe.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1400658A8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1400663D4 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140066470 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CCursorClip::BoundPoint(
        __int64 a1,
        struct tagPOINT a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINT *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagPOINT v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct tagPOINT v16; // rbx
  const struct tagRECT *v17; // r9
  unsigned int v18; // r11d
  LONG v19; // eax
  __int64 UserSessionState; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  _OWORD *v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int64 v46; // rax
  unsigned int v47; // eax
  LONG *v48; // r8
  __int64 v49; // r10
  unsigned int v50; // r11d
  LONG x; // ecx
  LONG v52; // edx
  LONG y; // ecx
  LONG v54; // edx
  LONG v55; // edx
  unsigned int v56; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v58; // [rsp+38h] [rbp-C8h] BYREF
  tagDomLock *v59; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v60; // [rsp+48h] [rbp-B8h]
  struct tagPOINT v61; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v62[12]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+120h] [rbp+20h]
  _BYTE v64[208]; // [rsp+130h] [rbp+30h] BYREF

  v5 = a1 + 32;
  v6 = a4;
  v61 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  v10 = 0;
  *(_QWORD *)(v5 + 8) = PsGetCurrentThreadId();
  *a5 = a2;
  if ( (a3 & 2) != 0 )
  {
    v58 = 0LL;
    UserSessionState = W32GetUserSessionState(v12, v11);
    CEResourceLockShared::CEResourceLockShared(
      (CEResourceLockShared *)&v59,
      (struct CEResourceLock *)(UserSessionState + 18640));
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))InputConfig::Mouse::RegionFromPoint)(*a5, &v58, 0LL);
    if ( v58 )
    {
      v22 = *(_OWORD *)(*(_QWORD *)&v58 + 16LL);
      v62[0] = *(_OWORD *)*(_QWORD *)&v58;
      v23 = *(_OWORD *)(*(_QWORD *)&v58 + 32LL);
      v62[1] = v22;
      v24 = *(_OWORD *)(*(_QWORD *)&v58 + 48LL);
      v62[2] = v23;
      v25 = *(_OWORD *)(*(_QWORD *)&v58 + 64LL);
      v62[3] = v24;
      v26 = *(_OWORD *)(*(_QWORD *)&v58 + 80LL);
      v62[4] = v25;
      v27 = *(_OWORD *)(*(_QWORD *)&v58 + 96LL);
      v62[5] = v26;
      v28 = *(_OWORD *)(*(_QWORD *)&v58 + 112LL);
      v62[6] = v27;
      v62[7] = v28;
      v29 = *(_OWORD *)(*(_QWORD *)&v58 + 144LL);
      v62[8] = *(_OWORD *)(*(_QWORD *)&v58 + 128LL);
      v30 = *(_OWORD *)(*(_QWORD *)&v58 + 160LL);
      v62[9] = v29;
      v31 = *(_OWORD *)(*(_QWORD *)&v58 + 176LL);
      v32 = *(_QWORD *)(*(_QWORD *)&v58 + 192LL);
      v62[10] = v30;
      v62[11] = v31;
      v63 = v32;
      v33 = v62;
    }
    else
    {
      memset(v64, 0, 0xC8uLL);
      v33 = v64;
    }
    v34 = v33[1];
    *(_OWORD *)(a1 + 48) = *v33;
    v35 = v33[2];
    *(_OWORD *)(a1 + 64) = v34;
    v36 = v33[3];
    *(_OWORD *)(a1 + 80) = v35;
    v37 = v33[4];
    *(_OWORD *)(a1 + 96) = v36;
    v38 = v33[5];
    *(_OWORD *)(a1 + 112) = v37;
    v39 = v33[6];
    *(_OWORD *)(a1 + 128) = v38;
    v40 = v33[7];
    v41 = v33 + 8;
    *(_OWORD *)(a1 + 144) = v39;
    v42 = *v41;
    *(_OWORD *)(a1 + 160) = v40;
    v43 = v41[1];
    *(_OWORD *)(a1 + 176) = v42;
    v44 = v41[2];
    *(_OWORD *)(a1 + 192) = v43;
    v45 = v41[3];
    v46 = *((_QWORD *)v41 + 8);
    *(_OWORD *)(a1 + 208) = v44;
    *(_OWORD *)(a1 + 224) = v45;
    *(_QWORD *)(a1 + 240) = v46;
    tagDomLock::UnLockExclusive(v59);
  }
  else
  {
    if ( (a3 & 1) != 0 && *(_DWORD *)(W32GetUserSessionState(v12, v11) + 67232) )
      a3 |= 4u;
    v13 = *a5;
    *a5 = *a5;
    v14 = *(_QWORD *)(a1 + 16);
    v60 = v13;
    v15 = v14 - *(_QWORD *)a1;
    if ( !v15 )
      v15 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8);
    v16 = v13;
    v58 = v13;
    if ( v15 && !*(_DWORD *)(a1 + 248) )
    {
      CCursorClip::ClipPointToRect(v13, (const struct tagRECT *)(a1 + 16), a5);
      v16 = *a5;
      v58 = *a5;
    }
    if ( *a5 != __PAIR64__(v60.y, v13.x) )
      v10 = 1;
    v56 = -1;
    v17 = 0LL;
    *a5 = v16;
    v18 = 0;
    v19 = *(_DWORD *)(a1 + 264);
    v60.x = v19;
    while ( v18 != v19 )
    {
      v47 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(a1 + 256) + 16LL * v18, v16);
      if ( v47 )
        goto LABEL_16;
      x = a5->x;
      if ( a5->x >= *v48 )
      {
        v52 = v48[2];
        if ( x >= v52 )
          v47 = x - v52 + 1;
      }
      else
      {
        v47 = *v48 - x;
      }
      y = a5->y;
      v54 = v48[1];
      if ( y >= v54 )
      {
        v55 = v48[3];
        if ( y >= v55 )
          v47 += y - v55 + 1;
      }
      else
      {
        v47 += v54 - y;
      }
      if ( v47 < v56 )
      {
        v17 = (const struct tagRECT *)(v49 + 16LL * v50);
        v56 = v47;
      }
      v19 = v60.x;
      v18 = v50 + 1;
    }
    if ( v17 )
      CCursorClip::ClipPointToRect(v16, v17, a5);
LABEL_16:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::BoundPointToRegions)(a1, *a5, a3, a5);
    if ( *a5 != __PAIR64__(v58.y, v16.x) )
      v10 = 2;
    v6 = a4;
  }
  InputTraceLogging::Mouse::UpdateCursorPos(&v61, a5, v6, a3, *(_DWORD *)(a1 + 248));
  if ( PsGetCurrentThreadId() == *(HANDLE *)(v5 + 8) )
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    W32ReleasePushLockShared((struct W32_PUSH_LOCK *)v5);
  }
  return v10;
}
