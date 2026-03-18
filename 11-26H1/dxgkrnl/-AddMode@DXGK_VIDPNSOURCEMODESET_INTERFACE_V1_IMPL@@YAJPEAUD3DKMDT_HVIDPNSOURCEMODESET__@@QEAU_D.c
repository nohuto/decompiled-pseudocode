/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14032BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // r9
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v18; // rax
  char *v19; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v20; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v21; // rbx
  char *v22; // rbx
  __int64 v23; // rcx
  bool v24; // al
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v32; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v33; // rcx
  char *v34; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v35; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **v36; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v37; // rdx
  bool v38; // al
  char *v39; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v40; // rcx
  char *v41; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 Container; // rax
  _QWORD *v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  void (__fastcall **v56)(__int64, __int64); // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // [rsp+50h] [rbp-28h] BYREF
  __int64 v64; // [rsp+58h] [rbp-20h]
  char v65; // [rsp+60h] [rbp-18h]
  __int64 (__fastcall ***v66)(_QWORD, __int64); // [rsp+A0h] [rbp+28h] BYREF

  v3 = 0;
  v63 = -1;
  v64 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v63, 7006);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  WdLogGlobalForLineNumber = 619;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 625;
    goto LABEL_118;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 639;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v62, (__int64)&EventProfilerExit);
    return 3223192328LL;
  }
  v9 = *((_DWORD *)a2 + 1);
  if ( v9 == 3 || (v10 = this, v9 == 4) )
  {
    v45 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v45 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v46 = *(_QWORD *)(v45 + 40);
    if ( !*(_QWORD *)(v46 + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v47 = *(_QWORD *)(*(_QWORD *)(v46 + 72) + 48LL);
    if ( !*(_QWORD *)(v47 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v48 = *(_QWORD *)(*(_QWORD *)(v47 + 8) + 16LL);
    if ( *(int *)(v48 + 3044) < 1200 && *(_BYTE *)(v48 + 3056) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 656;
    }
    else
    {
      v49 = *((_QWORD *)this + 14);
      if ( !*(_QWORD *)(v49 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v49 + 40) + 64LL);
      v51 = 0LL;
      v10 = this;
      v52 = Container + 120;
      v53 = *(_QWORD *)(Container + 120);
      if ( v53 != Container + 120 )
        v51 = (_QWORD *)(v53 - 8);
      while ( 1 )
      {
        if ( !v51 )
          goto LABEL_10;
        if ( *(_DWORD *)(v51[11] + 24LL) == *(_DWORD *)(*((_QWORD *)this + 14) + 24LL) )
        {
          v54 = *(_DWORD *)(*(_QWORD *)(v51[12] + 96LL) + 84LL);
          if ( v54 == 17 || (unsigned int)(v54 - 15) < 2 )
            break;
        }
        v57 = v51[1];
        v51 = (_QWORD *)(v57 - 8);
        if ( v57 == v52 )
          v51 = 0LL;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 664;
    }
LABEL_118:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
    goto LABEL_134;
  }
LABEL_10:
  v11 = operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v11 )
  {
    v12 = *(_DWORD *)a2;
    *(_QWORD *)v11 = &SetElement::`vftable';
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_DWORD *)(v11 + 24) = v12;
    if ( v12 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 240;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
        240LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_DWORD *)(v11 + 56) = 1833173006;
    *(_QWORD *)v11 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(v11 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v11 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v11 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(v11 + 72) = 0;
    *(_OWORD *)(v11 + 76) = 0LL;
    v66 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
    *(_OWORD *)(v11 + 92) = 0LL;
    v13 = *((int *)a2 + 1);
    if ( (_DWORD)v13 == 1 )
      goto LABEL_14;
    if ( (_DWORD)v13 == 2 )
    {
      *(_DWORD *)(v11 + 72) = 2;
      *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v11 + 76) = a2[2];
      goto LABEL_29;
    }
    if ( (unsigned int)(v13 - 3) < 2 )
    {
LABEL_14:
      v14 = a2 + 2;
      if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), v14);
        WdLogGlobalForLineNumber = 342;
        v17 = -1071774918;
        goto LABEL_150;
      }
      if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), v14);
        WdLogGlobalForLineNumber = 354;
        v17 = -1071774917;
        goto LABEL_150;
      }
      if ( !*((_DWORD *)a2 + 6) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 363;
        v17 = -1071774916;
        goto LABEL_150;
      }
      if ( !*((_DWORD *)a2 + 7) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 372;
        v17 = -1071774915;
        goto LABEL_150;
      }
      v15 = *((_DWORD *)a2 + 8);
      if ( !v15 || v15 > 5 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 8), a2 + 2);
        WdLogGlobalForLineNumber = 381;
        v17 = -1071774914;
        goto LABEL_150;
      }
      v16 = *((_DWORD *)a2 + 9);
      if ( !v16 || v16 > 3 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 9), a2 + 2);
        WdLogGlobalForLineNumber = 390;
        v17 = -1071774913;
LABEL_150:
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 79;
        v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v59, v58);
        v60[5] = v17;
        v60[3] = v11;
        v60[4] = this;
        WdLogGlobalForLineNumber = 696;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v66);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
        if ( v65 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v61, (__int64)&EventProfilerExit);
        }
        return (unsigned int)v17;
      }
      *(_DWORD *)(v11 + 72) = v13;
      *(_OWORD *)(v11 + 76) = *(_OWORD *)v14;
      *(_OWORD *)(v11 + 92) = *(_OWORD *)(a2 + 6);
LABEL_29:
      v18 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v10 + 6);
      v66 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
      if ( v18 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
      {
        v19 = (char *)v18 - 8;
        if ( v19 )
        {
          v13 = *(unsigned int *)(v11 + 24);
          while ( *((_DWORD *)v19 + 6) != (_DWORD)v13 )
          {
            v20 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v19 + 1);
            v19 = (char *)v20 - 8;
            if ( v20 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
              v19 = 0LL;
            if ( !v19 )
              goto LABEL_36;
          }
          v13 = *((unsigned int *)v19 + 18);
          if ( (_DWORD)v13 != *(_DWORD *)(v11 + 72) )
            goto LABEL_95;
          if ( (_DWORD)v13 != 4 && (_DWORD)v13 != 1 )
          {
            if ( (_DWORD)v13 == 2 )
            {
              v23 = *(unsigned int *)(v11 + 76);
              v38 = *((_DWORD *)v19 + 19) == (_DWORD)v23;
              goto LABEL_74;
            }
            if ( (_DWORD)v13 != 3 )
            {
              if ( (unsigned int)(v13 - 1) <= 2 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 265;
              }
              goto LABEL_95;
            }
          }
          v23 = *(unsigned int *)(v11 + 76);
          v38 = 0;
          if ( *((_DWORD *)v19 + 19) == (_DWORD)v23 )
          {
            v23 = *(unsigned int *)(v11 + 80);
            if ( *((_DWORD *)v19 + 20) == (_DWORD)v23 )
            {
              v23 = *(unsigned int *)(v11 + 84);
              if ( *((_DWORD *)v19 + 21) == (_DWORD)v23 )
              {
                v23 = *(unsigned int *)(v11 + 88);
                if ( *((_DWORD *)v19 + 22) == (_DWORD)v23 )
                {
                  v23 = *(unsigned int *)(v11 + 92);
                  if ( *((_DWORD *)v19 + 23) == (_DWORD)v23 )
                  {
                    v23 = *(unsigned int *)(v11 + 96);
                    if ( *((_DWORD *)v19 + 24) == (_DWORD)v23 )
                    {
                      v23 = *(unsigned int *)(v11 + 100);
                      if ( *((_DWORD *)v19 + 25) == (_DWORD)v23 )
                      {
                        v23 = *(unsigned int *)(v11 + 104);
                        if ( *((_DWORD *)v19 + 26) == (_DWORD)v23 )
                          v38 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_74:
          if ( v38 )
          {
LABEL_43:
            v25 = WdLogNewEntry5_WdTrace(v23, v13);
            v26 = -1071774956;
            *(_QWORD *)(v25 + 24) = v11;
            *(_QWORD *)(v25 + 32) = v10;
            WdLogGlobalForLineNumber = 137;
            goto LABEL_44;
          }
LABEL_95:
          WdLogSingleEntry3(2LL, *(unsigned int *)(v11 + 24), v11, v10);
          WdLogGlobalForLineNumber = 147;
          v26 = -1071774940;
LABEL_44:
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v66);
          v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
          v29[5] = v26;
          v29[3] = a2;
          v29[4] = this;
          WdLogGlobalForLineNumber = 734;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
          if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit);
          return (unsigned int)v26;
        }
      }
LABEL_36:
      v21 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v10 + 6);
      if ( v21 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
      {
        v22 = (char *)v21 - 8;
        while ( v22 )
        {
          v23 = *((unsigned int *)v22 + 18);
          if ( (_DWORD)v23 == *(_DWORD *)(v11 + 72) )
          {
            if ( (_DWORD)v23 == 4 || (v13 = (unsigned int)(v23 - 1), (_DWORD)v23 == 1) )
            {
LABEL_40:
              v24 = *((_DWORD *)v22 + 19) == *(_DWORD *)(v11 + 76)
                 && *((_DWORD *)v22 + 20) == *(_DWORD *)(v11 + 80)
                 && *((_DWORD *)v22 + 21) == *(_DWORD *)(v11 + 84)
                 && *((_DWORD *)v22 + 22) == *(_DWORD *)(v11 + 88)
                 && *((_DWORD *)v22 + 23) == *(_DWORD *)(v11 + 92)
                 && *((_DWORD *)v22 + 24) == *(_DWORD *)(v11 + 96)
                 && *((_DWORD *)v22 + 25) == *(_DWORD *)(v11 + 100)
                 && *((_DWORD *)v22 + 26) == *(_DWORD *)(v11 + 104);
LABEL_42:
              if ( v24 )
                goto LABEL_43;
              goto LABEL_51;
            }
            v13 = (unsigned int)(v23 - 2);
            if ( (_DWORD)v23 == 2 )
            {
              v24 = *((_DWORD *)v22 + 19) == *(_DWORD *)(v11 + 76);
              goto LABEL_42;
            }
            if ( (_DWORD)v23 == 3 )
              goto LABEL_40;
            if ( (unsigned int)(v23 - 1) <= 2 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 265;
            }
          }
LABEL_51:
          v32 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v22 + 1);
          v22 = (char *)v32 - 8;
          if ( v32 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
            v22 = 0LL;
        }
      }
      v33 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v10 + 6);
      if ( v33 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) || (v34 = (char *)v33 - 8) == 0LL )
      {
LABEL_60:
        v36 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)*((_QWORD *)v10 + 7);
        v37 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(v11 + 8);
        if ( *v36 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
          __fastfail(3u);
        *(_QWORD *)v37 = (char *)v10 + 48;
        *(_QWORD *)(v11 + 16) = v36;
        *v36 = v37;
        *((_QWORD *)v10 + 7) = v37;
        ++*((_QWORD *)v10 + 8);
      }
      else
      {
        while ( v34 != (char *)v11 )
        {
          v35 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v34 + 1);
          v34 = (char *)v35 - 8;
          if ( v35 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
            v34 = 0LL;
          if ( !v34 )
            goto LABEL_60;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 108;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_QWORD *)(v11 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 86;
      }
      *(_QWORD *)(v11 + 40) = v10;
      if ( *((_DWORD *)a2 - 4) == 305419896 )
      {
        v39 = (char *)*((_QWORD *)a2 - 1);
        if ( v39 )
        {
          v40 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v10 + 6);
          if ( v40 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) || (v41 = (char *)v40 - 8) == 0LL )
          {
LABEL_87:
            WdLogSingleEntry2(2LL, a2 - 4, v10);
            WdLogGlobalForLineNumber = 692;
            v3 = -1071774928;
            goto LABEL_88;
          }
          while ( v41 != v39 )
          {
            v42 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v41 + 1);
            v41 = (char *)v42 - 8;
            if ( v42 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v10 + 48) )
              v41 = 0LL;
            if ( !v41 )
              goto LABEL_87;
          }
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 676;
        v3 = -1071774960;
      }
LABEL_88:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit);
      return v3;
    }
    WdLogSingleEntry3(2LL, v11, this, *((int *)a2 + 1));
    v56 = *(void (__fastcall ***)(__int64, __int64))v11;
    WdLogGlobalForLineNumber = 720;
    (*v56)(v11, 1LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
    if ( !v65 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
LABEL_134:
    McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit);
    return 3223192336LL;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 678;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit);
  return 3221225495LL;
}
