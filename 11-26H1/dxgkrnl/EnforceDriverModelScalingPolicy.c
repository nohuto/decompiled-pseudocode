/*
 * XREFs of EnforceDriverModelScalingPolicy @ 0x14037F530
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x14037F138 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x14037F438 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14002EAC0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14002ED30 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x14040F3DC (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall EnforceDriverModelScalingPolicy(unsigned int *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rbx
  struct DXGGLOBAL *v6; // rdi
  DXGFASTMUTEX *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  bool v11; // zf
  _QWORD *v12; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v19; // eax
  struct _KTHREAD **v20; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  struct _KTHREAD **v22; // rcx
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  DXGFASTMUTEX *v24; // [rsp+58h] [rbp-A8h] BYREF
  char v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[16]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v28; // [rsp+88h] [rbp-78h]
  _BYTE v29[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v30; // [rsp+C8h] [rbp-38h]
  char v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]

  Global = DXGGLOBAL::GetGlobal();
  v5 = *(_QWORD *)a1;
  v23 = v5;
  v6 = Global;
  if ( v5 )
  {
    v7 = (struct DXGGLOBAL *)((char *)Global + 760);
    v25 = 0;
    v24 = (struct DXGGLOBAL *)((char *)Global + 760);
    if ( Global == (struct DXGGLOBAL *)-760LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 628;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
      v7 = v24;
    }
    if ( DXGFASTMUTEX::IsOwner(v7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 635;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
    v8 = (_QWORD *)((char *)v6 + 808);
    v9 = (_QWORD *)*((_QWORD *)v6 + 101);
    while ( 1 )
    {
      v10 = 0LL;
      if ( v9 != v8 )
        v10 = v9;
      if ( !v10 )
        break;
      v11 = v9 == v8;
      v12 = v9;
      v9 = (_QWORD *)*v9;
      if ( v11 )
        v12 = 0LL;
      if ( *(_QWORD *)((char *)v12 + 412) == __PAIR64__(HIDWORD(v23), v5) )
      {
        _m_prefetchw(v12 + 3);
        v13 = v12[3];
        while ( v13 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v12 + 3, v13 + 1, v13);
          if ( v14 == v13 )
            goto LABEL_16;
        }
      }
    }
    v12 = 0LL;
LABEL_16:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
    if ( v12 )
    {
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v12[23] || ExIsResourceAcquiredSharedLite((PERESOURCE)v12[21]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 8986;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Potentinal Deadlock code path, Please contact basevid",
          8986LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v18 = v12[395];
        if ( !*(_BYTE *)(v18 + 289) )
        {
          if ( *(int *)(*(_QWORD *)(v18 + 16) + 3044LL) < 1105 )
          {
            if ( (unsigned int)(*a2 - 4) > 1 )
              goto LABEL_29;
          }
          else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
          {
            goto LABEL_29;
          }
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, *(_QWORD *)(v18 + 104));
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v12[395] + 104LL));
          v22 = (struct _KTHREAD **)(v23 + 40);
          *a2 = AdapterDefaultScaling;
          DXGFASTMUTEX::Release(v22);
        }
LABEL_29:
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
        return;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v12, 0LL);
      if ( v31 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v29, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7648;
      }
      v15 = v30;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v30 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v30 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (__int64)"g");
          KeWaitForSingleObject((char *)v30 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v30, 0LL);
        v15 = v30;
      }
      v32 = 0LL;
      v31 = 1;
      if ( *((_DWORD *)v15 + 50) != 1 )
        goto LABEL_38;
      if ( v28 != v30 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v27, 0LL);
        if ( *((_DWORD *)v28 + 50) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v27);
LABEL_38:
          COREACCESS::Release((COREACCESS *)v29);
          WdLogSingleEntry4(3LL, -1073741130LL, v12, *((int *)v12 + 104), *((unsigned int *)v12 + 103));
          WdLogGlobalForLineNumber = 9006;
          goto LABEL_28;
        }
      }
      v17 = v12[395];
      v26[1] = 1;
      if ( *(_BYTE *)(v17 + 289) )
      {
LABEL_27:
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v26);
LABEL_28:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
        goto LABEL_29;
      }
      if ( *(int *)(*(_QWORD *)(v17 + 16) + 3044LL) < 1105 )
      {
        if ( (unsigned int)(*a2 - 4) > 1 )
          goto LABEL_27;
      }
      else if ( *a2 != D3DKMDT_VPPS_NOTSPECIFIED )
      {
        goto LABEL_27;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, *(_QWORD *)(v17 + 104));
      v19 = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v12[395] + 104LL));
      v20 = (struct _KTHREAD **)(v23 + 40);
      *a2 = v19;
      DXGFASTMUTEX::Release(v20);
      goto LABEL_27;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3305;
  }
  WdLogSingleEntry2(3LL, (int)a1[1], *a1);
  WdLogGlobalForLineNumber = 8970;
}
