/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x14042A764
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x14034DCCC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x140232200 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x140233C3C (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        char a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v13; // rax
  const wchar_t *v14; // r9
  __int64 v15; // r13
  __int64 v16; // rbx
  char v18; // r13
  struct DXGPROCESS *v19; // r10
  unsigned int v20; // edx
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  __int64 v23; // rcx
  bool v24; // al
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned int v29; // edx
  int v30; // edx
  __int64 v31; // rax
  const wchar_t *v32; // r9
  int v33; // esi
  PVOID v34; // r12
  unsigned int i; // r13d
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rax
  HANDLE v41; // rax
  unsigned int v42; // r12d
  unsigned __int64 *v43; // r13
  __int64 v44; // rdx
  unsigned int v45; // r9d
  unsigned int v46; // r15d
  __int64 v47; // r8
  unsigned int v48; // ecx
  DXGSYNCOBJECT *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // ecx
  int v53; // ecx
  __int64 v54; // rcx
  int v55; // eax
  int v58; // [rsp+60h] [rbp-1D8h]
  PVOID Object; // [rsp+68h] [rbp-1D0h] BYREF
  unsigned __int64 *v60; // [rsp+70h] [rbp-1C8h]
  unsigned int *v61; // [rsp+78h] [rbp-1C0h]
  unsigned __int64 *v62; // [rsp+80h] [rbp-1B8h]
  unsigned int *v63; // [rsp+88h] [rbp-1B0h]
  void *const *v64; // [rsp+90h] [rbp-1A8h]
  PVOID v65; // [rsp+98h] [rbp-1A0h]
  _BYTE v66[24]; // [rsp+A0h] [rbp-198h] BYREF
  struct DXGPROCESS *v67; // [rsp+B8h] [rbp-180h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v68; // [rsp+C8h] [rbp-170h]
  __int128 v69; // [rsp+D0h] [rbp-168h] BYREF
  int v70; // [rsp+E0h] [rbp-158h]

  v63 = a4;
  v68 = this;
  v67 = a2;
  v62 = a8;
  v64 = a10;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 9416LL;
    v14 = L"ObjectCount or BroadcastContextCount is too big";
    goto LABEL_96;
  }
  if ( a12 && (!a13 || a6 || a7 || (*(_BYTE *)&a5.0 & 2) != 0) )
  {
    WdLogSingleEntry0(2LL);
    v13 = 9424LL;
    v14 = L"Invalid parameters for signal from CPU";
LABEL_96:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v58 = a8 != 0LL ? 8 * a3 : 0;
  v15 = a3;
  v69 = 0LL;
  v70 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v69, this, v58 + 4 * (a6 + a3 + 14), 0LL, 0LL, 0LL);
  v16 = v69;
  if ( !(_QWORD)v69 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9437;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to allocate memory", 9437LL, 0LL, 0LL, 0LL, 0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v69);
    return 3221225495LL;
  }
  *(_QWORD *)v69 = 0LL;
  *(_DWORD *)(v16 + 8) = 0;
  *(_BYTE *)(v16 + 12) = 0;
  *(_DWORD *)(v16 + 12) &= 0x1FFu;
  *(_QWORD *)(v16 + 16) = 26LL;
  *(_DWORD *)(v16 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_DWORD *)(v16 + 32) = a6;
  *(struct _D3DDDICB_SIGNALFLAGS *)(v16 + 28) = a5;
  if ( a12 )
    *(_DWORD *)(v16 + 48) = *((_DWORD *)a13 + 118);
  *(_DWORD *)(v16 + 24) = a3;
  *(_QWORD *)(v16 + 40) = a9;
  v61 = (unsigned int *)(v16 + 56);
  Object = (PVOID)(v16 + 56 + 4 * v15);
  if ( v58 )
    v60 = (unsigned __int64 *)(v16 + 56 + 4 * v15 + 4LL * a6);
  else
    v60 = 0LL;
  v65 = 0LL;
  v18 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v66, (struct _KTHREAD **)a2);
  v19 = a2;
  if ( !a12 )
  {
    v20 = (*a7 >> 6) & 0xFFFFFF;
    v21 = *a7 >> 30;
    v22 = *((_DWORD *)a2 + 74);
    v23 = v20;
    if ( v20 < v22 )
    {
      v25 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v20 + 8);
      v24 = v21 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0;
      v23 = v20;
    }
    else
    {
      v24 = 0;
    }
    v26 = 2 * v23;
    if ( !v24
      || (v27 = *((_QWORD *)a2 + 35), (*(_BYTE *)(v27 + 8 * v26 + 8) & 0x1F) != 7)
      || !*(_QWORD *)(v27 + 8 * v26) )
    {
      if ( v20 >= v22 )
        goto LABEL_33;
      v28 = *((_QWORD *)a2 + 35);
      v29 = *(_DWORD *)(v28 + 8 * v26 + 8);
      if ( v21 != ((v29 >> 5) & 3) )
        goto LABEL_33;
      if ( (v29 & 0x2000) != 0 )
        goto LABEL_33;
      v30 = v29 & 0x1F;
      if ( !v30 )
        goto LABEL_33;
      if ( v30 != 15 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_33;
      }
      if ( !*(_QWORD *)(v28 + 8 * v26) )
      {
LABEL_33:
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9473;
        v31 = *a7;
LABEL_34:
        v32 = L"Invalid context handle: 0x%I64x";
LABEL_35:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, v31, 0LL, 0LL, 0LL, 0LL);
        v33 = -1073741811;
        goto LABEL_36;
      }
      v18 = 1;
    }
  }
  if ( v18 )
  {
    v33 = VmBusSubmitSignalToHwQueueHelper(a2, a11, a3, a6, a7, v63, v62, (unsigned int *)Object, v61, v60);
    if ( v33 < 0 )
    {
LABEL_36:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
      v34 = 0LL;
      goto LABEL_42;
    }
LABEL_41:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
    v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v68, (struct DXGVMBUSMESSAGE *)&v69);
    v34 = v65;
    goto LABEL_42;
  }
  for ( i = 0; i < a6; ++i )
  {
    v36 = a7[i];
    v37 = (v36 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v37 >= *((_DWORD *)v19 + 74) )
      goto LABEL_55;
    v38 = *((_QWORD *)v19 + 35);
    v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
    if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60) || (v39 & 0x2000) != 0 || (v39 & 0x1F) == 0 )
      goto LABEL_55;
    if ( (*(_BYTE *)(v38 + 16LL * ((v36 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v19 = a2;
LABEL_55:
      v40 = 0LL;
      goto LABEL_56;
    }
    v40 = *(_QWORD *)(v38 + 16LL * ((v36 >> 6) & 0xFFFFFF));
LABEL_56:
    if ( !v40 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9517;
      v31 = a7[i];
      goto LABEL_34;
    }
    *((_DWORD *)Object + i) = *(_DWORD *)(v40 + 28);
  }
  if ( (*(_BYTE *)&a5.0 & 2) == 0 )
  {
    v42 = 0;
    v43 = v60;
    while ( 1 )
    {
      if ( v42 >= a3 )
        goto LABEL_41;
      v44 = (v63[v42] >> 6) & 0xFFFFFF;
      v45 = v63[v42] >> 30;
      v46 = *((_DWORD *)v19 + 74);
      if ( (unsigned int)v44 < v46
        && (v47 = *((_QWORD *)v19 + 35), v48 = *(_DWORD *)(v47 + 16LL * (unsigned int)v44 + 8), v45 == ((v48 >> 5) & 3))
        && (v48 & 0x2000) == 0
        && (v48 & 0x1F) == 8 )
      {
        v49 = *(DXGSYNCOBJECT **)(v47 + 16LL * (unsigned int)v44);
      }
      else
      {
        v49 = 0LL;
      }
      if ( v49 )
      {
        v61[v42] = DXGSYNCOBJECT::GetHostHandle(v49, v63[v42]);
        goto LABEL_87;
      }
      if ( (unsigned int)v44 >= v46 )
        goto LABEL_84;
      v50 = 2 * v44;
      v51 = *((_QWORD *)v19 + 35);
      v52 = *(_DWORD *)(v51 + 8 * v50 + 8);
      if ( v45 != ((v52 >> 5) & 3) )
        goto LABEL_84;
      if ( (v52 & 0x2000) != 0 )
        goto LABEL_84;
      v53 = v52 & 0x1F;
      if ( !v53 )
        goto LABEL_84;
      if ( v53 != 11 )
        break;
      v54 = *(_QWORD *)(v51 + 8 * v50);
LABEL_85:
      if ( !v54 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9573;
        v31 = v63[v42];
        v32 = L"Invalid sync object handle 0x%I64x";
        goto LABEL_35;
      }
      v61[v42] = *(_DWORD *)(v54 + 44);
      v49 = *(DXGSYNCOBJECT **)(v54 + 32);
LABEL_87:
      if ( v58 )
      {
        v55 = *((_DWORD *)v49 + 105);
        if ( v55 == 5 || v55 == 7 )
        {
          if ( a11 )
            RtlCopyFromUser(&v43[v42], &v62[v42], 8uLL);
          else
            v43[v42] = v62[v42];
        }
      }
      ++v42;
      v19 = a2;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_84:
    v54 = 0LL;
    goto LABEL_85;
  }
  if ( (*((_DWORD *)v19 + 102) & 0x10) != 0 )
  {
    v41 = *v64;
    goto LABEL_66;
  }
  Object = 0LL;
  v33 = ObReferenceObjectByHandle(*v64, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v34 = Object;
  v65 = Object;
  if ( v33 >= 0 )
  {
    v41 = Object;
LABEL_66:
    *(_QWORD *)(v16 + 48) = v41;
    goto LABEL_41;
  }
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 9534;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v66);
LABEL_42:
  if ( v33 < 0 )
  {
    if ( v34 )
      ObfDereferenceObject(v34);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9623;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendSignalSyncObject failed: 0x%I64x",
      v33,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v69);
  return (unsigned int)v33;
}
