/*
 * XREFs of ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     DxgkGetPathsModality @ 0x14031B1E0 (DxgkGetPathsModality.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14004A278 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x14005905C (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1401901E0 (-GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     DxgkWriteDiagEntry @ 0x14031B9C0 (DxgkWriteDiagEntry.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x140337898 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140337F0C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1403381E0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x14033C0A8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14033CF38 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14033DF54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140349264 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z @ 0x1403DAEB0 (--0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403F6200 (-_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x140407824 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x14040B150 (DxgkGetGlobalRawmodeFlag.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x14040F438 (-LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 *     ??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ @ 0x140412150 (--1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1404190F4 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x140419768 (_CCD_TOPOLOGY--RetrievePersisted_--_2_--RecordRetrievalFlags--_RecordRetrievalFlags.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted(CCD_TOPOLOGY *this, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int v6; // ebx
  int v8; // eax
  bool v9; // r14
  __int64 v10; // rbx
  struct CCD_BTL *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r14d
  void **ModalitySetId; // rax
  int v18; // ebx
  struct D3DKMT_HASH **v19; // r14
  __int64 v20; // rax
  struct _DXGK_DIAG_HEADER *v21; // rbx
  size_t v22; // r8
  PCHAR v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v28; // r8
  _QWORD *v29; // rax
  int TopologyForClass; // eax
  char GlobalRawmodeFlag; // al
  int v32; // eax
  _QWORD *v33; // rbx
  _QWORD *v34; // rax
  struct CCD_BTL *v35; // rax
  bool v36; // r8
  int v37; // eax
  int TopologyClass; // eax
  int v39; // ecx
  int active; // eax
  int ConnectedSetHash; // eax
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v44; // [rsp+68h] [rbp-A0h] BYREF
  __m256i v45; // [rsp+78h] [rbp-90h] BYREF
  __int16 v46; // [rsp+98h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-68h]
  int v48; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C8h] [rbp-40h]
  __int16 v51; // [rsp+D0h] [rbp-38h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  _BYTE v53[208]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v54[12]; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int16 v55; // [rsp+1C4h] [rbp+BCh]
  bool v56; // [rsp+2D0h] [rbp+1C8h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = 0;
  LODWORD(v42) = 0;
  v8 = DxgkAcquireSessionModeChangeLock(0);
  LODWORD(v43) = v8;
  v9 = v8 >= 0;
  v56 = v8 >= 0;
  if ( v8 >= 0 )
  {
    v45.m256i_i32[0] = 0;
    memset(&v45.m256i_u64[1], 0, 24);
    v47 = 0LL;
    v46 = 0;
    v12 = CCD_BTL::Global();
    v13 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, __m256i *))v12)(v12, &v45);
    v16 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry4(2LL, v13, this, *((_QWORD *)this + 8), v4);
      WdLogGlobalForLineNumber = 2531;
LABEL_66:
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v45);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v56);
      CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(&v42);
      return (unsigned int)v16;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( !*((_WORD *)CCD_TOPOLOGY::GetModalitySetId((void **)this) + 4) )
      {
        WdLogSingleEntry3(2LL, this, *((_QWORD *)this + 8), *(int *)this);
        WdLogGlobalForLineNumber = 2546;
        v16 = -1073741823;
        goto LABEL_66;
      }
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53, this);
      if ( (v4 & 0x2000) != 0 )
      {
        ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)this);
        v48 = 0;
        v50 = 0LL;
        v51 = 0;
        v49 = 0LL;
        v52 = 0LL;
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)&v48, (__int64)ModalitySetId);
        v18 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v53,
                (const struct CCD_SET_STRING_ID *)&v45,
                (const struct CCD_SET_STRING_ID *)&v48,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v48);
      }
      else
      {
        v18 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                (CCD_RECENT_TOPOLOGY_RETRIEVER *)v53,
                this,
                v4 & 0xF,
                (v4 & 0x1000) != 0);
      }
      v16 = -1073741275;
      if ( v18 == -1073741275 )
      {
        LODWORD(v42) = 2;
        WdLogSingleEntry3(3LL, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2574;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
        goto LABEL_66;
      }
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(2LL, v18, this, *((_QWORD *)this + 8), v4);
        WdLogGlobalForLineNumber = 2587;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
        goto LABEL_65;
      }
      LODWORD(v42) = 1;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v53);
      v19 = (struct D3DKMT_HASH **)((char *)this + 64);
LABEL_56:
      LODWORD(v43) = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(this, (enum CCD_TOPOLOGY_CLASS *)&v43);
      if ( TopologyClass >= 0 )
      {
        v39 = v43;
      }
      else
      {
        WdLogSingleEntry3(2LL, TopologyClass, this, *v19);
        v39 = 0;
        WdLogGlobalForLineNumber = 2808;
      }
      *((_DWORD *)*v19 + 8) = v39;
      active = CCD_TOPOLOGY::_FillPathsActiveFlags(this);
      if ( active < 0
        || (active = CCD_TOPOLOGY::FillPathsTargetFlags(this), active < 0)
        || (active = CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(this), active < 0) )
      {
        v16 = active;
        goto LABEL_66;
      }
      ConnectedSetHash = CCD_SET_STRING_ID::QueryConnectedSetHash((CCD_SET_STRING_ID *)&v45, *v19);
      v18 = ConnectedSetHash;
      if ( ConnectedSetHash < 0 )
      {
        WdLogSingleEntry4(2LL, ConnectedSetHash, this, *v19, (unsigned int)v4);
        WdLogGlobalForLineNumber = 2846;
      }
LABEL_65:
      v16 = v18;
      goto LABEL_66;
    }
    if ( (v4 & 0x10000000) != 0 )
    {
      LODWORD(v4) = v4 | 1;
      v16 = -1073741275;
    }
    else
    {
      CCD_RECENT_TOPOLOGY_RETRIEVER::CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54, this);
      v6 = 1;
      v16 = CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
              (CCD_RECENT_TOPOLOGY_RETRIEVER *)v54,
              (const struct CCD_SET_STRING_ID *)&v45,
              0LL,
              v4 & 0xF,
              (v4 & 0x1000) != 0);
      if ( v16 == -1073741789 )
      {
        if ( a3 )
          *a3 = v55;
        CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
        goto LABEL_24;
      }
      if ( v16 >= 0 )
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1360) )
        {
          ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v45);
          v28 = (struct D3DKMT_GETPATHSMODALITY *)*((_QWORD *)this + 8);
          v44 = *(__m128i *)ConnectedSetStr;
          LogCddDatabaseAccessPacket(1, v16, v28, (struct _STRING *)&v44, v4);
        }
        else
        {
          v43 = 0LL;
          DxgkLogCodePointPacket(9u, v4, v16, 0, 0LL);
        }
      }
      else
      {
        v44 = *(__m128i *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v45);
        LODWORD(v42) = _mm_cvtsi128_si32(v44);
        LODWORD(v43) = (unsigned __int16)v42 + 57;
        v20 = operator new[]((unsigned int)v43, 0x63644356u, 256LL);
        v21 = (struct _DXGK_DIAG_HEADER *)v20;
        if ( v20 )
        {
          v22 = (unsigned __int16)v42;
          v23 = (PCHAR)v44.m128i_i64[1];
          *(_DWORD *)v20 = 9;
          *(_DWORD *)(v20 + 4) = v43;
          *(_DWORD *)(v20 + 40) = 0;
          *(_QWORD *)(v20 + 32) = 0LL;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_OWORD *)(v20 + 16) = 0LL;
          *(_DWORD *)(v20 + 48) = v16;
          *(_DWORD *)(v20 + 52) = v4;
          memmove((void *)(v20 + 56), v23, v22);
          DxgkWriteDiagEntry(v21, v24, v25, v26);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v21);
        }
        else
        {
          v43 = 0LL;
          DxgkLogCodePointPacket(0x1Bu, v4, v16, 0, 0LL);
        }
        v6 = 2;
      }
      LODWORD(v42) = v6;
      CCD_RECENT_TOPOLOGY_RETRIEVER::~CCD_RECENT_TOPOLOGY_RETRIEVER((CCD_RECENT_TOPOLOGY_RETRIEVER *)v54);
      if ( v16 >= 0 )
      {
LABEL_45:
        v33 = (_QWORD *)((char *)this + 64);
        v43 = (unsigned int)v4;
        if ( v16 < 0 )
        {
          WdLogSingleEntry4(2LL, v16, this, *v33, (unsigned int)v4);
          WdLogGlobalForLineNumber = 2751;
          goto LABEL_66;
        }
        v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
        v19 = (struct D3DKMT_HASH **)((char *)this + 64);
        v34[3] = this;
        v34[4] = *v33;
        v34[5] = (unsigned int)v4;
        WdLogGlobalForLineNumber = 2759;
        if ( (v4 & 0xF) == 0xF )
        {
          v35 = CCD_BTL::Global();
          v37 = CDS_JOURNAL::CommitTo((struct CCD_BTL *)((char *)v35 + 112), this, v36, a3);
          v16 = -1073741789;
          if ( v37 == -1073741789 )
          {
            if ( a3 )
              v5 = *a3;
            WdLogSingleEntry5(3LL, v5, -1073741789LL, this, *v33, v43);
            WdLogGlobalForLineNumber = 2774;
            goto LABEL_66;
          }
          if ( v37 == -1073741266 )
          {
            WdLogSingleEntry4(3LL, -1073741266LL, this, *v33, (unsigned int)v4);
            WdLogGlobalForLineNumber = 2784;
            v19 = (struct D3DKMT_HASH **)((char *)this + 64);
          }
          else
          {
            v19 = (struct D3DKMT_HASH **)((char *)this + 64);
            if ( v37 < 0 )
            {
              WdLogSingleEntry4(2LL, v37, this, *v33, (unsigned int)v4);
              WdLogGlobalForLineNumber = 2794;
            }
          }
        }
        goto LABEL_56;
      }
    }
    if ( (v4 & 0x80u) == 0LL )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      LOWORD(v42) = 0;
      v29[3] = v16;
      v29[4] = this;
      v29[5] = *((_QWORD *)this + 8);
      v29[6] = (unsigned int)v4;
      WdLogGlobalForLineNumber = 2677;
      v43 = (unsigned int)v4;
      CCD_BTL::Global();
      TopologyForClass = CCD_BTL_FULL::GetTopologyForClass();
      v16 = TopologyForClass;
      if ( TopologyForClass == -1073741789 )
      {
        if ( a3 )
          *a3 = v42;
        CCD_TOPOLOGY::_FillPathsActiveFlags(this);
        CCD_TOPOLOGY::FillPathsTargetFlags(this);
        LODWORD(v42) = 0;
LABEL_24:
        v16 = -1073741789;
        goto LABEL_66;
      }
      if ( TopologyForClass < 0 )
      {
        LODWORD(v42) = v6 | 8;
        WdLogSingleEntry4(2LL, TopologyForClass, this, *((_QWORD *)this + 8), v43);
        WdLogGlobalForLineNumber = 2712;
        goto LABEL_66;
      }
      if ( (v4 & 0x4000000) != 0 )
      {
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v32 = CCD_TOPOLOGY::Functionalize(this, GlobalRawmodeFlag != 0 ? 0x20000 : 0, 1);
        v16 = v32;
        if ( v32 < 0 )
        {
          LODWORD(v42) = v6 | 8;
          WdLogSingleEntry4(2LL, v32, this, *((_QWORD *)this + 8), v43);
          WdLogGlobalForLineNumber = 2737;
          goto LABEL_66;
        }
      }
      LODWORD(v42) = v6 | 4;
    }
    goto LABEL_45;
  }
  v10 = v8;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2519;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( v9 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v43;
}
