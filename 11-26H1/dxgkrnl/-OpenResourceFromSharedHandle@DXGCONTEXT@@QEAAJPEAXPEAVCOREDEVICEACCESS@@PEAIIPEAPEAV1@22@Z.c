/*
 * XREFs of ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403C9A7C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403555B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DXGCONTEXT::OpenResourceFromSharedHandle(
        DXGCONTEXT *this,
        void *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int a5,
        struct DXGCONTEXT **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r12d
  _DWORD *v10; // r13
  __int64 v11; // rcx
  int v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // r14d
  int v17; // edi
  struct DXGDEVICE *v18; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v20; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v22; // rcx
  struct DXGPROCESS *v23; // r15
  __int64 v24; // r12
  volatile signed __int32 *v25; // r14
  unsigned int v26; // ebx
  unsigned int v27; // eax
  int v28; // r8d
  __int64 v29; // rcx
  struct _EX_RUNDOWN_REF *v30; // rdx
  unsigned int i; // r15d
  struct _EX_RUNDOWN_REF *v32; // rbx
  unsigned int v33; // r14d
  ULONG_PTR Count; // r8
  __int64 v36; // rbx
  __int64 v37; // r10
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ecx
  int v41; // [rsp+20h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h]
  void *v46; // [rsp+70h] [rbp-90h]
  void *v47; // [rsp+78h] [rbp-88h]
  void *v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int128 v51; // [rsp+98h] [rbp-68h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int *v54; // [rsp+C0h] [rbp-40h]
  unsigned int *v55; // [rsp+C8h] [rbp-38h]
  struct DXGPROCESS *v56; // [rsp+D0h] [rbp-30h]
  unsigned int *v57; // [rsp+D8h] [rbp-28h]
  _QWORD v58[10]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v59[14]; // [rsp+130h] [rbp+30h] BYREF

  v55 = a7;
  v8 = (unsigned int)a2;
  v44 = (__int64)a3;
  v54 = a4;
  v57 = a8;
  v46 = 0LL;
  v10 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(v58, 0, 0x48uLL);
  v11 = *((_QWORD *)this + 2);
  DWORD1(v51) = v8;
  LODWORD(v51) = *(_DWORD *)(v11 + 468);
  v12 = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v11, &v51, v8);
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
    WdLogGlobalForLineNumber = 6740;
    goto LABEL_28;
  }
  v13 = 80LL * HIDWORD(v52);
  if ( !is_mul_ok(HIDWORD(v52), 0x50uLL) )
    v13 = -1LL;
  v10 = (_DWORD *)operator new[](v13, 0x4B677844u, 256LL);
  if ( !v10 )
    goto LABEL_44;
  v15 = DWORD1(v52);
  if ( DWORD1(v52) )
  {
    v46 = (void *)operator new[](DWORD1(v52), 0x4B677844u, 256LL);
    if ( !v46 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 6757;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Failed memory allocation",
        *((_QWORD *)this + 2),
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_44:
      v12 = -1073741670;
      goto LABEL_28;
    }
  }
  v16 = DWORD2(v52);
  if ( DWORD2(v52) )
  {
    v47 = (void *)operator new[](DWORD2(v52), 0x4B677844u, 256LL);
    if ( !v47 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 6770;
LABEL_54:
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Failed memory allocation",
        *((_QWORD *)this + 2),
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_44;
    }
  }
  v17 = v52;
  if ( (_DWORD)v52 )
  {
    v48 = (void *)operator new[]((unsigned int)v52, 0x4B677844u, 256LL);
    if ( !v48 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 6783;
      goto LABEL_54;
    }
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  LODWORD(v58[0]) = *((_DWORD *)v18 + 117);
  LODWORD(v58[1]) = HIDWORD(v52);
  v58[7] = v46;
  v58[5] = v47;
  v58[3] = v48;
  HIDWORD(v58[0]) = v8;
  v58[2] = v10;
  LODWORD(v58[8]) = v15;
  LODWORD(v58[6]) = v16;
  LODWORD(v58[4]) = v17;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v14);
  v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
          v18,
          (__int64)v58,
          HIDWORD(v58[0]),
          0LL,
          0,
          (struct COREDEVICEACCESS *)v44,
          0,
          CurrentProcess,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 6812;
    goto LABEL_28;
  }
  Current = DXGPROCESS::GetCurrent(v20);
  v22 = *((_QWORD *)this + 2);
  v23 = Current;
  v56 = Current;
  v12 = -1073741275;
  v24 = 0LL;
  v45 = *(_QWORD *)(v22 + 16);
  while ( (unsigned int)v24 < HIDWORD(v52) )
  {
    v25 = (volatile signed __int32 *)((char *)v23 + 248);
    v26 = v10[20 * v24];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v23 + 248));
    v27 = (v26 >> 6) & 0xFFFFFF;
    if ( v27 < *((_DWORD *)v23 + 74)
      && (v28 = *(_DWORD *)(*((_QWORD *)v23 + 35) + 16LL * v27 + 8),
          ((v26 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v23 + 35) + 16LL * v27 + 8) & 0x60))
      && (v28 & 0x2000) == 0
      && (v28 & 0x1F) != 0 )
    {
      v29 = *((_QWORD *)v23 + 35);
      if ( (*(_BYTE *)(v29 + 16LL * v27 + 8) & 0x1F) == 5 )
      {
        v30 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * v27);
        i = 0;
        goto LABEL_19;
      }
      WdLogSingleEntry0(2LL);
      i = 0;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      i = 0;
    }
    v30 = 0LL;
LABEL_19:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v42, v30);
    _InterlockedDecrement(v25 + 4);
    ExReleasePushLockSharedEx(v25, 0LL);
    KeLeaveCriticalRegion();
    v32 = v42;
    if ( !v42 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6825;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"AllocRef.m_pAllocation != NULL",
        6825LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v32 = v42;
    }
    v33 = (LODWORD(v32[9].Count) >> 12) & 0x3F;
    v43 = 0;
    if ( v33 == *((_DWORD *)this + 97) )
    {
      v43 = 1;
LABEL_30:
      v12 = 0;
      if ( *((_BYTE *)this + 432) || *((_BYTE *)this + 433) )
      {
        memset(v59, 0, 0x68uLL);
        v59[7] = 1LL;
        Count = v32[3].Count;
        v36 = v45;
        LOBYTE(v41) = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _QWORD *, int, unsigned int))(*(_QWORD *)(*(_QWORD *)(v45 + 760) + 8LL)
                                                                                                + 752LL))(
                *(_QWORD *)(v45 + 768),
                0LL,
                Count,
                v59,
                v41,
                v33);
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 6868;
LABEL_33:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
          goto LABEL_28;
        }
      }
      else
      {
        v36 = v45;
      }
      if ( DXGDEVICE::UmdManagesResidency(*((DXGDEVICE **)this + 2)) )
      {
        v38 = *(_QWORD *)(v36 + 760);
        v49 = 0LL;
        v44 = 0LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v38 + 8) + 936LL))(
          *(_QWORD *)(v37 + 792),
          v33,
          &v49,
          &v44);
        v39 = *(_QWORD *)(v36 + 760);
        v50 = 0LL;
        v53 = 0LL;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(v39 + 8) + 728LL))(
                *(_QWORD *)(v36 + 768),
                v49,
                v42 + 3,
                1LL,
                3,
                &v50,
                &v53);
        if ( v12 < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 6901;
          goto LABEL_33;
        }
        if ( v12 == 259 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v36 + 760) + 8LL)
                                                                        + 944LL))(
            *(_QWORD *)(v36 + 768),
            &v44,
            &v50,
            1LL);
          v12 = 0;
        }
      }
      v40 = v10[20 * v24];
      if ( v43 )
        *v54 = v40;
      else
        v55[i] = v40;
    }
    else
    {
      for ( i = 0; i < a5; ++i )
      {
        if ( v33 == *((_DWORD *)a6[i + 1] + 97) )
          goto LABEL_30;
      }
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
    v23 = v56;
    v24 = (unsigned int)(v24 + 1);
  }
  if ( v12 >= 0 )
    *v57 = HIDWORD(v52);
LABEL_28:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v46);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v47);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v48);
  return (unsigned int)v12;
}
