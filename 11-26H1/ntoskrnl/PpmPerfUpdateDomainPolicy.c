/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x140AD8DD8
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140AD8A50 (PpmUpdatePerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmPerfSetAllDomainsToUpdate @ 0x14025A1F8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140483470 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C100C (PpmPerfUpdateQosDisableReasons.c)
 *     PpmPerfUpdateMultimediaPowerModel @ 0x1404D838C (PpmPerfUpdateMultimediaPowerModel.c)
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140608E6C (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     PsRefreshUserPresencePpmPolicies @ 0x140617DDC (PsRefreshUserPresencePpmPolicies.c)
 *     PpmCheckApplyPerfConstraints @ 0x140B162C8 (PpmCheckApplyPerfConstraints.c)
 *     PpmEventQosSupport @ 0x140B2EABC (PpmEventQosSupport.c)
 */

LONG __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  PBOOLEAN v1; // rbx
  char v2; // r14
  char v3; // r12
  char v4; // bp
  char v5; // r15
  char v6; // di
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edx
  int *v10; // r9
  char v11; // r8
  __int64 v12; // r10
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  bool v16; // bl
  __int64 v18; // rcx
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2) == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
  {
    if ( PpmPerfVmQosSupported )
    {
      v6 = 1;
      v7 = 0;
    }
    else
    {
      v6 = 0;
      v7 = 128;
    }
    v20 = v7;
  }
  else
  {
    v6 = 0;
    v20 = 0;
    v8 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies((__int64)v1) )
      {
        v3 = 1;
        if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
          v5 = *((_DWORD *)v1 + 207) != 0 ? v5 : 0;
      }
      if ( (*((_DWORD *)v1 + 209) & 0x1C3) == 0 )
        v4 = 1;
      if ( v1[866] )
      {
        v6 = 1;
      }
      else
      {
        v9 = 0;
        v10 = (int *)(v1 + 828);
        v11 = 1;
        v12 = 6LL;
        do
        {
          v13 = *v10;
          v14 = *v10++;
          v9 |= v13;
          v11 = (v14 & 2) != 0 ? v11 : 0;
          --v12;
        }
        while ( v12 );
        v15 = v9 & 0xFFFFFFFD;
        if ( v11 )
          v15 = v9;
        v8 |= v15;
      }
      v1 = *(PBOOLEAN *)v1;
    }
    while ( v1 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) );
    v2 = a1;
    if ( v6 )
      v8 = 0;
    v20 = v8;
  }
  v16 = PpmPerfUpdateQosDisableReasons(&v20) != 0;
  if ( v6 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v6;
    v2 = 1;
    v16 = 1;
  }
  PpmPerfMultimediaQosSupported = v4;
  PpmPerfUpdateMultimediaPowerModel();
  if ( v16 )
    PpmEventQosSupport(0LL);
  if ( (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline() )
    PsRefreshUserPresencePpmPolicies(v5, HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 0);
  if ( !v3 && !v2 )
    return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  PpmPerfSetAllDomainsToUpdate();
  LOBYTE(v18) = v2;
  return PpmCheckApplyPerfConstraints(v18);
}
