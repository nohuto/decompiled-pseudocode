/*
 * XREFs of SeMakeSystemToken @ 0x140CE3B68
 * Callers:
 *     SepInitializationPhase0 @ 0x140CE3538 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepCreateToken @ 0x14081B1B8 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409A9150 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AA9160 (RtlSetGroupSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SeMakeSystemToken()
{
  PSID v0; // r12
  void *v1; // rbx
  unsigned int v2; // edx
  int v3; // eax
  int v4; // r13d
  ULONG v5; // edi
  ACL *Pool2; // rax
  ACL *v7; // r15
  ULONG v9; // edi
  ACL *v10; // rax
  ACL *v11; // rsi
  ACL *v12; // rcx
  void *v13; // rax
  void *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  int AceType; // [rsp+28h] [rbp-100h]
  int AccessMask; // [rsp+30h] [rbp-F8h]
  int v19; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-70h] BYREF
  _SID_AND_ATTRIBUTES v22; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v23[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-50h]
  __int64 v25; // [rsp+E0h] [rbp-48h]
  int v26; // [rsp+E8h] [rbp-40h]
  int v27; // [rsp+ECh] [rbp-3Ch]
  void *v28; // [rsp+F0h] [rbp-38h]
  __int64 v29; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  LUID v31; // [rsp+118h] [rbp-10h] BYREF
  int v32; // [rsp+120h] [rbp-8h]
  void *SListFaultAddress; // [rsp+124h] [rbp-4h]
  int v34; // [rsp+12Ch] [rbp+4h]
  __int64 v35; // [rsp+130h] [rbp+8h]
  int v36; // [rsp+138h] [rbp+10h]
  struct _LIST_ENTRY *Blink; // [rsp+13Ch] [rbp+14h]
  int v38; // [rsp+144h] [rbp+1Ch]
  LUID v39; // [rsp+148h] [rbp+20h]
  int v40; // [rsp+150h] [rbp+28h]
  _XSAVE_FORMAT *StateSaveArea; // [rsp+154h] [rbp+2Ch]
  int v42; // [rsp+15Ch] [rbp+34h]
  unsigned __int64 QuantumTarget; // [rsp+160h] [rbp+38h]
  int v44; // [rsp+168h] [rbp+40h]
  LUID v45; // [rsp+16Ch] [rbp+44h]
  int v46; // [rsp+174h] [rbp+4Ch]
  __int64 v47; // [rsp+178h] [rbp+50h]
  int v48; // [rsp+180h] [rbp+58h]
  LUID v49; // [rsp+184h] [rbp+5Ch]
  int v50; // [rsp+18Ch] [rbp+64h]
  volatile __int64 WaitStatus; // [rsp+190h] [rbp+68h]
  int v52; // [rsp+198h] [rbp+70h]
  LUID v53; // [rsp+19Ch] [rbp+74h]
  int v54; // [rsp+1A4h] [rbp+7Ch]
  LUID v55; // [rsp+1A8h] [rbp+80h]
  int v56; // [rsp+1B0h] [rbp+88h]
  __int64 v57; // [rsp+1B4h] [rbp+8Ch]
  int v58; // [rsp+1BCh] [rbp+94h]
  LUID v59; // [rsp+1C0h] [rbp+98h]
  int v60; // [rsp+1C8h] [rbp+A0h]
  LUID v61; // [rsp+1CCh] [rbp+A4h]
  int v62; // [rsp+1D4h] [rbp+ACh]
  LUID v63; // [rsp+1D8h] [rbp+B0h]
  int v64; // [rsp+1E0h] [rbp+B8h]
  LUID v65; // [rsp+1E4h] [rbp+BCh]
  int v66; // [rsp+1ECh] [rbp+C4h]
  LUID v67; // [rsp+1F0h] [rbp+C8h]
  int v68; // [rsp+1F8h] [rbp+D0h]
  __int64 v69; // [rsp+1FCh] [rbp+D4h]
  int v70; // [rsp+204h] [rbp+DCh]
  void *KernelShadowStackBase; // [rsp+208h] [rbp+E0h]
  int v72; // [rsp+210h] [rbp+E8h]
  struct _LIST_ENTRY *Flink; // [rsp+214h] [rbp+ECh]
  int v74; // [rsp+21Ch] [rbp+F4h]
  struct _LIST_ENTRY *v75; // [rsp+220h] [rbp+F8h]
  int v76; // [rsp+228h] [rbp+100h]
  PVOID Object; // [rsp+22Ch] [rbp+104h]
  int v78; // [rsp+234h] [rbp+10Ch]
  PVOID v79; // [rsp+238h] [rbp+110h]
  int v80; // [rsp+240h] [rbp+118h]
  __int64 v81; // [rsp+244h] [rbp+11Ch]
  int v82; // [rsp+24Ch] [rbp+124h]
  struct _LIST_ENTRY *v83; // [rsp+250h] [rbp+128h]
  int v84; // [rsp+258h] [rbp+130h]
  __int64 v85; // [rsp+25Ch] [rbp+134h]
  int v86; // [rsp+264h] [rbp+13Ch]
  void *KernelShadowStackInitial; // [rsp+268h] [rbp+140h]
  int v88; // [rsp+270h] [rbp+148h]
  LUID v89; // [rsp+274h] [rbp+14Ch]
  int v90; // [rsp+27Ch] [rbp+154h]
  struct _LIST_ENTRY *v91; // [rsp+280h] [rbp+158h]
  int v92; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v93; // [rsp+298h] [rbp+170h] BYREF
  __int64 v94; // [rsp+2A8h] [rbp+180h]
  int v95; // [rsp+2B0h] [rbp+188h]
  PVOID SparePtr; // [rsp+2B8h] [rbp+190h]
  int v97; // [rsp+2C0h] [rbp+198h]
  __int64 v98; // [rsp+2C8h] [rbp+1A0h]
  int v99; // [rsp+2D0h] [rbp+1A8h]

  v19 = 1;
  v20 = 0LL;
  *(&v22.Attributes + 1) = 0;
  v23[1] = 0;
  v27 = 0;
  v21 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v21);
  v0 = SeAliasAdminsSid;
  v1 = *(void **)((char *)&RtlpBootStatHandleLock.116 + 4);
  v95 = 7;
  v97 = 7;
  v22.Sid = *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4);
  v94 = *(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags;
  v22.Attributes = 0;
  v93.Sid = SeAliasAdminsSid;
  SparePtr = PspSiloMonitorLock.WaitBlock[0].SparePtr;
  v98 = SeSystemMandatorySid;
  v93.Attributes = 14;
  v99 = 96;
  v2 = ((4 * *((unsigned __int8 *)PspSiloMonitorLock.WaitBlock[0].SparePtr + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *(unsigned __int8 *)(*(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags + 1LL) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v3 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v32 = 3;
  v34 = 0;
  v36 = 0;
  v38 = 3;
  v31 = SeTcbPrivilege;
  v4 = v2 + ((4 * v3 + 11) & 0xFFFFFFFC) + 16;
  SListFaultAddress = PspSiloMonitorLock.SListFaultAddress;
  v35 = SeTakeOwnershipPrivilege;
  Blink = PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Blink;
  v39 = SeLockMemoryPrivilege;
  StateSaveArea = PspSiloMonitorLock.StateSaveArea;
  QuantumTarget = PspSiloMonitorLock.QuantumTarget;
  v45 = SeIncreaseBasePriorityPrivilege;
  v47 = *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber;
  v49 = SeDebugPrivilege;
  WaitStatus = PspSiloMonitorLock.WaitStatus;
  v53 = SeSecurityPrivilege;
  v40 = 3;
  v42 = 0;
  v44 = 0;
  v46 = 3;
  v48 = 3;
  v50 = 3;
  v52 = 3;
  v55 = SeSystemEnvironmentPrivilege;
  v57 = *(_QWORD *)&PspSiloMonitorLock.NextProcessor;
  v59 = SeBackupPrivilege;
  v61 = SeRestorePrivilege;
  v63 = SeShutdownPrivilege;
  v65 = SeLoadDriverPrivilege;
  v67 = SeProfileSingleProcessPrivilege;
  v69 = *(__int64 *)((char *)&PspSiloMonitorLock.116 + 4);
  KernelShadowStackBase = PspSiloMonitorLock.KernelShadowStackBase;
  Flink = PspSiloMonitorLock.QueueListEntry.Flink;
  v75 = PspSiloMonitorLock.MutantListHead.Blink;
  Object = PspSiloMonitorLock.WaitBlock[1].Object;
  v79 = PspSiloMonitorLock.WaitBlock[3].SparePtr;
  v81 = SeRelabelPrivilege;
  v83 = PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Blink;
  v85 = *(_QWORD *)&PspSiloMonitorLock.ThreadFlags2;
  KernelShadowStackInitial = PspSiloMonitorLock.KernelShadowStackInitial;
  v89 = SeSystemProfilePrivilege;
  v58 = 3;
  v68 = 3;
  v76 = 3;
  v78 = 3;
  v84 = 3;
  v86 = 3;
  v88 = 3;
  v90 = 3;
  v92 = 3;
  v91 = PspSiloMonitorLock.MutantListHead.Flink;
  v54 = 0;
  v56 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v70 = 0;
  v72 = 0;
  v74 = 0;
  v80 = 0;
  v82 = 0;
  v5 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)&RtlpBootStatHandleLock.116 + 4) + 1LL) + 24;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v5, 0x63416553u);
  v7 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v5, 2u);
  v9 = 4 * *((unsigned __int8 *)SeProcTrustWinTcbSid + 1) + 24;
  v10 = (ACL *)ExAllocatePool2(256LL, v9, 0x63416553u);
  v11 = v10;
  if ( !v10 )
  {
    v12 = v7;
LABEL_5:
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  RtlCreateAcl(v10, v9, 2u);
  RtlAddAccessAllowedAce(v7, 2u, 0xF01FFu, *(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4));
  RtlAddProcessTrustLabelAce(v11, 2u, 0, SeProcTrustWinTcbSid, 0x14u, 0x20018u);
  v13 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
  v14 = v13;
  if ( !v13 )
  {
    ExFreePoolWithTag(v7, 0);
    v12 = v11;
    goto LABEL_5;
  }
  RtlCreateSecurityDescriptor(v13, 1u);
  RtlSetDaclSecurityDescriptor(v14, 1u, v7, 0);
  RtlSetSaclSecurityDescriptor(v14, 1u, v11, 0);
  RtlSetOwnerSecurityDescriptor(v14, SeAliasAdminsSid, 0);
  RtlSetGroupSecurityDescriptor(v14, SeAliasAdminsSid, 0);
  v23[0] = 48;
  v24 = 0LL;
  v26 = 0;
  v25 = 0LL;
  v29 = 0LL;
  v28 = v14;
  SepCreateToken(
    (HANDLE *)&v20,
    v15,
    v16,
    (__int64)v23,
    AceType,
    AccessMask,
    (__int64)&SeSystemAuthenticationId,
    &v21,
    &v22,
    4u,
    &v93,
    v4,
    0x1Fu,
    (__int64)&v31,
    v0,
    v1,
    PspSiloMonitorLock.ApcState.ApcListHead[1].Flink);
  SeSetMandatoryPolicyToken(v20, &v19);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v14, 0);
  return v20;
}
