/*
 * XREFs of ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403E5570
 * Callers:
 *     NtDxgkUnpinResources @ 0x1403E5040 (NtDxgkUnpinResources.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x14005FCC4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_3472570682__private_IsEnabledDeviceUsageNoInline @ 0x140074858 (Feature_3472570682__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140317484 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403CD3BC (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403D0248 (-RemoveDirectFlipAllocationFromRequestedPinnedList@DXGDEVICE@@AEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinResource(DXGDEVICE *this, unsigned int a2, char a3, struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  unsigned int v9; // eax
  int v10; // r8d
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rbx
  unsigned int v14; // edi
  ULONG_PTR Count; // rbx
  ULONG_PTR v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rcx
  unsigned int v19; // edi
  struct _KTHREAD **v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  struct DXGALLOCATION *v24; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 5);
  v6 = a2;
  v26 = 0LL;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
  v9 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v9 < *(_DWORD *)(v4 + 296) )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v9 + 8);
    if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v9 + 8) & 0x60)
      && (v10 & 0x2000) == 0
      && (v10 & 0x1F) != 0 )
    {
      v11 = *(_QWORD *)(v4 + 280);
      if ( (*(_BYTE *)(v11 + 16LL * v9 + 8) & 0x1F) == 4 )
      {
        v12 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * v9);
        goto LABEL_8;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v12 = 0LL;
LABEL_8:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v24, v12);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 264));
  ExReleasePushLockSharedEx(v4 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGRESOURCEREFERENCE::MoveAssign(&v26, (struct _EX_RUNDOWN_REF **)&v24);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v24);
  v13 = v26;
  if ( !v26 )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(3LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 7317;
    goto LABEL_31;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v26[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(2LL, this, v26, -1073741811LL);
    WdLogGlobalForLineNumber = 7325;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_31;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct DXGFASTMUTEX *const)&v26[10], 0);
  if ( (unsigned int)Feature_3472570682__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  Count = v13[3].Count;
  v24 = (struct DXGALLOCATION *)Count;
  if ( !Count )
  {
LABEL_25:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
    return 0LL;
  }
  v16 = Count;
  while ( 1 )
  {
    v17 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL);
    if ( (v17 & 0x2000) == 0 )
    {
      v18 = *((_QWORD *)this + 2);
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 16) + 444LL) & 0x200) == 0 )
      {
        v14 = -1073741811;
        WdLogSingleEntry2(3LL, v6, -1073741811LL);
        WdLogGlobalForLineNumber = 7348;
        goto LABEL_29;
      }
      if ( (*(_DWORD *)(Count + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(v18 + 760),
          *(struct VIDMM_GLOBAL **)(v18 + 768),
          *(struct VIDMM_MULTI_ALLOC **)(Count + 24));
        *(_DWORD *)(Count + 72) &= ~0x800u;
      }
      goto LABEL_24;
    }
    v19 = (v17 >> 6) & 0xF;
    if ( a3 && !*((_DWORD *)this + 477) )
    {
      v14 = -1073741790;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 7370;
      goto LABEL_29;
    }
    if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, (const struct DXGALLOCATION *)Count) )
    {
      DXGDEVICE::RemoveDirectFlipAllocationFromRequestedPinnedList(v20, v19, (struct DXGALLOCATION *)Count);
      v22 = DXGDEVICE::UnpinDirectFlipAllocation(this, v19, v21, &v24, a4);
      v14 = v22;
      if ( v22 < 0 )
        break;
    }
LABEL_24:
    Count = *(_QWORD *)(Count + 64);
    v24 = (struct DXGALLOCATION *)Count;
    v16 = Count;
    if ( !Count )
      goto LABEL_25;
  }
  WdLogSingleEntry2(3LL, Count, v22);
  WdLogGlobalForLineNumber = 7386;
LABEL_29:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
LABEL_31:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
  return v14;
}
