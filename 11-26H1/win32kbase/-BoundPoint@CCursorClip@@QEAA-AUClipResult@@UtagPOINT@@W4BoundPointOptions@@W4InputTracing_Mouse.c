/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x140217920
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140086710 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ?UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionReason@@KJ@Z @ 0x14012C96C (-UpdateCursorPos@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@0W4InputTracing_MouseUpdatePositionRe.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x14012DBD0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z @ 0x14012DFC0 (-ApplyAppClip@CCursorClip@@AEAA_NUtagPOINT@@PEAU2@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14021783C (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CCursorClip::BoundPoint(
        __int64 a1,
        __int64 a2,
        struct tagPOINT a3,
        unsigned int a4,
        int a5,
        struct tagPOINT *a6)
{
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct tagPOINT v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v39; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v40[17]; // [rsp+40h] [rbp-C0h] BYREF

  v39 = a3;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 32));
  *(_QWORD *)a2 = 0LL;
  *a6 = a3;
  if ( (a4 & 2) != 0 )
  {
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v40, v10, v12);
    InputConfig::Mouse::RegionFromPoint((__int64)*a6, v40, 0);
    if ( *(_QWORD *)&v40[0] )
    {
      v14 = *(_OWORD *)(*(_QWORD *)&v40[0] + 16LL);
      v40[1] = **(_OWORD **)&v40[0];
      v15 = *(_OWORD *)(*(_QWORD *)&v40[0] + 32LL);
      v40[2] = v14;
      v16 = *(_OWORD *)(*(_QWORD *)&v40[0] + 48LL);
      v40[3] = v15;
      v17 = *(_OWORD *)(*(_QWORD *)&v40[0] + 64LL);
      v40[4] = v16;
      v18 = *(_OWORD *)(*(_QWORD *)&v40[0] + 80LL);
      v40[5] = v17;
      v19 = *(_OWORD *)(*(_QWORD *)&v40[0] + 96LL);
      v40[6] = v18;
      v20 = *(_OWORD *)(*(_QWORD *)&v40[0] + 112LL);
      v40[7] = v19;
      v40[8] = v20;
      v21 = *(_OWORD *)(*(_QWORD *)&v40[0] + 144LL);
      v40[9] = *(_OWORD *)(*(_QWORD *)&v40[0] + 128LL);
      v22 = *(_OWORD *)(*(_QWORD *)&v40[0] + 160LL);
      v40[10] = v21;
      v23 = *(_OWORD *)(*(_QWORD *)&v40[0] + 176LL);
      v24 = *(_QWORD *)(*(_QWORD *)&v40[0] + 192LL);
      v40[11] = v22;
      v40[12] = v23;
      *(_QWORD *)&v40[13] = v24;
    }
    else
    {
      memset(&v40[1], 0, 0xC8uLL);
    }
    v25 = v40[2];
    *(_OWORD *)(a1 + 48) = v40[1];
    v26 = v40[3];
    *(_OWORD *)(a1 + 64) = v25;
    v27 = v40[4];
    *(_OWORD *)(a1 + 80) = v26;
    v28 = v40[5];
    *(_OWORD *)(a1 + 96) = v27;
    v29 = v40[6];
    *(_OWORD *)(a1 + 112) = v28;
    v30 = v40[7];
    *(_OWORD *)(a1 + 128) = v29;
    v31 = v40[8];
    *(_OWORD *)(a1 + 144) = v30;
    v32 = v40[9];
    *(_OWORD *)(a1 + 160) = v31;
    v33 = v40[10];
    *(_OWORD *)(a1 + 176) = v32;
    v34 = v40[11];
    *(_OWORD *)(a1 + 192) = v33;
    v35 = v40[12];
    v36 = *(_QWORD *)&v40[13];
    *(_OWORD *)(a1 + 208) = v34;
    *(_OWORD *)(a1 + 224) = v35;
    *(_QWORD *)(a1 + 240) = v36;
    ExReleaseResourceAndLeaveCriticalRegion(**((PERESOURCE **)&v40[0] + 1));
  }
  else
  {
    if ( (a4 & 1) != 0 && *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 67224) )
      a4 |= 4u;
    if ( CCursorClip::ApplyAppClip((CCursorClip *)a1, *a6, a6) )
    {
      *(_DWORD *)a2 = 1;
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a3.x != a6->x )
          *(_DWORD *)(a2 + 4) |= 1u;
        if ( v39.y != a6->y )
          *(_DWORD *)(a2 + 4) |= 2u;
      }
    }
    v13 = *a6;
    v38 = 0;
    if ( CCursorClip::ApplySystemClips((CCursorClip *)a1, v13, a4, a6, &v38) )
    {
      *(_DWORD *)a2 = 2;
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a2 + 4) = v38;
    }
  }
  InputTraceLogging::Mouse::UpdateCursorPos(&v39, (int *)a6, a5, a4, *(_DWORD *)(a1 + 248));
  CPushLock::ReleaseLock((CPushLock *)(a1 + 32));
  return a2;
}
