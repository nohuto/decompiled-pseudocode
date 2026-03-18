/*
 * XREFs of HUBID_BuildClassCompatibleID @ 0x14001E47C
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x14001E8D0 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x14001E3CC (HUBID_AssignIDString.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030358 (HUBMISC_GenerateControllerSuffix.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildClassCompatibleID(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r14
  unsigned __int16 v9; // r15
  __int64 v10; // rax
  int result; // eax
  _BYTE *v12; // r8
  __int64 v13; // r8
  int v14; // r13d
  unsigned int v15; // r15d
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+20h] [rbp-E0h]
  _QWORD *v18; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+84h] [rbp-7Ch]
  _QWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING v23; // [rsp+98h] [rbp-68h] BYREF
  char v24; // [rsp+A8h] [rbp-58h] BYREF
  char v25; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v25;
  if ( a3 )
    *a3 = 0LL;
  v6 = *(unsigned __int8 **)(a1 + 2016);
  if ( v6 )
  {
    v7 = v6[6];
    v8 = v6[5];
    v9 = v6[7];
    v21 = v6[6];
  }
  else
  {
    v9 = 0;
    v21 = 0;
    v7 = 0;
    v8 = 0;
  }
  v20 = *(_WORD *)(a1 + 2004);
  if ( (*(_DWORD *)(a1 + 2472) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 2504);
    if ( *(_BYTE *)(v10 + 12) )
    {
      if ( *(_BYTE *)(v10 + 4) )
      {
        result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S");
        if ( result < 0 )
          return result;
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result < 0 )
          return result;
      }
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2504) + 4LL);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 2112);
    if ( !v13 )
      goto LABEL_20;
    if ( *(_BYTE *)(v13 + 26) )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S", v13 + 18, v13 + 26);
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2112) + 18LL);
  }
  if ( *v12 )
  {
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S");
    if ( result < 0 )
      return result;
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result < 0 )
      return result;
  }
LABEL_20:
  if ( v8 == 1 && (v9 & 0xFFDF) == 0 && (*(_DWORD *)(a1 + 1652) & 0x1000000) != 0 )
  {
    v22[0] = 0x100000LL;
    v22[1] = &v24;
    v23 = 0LL;
    HUBMISC_GenerateControllerSuffix(a1, v22);
    if ( !LOWORD(v22[0]) )
    {
LABEL_27:
      if ( v23.Buffer )
        ExFreePoolWithTag(v23.Buffer, 0x64334855u);
      goto LABEL_29;
    }
    v23.Buffer = (wchar_t *)ExAllocatePool2(64LL, 192LL, 1681082453LL);
    if ( v23.Buffer )
    {
      v18 = v22;
      v23.MaximumLength = 192;
      if ( RtlUnicodeStringPrintf(
             &v23,
             L"USB\\Class_%02X&Subclass_%02X&Prot_%02X&%wZ%cUSB\\Class_%02X&Subclass_%02X&%wZ%cUSB\\Class_%02X&%wZ") >= 0 )
        HUBID_AssignIDString((const void **)&v23, 2, a2, (__int64)a3);
      goto LABEL_27;
    }
  }
LABEL_29:
  v14 = v9;
  v15 = v20;
  LODWORD(v18) = v14;
  result = RtlUnicodeStringPrintf(
             &DestinationString,
             L"USB\\COMPAT_VID_%04X&Class_%02X&SubClass_%02X&Prot_%02X",
             v20,
             v8,
             v7,
             v18);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      LODWORD(v16) = v7;
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"USB\\COMPAT_VID_%04X&Class_%02X&SubClass_%02X",
                 v15,
                 v8,
                 v16);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\COMPAT_VID_%04X&Class_%02X", v15, v8);
          if ( result >= 0 )
          {
            result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
            if ( result >= 0 )
            {
              LODWORD(v17) = v14;
              result = RtlUnicodeStringPrintf(
                         &DestinationString,
                         L"USB\\Class_%02X&SubClass_%02X&Prot_%02X",
                         v8,
                         v7,
                         v17);
              if ( result >= 0 )
              {
                result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                if ( result >= 0 )
                {
                  result = RtlUnicodeStringPrintf(
                             &DestinationString,
                             L"USB\\Class_%02X&SubClass_%02X",
                             v8,
                             (unsigned __int16)v21);
                  if ( result >= 0 )
                  {
                    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                    if ( result >= 0 )
                    {
                      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X", v8);
                      if ( result >= 0 )
                        return HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
