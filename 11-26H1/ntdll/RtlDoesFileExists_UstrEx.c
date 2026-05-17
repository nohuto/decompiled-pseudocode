/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x1800A5FB0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180099B50 (sxsisol_RespectDotLocal.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(__m128i *a1, char a2)
{
  __int64 v2; // rbx
  int AttributesFile; // ebx
  __int128 v6; // [rsp+40h] [rbp-39h] BYREF
  __int128 v7; // [rsp+50h] [rbp-29h] BYREF
  __int128 v8; // [rsp+60h] [rbp-19h]
  _DWORD v9[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v10; // [rsp+78h] [rbp-1h]
  __int128 *v11; // [rsp+80h] [rbp+7h]
  int v12; // [rsp+88h] [rbp+Fh]
  int v13; // [rsp+8Ch] [rbp+13h]
  __int128 v14; // [rsp+90h] [rbp+17h]
  _OWORD v15[2]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+47h]

  v2 = 0LL;
  v9[1] = 0;
  v13 = 0;
  v16 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, a1, 0LL, (unsigned __int16 *)&v6, 0LL, 0LL, (__int64)&v7) < 0 )
    return 0;
  if ( (_WORD)v7 )
  {
    v2 = v8;
    v6 = v7;
  }
  else
  {
    *(_QWORD *)&v8 = 0LL;
  }
  v9[0] = 48;
  v11 = &v6;
  v10 = v2;
  v12 = 64;
  v14 = 0LL;
  AttributesFile = ZwQueryAttributesFile(v9, v15);
  RtlReleaseRelativeName(&v7);
  RtlFreeHeap_0();
  if ( AttributesFile >= 0 )
    return 1;
  return (AttributesFile == -1073741757 || AttributesFile == -1073741790) && a2 != 0;
}
