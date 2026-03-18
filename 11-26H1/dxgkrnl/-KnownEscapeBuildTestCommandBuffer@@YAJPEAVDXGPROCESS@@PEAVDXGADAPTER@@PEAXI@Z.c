/*
 * XREFs of ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401DA5FC
 * Callers:
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403E92C0 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z @ 0x1401AAD90 (-DdiBuildTestCommandBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDTESTCOMMANDBUFFER@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022EAE8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall KnownEscapeBuildTestCommandBuffer(
        struct DXGPROCESS *a1,
        struct DXGADAPTER *a2,
        unsigned int *a3,
        unsigned int a4)
{
  __int64 v6; // rax
  const wchar_t *v7; // r9
  int v8; // eax
  int v9; // edi
  __int64 v10; // r13
  _QWORD *v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // r8d
  int EntryType; // eax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // r9d
  unsigned int v21; // edx
  unsigned int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // ecx
  char *v26; // r15
  char *v27; // r14
  __int64 v28; // rax
  const wchar_t *v29; // r9
  _OWORD *Pool2; // rax
  _OWORD *v31; // r13
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned int v37; // eax
  __int64 v39; // rsi
  __int64 v41; // [rsp+50h] [rbp-108h]
  __int64 v42; // [rsp+58h] [rbp-100h]
  ADAPTER_RENDER *v43; // [rsp+60h] [rbp-F8h]
  unsigned int v44; // [rsp+60h] [rbp-F8h]
  _QWORD v45[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v46[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 760;
    return 3221225485LL;
  }
  if ( a4 < 0x80 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 765LL;
    v7 = L"Invalid private driver size";
LABEL_95:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v43 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 396);
  if ( !v43 )
    return 3221225485LL;
  v8 = a3[20];
  if ( !v8 || v8 >= 6 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 776LL;
    v7 = L"Invalid command";
    goto LABEL_95;
  }
  if ( a3[26] - 4 > 0xFFC || a3[27] > 0x400 )
  {
    WdLogSingleEntry0(2LL);
    v6 = 783LL;
    v7 = L"Invalid DMA buffer or private data size";
    goto LABEL_95;
  }
  v9 = -1073741823;
  memset(v45, 0, sizeof(v45));
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v46, a1);
  v11 = (_QWORD *)((char *)a1 + 280);
  v12 = (a3[2] >> 6) & 0xFFFFFF;
  if ( v12 < *((_DWORD *)a1 + 74)
    && (v13 = *(_DWORD *)(*v11 + 16LL * v12 + 8), a3[2] >> 30 == ((v13 >> 5) & 3))
    && (v13 & 0x2000) == 0
    && (v13 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)a1 + 280);
  }
  else
  {
    EntryType = 0;
  }
  v15 = (a3[2] >> 6) & 0xFFFFFF;
  v16 = a3[2] >> 30;
  v17 = *((_DWORD *)a1 + 74);
  if ( EntryType == 15 )
  {
    if ( v15 < v17 )
    {
      v19 = *(_DWORD *)(*v11 + 16LL * v15 + 8);
      if ( v16 == ((v19 >> 5) & 3) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(*v11 + 16LL * v15 + 8) & 0x1F) == 0xF )
        {
          v41 = *(_QWORD *)(*v11 + 16LL * v15);
          goto LABEL_42;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v41 = 0LL;
  }
  else
  {
    if ( v15 >= v17
      || (v20 = *(_DWORD *)(*v11 + 16LL * v15 + 8), v16 != ((v20 >> 5) & 3))
      || (v20 & 0x2000) != 0
      || (v20 & 0x1F) == 0
      || (unsigned int)HMGRTABLE::GetEntryType((char *)a1 + 280) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 809;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid context handle", 809LL, 0LL, 0LL, 0LL, 0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v46);
      return 3221225485LL;
    }
    v21 = (a3[2] >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)a1 + 74) )
    {
      v23 = *(_DWORD *)(*v11 + 16LL * v21 + 8);
      if ( a3[2] >> 30 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(*v11 + 16LL * v21 + 8) & 0x1F) == 7 )
        {
          v10 = *(_QWORD *)(*v11 + 16LL * v21);
          v42 = v10;
          goto LABEL_42;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v42 = 0LL;
  }
LABEL_42:
  v24 = (a3[2] >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 < *((_DWORD *)a1 + 74) )
  {
    v25 = *(_DWORD *)(*v11 + 16 * v24 + 8);
    if ( a3[2] >> 30 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
      *(_DWORD *)(16 * (((unsigned __int64)a3[2] >> 6) & 0xFFFFFF) + *v11 + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v46);
  v26 = 0LL;
  v27 = 0LL;
  if ( (a3[3] & 1) == 0 )
  {
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 830LL;
      v29 = L"Invalid context handle";
      goto LABEL_50;
    }
LABEL_53:
    if ( *((_BYTE *)a2 + 209) )
    {
      v44 = a3[26] + 128 + a3[27];
      Pool2 = (_OWORD *)ExAllocatePool2(256LL, v44, 1265072196LL);
      v31 = Pool2;
      if ( !Pool2 )
      {
LABEL_55:
        v9 = -1073741801;
        goto LABEL_78;
      }
      *Pool2 = *(_OWORD *)a3;
      Pool2[1] = *((_OWORD *)a3 + 1);
      Pool2[2] = *((_OWORD *)a3 + 2);
      Pool2[3] = *((_OWORD *)a3 + 3);
      Pool2[4] = *((_OWORD *)a3 + 4);
      Pool2[5] = *((_OWORD *)a3 + 5);
      Pool2[6] = *((_OWORD *)a3 + 6);
      Pool2[7] = *((_OWORD *)a3 + 7);
      v32 = v42;
      if ( (a3[3] & 1) != 0 )
        v32 = v41;
      *((_DWORD *)v31 + 2) = *(_DWORD *)(v32 + 28);
      *((_QWORD *)v31 + 11) = 0LL;
      *((_QWORD *)v31 + 12) = 0LL;
      v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
             (struct DXGADAPTER *)((char *)a2 + 4712),
             *((_DWORD *)a1 + 122),
             *((_DWORD *)a2 + 1200),
             0,
             0,
             D3DKMT_ESCAPE_DRIVERPRIVATE,
             (struct _D3DDDI_ESCAPEFLAGS)64,
             v44,
             (unsigned __int8 *)v31);
      if ( v9 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 869;
        ExFreePoolWithTag(v31, 0);
        goto LABEL_78;
      }
      v45[12] = *((_QWORD *)v31 + 13);
      v45[10] = v31 + 8;
      v45[11] = (char *)v31 + a3[26] + 128;
    }
    else
    {
      v33 = a3[26];
      if ( (*((_DWORD *)a1 + 102) & 0x100) != 0 )
      {
        if ( a4 < (unsigned __int64)((unsigned int)v33 + a3[27]) + 128 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 884;
          goto LABEL_78;
        }
        v26 = (char *)(a3 + 32);
        v27 = (char *)a3 + v33 + 128;
      }
      else
      {
        v26 = (char *)ExAllocatePool2(256LL, a3[26], 1265072196LL);
        if ( !v26 )
          goto LABEL_55;
        v34 = a3[27];
        if ( v34 )
        {
          v27 = (char *)ExAllocatePool2(256LL, v34, 1265072196LL);
          if ( !v27 )
            goto LABEL_55;
        }
      }
      if ( (a3[3] & 1) != 0 )
      {
        LODWORD(v45[13]) |= 1u;
        v35 = *(_QWORD *)(v41 + 32);
      }
      else
      {
        v35 = *(_QWORD *)(v10 + 184);
      }
      v45[0] = v35;
      *(_OWORD *)&v45[1] = *((_OWORD *)a3 + 1);
      *(_OWORD *)&v45[3] = *((_OWORD *)a3 + 2);
      *(_OWORD *)&v45[5] = *((_OWORD *)a3 + 3);
      *(_OWORD *)&v45[7] = *((_OWORD *)a3 + 4);
      v45[9] = *((_QWORD *)a3 + 10);
      v45[12] = *((_QWORD *)a3 + 13);
      v45[10] = v26;
      v45[11] = v27;
      v45[14] = *((_QWORD *)a3 + 14);
      v45[15] = *((_QWORD *)a3 + 15);
      v9 = ADAPTER_RENDER::DdiBuildTestCommandBuffer(v43, (struct _DXGKARG_BUILDTESTCOMMANDBUFFER *)v45);
      if ( v9 < 0 )
        goto LABEL_78;
    }
    if ( HIDWORD(v45[12]) > a3[27] || LODWORD(v45[12]) > a3[26] )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 936;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned invalid DMA buffer size",
        936LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = -1073741823;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 102) & 0x100) == 0 )
      {
        RtlCopyToUser(*((void **)a3 + 11), (void *)v45[10], LODWORD(v45[12]));
        RtlCopyToUser(*((void **)a3 + 12), (void *)v45[11], HIDWORD(v45[12]));
      }
      *((_QWORD *)a3 + 13) = v45[12];
      v9 = 0;
    }
    goto LABEL_78;
  }
  if ( v41 )
    goto LABEL_53;
  WdLogSingleEntry0(2LL);
  v28 = 821LL;
  v29 = L"Invalid HwQueue handle";
LABEL_50:
  WdLogGlobalForLineNumber = v28;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v29, v28, 0LL, 0LL, 0LL, 0LL);
  v9 = -1073741811;
LABEL_78:
  if ( (*((_DWORD *)a1 + 102) & 0x100) == 0 )
  {
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
  }
  v36 = a3[2];
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a1 + 248));
  v37 = ((unsigned int)v36 >> 6) & 0xFFFFFF;
  if ( v37 < *((_DWORD *)a1 + 74)
    && (((unsigned int)v36 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v37 + 8) & 0x60)
    && (*(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v37 + 8) & 0x1F) != 0 )
  {
    v39 = 16 * ((v36 >> 6) & 0xFFFFFF);
    if ( (*(_DWORD *)(v39 + *((_QWORD *)a1 + 35) + 8) & 0x2000) == 0 )
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
    *(_DWORD *)(v39 + *((_QWORD *)a1 + 35) + 8) &= ~0x2000u;
  }
  *((_QWORD *)a1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
