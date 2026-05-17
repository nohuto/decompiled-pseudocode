/*
 * XREFs of SwitchedRtlGetVersion @ 0x180062FA0
 * Callers:
 *     RtlSwitchedVVI @ 0x180062B10 (RtlSwitchedVVI.c)
 * Callees:
 *     SbSelectProcedure @ 0x1800631F0 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x180063C60 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180063CA0 (RtlGetNtProductType.c)
 *     RtlStringCbCopyW @ 0x1800CCF60 (RtlStringCbCopyW.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     ZwQueryLicenseValue @ 0x180161B50 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v2; // rsi
  __int64 (*v3)(void); // rax
  int v4; // eax
  wchar_t *Buffer; // r8
  int v6; // edi
  size_t v7; // rax
  _WORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+34h] [rbp-34h]
  const wchar_t *v11; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v2 = NtCurrentPeb();
  v12 = 0;
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  v3 = (__int64 (*)(void))qword_1801C7768;
  if ( qword_1801C7768
    || (v3 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0LL, "kLsE", 0LL), (qword_1801C7768 = (__int64)v3) != 0) )
  {
    v4 = v3() - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        a1[2] = 3;
        a1[3] = 9600;
        a1[1] = 6;
      }
    }
    else
    {
      a1[2] = 2;
      a1[3] = 9200;
      a1[1] = 6;
    }
  }
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW(a1 + 5, 256LL) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v6 = *a1;
  if ( *a1 == 292 || v6 == 284 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v6 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v12) )
      *((_BYTE *)a1 + 282) = v12;
    v10 = 0;
    v11 = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
    v7 = 2 * wcslen(L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    v9[0] = v7;
    v9[1] = v7 + 2;
    if ( (int)ZwQueryLicenseValue(v9, &v13, &v15, 4LL, &v14) < 0 || v15 != 1 || v13 != 4 || v14 != 4 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
