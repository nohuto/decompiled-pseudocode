/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x180079850
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x180079CB0 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindExistingModule @ 0x18007C62C (LdrpFindExistingModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A4BA0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        PUNICODE_STRING String1,
        PUNICODE_STRING a2,
        char a3,
        _QWORD *a4,
        int a5)
{
  BOOLEAN v6; // r10
  _QWORD **v8; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax

  v6 = 0;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v11 = *v8;
  if ( *v8 == v8 )
    goto LABEL_18;
  while ( 1 )
  {
    v12 = v11 - 14;
    if ( a5 != *((_DWORD *)v11 + 38) || (a3 & 8) != 0 && (v12[13] & 1) == 0 )
      goto LABEL_11;
    if ( !a2 )
      break;
    v6 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v12 + 9), 1u);
    if ( v6 )
      goto LABEL_14;
LABEL_11:
    v11 = (_QWORD *)*v11;
    if ( v11 == v8 )
      goto LABEL_18;
  }
  if ( (v12[13] & 0x10000000) != 0 || !RtlEqualUnicodeString(String1, (PUNICODE_STRING)(v12 + 11), 1u) )
  {
    v6 = 0;
    goto LABEL_11;
  }
  v6 = 1;
LABEL_14:
  v13 = v12[19];
  if ( *(_DWORD *)(v13 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)v12 + 69);
  *a4 = v12;
LABEL_18:
  result = 0LL;
  if ( !v6 )
    return 3221225781LL;
  return result;
}
