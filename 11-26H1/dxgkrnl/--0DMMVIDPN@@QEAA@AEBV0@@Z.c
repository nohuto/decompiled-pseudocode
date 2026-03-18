/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14002E274 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403444C8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14002A2D0 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x14002A364 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14002CA68 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14004A95C (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x14004AAAC (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004B88C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1400503F4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402A90C0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x140344ED8 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPNSOURCESET **a2, unsigned __int8 a3)
{
  DMMVIDPNTOPOLOGY *v3; // r13
  DMMVIDPNSOURCESET *v6; // rax
  DMMVIDPNSOURCESET *v7; // rbx
  DMMVIDPNSOURCESET *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  const struct DMMVIDPNSOURCESET *v14; // rbx
  __int64 v15; // rbx
  DMMVIDPNTARGETSET *v16; // rax
  DMMVIDPNTARGETSET *v17; // rdi
  DMMVIDPNTARGETSET *v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // r12
  int v23; // edi
  __int64 v24; // r15
  _QWORD *v25; // r15
  _QWORD *v26; // rax
  void (__fastcall ***v27)(_QWORD, __int64); // rcx
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  DMMVIDPNTARGET *v35; // rax
  const struct DMMVIDPNSOURCESET **v36; // r15
  const struct DMMVIDPNSOURCESET *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  const struct DMMVIDPNSOURCESET **v41; // r13
  const struct DMMVIDPNPRESENTPATH *v42; // r13
  _QWORD *v43; // rcx
  __int64 v44; // r14
  _QWORD *v45; // rcx
  __int64 v46; // rdi
  _QWORD *v47; // rax
  DMMVIDPNPRESENTPATH *v48; // rax
  DMMVIDPNPRESENTPATH *v49; // rax
  struct DMMVIDPNPRESENTPATH *v50; // r15
  int v51; // eax
  int v52; // r12d
  const struct DMMVIDPNSOURCESET **v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v60; // eax
  int v61; // r12d
  void (__fastcall **v62)(struct DMMVIDPNPRESENTPATH *, __int64); // rax
  int v63; // eax
  __int64 v64; // rax
  DMMVIDPNTARGET *v65; // rax
  DMMVIDPNTARGET *v66; // r14
  __int64 v67; // rcx
  int v68; // r14d
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // [rsp+20h] [rbp-50h]
  __int64 v73; // [rsp+20h] [rbp-50h]
  _BYTE v74[32]; // [rsp+50h] [rbp-20h] BYREF
  DMMVIDPNTARGET *v75; // [rsp+B0h] [rbp+40h] BYREF
  const struct DMMVIDPNSOURCESET **v76; // [rsp+B8h] [rbp+48h]
  DMMVIDPNTARGET *v77; // [rsp+C0h] [rbp+50h] BYREF

  v76 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  v3 = (DMMVIDPN *)((char *)this + 96);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 22) = 1;
  if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNTOPOLOGY *))v3)(v3) )
  {
    v6 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL);
    if ( v6 )
      v7 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v6, a2[38]);
    else
      v7 = 0LL;
    v8 = (DMMVIDPNSOURCESET *)*((_QWORD *)this + 38);
    if ( v7 != v8 && v8 )
      (*(void (__fastcall **)(DMMVIDPNSOURCESET *, __int64))(*(_QWORD *)v8 + 16LL))(v8, 1LL);
    *((_QWORD *)this + 38) = v7;
    if ( v7 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v7)(v7) )
      {
        v9 = *((_QWORD *)this + 38);
        if ( *(_QWORD *)(v9 + 72) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 86;
        }
        *(_QWORD *)(v9 + 72) = this;
        v10 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
        if ( (_QWORD *)*v10 == v10 )
          v11 = 0LL;
        else
          v11 = *v10 - 8LL;
        while ( v11 )
        {
          if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v11 + 64))(v11 + 64) )
          {
            WdLogSingleEntry1(7LL);
            v63 = *(_DWORD *)(v11 + 72);
            WdLogGlobalForLineNumber = 270;
            goto LABEL_116;
          }
          v12 = *((_QWORD *)this + 38);
          if ( v12 )
          {
            if ( *(_QWORD *)(v11 + 40) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            *(_QWORD *)(v11 + 40) = v12;
          }
          else
          {
            WdLogSingleEntry2(2LL, v11 + 32, *(_QWORD *)(v11 + 40));
            WdLogGlobalForLineNumber = 79;
          }
          v13 = *(_QWORD *)(v11 + 8);
          v11 = v13 - 8;
          if ( v13 == *((_QWORD *)this + 38) + 24LL )
            v11 = 0LL;
        }
        v14 = a2[6];
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v14 + 15) + 72LL), 1u);
        v15 = *((_QWORD *)v14 + 15);
        v16 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL);
        if ( v16 )
          v17 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v16, a2[39]);
        else
          v17 = 0LL;
        v18 = (DMMVIDPNTARGETSET *)*((_QWORD *)this + 39);
        if ( v17 != v18 && v18 )
          (*(void (__fastcall **)(DMMVIDPNTARGETSET *, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
        *((_QWORD *)this + 39) = v17;
        if ( v17 )
        {
          if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNTARGETSET *))v17)(v17) )
          {
            ContainedBy<DMMVIDPN>::SetContainer(*((_QWORD *)this + 39) + 64LL, (__int64)this);
            v20 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
            if ( (_QWORD *)*v20 == v20 )
              v21 = 0LL;
            else
              v21 = *v20 - 8LL;
            v22 = (_QWORD *)(v15 + 24);
            while ( v21 )
            {
              if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v21 + 64))(v21 + 64) )
              {
                WdLogSingleEntry1(7LL);
                *((_DWORD *)this + 20) = *(_DWORD *)(v21 + 72);
                WdLogGlobalForLineNumber = 318;
                goto LABEL_104;
              }
              v23 = *(_DWORD *)(v21 + 24);
              if ( v23 == -1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1039;
              }
              v22 = (_QWORD *)(v15 + 24);
              v24 = *(_QWORD *)(v15 + 24);
              if ( v24 != v15 + 24 )
              {
                v25 = (_QWORD *)(v24 - 8);
                if ( v25 )
                {
                  while ( *((_DWORD *)v25 + 6) != v23 )
                  {
                    v26 = (_QWORD *)v25[1];
                    v25 = v26 - 1;
                    if ( v26 == v22 )
                      v25 = 0LL;
                    if ( !v25 )
                      goto LABEL_47;
                  }
                  _InterlockedAdd((volatile signed __int32 *)v25 + 18, 1u);
                  v27 = (void (__fastcall ***)(_QWORD, __int64))(*(_QWORD *)(v21 + 96) + 64LL);
                  v28 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 96) + 72LL));
                  if ( v28 )
                  {
                    if ( v28 < 0 )
                    {
                      v71 = v28;
                      WdLogSingleEntry1(2LL);
                      WdLogGlobalForLineNumber = 77;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                        v71,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                  else if ( v27 )
                  {
                    (**v27)(v27, 1LL);
                  }
                  *(_QWORD *)(v21 + 96) = v25;
                }
              }
