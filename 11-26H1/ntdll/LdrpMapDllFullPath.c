/*
 * XREFs of LdrpMapDllFullPath @ 0x18007BE20
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x180116A00 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     LdrpHashUnicodeString @ 0x180079960 (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpAppCompatRedirect @ 0x18007C530 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18007C62C (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v2; // r14
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-148h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-138h] BYREF
  __int16 v9; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v10[254]; // [rsp+52h] [rbp-126h] BYREF

  *(_DWORD *)(&v8.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v10, 0, 0xFEuLL);
  v2 = *(_QWORD *)(a1 + 56);
  v8.Buffer = (wchar_t *)&v9;
  v3 = *(_DWORD *)(a1 + 32);
  v7 = 0LL;
  v9 = 0;
  *(_DWORD *)&v8.Length = 0x1000000;
  v4 = LdrpResolveDllName(a1, (unsigned int)&v8, (int)v2 + 88, (int)v2 + 72, v3);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = LdrpAppCompatRedirect(a1, (int)v2 + 72, (int)v2 + 88, (unsigned int)&v8, v4);
    if ( v5 < 0 )
      goto LABEL_6;
    *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString((unsigned __int16 *)(v2 + 88));
    LdrpFindExistingModule((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)(v2 + 72), (__int64)&v7);
    if ( v7 )
    {
      LdrpLoadContextReplaceModule(a1);
      goto LABEL_6;
    }
  }
  v5 = LdrpMapDllNtFileName(a1, &v8);
  if ( v5 == 1073741838 )
    v5 = -1073741701;
LABEL_6:
  if ( &v9 != (__int16 *)v8.Buffer )
    RtlpSysVolFree(v8.Buffer);
  return (unsigned int)v5;
}
