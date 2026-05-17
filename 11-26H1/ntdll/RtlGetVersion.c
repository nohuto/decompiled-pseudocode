/*
 * XREFs of RtlGetVersion @ 0x1800638F0
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800623B0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x180062750 (RtlVerifyVersionInfo.c)
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 *     RtlStringCbCopyW @ 0x1800CCF60 (RtlStringCbCopyW.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     ZwQueryLicenseValue @ 0x180161B50 (ZwQueryLicenseValue.c)
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     strlen @ 0x180164FE0 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetVersion(int *a1)
{
  unsigned int v1; // edi
  struct _PEB *v3; // r10
  wchar_t *Buffer; // r8
  int v5; // esi
  __int64 result; // rax
  size_t v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  char *p_Str; // rcx
  size_t v15; // rax
  NTSTATUS v16; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h]
  const wchar_t *v24; // [rsp+50h] [rbp-B0h]
  STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v28; // [rsp+82h] [rbp-7Eh]
  int v29; // [rsp+84h] [rbp-7Ch]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  int v32; // [rsp+90h] [rbp-70h]
  char Str; // [rsp+94h] [rbp-6Ch] BYREF
  char v34; // [rsp+114h] [rbp+14h] BYREF
  char v35; // [rsp+194h] [rbp+94h] BYREF
  char v36; // [rsp+214h] [rbp+114h] BYREF
  char v37; // [rsp+294h] [rbp+194h] BYREF
  char v38; // [rsp+2AEh] [rbp+1AEh] BYREF
  int v39; // [rsp+2C0h] [rbp+1C0h]

  v1 = 0;
  v18 = 0;
  v23 = 0;
  v19 = 0;
  v17 = 0;
  v20 = 0;
  memset_thunk_772440563353939046(v27, 0, 0x244uLL);
  v3 = NtCurrentPeb();
  DestinationString = 0LL;
  a1[1] = v3->OSMajorVersion;
  a1[2] = v3->OSMinorVersion;
  a1[3] = v3->OSBuildNumber;
  a1[4] = v3->OSPlatformId;
  Buffer = v3->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 5, 256LL) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v5 = *a1;
  if ( *a1 != 284 && ((v5 - 292) & 0xFFFFFFF7) != 0 )
    return 0LL;
  *((_WORD *)a1 + 138) = HIBYTE(v3->OSCSDVersion);
  *((_WORD *)a1 + 139) = (unsigned __int8)v3->OSCSDVersion;
  *((_WORD *)a1 + 140) = RtlGetSuiteMask();
  if ( v5 == 292 )
    a1[71] = RtlGetSuiteMask() & 0x1FFFF;
  *((_BYTE *)a1 + 282) = 0;
  if ( (unsigned __int8)RtlGetNtProductType(&v18) )
    *((_BYTE *)a1 + 282) = v18;
  v23 = 0;
  v24 = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v7 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v22[0] = v7;
  v22[1] = v7 + 2;
  if ( (int)ZwQueryLicenseValue(v22, &v19, &v20, 4LL, &v17) < 0 || v20 != 1 || v19 != 4 || v17 != 4 )
  {
    *((_WORD *)a1 + 140) &= ~0x10u;
    *((_WORD *)a1 + 140) |= 0x100u;
    if ( *a1 == 292 )
    {
      a1[71] &= 0xFFFDFFEF;
      a1[71] |= 0x100u;
    }
  }
  if ( *a1 != 300 )
    return 0LL;
  v21 = a1[73] & 0xFFF;
  result = ((__int64 (__fastcall *)(__int64, int *, __int64, _BYTE *, int, int *))NtQuerySystemInformationEx)(
             222LL,
             &v21,
             4LL,
             v27,
             580,
             &v17);
  if ( (int)result < 0 )
    return result;
  v8 = *((unsigned __int16 *)a1 + 146);
  a1[1] = v29;
  a1[2] = v30;
  a1[3] = v31;
  a1[4] = v32;
  v9 = v8 >> 12;
  *((_WORD *)a1 + 147) = v28;
  a1[74] = v39;
  if ( !v9 )
  {
    p_Str = &Str;
    goto LABEL_30;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    p_Str = &v37;
    goto LABEL_30;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    p_Str = &v34;
    goto LABEL_30;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    p_Str = &v38;
    goto LABEL_30;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      p_Str = &v36;
      goto LABEL_30;
    }
    return 0LL;
  }
  p_Str = &v35;
LABEL_30:
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  SourceString.Buffer = p_Str;
  v15 = strlen(p_Str);
  DestinationString.MaximumLength = 256;
  if ( v15 >= 0xFFFF )
    LOWORD(v15) = -2;
  SourceString.Length = v15;
  DestinationString.Buffer = (wchar_t *)(a1 + 5);
  SourceString.MaximumLength = v15 + 1;
  v16 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  if ( v16 < 0 )
    return (unsigned int)v16;
  return v1;
}
