/*
 * XREFs of RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x18014D5FC
 * Callers:
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142788 (RtlpGetDefaultLanguageBaseOrParent.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlStringCchCopyW @ 0x1800DBA18 (RtlStringCchCopyW.c)
 *     RtlpMuiRegGetString @ 0x18014D810 (RtlpMuiRegGetString.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageInfoByIndex(
        __int64 a1,
        __int16 a2,
        LCID *a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  LCID v13; // ecx
  _UNICODE_STRING String; // [rsp+20h] [rbp-E8h] BYREF
  char v15; // [rsp+30h] [rbp-D8h] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 24);
  if ( !v8 )
    return 3221226021LL;
  v9 = *(_QWORD *)(v8 + 16);
  if ( !v9 || a2 < 0 || a2 >= (unsigned int)*(unsigned __int16 *)(v8 + 6) )
    return 3221226021LL;
  v10 = 28LL * a2;
  *a3 = *(unsigned __int16 *)(v10 + v9 + 4);
  *a6 = *(unsigned __int16 *)(v10 + v9);
  v11 = *(unsigned __int16 *)(v10 + v9 + 6);
  if ( (__int16)v11 > 0 )
    return RtlpMuiRegGetString(a1, v11, a4, a5);
  v13 = *a3;
  String.Buffer = (wchar_t *)&v15;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v13, &String) )
    return RtlStringCchCopyW(a4, a5, (__int64)String.Buffer);
  else
    return 3221226021LL;
}
