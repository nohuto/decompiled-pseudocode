/*
 * XREFs of _PnpValidatePropertyData @ 0x140A19604
 * Callers:
 *     ValidFilterExpression @ 0x1404B7C48 (ValidFilterExpression.c)
 *     PiDqQueryValidateQueryData @ 0x140950E2C (PiDqQueryValidateQueryData.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _PnpGetObjectPropertyWorker @ 0x14095CB50 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectPropertyWorker @ 0x140A193D0 (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x140A195A0 (PiSwValidatePropertyArray.c)
 * Callees:
 *     RtlUnalignedStringCbLengthW @ 0x14047ECD0 (RtlUnalignedStringCbLengthW.c)
 *     _GetBaseTypeSize @ 0x140489758 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x1404A5930 (_IsFixedSizeType.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1409C9570 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *psz, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  unsigned int v11; // r11d
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int64 v19; // r11
  size_t v20; // rax
  bool v21; // zf
  int v22; // r11d
  unsigned __int64 v23; // rsi
  size_t v24; // rax
  unsigned int v25; // ecx
  char v26; // dl
  unsigned int v27; // esi
  unsigned int v28; // eax
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  pcbLength = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_11;
  if ( v10 == 4096 )
  {
    if ( v8 < 2 || !IsFixedSizeType(v9) || (unsigned int)v4 < v11 )
      return (unsigned int)-1073741811;
    v12 = (unsigned int)v4 % v11 == 0;
LABEL_10:
    if ( !v12 )
      return (unsigned int)-1073741811;
    goto LABEL_11;
  }
  if ( v10 == 0x2000 )
  {
    if ( ((v8 - 18) & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1073741811;
    goto LABEL_19;
  }
  if ( (v9 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( IsFixedSizeType(v9) )
  {
    v12 = (_DWORD)v4 == v22;
    goto LABEL_10;
  }
LABEL_11:
  if ( v8 && (v13 = v8 - 1) != 0 )
  {
    v14 = v13 - 15;
    if ( !v14 )
    {
      if ( psz )
      {
        v27 = (unsigned int)v4 >> 3;
        v28 = 0;
        if ( !v27 )
          return v3;
        while ( *psz >= 0 )
        {
          ++v28;
          ++psz;
          if ( v28 >= v27 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( psz )
      {
        v25 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( 1 )
        {
          v26 = *((_BYTE *)psz + v25);
          if ( v26 != -1 )
          {
            if ( v26 )
              break;
          }
          if ( ++v25 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    }
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_19;
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( psz && RtlValidRelativeSecurityDescriptor(psz, v4, 0) )
      {
        v21 = RtlLengthSecurityDescriptor(psz) == (_DWORD)v4;
LABEL_25:
        if ( v21 )
          return v3;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741811;
    }
    v18 = v17 - 1;
    if ( !v18 || v18 == 5 )
    {
LABEL_19:
      if ( psz && (unsigned int)v4 >= 2 )
      {
        v19 = v4;
        if ( (v10 & 0x2000) != 0 )
        {
          v23 = 0LL;
          do
          {
            if ( !*(_WORD *)psz )
              break;
            if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)psz, v19 - v23, &pcbLength) < 0 )
              return (unsigned int)-1073741811;
            if ( (pcbLength & 1) != 0 )
              return (unsigned int)-1073741811;
            v24 = pcbLength + 2;
            pcbLength = v24;
            if ( v24 > 0xFFFE )
              return (unsigned int)-1073741811;
            v23 += v24;
            if ( v23 > v19 )
              return (unsigned int)-1073741811;
            psz = (__int64 *)((char *)psz + 2 * (v24 >> 1));
          }
          while ( v23 + 2 <= v19 );
          v20 = v23 + 2;
          goto LABEL_24;
        }
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)psz, v4, &pcbLength) >= 0 )
        {
          v20 = pcbLength + 2;
          if ( pcbLength + 2 <= 0xFFFE )
          {
LABEL_24:
            v21 = v20 == v19;
            goto LABEL_25;
          }
        }
      }
      return (unsigned int)-1073741811;
    }
  }
  else if ( (_DWORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
