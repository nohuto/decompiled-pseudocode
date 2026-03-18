/*
 * XREFs of ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140260A88
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x14005B9E0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV-$AutoBuffer@U_DMM_.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x140067D80 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r14
  __int64 v10; // r12
  int v11; // ebx
  struct _DMM_MONITOR_SERIALIZATION *v12; // rbx
  __int64 v13; // rax
  struct DXGADAPTER *v14; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rax
  unsigned __int8 v20; // al
  _BYTE *v21; // r14
  __int64 v22; // rbx
  unsigned __int8 v23; // di
  char *v24; // rsi
  _QWORD *v25; // rax
  DXGMONITOR *v26[4]; // [rsp+30h] [rbp-39h] BYREF
  void **v27; // [rsp+50h] [rbp-19h] BYREF
  void **v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+60h] [rbp-9h]
  _QWORD v30[2]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp+Fh]
  int v32; // [rsp+80h] [rbp+17h]
  __int64 v33; // [rsp+88h] [rbp+1Fh]
  __int64 (__fastcall ***v34)(_QWORD, __int64); // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v35; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 982;
    }
    v29 = 0;
    v27 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = a1 + 24;
    v6 = *(_QWORD *)(a1 + 24);
    v28 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v31 = 0LL;
    v30[1] = v30;
    v32 = 2;
    v30[0] = v30;
    v7 = 0LL;
    v33 = 0LL;
    if ( v6 != a1 + 24 )
      v7 = v6 - 8;
    while ( v7 )
    {
      if ( *(_QWORD *)(v7 + 112) )
      {
        v8 = operator new(0x38uLL, 0x4E506456u, 256LL);
        v9 = (_QWORD *)v8;
        if ( !v8 )
        {
          v34 = 0LL;
          WdLogSingleEntry2(6LL, 56LL, v7);
          WdLogGlobalForLineNumber = 1004;
          v11 = -1073741801;
          goto LABEL_32;
        }
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
        *(_QWORD *)v8 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        *(_QWORD *)(v8 + 24) = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        *(_QWORD *)(v8 + 32) = 0LL;
        *(_QWORD *)(v8 + 40) = 0LL;
        *(_QWORD *)(v8 + 48) = 256LL;
        v10 = *(_QWORD *)(v7 + 112);
        v34 = (__int64 (__fastcall ***)(_QWORD, __int64))v8;
        if ( !v10 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1015;
        }
        v35 = 0LL;
        if ( !v10 )
        {
          v11 = -1073741811;
LABEL_30:
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v7 + 112), *(unsigned int *)(v7 + 24), ContainingAdapter, v11);
          WdLogGlobalForLineNumber = 1037;
LABEL_32:
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v34);
          goto LABEL_55;
        }
        MONITOR_MGR::AcquireMonitorShared(v26, v10);
        if ( !v26[0] )
        {
          v11 = -1073741275;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3354;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
          goto LABEL_30;
        }
        v11 = DXGMONITOR::_SerializeMonitor(v26[0], &v35, 0LL);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
        if ( v11 < 0 && v11 != -1073741789 )
          goto LABEL_30;
        if ( v11 != -1073741789 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1042;
        }
        v11 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(v9, v35);
        if ( v11 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1052;
          goto LABEL_32;
        }
        v12 = (struct _DMM_MONITOR_SERIALIZATION *)v9[4];
        MONITOR_MGR::AcquireMonitorShared(v26, v10);
        if ( !v26[0] )
        {
          v11 = -1073741275;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3354;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
LABEL_26:
          v14 = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(a1 + 88));
          WdLogSingleEntry4(2LL, *(_QWORD *)(v7 + 112), *(unsigned int *)(v7 + 24), v14, v11);
          WdLogGlobalForLineNumber = 1070;
          goto LABEL_32;
        }
        v11 = DXGMONITOR::_SerializeMonitor(v26[0], &v35, v12);
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v26);
        if ( v11 < 0 )
          goto LABEL_26;
        v34 = 0LL;
        Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Enqueue(&v27, v9);
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v34);
        v5 = a1 + 24;
      }
      v13 = *(_QWORD *)(v7 + 8);
      v7 = v13 - 8;
      if ( v13 == v5 )
        v7 = 0LL;
    }
    v16 = 1LL;
    v17 = 0LL;
    if ( v31 > 1 )
      v16 = v31;
    v18 = 4 * v16 + 4;
    if ( (_QWORD *)v30[0] != v30 )
      v17 = v30[0] - 8LL;
    while ( v17 )
    {
      v19 = *(_QWORD **)(v17 + 8);
      v18 += *(_QWORD *)(v17 + 40);
      v17 = (__int64)(v19 - 1);
      if ( v19 == v30 )
        v17 = 0LL;
    }
    v11 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v18);
    if ( v11 >= 0 )
    {
      v20 = 1;
      v21 = (_BYTE *)a2[4];
      v22 = 0LL;
      v23 = 0;
      if ( (unsigned __int8)v31 > 1u )
        v20 = v31;
      *v21 = v31;
      v24 = (char *)(a2[4] + 4LL + 4LL * v20);
      if ( (_QWORD *)v30[0] != v30 )
        v22 = v30[0] - 8LL;
      while ( v22 )
      {
        *(_DWORD *)&v21[4 * v23 + 4] = (_DWORD)v24 - (_DWORD)v21;
        memmove(v24, *(const void **)(v22 + 32), *(_QWORD *)(v22 + 40));
        v24 += *(_QWORD *)(v22 + 40);
        v25 = *(_QWORD **)(v22 + 8);
        v22 = (__int64)(v25 - 1);
        if ( v25 == v30 )
          v22 = 0LL;
        ++v23;
      }
      if ( v23 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1147;
      }
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1107;
    }
LABEL_55:
    v27 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v28 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v28);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 976;
  }
  return result;
}
