/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x14041D9BC (PiDevCfgParseVariableName.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404E3C40 (PiDevCfgParseInterfaceKeyName.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409B7DBC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140A46004 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(const wchar_t *a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v8; // eax
  __int64 Pool2; // r14
  ULONG i; // r12d
  const WCHAR *v11; // rdi
  wchar_t *Buffer; // rsi
  unsigned __int16 epi16; // cx
  unsigned __int16 Length; // ax
  wchar_t v15; // ax
  const wchar_t *v16; // r8
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  const wchar_t *v28; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __m128i v32; // [rsp+100h] [rbp+0h] BYREF
  GUID Guid; // [rsp+110h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  *(_QWORD *)&v25.Length = 1441812LL;
  v31 = 0LL;
  v28 = 0LL;
  v25.Buffer = L"Interfaces";
  P = 0LL;
  ObjectAttributes.ObjectName = &v25;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v30 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v32 = 0LL;
  Guid = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v5;
  if ( v5 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_3;
  }
  if ( v5 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v25.Length = 262146;
  v25.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v25;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v8;
  if ( v8 == -1073741772 )
    goto LABEL_10;
  if ( v8 < 0 )
    goto LABEL_3;
  *(_QWORD *)&v30 = Handle;
  *((_QWORD *)&v30 + 1) = a3;
  LODWORD(v31) = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          (__int64)a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)&v30,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v31;
    if ( (int)v31 >= 0 )
    {
LABEL_10:
      Pool2 = ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_3;
      }
      for ( i = 0; ; ++i )
      {
        MatchingFilteredDeviceInterfaceList = ZwEnumerateKey(
                                                KeyHandle,
                                                i,
                                                KeyBasicInformation,
                                                (PVOID)Pool2,
                                                0x26Eu,
                                                &ResultLength);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
        {
          if ( MatchingFilteredDeviceInterfaceList == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( MatchingFilteredDeviceInterfaceList == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
          goto LABEL_28;
        }
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        if ( wcsicmp((const wchar_t *)(Pool2 + 16), L"*") )
          break;
LABEL_22:
        ;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(Pool2 + 16));
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_28;
      GuidString = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_28;
      LODWORD(v26) = 0;
      v11 = 0LL;
      if ( a3
        && *(_QWORD *)(a3 + 16)
        && PiDevCfgParseVariableName(DestinationString.Buffer, (UNICODE_STRING *)&v32, &v26) )
      {
        v26 = 0LL;
        v17 = PiDevCfgResolveVariable(a3, v32.m128i_i64[1], &v26);
        MatchingFilteredDeviceInterfaceList = v17;
        if ( v17 < 0 )
        {
          if ( v17 != -1073741772 )
            goto LABEL_21;
          Length = _mm_cvtsi128_si32(v32);
          Buffer = (wchar_t *)_mm_srli_si128(v32, 8).m128i_u64[0];
          epi16 = _mm_extract_epi16(v32, 1);
        }
        else
        {
          v18 = *(_DWORD *)(v26 + 32);
          if ( v18 == 1 || v18 == 2 )
          {
            Buffer = *(wchar_t **)(v26 + 40);
            epi16 = *(_WORD *)(v26 + 36);
            Length = epi16 - 2;
          }
          else
          {
            if ( v18 != 7 )
              goto LABEL_21;
            v11 = *(const WCHAR **)(v26 + 40);
            epi16 = GuidString.MaximumLength;
            Buffer = GuidString.Buffer;
            Length = GuidString.Length;
          }
          if ( v11 )
          {
            if ( *v11 )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v25, v11);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v25, &Guid, (__int64 *)&v28) )
                {
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (__int64)&Guid, v28, 1, &P, 0LL);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                  MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                }
                v19 = -1LL;
                do
                  ++v19;
                while ( v11[v19] );
                v11 += v19 + 1;
                if ( !*v11 )
                  goto LABEL_27;
              }
LABEL_28:
              ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_3:
              if ( Handle )
                ZwClose(Handle);
              goto LABEL_5;
            }
            goto LABEL_21;
          }
        }
      }
      else
      {
        Buffer = GuidString.Buffer;
        epi16 = GuidString.MaximumLength;
        Length = GuidString.Length;
      }
      GuidString = 0LL;
      if ( Length < 0x4Cu )
        goto LABEL_21;
      GuidString.MaximumLength = epi16;
      GuidString.Buffer = Buffer;
      GuidString.Length = 76;
      if ( RtlGUIDFromString(&GuidString, &Guid) < 0 )
        goto LABEL_21;
      v15 = Buffer[38];
      if ( v15 == 35 )
      {
        v16 = (const wchar_t *)((unsigned __int64)(Buffer + 39) & -(__int64)(Buffer[39] != 0));
LABEL_25:
        v28 = v16;
        MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(a1, (__int64)&Guid, v16, 1, &P, 0LL);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, Handle, a3);
        ExFreePoolWithTag(P, 0);
LABEL_27:
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        goto LABEL_21;
      }
      if ( !v15 )
      {
        v16 = 0LL;
        goto LABEL_25;
      }
LABEL_21:
      ZwClose(Handle);
      Handle = 0LL;
      goto LABEL_22;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
