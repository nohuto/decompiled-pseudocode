/*
 * XREFs of RtlStringCchCopyExW @ 0x140454380
 * Callers:
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMGenerateDeviceInstance @ 0x1407B3B38 (PiCMGenerateDeviceInstance.c)
 *     _CmClassSubkeyCallback @ 0x14089EB50 (_CmClassSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14089F170 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14089F8C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1408A36E0 (_PnpObjectListCallback.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceName @ 0x140963098 (_CmGetDeviceInterfaceName.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1409757A0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x140975C14 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409B7F8C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140A18858 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A3EE58 (DrvDbDeleteObjectSubKey.c)
 *     _RegRtlDeletePathInternal @ 0x140A3F340 (_RegRtlDeletePathInternal.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140A86E20 (DrvDbGetObjectSubKeyCallback.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140AB4F34 (_PnpGetGenericStorePropertyLocales.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW_0 @ 0x1404545AC (RtlStringExHandleOtherFlagsW_0.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v10; // ebx
  size_t v11; // r8
  NTSTRSAFE_PWSTR v12; // rsi
  size_t v13; // rdi
  NTSTATUS v14; // ebx
  size_t v15; // r10
  size_t v16; // rax
  signed __int64 v17; // r11
  NTSTRSAFE_PWSTR v18; // rdx
  wchar_t v19; // cx
  NTSTRSAFE_PWSTR v20; // rcx
  size_t v21; // rcx
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-28h] BYREF
  size_t v24[4]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  v11 = dwFlags & 0x100;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_4;
    goto LABEL_35;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_35:
    v10 = -1073741811;
LABEL_4:
  if ( v10 >= 0 )
  {
    v12 = pszDest;
    v13 = cchDest;
    ppszDestEnda = pszDest;
    v24[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszSrc )
      pszSrc = &SourceString;
    v14 = 0;
    if ( (dwFlags & 0xFFFFE000) == 0 )
    {
      if ( cchDest )
      {
        v15 = 2147483646 - cchDest;
        v16 = cchDest;
        v17 = (char *)pszSrc - (char *)pszDest;
        v18 = pszDest;
        v11 = 0LL;
        do
        {
          if ( !(v15 + v16) )
            break;
          v19 = *(NTSTRSAFE_PWSTR)((char *)v18 + v17);
          if ( !v19 )
            break;
          *v18 = v19;
          ++v11;
          ++v18;
          --v16;
        }
        while ( v16 );
        v20 = v18 - 1;
        v14 = -2147483643;
        if ( v16 )
        {
          v20 = v18;
          v14 = 0;
        }
        *v20 = 0;
        v21 = v11 - 1;
        if ( v16 )
          v21 = v11;
        v13 = cchDest - v21;
        v24[0] = cchDest - v21;
        v12 = &pszDest[v21];
        ppszDestEnda = v12;
        if ( !v16 )
          goto LABEL_19;
        if ( (dwFlags & 0x200) != 0 && v13 > 1 && 2 * v13 > 2 )
          memset_0(v12 + 1, (unsigned __int8)dwFlags, 2 * v13 - 2);
      }
      else if ( *pszSrc )
      {
        if ( pszDest )
          v14 = -2147483643;
        else
          v14 = -1073741811;
        goto LABEL_19;
      }
LABEL_26:
      if ( ppszDestEnd )
        *ppszDestEnd = v12;
      if ( pcchRemaining )
        *pcchRemaining = v13;
      return v14;
    }
    v14 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
LABEL_19:
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW_0(pszDest, 2 * cchDest, v11, &ppszDestEnda, v24, dwFlags);
      v12 = ppszDestEnda;
      v13 = v24[0];
    }
    if ( v14 != -2147483643 )
      return v14;
    goto LABEL_26;
  }
  result = v10;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
