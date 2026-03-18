/*
 * XREFs of ProcessSystemMemoryOfferList @ 0x14010E534
 * Callers:
 *     ?ProcessOfferLists@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NXZ @ 0x14010E300 (-ProcessOfferLists@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14002C2E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140035B48 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140035F90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x14010E940 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E984 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON@@@Z @ 0x14010FE30 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_RESET_BACKING_STORE_REASON.c)
 */

bool __fastcall ProcessSystemMemoryOfferList(struct _VIDSCH_SYNC_OBJECT ***a1)
{
  __int64 v1; // rdi
  struct _VIDSCH_SYNC_OBJECT **v2; // rdx
  struct _VIDSCH_SYNC_OBJECT *v3; // r9
  char v4; // r12
  struct _VIDSCH_SYNC_OBJECT ***v5; // rsi
  struct _VIDSCH_SYNC_OBJECT **v7; // rbx
  unsigned int v8; // r10d
  char v9; // r15
  struct _VIDSCH_SYNC_OBJECT *v10; // rax
  __int64 v11; // r14
  __int16 v12; // cx
  int v13; // eax
  struct _VIDSCH_SYNC_OBJECT ***v14; // rax
  struct _VIDSCH_SYNC_OBJECT **v15; // rcx
  _QWORD *v16; // rax
  __int64 **v17; // rax
  bool v18; // bl
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-40h]
  __int64 **v22; // [rsp+40h] [rbp-20h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v23; // [rsp+48h] [rbp-18h]
  _BYTE v24[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = (__int64)a1[7];
  v2 = (struct _VIDSCH_SYNC_OBJECT **)&v22;
  v3 = 0LL;
  v23 = (struct _VIDSCH_SYNC_OBJECT **)&v22;
  v4 = 0;
  v22 = (__int64 **)&v22;
  v5 = a1 + 234;
  while ( 1 )
  {
    v7 = *v5;
    v8 = 3;
    if ( *v5 == (struct _VIDSCH_SYNC_OBJECT **)v5 || !VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)v1) )
      break;
    v9 = (char)v3;
    if ( v7[1] != (struct _VIDSCH_SYNC_OBJECT *)v5 )
      goto LABEL_14;
    v10 = *v7;
    if ( *((struct _VIDSCH_SYNC_OBJECT ***)*v7 + 1) != v7 )
      goto LABEL_14;
    *v5 = (struct _VIDSCH_SYNC_OBJECT **)v10;
    *((_QWORD *)v10 + 1) = v5;
    *v7 = v3;
    v11 = (__int64)*(v7 - 12);
    *(_QWORD *)(v1 + 45232) = v11;
    v12 = *(_WORD *)(*(_QWORD *)(v11 + 368) + 8LL);
    if ( v12 != 2 )
    {
      if ( !v12 || v12 == (_WORD)v8 )
        goto LABEL_30;
      goto LABEL_13;
    }
    v13 = *((_DWORD *)v7 - 10);
    if ( (v13 & 1) != 0 )
    {
      if ( (v13 & 4) != 0 )
      {
        if ( !v4 )
        {
          v4 = 1;
          VIDMM_GLOBAL::StartPreparation(v1, 0xFFFFFFFF, 0LL, 0LL, 0x3E8u);
          v3 = 0LL;
          v8 = 3;
        }
        if ( (*(_DWORD *)(v1 + 6984) & 0x8000) != 0
          || *(_QWORD *)(v1 + 4568) - *(_QWORD *)(v11 + 296) > qword_14008A4A8[*(int *)(v11 + 288)] )
        {
          *(_DWORD *)(v11 + 24) |= 0x4000000u;
          *(_QWORD *)(v1 + 40256) = v3;
          ExReleasePushLockExclusiveEx(v1 + 40248, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation((VIDMM_GLOBAL *)v1, (struct VIDMM_GLOBAL_ALLOC *)v11);
          LOBYTE(v20) = 1;
          LOBYTE(v21) = 0;
          ((void (__fastcall *)(struct _VIDSCH_SYNC_OBJECT ***, struct _VIDSCH_SYNC_OBJECT **, __int64, _QWORD, int, _QWORD))(*a1)[30])(
            a1,
            v7 - 12,
            v20,
            0LL,
            v21,
            0LL);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 40248));
          *(_QWORD *)(v1 + 7112) += *(_QWORD *)(*(_QWORD *)v11 + 16LL);
          ++*(_DWORD *)(v1 + 7120);
LABEL_35:
          v3 = 0LL;
          goto LABEL_30;
        }
      }
LABEL_13:
      v14 = (struct _VIDSCH_SYNC_OBJECT ***)v23;
      if ( *v23 != (struct _VIDSCH_SYNC_OBJECT *)&v22 )
        goto LABEL_14;
      v7[1] = (struct _VIDSCH_SYNC_OBJECT *)v23;
      *v7 = (struct _VIDSCH_SYNC_OBJECT *)&v22;
      *v14 = v7;
      v23 = v7;
      goto LABEL_30;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v11 + 136), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    if ( VIDMM_GLOBAL::DiscardOfferedAllocation((VIDMM_GLOBAL *)v1, (struct VIDMM_GLOBAL_ALLOC *)v11)
      && (*(_DWORD *)(v11 + 32) & 8) == 0 )
    {
      *(_QWORD *)(v1 + 40256) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 40248, 0LL);
      KeLeaveCriticalRegion();
      v9 = 1;
      VIDMM_GLOBAL::ResetBackingStore(v1, v11, 1LL);
      *(_QWORD *)(v1 + 7112) += *(_QWORD *)(*(_QWORD *)v11 + 16LL);
      ++*(_DWORD *)(v1 + 7120);
    }
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v24);
    v3 = 0LL;
    if ( v9 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v1 + 40248));
      goto LABEL_35;
    }
LABEL_30:
    *(_QWORD *)(v1 + 45232) = v3;
    v2 = v23;
  }
  if ( v22 != (__int64 **)&v22 )
  {
    v15 = v5[1];
    if ( v7[1] != (struct _VIDSCH_SYNC_OBJECT *)v5
      || *v15 != (struct _VIDSCH_SYNC_OBJECT *)v5
      || v22[1] != (__int64 *)&v22
      || *v2 != (struct _VIDSCH_SYNC_OBJECT *)&v22
      || (*v15 = (struct _VIDSCH_SYNC_OBJECT *)&v22,
          v16 = v23,
          v5[1] = v23,
          *v16 = v5,
          v17 = v22,
          v23 = v15,
          v22[1] != (__int64 *)&v22)
      || *v15 != (struct _VIDSCH_SYNC_OBJECT *)&v22 )
    {
LABEL_14:
      __fastfail(v8);
    }
    *v15 = (struct _VIDSCH_SYNC_OBJECT *)v22;
    v17[1] = (__int64 *)v15;
  }
  v18 = *v5 != (struct _VIDSCH_SYNC_OBJECT **)v5;
  if ( v4 )
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v1, 0xFFFFFFFF, 0LL, 0, (unsigned __int64)v3, v3);
  return v18;
}
