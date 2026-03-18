/*
 * XREFs of _PnpValidatePropertyData @ 0x1409548B4
 * Callers:
 *     ValidFilterExpression @ 0x1404858A4 (ValidFilterExpression.c)
 *     PiDqQueryValidateQueryData @ 0x1408398BC (PiDqQueryValidateQueryData.c)
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiSwValidatePropertyArray @ 0x140954850 (PiSwValidatePropertyArray.c)
 *     _PnpSetObjectPropertyWorker @ 0x140954B4C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _GetBaseTypeSize @ 0x14045E24C (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x140473604 (_IsFixedSizeType.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14091BF80 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(char *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  int v11; // r11d
  bool v12; // zf
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int i; // edx
  unsigned int v23; // r11d
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  _WORD *v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // esi
  bool v33; // zf

  v3 = 0;
  v4 = SecurityDescriptorLength;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_10;
  if ( v10 == 4096 )
  {
    if ( v8 < 2 || !IsFixedSizeType(v9) || (unsigned int)v4 < v23 )
      return (unsigned int)-1073741811;
    v12 = (unsigned int)v4 % v23 == 0;
LABEL_9:
    if ( !v12 )
      return (unsigned int)-1073741811;
    goto LABEL_10;
  }
  if ( v10 == 0x2000 )
  {
    if ( v8 != 20 && v8 != 18 )
      return (unsigned int)-1073741811;
LABEL_17:
    if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
      return (unsigned int)-1073741811;
    if ( (v10 & 0x2000) != 0 )
    {
      v24 = 0LL;
      while ( *(_WORD *)SecurityDescriptor )
      {
        v25 = (v4 - v24) >> 1;
        if ( v25 > 0x7FFFFFFF )
          return (unsigned int)-1073741811;
        v26 = (v4 - v24) >> 1;
        v27 = SecurityDescriptor;
        if ( v25 )
        {
          do
          {
            if ( !*v27 )
              break;
            ++v27;
            --v26;
          }
          while ( v26 );
        }
        v28 = v26 ? v25 - v26 : 0LL;
        if ( !v26 )
          return (unsigned int)-1073741811;
        v29 = 2 * v28;
        if ( (v29 & 1) != 0 )
          return (unsigned int)-1073741811;
        v30 = v29 + 2;
        if ( v30 > 0xFFFE )
          return (unsigned int)-1073741811;
        v24 += v30;
        if ( v24 > v4 )
          return (unsigned int)-1073741811;
        SecurityDescriptor += 2 * (v30 >> 1);
      }
      v20 = v24 + 2;
LABEL_68:
      v33 = v20 == v4;
      goto LABEL_65;
    }
    v19 = v4 >> 1;
    if ( v4 >> 1 )
    {
      while ( *(_WORD *)SecurityDescriptor )
      {
        SecurityDescriptor += 2;
        if ( !--v19 )
          goto LABEL_23;
      }
LABEL_24:
      v20 = 2 * ((v4 >> 1) - v19) + 2;
      if ( v20 > 0xFFFE )
        return (unsigned int)-1073741811;
      goto LABEL_68;
    }
LABEL_23:
    if ( v19 )
      goto LABEL_24;
    return (unsigned int)-1073741811;
  }
  if ( (v9 & 0xF000) != 0 )
    return (unsigned int)-1073741811;
  if ( IsFixedSizeType(v9) )
  {
    v12 = (_DWORD)v4 == v11;
    goto LABEL_9;
  }
LABEL_10:
  if ( v8 && (v13 = v8 - 1) != 0 )
  {
    v14 = v13 - 15;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_17;
        v17 = v16 - 1;
        if ( !v17 )
        {
          if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
            return (unsigned int)-1073741811;
          v33 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
LABEL_65:
          if ( v33 )
            return v3;
          return (unsigned int)-1073741811;
        }
        v18 = v17 - 1;
        if ( !v18 || v18 == 5 )
          goto LABEL_17;
      }
      else
      {
        if ( !SecurityDescriptor )
          return (unsigned int)-1073741811;
        for ( i = 0; i < (unsigned int)v4; ++i )
        {
          if ( SecurityDescriptor[i] != -1 && SecurityDescriptor[i] != 0 )
            return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      if ( !SecurityDescriptor )
        return (unsigned int)-1073741811;
      v31 = 0;
      v32 = (unsigned int)v4 >> 3;
      while ( v31 < v32 )
      {
        if ( *(__int64 *)&SecurityDescriptor[8 * v31] < 0 )
          return (unsigned int)-1073741811;
        ++v31;
      }
    }
  }
  else if ( (_DWORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
