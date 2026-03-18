/*
 * XREFs of ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30
 * Callers:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C4370 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
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

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  struct REGION_CORE *v2; // rdx
  __int64 v3; // r14
  struct REGION_CORE *v4; // rsi
  int v5; // r15d
  struct SCAN *pScan_mut; // r15
  unsigned int *v7; // rsi
  __int64 UserSessionState; // rax
  void *v9; // r8
  __int64 v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // r12
  __int64 *i; // r14
  __int64 *v14; // r15
  unsigned __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rbx
  ULONG v20; // esi
  __int64 v21; // rbx
  __int64 *v22; // rcx
  __int64 **v23; // rax
  _QWORD *v24; // rax
  struct REGION_CORE *v25; // rdx
  struct SCAN *v26; // rax
  NSInstrumentation::CPointerHashTable *v27; // rcx
  void *v28; // r8
  void *v29; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState() + 88);
  if ( this && this != *(REGION **)(v3 + 4160) )
  {
    v4 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v4 + 8, 2LL);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 152LL))((char *)this + 24);
      ExReleasePushLockSharedEx((char *)v4 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *((_QWORD *)this + 3) )
    {
      if ( qword_1402A10B0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(8LL, 2LL);
        v5 = (*(__int64 (__fastcall **)(char *))(MEMORY[0] + 224LL))((char *)this + 24);
        ExReleasePushLockSharedEx(8LL, 2LL);
        KeLeaveCriticalRegion();
        v4 = qword_1402A10B0;
      }
      else
      {
        v5 = *((_DWORD *)this + 8);
      }
      if ( v5 == 112 )
      {
        if ( v4 )
          pScan_mut = Win32kRS::RegionCore_get_pScan_mut((REGION *)((char *)this + 24), v2);
        else
          pScan_mut = (struct SCAN *)*((_QWORD *)this + 3);
        v7 = *(unsigned int **)(v3 + 4136);
        UserSessionState = W32GetUserSessionState();
        v10 = UserSessionState;
        if ( *((_BYTE *)v7 + 5) )
        {
          v27 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72120);
          v29 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v27, (unsigned __int64)pScan_mut - 16, &v29) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v10 + 72136));
            _InterlockedIncrement64((volatile signed __int64 *)(v10 + 72168));
            NSInstrumentation::PlatformFreeToPagedLookasideList(
              (NSInstrumentation *)(v7 + 4),
              (char *)pScan_mut - 16,
              v28);
          }
        }
        else
        {
          if ( (*(_DWORD *)(UserSessionState + 72032) & 0xFFFFFFFD) != 0 )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72040),
              *v7);
            pScan_mut = (struct SCAN *)((char *)pScan_mut - 16);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v10 + 72152));
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v7 + 4), pScan_mut, v9);
        }
      }
      else if ( REGION_CORE::get_sizeScanAlloc((REGION *)((char *)this + 24)) > 0x70 )
      {
        if ( qword_1402A10B0 )
          v26 = Win32kRS::RegionCore_get_pScan_mut((REGION *)((char *)this + 24), v25);
        else
          v26 = (struct SCAN *)*((_QWORD *)this + 3);
        GreDeleteFastMutex(v26);
      }
      *((_QWORD *)this + 3) = 0LL;
    }
    v11 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 56LL);
    if ( v11 )
    {
      if ( *((_BYTE *)v11 + 36) )
      {
        memset(this, 0, 0x70uLL);
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v11[3], this);
      }
      else
      {
        v12 = v11[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v12, 0LL);
        for ( i = (__int64 *)*v11; ; i = (__int64 *)*i )
        {
          if ( i == v11 )
          {
            ExReleasePushLockSharedEx(v12, 0LL);
            KeLeaveCriticalRegion();
            KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)this, 0LL, 0LL);
          }
          v14 = (__int64 *)i[4];
          v15 = v14[1];
          v16 = v14[2];
          if ( (unsigned __int64)this >= (v16 ^ v15) && (unsigned __int64)this < (v16 ^ v15) + 28672 )
            break;
        }
        v17 = (((unsigned __int16)this & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
        v18 = (v17 + (((unsigned __int64)((unsigned __int16)this & 0xFFF) - v17) >> 1)) >> 6;
        if ( ((unsigned __int16)this & 0xFFF) != 112 * v18 )
          KeBugCheckEx(0x164u, 0x22uLL, (ULONG_PTR)this, 0LL, 0LL);
        if ( !RtlTestBit(
                (PRTL_BITMAP)(v14[3] ^ v16),
                v18 + 36 * (((unsigned int)this - ((unsigned int)v15 ^ (unsigned int)v16)) >> 12)) )
          KeBugCheckEx(0x164u, 0x23uLL, (ULONG_PTR)this, 0LL, 0LL);
        v19 = *v14;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v19, 0LL);
        v20 = ((unsigned __int16)this & 0xFFFu) / 0x70
            + 36 * ((unsigned int)((_DWORD)this - (*((_DWORD *)v14 + 4) ^ *((_DWORD *)v14 + 2))) >> 12);
        RtlClearBit((PRTL_BITMAP)(v14[2] ^ v14[3]), v20);
        *(_OWORD *)this = 0LL;
        *((_OWORD *)this + 1) = 0LL;
        *((_OWORD *)this + 2) = 0LL;
        *((_OWORD *)this + 3) = 0LL;
        *((_OWORD *)this + 4) = 0LL;
        *((_OWORD *)this + 5) = 0LL;
        *((_OWORD *)this + 6) = 0LL;
        *((_DWORD *)v14 + 8) = v20;
        ExReleasePushLockExclusiveEx(v19, 0LL);
        KeLeaveCriticalRegion();
        if ( i == (__int64 *)*v11 )
        {
          ExReleasePushLockSharedEx(v12, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v12, 0LL);
          KeLeaveCriticalRegion();
          v21 = v11[2];
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v21, 0LL);
          v22 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) != i
            || (v23 = (__int64 **)i[1], *v23 != i)
            || (*v23 = v22, v22[1] = (__int64)v23, v24 = (_QWORD *)*v11, *(__int64 **)(*v11 + 8) != v11) )
          {
            __fastfail(3u);
          }
          *i = (__int64)v24;
          i[1] = (__int64)v11;
          v24[1] = i;
          *v11 = (__int64)i;
          ExReleasePushLockExclusiveEx(v21, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
