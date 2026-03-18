/*
 * XREFs of _PnpValidatePropertyData @ 0x1409DC3B4
 * Callers:
 *     ValidFilterExpression @ 0x1404BE3F8 (ValidFilterExpression.c)
 *     PiDqQueryValidateQueryData @ 0x1409903CC (PiDqQueryValidateQueryData.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14099BC60 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetObjectPropertyWorker @ 0x14099C0F0 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14099CD50 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14099D8E0 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14099E300 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectPropertyWorker @ 0x1409DC180 (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x1409DC350 (PiSwValidatePropertyArray.c)
 * Callees:
 *     RtlUnalignedStringCbLengthW @ 0x140485360 (RtlUnalignedStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x14048FCAC (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x1404AC2A0 (_IsFixedSizeType.c)
 *     Feature_KernelPnP_PropertyValidation__private_IsEnabledDeviceUsageNoInline @ 0x1407198FC (Feature_KernelPnP_PropertyValidation__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14094DC20 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(wchar_t *psz, ULONG SecurityDescriptorLength, int a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  bool v21; // zf
  unsigned int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // r11d
  bool v26; // zf
  unsigned __int64 v27; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v29; // r11d
  unsigned int i; // ecx
  size_t v31; // rax
  size_t v32; // rax
  char v33; // dl
  size_t pcbLength; // [rsp+58h] [rbp+20h] BYREF

  v3 = SecurityDescriptorLength;
  pcbLength = 0LL;
  v5 = 0;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_8;
  if ( v10 == 4096 )
  {
    if ( v8 < 2 || !IsFixedSizeType(v9) || (unsigned int)v3 < v25 )
      return (unsigned int)-1073741811;
    v26 = (unsigned int)v3 % v25 == 0;
LABEL_42:
    if ( !v26 )
      return (unsigned int)-1073741811;
    goto LABEL_8;
  }
  if ( v10 == 0x2000 )
  {
    if ( v8 != 20 && v8 != 18 )
      return (unsigned int)-1073741811;
LABEL_15:
    if ( !psz || (unsigned int)v3 < 2 )
      return (unsigned int)-1073741811;
    v18 = v3;
    if ( (v10 & 0x2000) == 0 )
    {
      v19 = v3 >> 1;
      if ( v3 >> 1 )
      {
        while ( *psz )
        {
          ++psz;
          if ( !--v19 )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_21:
        if ( !v19 )
          return (unsigned int)-1073741811;
      }
      v20 = 2 * ((v3 >> 1) - v19) + 2;
      if ( v20 <= 0xFFFE )
      {
        v21 = v20 == v3;
        goto LABEL_53;
      }
      return (unsigned int)-1073741811;
    }
    v27 = 0LL;
    IsEnabledDeviceUsageNoInline = Feature_KernelPnP_PropertyValidation__private_IsEnabledDeviceUsageNoInline();
    v29 = -1073741811;
    if ( !IsEnabledDeviceUsageNoInline )
    {
      while ( *psz )
      {
        if ( RtlUnalignedStringCbLengthW(psz, v18 - v27, &pcbLength) < 0 )
          return v29;
        if ( (pcbLength & 1) != 0 )
          return v29;
        v32 = pcbLength + 2;
        pcbLength = v32;
        if ( v32 > 0xFFFE )
          return v29;
        v27 += v32;
        if ( v27 > v18 )
          return v29;
        psz += v32 >> 1;
      }
LABEL_64:
      if ( v27 + 2 != v18 )
        return v29;
      return v5;
    }
    while ( v27 + 2 <= v18 && *psz )
    {
      if ( RtlUnalignedStringCbLengthW(psz, v18 - v27, &pcbLength) < 0
        || (pcbLength & 1) != 0
        || (v31 = pcbLength + 2, pcbLength = v31, v31 > 0xFFFE)
        || (v27 += v31, v27 > v18) )
      {
        v5 = v29;
        break;
      }
      psz += v31 >> 1;
    }
    if ( (v5 & 0x80000000) == 0 )
      goto LABEL_64;
    return v5;
  }
  if ( (v9 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( IsFixedSizeType(v9) )
  {
    v26 = (_DWORD)v3 == v11;
    goto LABEL_42;
  }
LABEL_8:
  if ( !v8 || (v12 = v8 - 1) == 0 )
  {
    if ( (_DWORD)v3 )
      return (unsigned int)-1073741811;
    return v5;
  }
  v13 = v12 - 15;
  if ( !v13 )
  {
    if ( !psz )
      return (unsigned int)-1073741811;
    v23 = 0;
    v24 = (unsigned int)v3 >> 3;
    while ( v23 < v24 )
    {
      if ( *(__int64 *)&psz[4 * v23] < 0 )
        return (unsigned int)-1073741811;
      ++v23;
    }
    return v5;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( !psz )
      return (unsigned int)-1073741811;
    for ( i = 0; i < (unsigned int)v3; ++i )
    {
      v33 = *((_BYTE *)psz + i);
      if ( v33 != -1 && v33 )
        return (unsigned int)-1073741811;
    }
    return v5;
  }
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_15;
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( psz && RtlValidRelativeSecurityDescriptor(psz, v3, 0) )
    {
      v21 = RtlLengthSecurityDescriptor(psz) == (_DWORD)v3;
LABEL_53:
      if ( v21 )
        return v5;
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  v17 = v16 - 1;
  if ( !v17 || v17 == 5 )
    goto LABEL_15;
  return v5;
}
