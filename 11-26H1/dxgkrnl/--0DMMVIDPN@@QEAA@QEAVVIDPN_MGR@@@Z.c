/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14002CA68 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14002D22C (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14004A7CC (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14004A894 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14004A95C (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004B88C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z @ 0x140054170 (-reset@-$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z @ 0x1400541E4 (-reset@-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x140054BD0 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x140344ED8 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1403450A8 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // rsi
  struct DMMVIDPNSOURCESET *const *v6; // r14
  struct DMMVIDPNTARGETSET *const *v7; // r12
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNSOURCESET *v9; // rax
  DMMVIDPNTARGETSET *v10; // rax
  DMMVIDPNTARGETSET *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rbp
  struct DMMVIDEOPRESENTSOURCE *v15; // rbp
  DMMVIDPNSOURCE *v16; // rax
  DMMVIDPNSOURCE *v17; // rax
  DMMVIDPNSOURCE *v18; // rsi
  struct DMMVIDPNSOURCESET *v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  __int64 v23; // rsi
  struct DMMVIDEOPRESENTTARGET *v24; // rsi
  DMMVIDPNTARGET *v25; // rax
  DMMVIDPNTARGET *v26; // rax
  DMMVIDPNTARGET *v27; // rbp
  struct DMMVIDPNTARGETSET *v28; // rcx
  int v29; // ebp
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 (__fastcall **v35)(DMMVIDPNSOURCE *, __int64); // rax
  struct DMMVIDPNSOURCESET *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-78h]
  _BYTE v38[88]; // [rsp+40h] [rbp-58h] BYREF
  DMMVIDPNTARGET *v39; // [rsp+A0h] [rbp+8h] BYREF
  DMMVIDPNTARGET *v40; // [rsp+A8h] [rbp+10h] BYREF

  *(_QWORD *)this = &SetElement::`vftable';
  v3 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
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
  v6 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v7 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)a2);
  if ( !(**v3)(v3) )
  {
    WdLogSingleEntry1(7LL);
    v34 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 45;
    if ( v34 >= 0 )
      v34 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v34;
    return this;
  }
  v8 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL);
  if ( v8 )
    v9 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, this);
  else
    v9 = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::reset((__int64 *)this + 38, (__int64)v9);
  if ( !*v6 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 58;
LABEL_49:
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNSOURCESET *const))v6)(*v6) )
  {
    WdLogSingleEntry1(7LL);
    v36 = *v6;
    WdLogGlobalForLineNumber = 67;
    goto LABEL_57;
  }
  v10 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL);
  if ( v10 )
    v11 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v10, this);
  else
    v11 = 0LL;
  auto_ptr<DMMVIDPNTARGETSET>::reset((__int64 *)this + 39, (__int64)v11);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 81;
    goto LABEL_49;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v7)(*v7) )
  {
    WdLogSingleEntry1(7LL);
    v36 = *v7;
    WdLogGlobalForLineNumber = 90;
LABEL_57:
    *((_DWORD *)this + 20) = *((_DWORD *)v36 + 4);
    return this;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 14) + 72LL), 1u);
  v13 = *((_QWORD *)a2 + 14);
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 == v13 + 24 )
    v15 = 0LL;
  else
    v15 = (struct DMMVIDEOPRESENTSOURCE *)(v14 - 8);
  while ( v15 )
  {
    v16 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, 256LL);
    if ( !v16 || (v17 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v16, *v6, v15), (v18 = v17) == 0LL) )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 115;
LABEL_23:
      *((_DWORD *)this + 20) = -1073741801;
      goto LABEL_24;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v17 + 8))((__int64)v17 + 64) )
    {
      WdLogSingleEntry1(7LL);
      *((_DWORD *)this + 20) = *((_DWORD *)v18 + 18);
      v35 = *(__int64 (__fastcall ***)(DMMVIDPNSOURCE *, __int64))v18;
      WdLogGlobalForLineNumber = 124;
      (*v35)(v18, 1LL);
LABEL_24:
      if ( v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
      return this;
    }
    v19 = *v6;
    v39 = v18;
    v20 = DMMVIDPNSOURCESET::AddSource(v19, &v39);
    if ( v20 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 139;
      *((_DWORD *)this + 20) = v20;
      goto LABEL_24;
    }
    v21 = *((_QWORD *)v15 + 1);
    v15 = (struct DMMVIDEOPRESENTSOURCE *)(v21 - 8);
    if ( v21 == v13 + 24 )
      v15 = 0LL;
  }
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 15) + 72LL), 1u);
  v13 = *((_QWORD *)a2 + 15);
  v23 = *(_QWORD *)(v13 + 24);
  if ( v23 == v13 + 24 )
    v24 = 0LL;
  else
    v24 = (struct DMMVIDEOPRESENTTARGET *)(v23 - 8);
  while ( v24 )
  {
    v25 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL);
    if ( !v25 || (v26 = DMMVIDPNTARGET::DMMVIDPNTARGET(v25, *v7, v24), v39 = v26, (v27 = v26) == 0LL) )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 165;
      goto LABEL_23;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v26 + 8))((__int64)v26 + 64) )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 174;
      *((_DWORD *)this + 20) = *((_DWORD *)v27 + 18);
      goto LABEL_62;
    }
    v28 = *v7;
    v39 = 0LL;
    v40 = v27;
    v29 = DMMVIDPNTARGETSET::AddTarget(v28, &v40);
    if ( v29 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 189;
      *((_DWORD *)this + 20) = v29;
LABEL_62:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v39);
      goto LABEL_24;
    }
    v30 = *((_QWORD *)v24 + 1);
    v24 = (struct DMMVIDEOPRESENTTARGET *)(v30 - 8);
    if ( v30 == v13 + 24 )
      v24 = 0LL;
  }
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 201;
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v38,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0,
    v12,
    v37,
    1LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v38, v31);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32) + 24) = this;
  WdLogGlobalForLineNumber = 215;
  return this;
}
