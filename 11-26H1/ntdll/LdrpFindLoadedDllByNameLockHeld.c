/*
 * XREFs of LdrpFindLoadedDllByNameLockHeld @ 0x1800824B0
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadKnownDll @ 0x180082910 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindExistingModule @ 0x18008528C (LdrpFindExistingModule.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A5A70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedDllByNameLockHeld(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 **a4,
        int a5)
{
  char v6; // r10
  _QWORD **v8; // r14
  char v9; // r15
  _QWORD *v11; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-28h]

  v6 = 0;
  v8 = (_QWORD **)((char *)&LdrpHashTable + 16 * (a5 & 0x1F));
  v9 = a3;
  v11 = *v8;
  if ( *v8 == v8 )
    goto LABEL_18;
  while ( 1 )
  {
    v12 = (volatile signed __int32 *)(v11 - 14);
    if ( a5 != *((_DWORD *)v11 + 38) || (v9 & 8) != 0 && (v12[26] & 1) == 0 )
      goto LABEL_11;
    if ( !a2 )
      break;
    LOBYTE(a3) = 1;
    v6 = RtlEqualUnicodeString(a2, v12 + 18, a3, a4, v15);
    if ( v6 )
      goto LABEL_14;
LABEL_11:
    v11 = (_QWORD *)*v11;
    if ( v11 == v8 )
      goto LABEL_18;
  }
  if ( (v12[26] & 0x10000000) != 0
    || (LOBYTE(a3) = 1, !(unsigned __int8)RtlEqualUnicodeString(a1, v12 + 22, a3, a4, v15)) )
  {
    v6 = 0;
    goto LABEL_11;
  }
  v6 = 1;
LABEL_14:
  v13 = *((_QWORD *)v12 + 19);
  if ( *(_DWORD *)(v13 + 24) != -1 && (*(_DWORD *)(*(_QWORD *)v13 - 56LL) & 0x20) == 0 )
    _InterlockedIncrement(v12 + 69);
  *a4 = v12;
LABEL_18:
  result = 0LL;
  if ( !v6 )
    return 3221225781LL;
  return result;
}
