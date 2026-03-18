/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x140432540
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400359B0 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x140310550 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct DXGPROCESS *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned int a5,
        struct _EX_RUNDOWN_REF **a6,
        struct DXGRESOURCE **a7)
{
  struct _EX_RUNDOWN_REF **v8; // r13
  struct _EX_RUNDOWN_REF *v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // esi
  int v13; // edx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rdx
  unsigned int v17; // edx
  struct DXGDEVICE *v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  struct _EX_RUNDOWN_REF *v21; // rdi
  ULONG_PTR i; // r9
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rbx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbx
  int v32; // edx
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  struct DXGALLOCATION *v36; // r8
  struct DXGDEVICE *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // edx
  unsigned int v41; // ebx
  char v42; // bl
  struct _EX_RUNDOWN_REF *v43; // r15
  __int64 v44; // rsi
  struct _EX_RUNDOWN_REF *v45; // r12
  unsigned __int64 Count_low; // rbx
  ULONG_PTR Count; // rdi
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // rsi
  struct _EX_RUNDOWN_REF *v52; // rdx
  struct _EX_RUNDOWN_REF *v53; // rdi
  char v54; // [rsp+50h] [rbp-61h]
  char v55; // [rsp+51h] [rbp-60h]
  struct DXGALLOCATION *v56; // [rsp+58h] [rbp-59h] BYREF
  struct DXGRESOURCE *v57; // [rsp+60h] [rbp-51h] BYREF
  struct _EX_RUNDOWN_REF **v58; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v59; // [rsp+70h] [rbp-41h]
  unsigned int v60; // [rsp+74h] [rbp-3Dh]
  struct _EX_RUNDOWN_REF *v61; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v62[24]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v63[12]; // [rsp+98h] [rbp-19h] BYREF

  v8 = a6;
  v58 = a6;
  *(_QWORD *)v63 = a7;
  v10 = a4;
  v61 = a4;
  v11 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v57, 0LL);
  v59 = 0;
  v54 = 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62, a1);
  if ( !(_DWORD)v11 )
  {
    v27 = 0LL;
    v55 = 0;
    *(_QWORD *)v63 = 0LL;
    v59 = 0;
    if ( !a5 )
    {
LABEL_83:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
      if ( a5 )
      {
        v51 = a5;
        do
        {
          v52 = *v8;
          v56 = 0LL;
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v61, v52);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v56, &v61);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v61);
          v53 = (struct _EX_RUNDOWN_REF *)v56;
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v63, 0LL);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v56, (struct _EX_RUNDOWN_REF **)v63);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v63);
          ExReleaseRundownProtection(v53 + 11);
          ExWaitForRundownProtectionRelease(v53 + 11);
          ExInitializeRundownProtection(v53 + 11);
          DxgkReferenceDxgAllocation(v53);
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v58, v53);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v56, (struct _EX_RUNDOWN_REF **)&v58);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v58);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
          ++v8;
          --v51;
        }
        while ( v51 );
      }
      goto LABEL_86;
    }
    while ( 1 )
    {
      v28 = *((_DWORD *)&v10->Count + v27);
      v29 = (v28 >> 6) & 0xFFFFFF;
      v60 = v28;
      v30 = v29;
      v31 = v29;
      if ( v29 >= *((_DWORD *)a1 + 74) )
        goto LABEL_38;
      v32 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v29 + 8);
      if ( ((v28 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v29 + 8) & 0x60)
        || (v32 & 0x2000) != 0
        || (v32 & 0x1F) == 0 )
      {
        goto LABEL_38;
      }
      v34 = *((_QWORD *)a1 + 35);
      if ( (*(_BYTE *)(v34 + 16LL * v29 + 8) & 0x1F) != 5 )
        break;
      v33 = *(struct _EX_RUNDOWN_REF **)(v34 + 16LL * v29);
LABEL_42:
      v35 = 2 * v31;
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v56, v33);
      v36 = v56;
      if ( !v56 )
      {
        WdLogSingleEntry3(3LL, a2, v60, -1073741811LL);
        WdLogGlobalForLineNumber = 9596;
        goto LABEL_66;
      }
      if ( (unsigned int)v30 < *((_DWORD *)a1 + 74) && (*(_DWORD *)(*((_QWORD *)a1 + 35) + 8 * v35 + 8) & 0x4000) != 0 )
      {
        WdLogSingleEntry3(3LL, a2, v60, -1073741267LL);
        WdLogGlobalForLineNumber = 9606;
        *(_DWORD *)v63 = 58022139;
        *(_QWORD *)&v63[4] = 5LL;
        RtlLogUnexpectedCodepath(v63);
LABEL_66:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
        goto LABEL_67;
      }
      v37 = (struct DXGDEVICE *)*((_QWORD *)v56 + 1);
      if ( v37 != a2 )
      {
        WdLogSingleEntry4(3LL, a2, v56, v37, -1073741811LL);
        WdLogGlobalForLineNumber = 9625;
        goto LABEL_66;
      }
      if ( !v55 )
      {
        *(_QWORD *)v63 = *((_QWORD *)v56 + 5);
        v55 = 1;
      }
      v38 = *((_QWORD *)v56 + 5);
      if ( v38 != *(_QWORD *)v63 )
      {
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
        WdLogGlobalForLineNumber = 9644;
        goto LABEL_66;
      }
      if ( v38 )
      {
        if ( (*(_DWORD *)(v38 + 4) & 1) != 0 )
        {
          WdLogSingleEntry2(3LL, a2, -1073741811LL);
          WdLogGlobalForLineNumber = 9658;
          goto LABEL_66;
        }
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v38 + 72)) )
        {
          v42 = 1;
          v54 = 1;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
          goto LABEL_68;
        }
        *((_DWORD *)v56 + 18) |= 0x100000u;
        v36 = v56;
      }
      if ( (unsigned int)v30 < *((_DWORD *)a1 + 74) )
      {
        v39 = *((_QWORD *)a1 + 35);
        v40 = *(_DWORD *)(v39 + 16 * v30 + 8);
        if ( ((v60 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v30 + 8) & 0x60) && (v40 & 0x2000) == 0 && (v40 & 0x1F) != 0 )
        {
          *(_DWORD *)(16LL * ((v60 >> 6) & 0xFFFFFF) + v39 + 8) |= 0x2000u;
          v36 = v56;
        }
      }
      v41 = v59;
      v58[v59] = (struct _EX_RUNDOWN_REF *)v36;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
      v27 = v41 + 1;
      v59 = v27;
      if ( (unsigned int)v27 >= a5 )
      {
        v8 = v58;
        goto LABEL_83;
      }
      v10 = v61;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_38:
    v33 = 0LL;
    goto LABEL_42;
  }
  v12 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)a1 + 74) )
    goto LABEL_6;
  v13 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v12 + 8);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v12 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_6;
  }
  v15 = *((_QWORD *)a1 + 35);
  if ( (*(_BYTE *)(v15 + 16LL * v12 + 8) & 0x1F) != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_6:
    v14 = 0LL;
    goto LABEL_10;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v12);
