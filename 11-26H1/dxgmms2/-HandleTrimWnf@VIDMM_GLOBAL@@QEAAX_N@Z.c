/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400293D0 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UmdManagesResidency@DXGPROCESS@@QEBAEXZ @ 0x14003B53C (-UmdManagesResidency@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400E5588 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z @ 0x14010C844 (-VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x14010C8F8 (-SendTrimWnf@VIDMM_GLOBAL@@QEBAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(struct _KTHREAD ***this, bool a2)
{
  bool v2; // r12
  struct _KTHREAD *v4; // rdi
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  struct _KTHREAD **v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r8
  _QWORD *v10; // r15
  _BYTE *v11; // rdi
  struct _RTL_BALANCED_NODE *v12; // rax
  _QWORD *Children; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rcx
  _QWORD *v20; // rax
  bool v21; // zf
  struct _KTHREAD **v22; // rax
  __int64 v23; // rbx
  char v24; // r15
  struct _KTHREAD **v25; // rcx
  char v26; // r14
  unsigned __int64 v27; // r9
  char v28; // cl
  struct _KTHREAD **v29; // rax
  volatile signed __int32 *v30; // rcx
  volatile signed __int32 *v31; // rcx
  unsigned __int64 v32; // rcx
  signed __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  _QWORD *i; // rcx
  __int64 v37; // rax
  struct _KTHREAD **v38; // r15
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v39; // ebx
  DXGPROCESS *v40; // rcx
  DXGPROCESS *v41; // rcx
  char IsHighPriorityProcess; // al
  struct _KTHREAD *v43; // rcx
  bool v44; // cc
  struct _KTHREAD **v45; // rax
  _DWORD *v46; // rcx
  __int64 *v47; // rax
  struct _KTHREAD **v48; // rdx
  struct _KTHREAD **v49; // [rsp+50h] [rbp-29h]
  unsigned __int64 v50; // [rsp+58h] [rbp-21h] BYREF
  struct _KTHREAD *v51; // [rsp+60h] [rbp-19h]
  char v52[8]; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v53; // [rsp+70h] [rbp-9h]
  int v54; // [rsp+78h] [rbp-1h]
  _BYTE v55[80]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v57; // [rsp+F0h] [rbp+77h]
  char v58; // [rsp+F0h] [rbp+77h]
  __int64 v59; // [rsp+F8h] [rbp+7Fh]

  v2 = a2;
  if ( (unsigned int)Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    VidMmHandleTrimWnf((struct VIDMM_GLOBAL *)this, v2);
    return;
  }
  v4 = (struct _KTHREAD *)this[571];
  v51 = v4;
  v5 = -1LL;
  v6 = -1LL;
  v59 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( *((_DWORD *)this + 1738) )
  {
    v7 = this[5040];
    v8 = 0LL;
    v49 = v7;
    v50 = *((unsigned int *)this + 1738);
    while ( 1 )
    {
      v9 = 2LL;
      v57 = 2LL;
      v10 = (_QWORD *)((char *)*v7 + 784);
      v11 = (char *)*v7 + 632;
      do
      {
        if ( (*v11 & 1) == 0 )
        {
          v32 = *(v10 - 13);
          if ( !v32 )
            goto LABEL_24;
          v33 = 100 - 100LL * *v10 / v32;
          if ( v33 > (unsigned int)dword_14008A54C )
          {
            v34 = (unsigned int)dword_14008A554;
            goto LABEL_55;
          }
          if ( v33 <= (unsigned int)dword_14008A550 )
          {
            v34 = (unsigned int)dword_14008A560;
            v35 = (unsigned int)dword_14008A55C;
          }
          else
          {
            v34 = (unsigned int)dword_14008A560
                + (v33 - (unsigned int)dword_14008A550)
                * (unsigned int)(dword_14008A55C - dword_14008A560)
                / (unsigned int)(dword_14008A54C - dword_14008A550);
            v9 = v57;
LABEL_55:
            v35 = (unsigned int)dword_14008A558;
          }
          if ( v5 < v34 )
            v34 = v5;
          v5 = v34;
          if ( v6 >= v35 )
            v6 = v35;
          goto LABEL_24;
        }
        v12 = VIDMM_PARTITION::_PartitionTree;
        Children = 0LL;
        while ( v12 )
        {
          Children = v12->Children;
          v12 = v12->Children[0];
        }
        if ( Children )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(Children[5] + 384LL * *((unsigned int *)this[3] + 60) + 24);
            v15 = *(_QWORD *)(v14 + v8 + 16);
            if ( v15 )
              break;
LABEL_18:
            v19 = (_QWORD **)Children[1];
            v20 = Children;
            if ( v19 )
            {
              Children = (_QWORD *)Children[1];
              for ( i = *v19; i; i = (_QWORD *)*i )
                Children = i;
            }
            else
            {
              while ( 1 )
              {
                Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !Children || (_QWORD *)*Children == v20 )
                  break;
                v20 = Children;
              }
            }
            if ( !Children )
            {
              v9 = v57;
              goto LABEL_24;
            }
          }
          v16 = 100 - 100LL * *(_QWORD *)(v14 + v8 + 120) / v15;
          if ( v16 > (unsigned int)dword_14008A54C )
          {
            v17 = (unsigned int)dword_14008A554;
            goto LABEL_13;
          }
          if ( v16 <= (unsigned int)dword_14008A550 )
          {
            v17 = (unsigned int)dword_14008A560;
            v18 = (unsigned int)dword_14008A55C;
          }
          else
          {
            v17 = (unsigned int)dword_14008A560
                + (v16 - (unsigned int)dword_14008A550)
                * (unsigned int)(dword_14008A55C - dword_14008A560)
                / (unsigned int)(dword_14008A54C - dword_14008A550);
LABEL_13:
            v18 = (unsigned int)dword_14008A558;
          }
          if ( v5 < v17 )
            v17 = v5;
          v5 = v17;
          if ( v6 >= v18 )
            v6 = v18;
          goto LABEL_18;
        }
LABEL_24:
        v11 += 24;
        v10 += 43;
        v57 = --v9;
      }
      while ( v9 );
      v8 += 344LL;
      v7 = v49 + 1;
      v59 = v6;
      v21 = v50-- == 1;
      ++v49;
      if ( v21 )
      {
        v4 = v51;
        v2 = a2;
        break;
      }
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  KeLeaveCriticalRegion();
  v22 = this[5616];
  if ( v22 && v5 > v4 - (struct _KTHREAD *)v22 )
  {
    v23 = v4 - (struct _KTHREAD *)v22 - v5;
    v24 = 0;
  }
  else
  {
    this[5616] = (struct _KTHREAD **)v4;
    v23 = -v5;
    v24 = 1;
  }
  v25 = this[5617];
  if ( v25 && (__int64)v6 > v4 - (struct _KTHREAD *)v25 )
  {
    if ( v23 <= (__int64)(v4 - (struct _KTHREAD *)v25 - v6) )
      v23 = v4 - (struct _KTHREAD *)v25 - v6;
    v26 = 0;
  }
  else
  {
    this[5617] = (struct _KTHREAD **)v4;
    v37 = -(__int64)v6;
    v26 = 1;
    if ( v23 <= v37 )
      v23 = v37;
  }
  v58 = 0;
  v53 = (volatile signed __int32 *)(this + 5152);
  v54 = 0;
  if ( this != (struct _KTHREAD ***)-41216LL && this[5153] == (struct _KTHREAD **)KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(0LL, 262146LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v52);
  v27 = 0LL;
  if ( v24 )
  {
    v45 = this[570];
    v46 = this + 5620;
    if ( this[5618] == v45 )
    {
      ++*v46;
    }
    else
    {
      *v46 = 0;
      this[5618] = v45;
    }
    v47 = (__int64 *)(this + 570);
    if ( !v26 )
      goto LABEL_96;
  }
  else
  {
    if ( !v26 )
    {
      v28 = 0;
      goto LABEL_41;
    }
    v46 = this + 5620;
    v47 = (__int64 *)(this + 570);
  }
  v48 = (struct _KTHREAD **)*v47;
  if ( this[5619] == (struct _KTHREAD **)*v47 )
  {
    ++*((_DWORD *)this + 11241);
  }
  else
  {
    *((_DWORD *)this + 11241) = 0;
    this[5619] = v48;
  }
LABEL_96:
  if ( *v46 > 1u && *((_DWORD *)this + 11241) > 1u )
  {
    v28 = 0;
    goto LABEL_44;
  }
  v28 = 1;
  v58 = 1;
LABEL_41:
  v29 = *this;
  if ( v23 > (__int64)(*this)[16] )
  {
    v29[16] = (struct _KTHREAD *)v23;
    *((_BYTE *)v29 + 214) = 5;
  }
  if ( v28 )
    goto LABEL_71;
LABEL_44:
  if ( v2 )
  {
LABEL_71:
    v38 = this[5158];
    while ( 1 )
    {
      if ( v38 == (struct _KTHREAD **)(this + 5158) )
      {
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52);
        return;
      }
      v39.0 = 0;
      if ( v28 )
      {
        v40 = (DXGPROCESS *)*((_QWORD *)*(v38 - 3) + 9);
        if ( v40 )
        {
          if ( DXGPROCESS::UmdManagesResidency(v40) )
          {
            IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v41);
            v43 = v38[9];
            if ( IsHighPriorityProcess )
            {
              if ( !v43 )
              {
LABEL_86:
                v39.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)1;
                v38[9] = v4;
                goto LABEL_75;
              }
              v44 = v59 <= v4 - v43;
            }
            else
            {
              if ( !v43 )
                goto LABEL_86;
              v44 = v5 <= v4 - v43;
            }
            if ( v44 )
              goto LABEL_86;
          }
        }
      }
LABEL_75:
      v50 = v27;
      if ( a2 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v55, v38 + 13);
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(v38 - 5), &v50, 0, 1u);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55);
        v27 = v50;
        if ( v50 )
          v39.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v39.Value | 4);
      }
      if ( v39.0 )
        VIDMM_GLOBAL::SendTrimWnf((VIDMM_GLOBAL *)this, *(v38 - 3), v39, v27);
      v38 = (struct _KTHREAD **)*v38;
      v27 = 0LL;
      v28 = v58;
    }
  }
  if ( v54 == 1 )
  {
    v30 = v53;
    v54 = 0;
    _InterlockedDecrement(v53 + 4);
    ExReleasePushLockSharedEx(v30, 0LL);
LABEL_47:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v54 == 2 )
  {
    v31 = v53;
    v54 = 0;
    *((_QWORD *)v53 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v31, 0LL);
    goto LABEL_47;
  }
}
