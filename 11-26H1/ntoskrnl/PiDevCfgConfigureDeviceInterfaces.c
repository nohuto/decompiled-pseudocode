/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140987D80
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140988AF0 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     PiDevCfgParseVariableName @ 0x140430990 (PiDevCfgParseVariableName.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1404EA890 (PiDevCfgParseInterfaceKeyName.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140723A30 (ZwEnumerateKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14098B8E4 (PiDevCfgConfigureDeviceInterface.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140A8AF9C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(int a1, void *a2, __int64 a3)
{
  NTSTATUS v5; // eax
  NTSTATUS MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v8; // eax
  __int64 Pool2; // r14
  ULONG i; // r12d
  const WCHAR *v11; // rdi
  wchar_t *Buffer; // rsi
  unsigned __int16 epi16; // cx
  unsigned __int16 Length; // ax
  int v15; // r9d
  wchar_t v16; // ax
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // r9d
  __int64 v21; // rax
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-10h]
  __m128i v34; // [rsp+100h] [rbp+0h] BYREF
  GUID Guid; // [rsp+110h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  *(_QWORD *)&v27.Length = 1441812LL;
  v33 = 0LL;
  v30 = 0LL;
  v27.Buffer = L"Interfaces";
  P = 0LL;
  ObjectAttributes.ObjectName = &v27;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v32 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v34 = 0LL;
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
  *(_DWORD *)&v27.Length = 262146;
  v27.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v27;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v8;
  if ( v8 == -1073741772 )
    goto LABEL_10;
  if ( v8 < 0 )
    goto LABEL_3;
  *(_QWORD *)&v32 = Handle;
  *((_QWORD *)&v32 + 1) = a3;
  LODWORD(v33) = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          PiPnpRtlCtx,
                                          0,
                                          a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)&v32,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v33;
    if ( (int)v33 >= 0 )
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
      LODWORD(v28) = 0;
      v11 = 0LL;
      if ( a3
        && *(_QWORD *)(a3 + 16)
        && PiDevCfgParseVariableName(DestinationString.Buffer, (UNICODE_STRING *)&v34, &v28) )
      {
        v28 = 0LL;
        v18 = PiDevCfgResolveVariable(a3, v34.m128i_i64[1], &v28);
        MatchingFilteredDeviceInterfaceList = v18;
        if ( v18 < 0 )
        {
          if ( v18 != -1073741772 )
            goto LABEL_21;
          Length = _mm_cvtsi128_si32(v34);
          Buffer = (wchar_t *)_mm_srli_si128(v34, 8).m128i_u64[0];
          epi16 = _mm_extract_epi16(v34, 1);
        }
        else
        {
          v19 = *(_DWORD *)(v28 + 32);
          if ( v19 == 1 || v19 == 2 )
          {
            Buffer = *(wchar_t **)(v28 + 40);
            epi16 = *(_WORD *)(v28 + 36);
            Length = epi16 - 2;
          }
          else
          {
            if ( v19 != 7 )
              goto LABEL_21;
            v11 = *(const WCHAR **)(v28 + 40);
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
                RtlInitUnicodeString(&v27, v11);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v27, &Guid, &v30) )
                {
                  LOBYTE(v20) = 1;
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                          a1,
                                                          (unsigned int)&Guid,
                                                          v30,
                                                          v20,
                                                          (__int64)&P,
                                                          0LL);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                  MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                }
                v21 = -1LL;
                do
                  ++v21;
                while ( v11[v21] );
                v11 += v21 + 1;
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
      v16 = Buffer[38];
      if ( v16 == 35 )
      {
        v17 = (unsigned __int64)(Buffer + 39) & -(__int64)(Buffer[39] != 0);
LABEL_25:
        LOBYTE(v15) = 1;
        v30 = v17;
        MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                a1,
                                                (unsigned int)&Guid,
                                                v17,
                                                v15,
                                                (__int64)&P,
                                                0LL);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface(P, Handle, a3);
        ExFreePoolWithTag(P, 0);
LABEL_27:
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        goto LABEL_21;
      }
      if ( !v16 )
      {
        v17 = 0LL;
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