LABEL_10:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v56, v14);
  DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v57, (struct _EX_RUNDOWN_REF **)&v56);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
  if ( !v57 )
  {
    WdLogSingleEntry3(3LL, a2, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 9488;
LABEL_12:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v57);
    return 3221225485LL;
  }
  v17 = *((_DWORD *)a1 + 74);
  if ( v12 < v17 && (*(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v12 + 8) & 0x4000) != 0 )
  {
    WdLogSingleEntry3(3LL, a2, v11, -1073741267LL);
    WdLogGlobalForLineNumber = 9498;
    *(_DWORD *)v63 = 58022139;
    *(_QWORD *)&v63[4] = 4LL;
    RtlLogUnexpectedCodepath(v63);
    goto LABEL_67;
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)v57 + 1);
  if ( v18 == a2 )
  {
    if ( v12 < v17 )
    {
      v19 = *((_QWORD *)a1 + 35);
      v20 = *(_DWORD *)(v19 + 16LL * v12 + 8);
      if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v12 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        *(_DWORD *)(v19 + 16LL * v12 + 8) = v20 | 0x2000;
      }
    }
    v21 = (struct _EX_RUNDOWN_REF *)v57;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v57, (struct _EX_RUNDOWN_REF **)&v58);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v58);
    ExReleaseRundownProtection(v21 + 9);
    ExWaitForRundownProtectionRelease(v21 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v21[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v62);
    for ( i = v21[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v23 = *(_DWORD *)(i + 16);
      if ( v23 )
      {
        v24 = (v23 >> 6) & 0xFFFFFF;
        if ( v24 < *((_DWORD *)a1 + 74) )
        {
          v25 = *((_QWORD *)a1 + 35);
          v26 = *(_DWORD *)(v25 + 16LL * v24 + 8);
          if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
            && (v26 & 0x2000) == 0
            && (v26 & 0x1F) != 0 )
          {
            *(_DWORD *)(v25 + 16LL * v24 + 8) = v26 | 0x2000;
          }
        }
      }
    }
    ExInitializeRundownProtection(v21 + 9);
    ExAcquireRundownProtection(v21 + 9);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v58, v21);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v57, (struct _EX_RUNDOWN_REF **)&v58);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v58);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v62);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v21[10]);
    **(_QWORD **)v63 = v57;
LABEL_86:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v57);
    return 0LL;
  }
  WdLogSingleEntry4(3LL, a2, v57, v18, -1073741811LL);
  WdLogGlobalForLineNumber = 9517;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v56, 0LL);
  DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v57, (struct _EX_RUNDOWN_REF **)&v56);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v56);
LABEL_67:
  v42 = 0;
LABEL_68:
  if ( v57 )
    goto LABEL_12;
  if ( v59 )
  {
    v43 = (struct _EX_RUNDOWN_REF *)v58;
    v44 = v59;
    v45 = v61;
    v54 = v42;
    do
    {
      Count_low = LODWORD(v45->Count);
      Count = v43->Count;
      v48 = (LODWORD(v45->Count) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v48 < *((_DWORD *)a1 + 74) )
      {
        v49 = *((_QWORD *)a1 + 35);
        if ( (((unsigned int)Count_low >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60)
          && (*(_DWORD *)(v49 + 16 * v48 + 8) & 0x1F) != 0 )
        {
          v50 = 16 * ((Count_low >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v50 + v49 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(v50 + *((_QWORD *)a1 + 35) + 8) &= ~0x2000u;
        }
      }
      if ( (*(_DWORD *)(Count + 72) & 0x100000) != 0 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(Count + 40) + 72LL));
        *(_DWORD *)(Count + 72) &= ~0x100000u;
      }
      ++v43;
      v45 = (struct _EX_RUNDOWN_REF *)((char *)v45 + 4);
      --v44;
    }
    while ( v44 );
  }
  if ( !v54 )
    goto LABEL_12;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v57);
  return 255LL;
}