LABEL_47:
              v29 = *((_QWORD *)this + 39);
              if ( v29 )
              {
                if ( *(_QWORD *)(v21 + 40) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 86;
                }
                *(_QWORD *)(v21 + 40) = v29;
              }
              else
              {
                WdLogSingleEntry2(2LL, v21 + 32, *(_QWORD *)(v21 + 40));
                WdLogGlobalForLineNumber = 79;
              }
              v30 = *(_QWORD *)(v21 + 8);
              v21 = v30 - 8;
              if ( v30 == *((_QWORD *)this + 39) + 24LL )
                v21 = 0LL;
            }
            if ( (_QWORD *)*v22 == v22 )
              v31 = 0LL;
            else
              v31 = *v22 - 8LL;
            while ( v31 )
            {
              v32 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v32 == v32 || (v33 = *v32 - 8LL, *v32 == 8LL) )
              {
LABEL_65:
                v35 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL);
                if ( !v35 )
                {
                  v75 = 0LL;
LABEL_67:
                  WdLogSingleEntry0(6LL);
                  WdLogGlobalForLineNumber = 355;
                  *((_DWORD *)this + 20) = -1073741801;
LABEL_68:
                  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
                  goto LABEL_104;
                }
                v65 = DMMVIDPNTARGET::DMMVIDPNTARGET(
                        v35,
                        *((struct DMMVIDPNTARGETSET *const *)this + 39),
                        (struct DMMVIDEOPRESENTTARGET *const)v31);
                v75 = v65;
                v66 = v65;
                if ( !v65 )
                  goto LABEL_67;
                if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v65 + 8))((__int64)v65 + 64) )
                {
                  WdLogSingleEntry1(7LL);
                  WdLogGlobalForLineNumber = 364;
                  *((_DWORD *)this + 20) = *((_DWORD *)v66 + 18);
                  goto LABEL_68;
                }
                v67 = *((_QWORD *)this + 39);
                v75 = 0LL;
                v77 = v66;
                v68 = DMMVIDPNTARGETSET::AddTarget(v67, &v77);
                if ( v68 < 0 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 379;
                  *((_DWORD *)this + 20) = v68;
                  goto LABEL_68;
                }
              }
              else
              {
                while ( *(_DWORD *)(v33 + 24) != *(_DWORD *)(v31 + 24) )
                {
                  v34 = *(_QWORD **)(v33 + 8);
                  v33 = (__int64)(v34 - 1);
                  if ( v34 == v32 )
                    v33 = 0LL;
                  if ( !v33 )
                    goto LABEL_65;
                }
              }
              v69 = *(_QWORD **)(v31 + 8);
              v31 = (__int64)(v69 - 1);
              if ( v69 == v22 )
                v31 = 0LL;
            }
            v36 = v76;
            v37 = v76[6];
            if ( v37 && *((_QWORD *)this + 6) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 140;
            }
            *((_QWORD *)this + 6) = v37;
            if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 396;
            }
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v74,
              ((unsigned __int64)v3 + 56) & -(__int64)(v3 != 0LL),
              0,
              v19,
              v72,
              1LL);
            DMMVIDPNTOPOLOGY::_SetContainingVidPn(v3, this);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74, v38);
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v74,
              ((unsigned __int64)v3 + 56) & -(__int64)(v3 != 0LL),
              1u,
              v39,
              v73,
              (__int64)v36[17]);
            v41 = (const struct DMMVIDPNSOURCESET **)v36[15];
            if ( v41 == v36 + 15 )
              v42 = 0LL;
            else
              v42 = (const struct DMMVIDPNPRESENTPATH *)(v41 - 1);
            while ( v42 )
            {
              v43 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
              if ( (_QWORD *)*v43 == v43 )
              {
                v44 = 0LL;
              }
              else
              {
                v44 = *v43 - 8LL;
                if ( *v43 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v44 + 24) == *(_DWORD *)(*((_QWORD *)v42 + 11) + 24LL) )
                      break;
                    v54 = *(_QWORD **)(v44 + 8);
                    v44 = (__int64)(v54 - 1);
                    if ( v54 == v43 )
                      v44 = 0LL;
                  }
                  while ( v44 );
                }
              }
              v45 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v45 == v45 )
              {
                v46 = 0LL;
              }
              else
              {
                v46 = *v45 - 8LL;
                if ( *v45 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v46 + 24) == *(_DWORD *)(*((_QWORD *)v42 + 12) + 24LL) )
                      break;
                    v47 = *(_QWORD **)(v46 + 8);
                    v46 = (__int64)(v47 - 1);
                    if ( v47 == v45 )
                      v46 = 0LL;
                  }
                  while ( v46 );
                }
              }
              v48 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
              if ( !v48
                || (v49 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                            v48,
                            (struct DMMVIDPNSOURCE *)v44,
                            (struct DMMVIDPNTARGET *)v46,
                            v42),
                    v75 = v49,
                    (v50 = v49) == 0LL) )
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 448;
                *((_DWORD *)this + 20) = -1073741801;
