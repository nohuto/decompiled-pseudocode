/*
 * XREFs of Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0
 * Callers:
 *     SepAccessCheckEx @ 0x1403AEA10 (SepAccessCheckEx.c)
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepCheckCreateAppContainer @ 0x14081B0F4 (SepCheckCreateAppContainer.c)
 *     SepAdjustPrivileges @ 0x1409E1914 (SepAdjustPrivileges.c)
 *     PspDeleteCreateProcessContext @ 0x140A79FBC (PspDeleteCreateProcessContext.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback @ 0x14061861C (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState & 0x10) != 0 )
    return Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState & 1;
  else
    return Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledFallback(
             (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_featureState,
             3LL);
}
