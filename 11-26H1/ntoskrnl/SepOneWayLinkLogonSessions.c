/*
 * XREFs of SepOneWayLinkLogonSessions @ 0x14063DFB0
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140470310 (SepDeReferenceLogonSessionDirect.c)
 *     Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404D8854 (Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     SepRemoveTokenLogonSession @ 0x14081BA88 (SepRemoveTokenLogonSession.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepReferenceLogonSession @ 0x140AB85F0 (SepReferenceLogonSession.c)
 *     SepStopReferencingLogonSession @ 0x140B223FC (SepStopReferencingLogonSession.c)
 */

__int64 __fastcall SepOneWayLinkLogonSessions(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  _QWORD *v3; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  int v9; // edi
  __int64 v10; // r8
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  NTSTATUS v15; // eax
  __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-80h] BYREF
  PVOID v19; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  v19 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  v20 = 0LL;
  DWORD2(v23) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = -1073741637;
LABEL_22:
    if ( v19 )
      ObfDereferenceObjectWithTag(v19, 0x746C6644u);
    if ( v3 )
      SepDeReferenceLogonSessionDirect(v3);
    goto LABEL_26;
  }
  if ( (unsigned int)Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v10) = a3;
    return SepOneWayLinkLogonSessionsEx(a1, a2, v10);
  }
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, a3) )
  {
    v9 = -1073741727;
    goto LABEL_22;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(a2, 8u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v7 = Object;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_22;
  if ( *(_DWORD *)(a1 + 192) != 1 || *((_DWORD *)Object + 48) != 1 )
    goto LABEL_9;
  v13 = *((_QWORD *)Object + 27);
  v14 = *(_QWORD *)(a1 + 216);
  if ( v14 == v13 )
  {
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(a2, 0x88u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
    v8 = Object;
    v9 = v15;
    if ( v15 >= 0 )
    {
      LODWORD(v21) = 48;
      *((_QWORD *)&v21 + 1) = 0LL;
      DWORD2(v22) = 0;
      *(_QWORD *)&v22 = 0LL;
      v23 = 0LL;
      v9 = SepDuplicateToken((_DWORD)Object, (unsigned int)&v21, 0, 1, 0, 0, 0, (__int64)&v19);
      if ( v9 >= 0 )
      {
        *(_DWORD *)(v8[27] + 40LL) |= 4u;
        *(_QWORD *)(v8[27] + 56LL) = v19;
        if ( SeTokenLeakTracking )
          SepRemoveTokenLogonSession(v19);
        v9 = SepStopReferencingLogonSession(v19);
        if ( v9 >= 0 )
          goto LABEL_26;
      }
    }
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(v14 + 16) )
  {
LABEL_9:
    v9 = -1073741811;
    goto LABEL_22;
  }
  *(_QWORD *)(v14 + 16) = *(_QWORD *)(v13 + 8);
  v9 = SepReferenceLogonSession(v7[27] + 8LL, &v20);
  if ( v9 < 0 )
  {
    v3 = v20;
    goto LABEL_22;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 56LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 48), 1u);
  _InterlockedOr(v18, 0);
  *(_DWORD *)(v16 + 200) |= 0x8000000u;
  *(_QWORD *)(v16 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v18, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
  KeLeaveCriticalRegion();
LABEL_26:
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  return (unsigned int)v9;
}
