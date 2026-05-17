/*
 * XREFs of LdrpMapDllFullPath @ 0x180084A80
 * Callers:
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x180117220 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpHashUnicodeString @ 0x1800825C0 (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpAppCompatRedirect @ 0x180085190 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18008528C (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 ArgList)
{
  __int64 v2; // r14
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-148h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-138h] BYREF
  __int16 v10; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v11[254]; // [rsp+52h] [rbp-126h] BYREF

  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v11, 0, 0xFEuLL);
  v2 = *(_QWORD *)(ArgList + 56);
  v9.Buffer = (wchar_t *)&v10;
  v3 = *(_DWORD *)(ArgList + 32);
  v8 = 0LL;
  v10 = 0;
  *(_DWORD *)&v9.Length = 0x1000000;
  v4 = LdrpResolveDllName(ArgList, v3);
  v5 = v4;
  if ( *(_QWORD *)(ArgList + 176) )
  {
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = LdrpAppCompatRedirect(ArgList, (int)v2 + 72, (int)v2 + 88, (unsigned int)&v9, v4);
    if ( v5 < 0 )
      goto LABEL_6;
    v6 = LdrpHashUnicodeString((unsigned __int16 *)(v2 + 88));
    *(_DWORD *)(v2 + 264) = v6;
    LdrpFindExistingModule(v2 + 88, v2 + 72, *(_DWORD *)(ArgList + 32), v6, (__int64)&v8);
    if ( v8 )
    {
      LdrpLoadContextReplaceModule(ArgList);
      goto LABEL_6;
    }
  }
  v5 = LdrpMapDllNtFileName(ArgList, &v9);
  if ( v5 == 1073741838 )
    v5 = -1073741701;
LABEL_6:
  if ( &v10 != (__int16 *)v9.Buffer )
    RtlpSysVolFree((__int64)v9.Buffer);
  return (unsigned int)v5;
}
