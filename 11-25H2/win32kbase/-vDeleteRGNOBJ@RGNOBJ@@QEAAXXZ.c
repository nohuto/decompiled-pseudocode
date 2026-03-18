/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1400924C0 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1400925B8 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14009ADAC (GreCreatePolyPolygonRgnInternal.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GreCreateRectRgn @ 0x1400EF790 (GreCreateRectRgn.c)
 *     vRestoreRegion @ 0x1400F33E0 (vRestoreRegion.c)
 *     EngDeleteClip @ 0x140129970 (EngDeleteClip.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x140178728 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1401C4470 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x14000D044 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140095AE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x14019B5D0 (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(ULONG_PTR *this)
{
  ULONG_PTR v1; // rbp
  struct REGION_CORE *v3; // rdx
  __int64 v4; // r14
  struct REGION_CORE *v5; // rsi
  int v6; // r15d
  struct SCAN *pScan_mut; // r15
  unsigned int *v8; // rsi
  __int64 UserSessionState; // rax
  void *v10; // r8
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r12
  __int64 *i; // r14
  __int64 *v15; // r15
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  ULONG v21; // esi
  __int64 v22; // rbx
  __int64 *v23; // rcx
  __int64 **v24; // rax
  _QWORD *v25; // rax
  struct REGION_CORE *v26; // rdx
  struct SCAN *v27; // rax
  NSInstrumentation::CPointerHashTable *v28; // rcx
  void *v29; // r8
  void *v30; // [rsp+60h] [rbp+8h] BYREF

  v1 = *this;
  v4 = *(_QWORD *)(W32GetSessionState() + 88);
  if ( v1 && v1 != *(_QWORD *)(v4 + 4160) )
  {
    v5 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v5 + 8, 2LL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v5 + 152LL))(v1 + 24);
      ExReleasePushLockSharedEx((char *)v5 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *(_QWORD *)(v1 + 24) )
    {
      if ( qword_1402A10B0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(8LL, 2LL);
        v6 = (*(__int64 (__fastcall **)(ULONG_PTR))(MEMORY[0] + 224LL))(v1 + 24);
        ExReleasePushLockSharedEx(8LL, 2LL);
        KeLeaveCriticalRegion();
        v5 = qword_1402A10B0;
      }
      else
      {
        v6 = *(_DWORD *)(v1 + 32);
      }
      if ( v6 == 112 )
      {
        if ( v5 )
          pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v1 + 24), v3);
        else
          pScan_mut = *(struct SCAN **)(v1 + 24);
        v8 = *(unsigned int **)(v4 + 4136);
        UserSessionState = W32GetUserSessionState();
        v11 = UserSessionState;
        if ( *((_BYTE *)v8 + 5) )
        {
          v28 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72120);
          v30 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v28, (unsigned __int64)pScan_mut - 16, &v30) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v11 + 72136));
            _InterlockedIncrement64((volatile signed __int64 *)(v11 + 72168));
            NSInstrumentation::PlatformFreeToPagedLookasideList(
              (NSInstrumentation *)(v8 + 4),
              (char *)pScan_mut - 16,
              v29);
          }
        }
        else
        {
          if ( (*(_DWORD *)(UserSessionState + 72032) & 0xFFFFFFFD) != 0 )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72040),
              *v8);
            pScan_mut = (struct SCAN *)((char *)pScan_mut - 16);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v11 + 72152));
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v8 + 4), pScan_mut, v10);
        }
      }
      else if ( REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v1 + 24)) > 0x70 )
      {
        if ( qword_1402A10B0 )
          v27 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v1 + 24), v26);
        else
          v27 = *(struct SCAN **)(v1 + 24);
        GreDeleteFastMutex(v27);
      }
      *(_QWORD *)(v1 + 24) = 0LL;
    }
    v12 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 56LL);
    if ( v12 )
    {
      if ( *((_BYTE *)v12 + 36) )
      {
        memset((void *)v1, 0, 0x70uLL);
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v12[3], (PVOID)v1);
      }
      else
      {
        v13 = v12[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v13, 0LL);
        for ( i = (__int64 *)*v12; ; i = (__int64 *)*i )
        {
          if ( i == v12 )
          {
            ExReleasePushLockSharedEx(v13, 0LL);
            KeLeaveCriticalRegion();
            KeBugCheckEx(0x164u, 0x21uLL, v1, 0LL, 0LL);
          }
          v15 = (__int64 *)i[4];
          v16 = v15[1];
          v17 = v15[2];
          if ( v1 >= (v17 ^ v16) && v1 < (v17 ^ v16) + 28672 )
            break;
        }
        v18 = ((v1 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
        v19 = (v18 + (((v1 & 0xFFF) - v18) >> 1)) >> 6;
        if ( (v1 & 0xFFF) != 112 * v19 )
          KeBugCheckEx(0x164u, 0x22uLL, v1, 0LL, 0LL);
        if ( !RtlTestBit(
                (PRTL_BITMAP)(v15[3] ^ v17),
                v19 + 36 * (((unsigned int)v1 - ((unsigned int)v16 ^ (unsigned int)v17)) >> 12)) )
          KeBugCheckEx(0x164u, 0x23uLL, v1, 0LL, 0LL);
        v20 = *v15;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v20, 0LL);
        v21 = (v1 & 0xFFF) / 0x70 + 36 * ((unsigned int)(v1 - (*((_DWORD *)v15 + 2) ^ *((_DWORD *)v15 + 4))) >> 12);
        RtlClearBit((PRTL_BITMAP)(v15[2] ^ v15[3]), v21);
        *(_OWORD *)v1 = 0LL;
        *(_OWORD *)(v1 + 16) = 0LL;
        *(_OWORD *)(v1 + 32) = 0LL;
        *(_OWORD *)(v1 + 48) = 0LL;
        *(_OWORD *)(v1 + 64) = 0LL;
        *(_OWORD *)(v1 + 80) = 0LL;
        *(_OWORD *)(v1 + 96) = 0LL;
        *((_DWORD *)v15 + 8) = v21;
        ExReleasePushLockExclusiveEx(v20, 0LL);
        KeLeaveCriticalRegion();
        if ( i == (__int64 *)*v12 )
        {
          ExReleasePushLockSharedEx(v13, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          ExReleasePushLockSharedEx(v13, 0LL);
          KeLeaveCriticalRegion();
          v22 = v12[2];
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v22, 0LL);
          v23 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) != i
            || (v24 = (__int64 **)i[1], *v24 != i)
            || (*v24 = v23, v23[1] = (__int64)v24, v25 = (_QWORD *)*v12, *(__int64 **)(*v12 + 8) != v12) )
          {
            __fastfail(3u);
          }
          *i = (__int64)v25;
          i[1] = (__int64)v12;
          v25[1] = i;
          *v12 = (__int64)i;
          ExReleasePushLockExclusiveEx(v22, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  *this = 0LL;
}