LABEL_102:
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v74,
                  v55);
                goto LABEL_104;
              }
              if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v49 + 7))((__int64)v49 + 56) )
              {
                WdLogSingleEntry4(7LL, *(unsigned int *)(v44 + 24), *(unsigned int *)(v46 + 24), this, v76 + 12);
                WdLogGlobalForLineNumber = 457;
                *((_DWORD *)this + 20) = *((_DWORD *)v50 + 16);
                goto LABEL_136;
              }
              v51 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v50, D3DKMDT_MCC_ENFORCE);
              v52 = v51;
              if ( v51 == -1071774920 )
              {
                WdLogSingleEntry4(7LL, *(unsigned int *)(v44 + 24), *(unsigned int *)(v46 + 24), this, v76 + 12);
                WdLogGlobalForLineNumber = 475;
                v60 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v50, D3DKMDT_MCC_IGNORE);
                v61 = v60;
                if ( v60 < 0 )
                {
                  WdLogSingleEntry5(2LL, *(unsigned int *)(v44 + 24), *(unsigned int *)(v46 + 24), this, v76 + 12, v60);
                  *((_DWORD *)this + 20) = v61;
                  v62 = *(void (__fastcall ***)(struct DMMVIDPNPRESENTPATH *, __int64))v50;
                  WdLogGlobalForLineNumber = 484;
                  (*v62)(v50, 1LL);
                  goto LABEL_102;
                }
              }
              else if ( v51 < 0 )
              {
                WdLogSingleEntry5(2LL, *(unsigned int *)(v44 + 24), *(unsigned int *)(v46 + 24), this, v76 + 12, v51);
                WdLogGlobalForLineNumber = 493;
                *((_DWORD *)this + 20) = v52;
LABEL_136:
                auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v75);
                goto LABEL_102;
              }
              v53 = (const struct DMMVIDPNSOURCESET **)*((_QWORD *)v42 + 1);
              v36 = v76;
              v42 = (const struct DMMVIDPNPRESENTPATH *)(v53 - 1);
              if ( v53 == v76 + 15 )
                v42 = 0LL;
            }
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v74, v40);
            *((_DWORD *)this + 22) = 2;
            v58 = WdLogNewEntry5_WdTrace(v57, v56);
            *(_QWORD *)(v58 + 24) = this;
            *(_QWORD *)(v58 + 32) = v36;
            WdLogGlobalForLineNumber = 509;
          }
          else
          {
            WdLogSingleEntry1(7LL);
            v64 = *((_QWORD *)this + 39);
            WdLogGlobalForLineNumber = 301;
            *((_DWORD *)this + 20) = *(_DWORD *)(v64 + 16);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 292;
          *((_DWORD *)this + 20) = -1073741801;
        }
LABEL_104:
        if ( v15 )
          ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      }
      else
      {
        WdLogSingleEntry1(7LL);
        v70 = *((_QWORD *)this + 38);
        WdLogGlobalForLineNumber = 253;
        *((_DWORD *)this + 20) = *(_DWORD *)(v70 + 16);
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 244;
      *((_DWORD *)this + 20) = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL);
    v63 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 230;
    if ( v63 >= 0 )
      v63 = *((_DWORD *)this + 40);
LABEL_116:
    *((_DWORD *)this + 20) = v63;
  }
  return this;
}
