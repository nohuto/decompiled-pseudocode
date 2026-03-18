/*
 * XREFs of RtlpAddKnownAce @ 0x1409D7990
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407745A0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407A84C8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407A8710 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x1407C219C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407C2CCC (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1407C3E28 (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D007C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140803040 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedAceEx @ 0x1408030A0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408030D0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140803320 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140803360 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408033B0 (RtlAddAuditAccessObjectAce.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     ExpInitFullProcessSecurityInfo @ 0x140832B80 (ExpInitFullProcessSecurityInfo.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14085A18C (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     MiCreateMemoryEventSD @ 0x14087F540 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1408A7480 (ObpGetSilosRootDirectory.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409278D0 (SepCreateImpersonationTokenDacl.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409D63C0 (BiCreateKeySecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409D7674 (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1409FEA80 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     PopCreateNotificationName @ 0x140A3AE38 (PopCreateNotificationName.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD4890 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B09878 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B2371C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B4E1EC (CmpHiveRootSecurityDescriptor.c)
 * Callees:
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlpValidCompoundAce @ 0x14077D224 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077D294 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409F4FA0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409F5148 (RtlpValidObjectAce.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v9; // cl
  char v10; // r13
  _WORD *v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned __int8 *v14; // r14
  int v15; // r9d
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int16 *v19; // r12
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // r8
  unsigned __int16 v25; // cx
  __int64 result; // rax
  unsigned int v27; // eax
  char v28; // [rsp+70h] [rbp+18h]

  v28 = a3;
  if ( !MmIsKernelAddress((unsigned __int64)Src) || !Src || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *a1;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( v9 <= (unsigned __int8)a2 )
    v10 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v27 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v27 = a3 & 0xFFFFFFC0;
    }
    if ( !v27 )
      goto LABEL_10;
    return 3221225485LL;
  }
LABEL_10:
  if ( (unsigned __int8)(v9 - 2) > 2u )
    return 3221225591LL;
  v11 = a1 + 2;
  if ( (char *)((unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 || *v11 < 8u )
    return 3221225591LL;
  v12 = (unsigned __int64)(a1 + 8);
  v13 = 0;
  v14 = (unsigned __int8 *)(a1 + 8);
  v15 = 104928;
  v16 = 1730048;
  while ( 1 )
  {
    v17 = *((unsigned __int16 *)a1 + 2);
    if ( v13 >= v17 )
      break;
    v18 = (unsigned __int64)&a1[(unsigned __int16)*v11];
    if ( (unsigned __int64)(v14 + 4) > v18 )
      return 3221225591LL;
    v19 = (unsigned __int16 *)(v14 + 2);
    if ( (unsigned __int8 *)((unsigned __int64)(v14 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v14 + 2 )
      return 3221225591LL;
    v20 = *v19;
    if ( (unsigned __int64)&v14[v20] > v18 )
      return 3221225591LL;
    v21 = *v14;
    if ( (unsigned __int8)v21 <= 3u || (unsigned __int8)v21 <= 0x14u && _bittest(&v16, v21) )
    {
      if ( ((v20 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v20 )
        return 3221225591LL;
      if ( (unsigned int)v20 < 0x10 )
        return 3221225591LL;
      if ( v14[8] != 1 )
        return 3221225591LL;
      v22 = v14[9];
      if ( (unsigned __int8)v22 > 0xFu || v20 < 4 * v22 + 16 )
        return 3221225591LL;
    }
    else if ( (_BYTE)v21 == 4 )
    {
      if ( (unsigned __int8)*a1 < 3u || !RtlpValidCompoundAce((__int64)v14) )
        return 3221225591LL;
      v16 = 1730048;
    }
    else if ( (unsigned __int8)v21 <= 0x10u && _bittest(&v15, v21) )
    {
      if ( (unsigned __int8)*a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v14) )
        return 3221225591LL;
      v16 = 1730048;
      v15 = 104928;
    }
    else if ( (_BYTE)v21 == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v14) )
        return 3221225591LL;
      v16 = 1730048;
      v15 = 104928;
    }
    else if ( (_BYTE)v21 == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v14) )
        return 3221225591LL;
      v16 = 1730048;
    }
    else if ( (unsigned int)v20 < 4 )
    {
      return 3221225591LL;
    }
    v14 += *v19;
    ++v13;
  }
  v23 = 0;
  v24 = (unsigned __int64)&a1[(unsigned __int16)*v11];
  while ( v23 < v17 )
  {
    if ( v12 >= v24 )
      return 3221225591LL;
    ++v23;
    v12 += *(unsigned __int16 *)(v12 + 2);
  }
  if ( v12 > v24 )
    v12 = 0LL;
  v25 = 4 * (Src[1] + 4);
  if ( !v12 || v12 + v25 > v24 )
    return 3221225625LL;
  *(_BYTE *)(v12 + 1) = v28;
  *(_WORD *)(v12 + 2) = v25;
  *(_DWORD *)(v12 + 4) = a4;
  *(_BYTE *)v12 = a6;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
