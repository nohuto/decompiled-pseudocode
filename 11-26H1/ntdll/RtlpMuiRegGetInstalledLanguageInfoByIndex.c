/*
 * XREFs of RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x18014D74C
 * Callers:
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x180142888 (RtlpGetDefaultLanguageBaseOrParent.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlStringCchCopyW @ 0x1800DEAA8 (RtlStringCchCopyW.c)
 *     RtlpMuiRegGetString @ 0x18014D960 (RtlpMuiRegGetString.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageInfoByIndex(
        __int64 a1,
        __int16 a2,
        unsigned int *a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v13; // ecx
  _DWORD v14[2]; // [rsp+20h] [rbp-E8h] BYREF
  char *v15; // [rsp+28h] [rbp-E0h]
  char v16; // [rsp+30h] [rbp-D8h] BYREF

  v14[1] = 0;
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
  v15 = &v16;
  v14[0] = 11141120;
  if ( (unsigned __int8)RtlLCIDToCultureName(v13, (__int64)v14) )
    return RtlStringCchCopyW(a4, a5, (__int64)v15);
  else
    return 3221226021LL;
}
