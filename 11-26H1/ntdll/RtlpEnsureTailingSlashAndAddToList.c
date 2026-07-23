/*
 * XREFs of RtlpEnsureTailingSlashAndAddToList @ 0x18011D4E0
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1800C6630 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800D44D0 (RtlUnicodeStringValidateWorker_0.c)
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x18011D5AC (RtlWideCharArrayCopyStringWorker_0.c)
 *     RtlpAllocateDirPrefixBlock @ 0x18015B758 (RtlpAllocateDirPrefixBlock.c)
 */

__int64 __fastcall RtlpEnsureTailingSlashAndAddToList(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 DirPrefixBlock; // rax
  _QWORD *v10; // rbx
  _QWORD *v12; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  if ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * (unsigned __int16)((*a2 >> 1) - 1)) == 92
    || (int)RtlUnicodeStringValidateWorker_0(a2) >= 0
    && (v2 >>= 1,
        v7 = ((unsigned __int64)*(unsigned __int16 *)(v5 + 2) >> 1) - v2,
        v13 = 0LL,
        v8 = RtlWideCharArrayCopyStringWorker_0(v6 + 2 * v2, v7, &v13),
        LOWORD(v2) = 2 * (v13 + v2),
        *a2 = v2,
        v8 >= 0) )
  {
    DirPrefixBlock = RtlpAllocateDirPrefixBlock((unsigned int)(v2 + 2));
    v10 = (_QWORD *)DirPrefixBlock;
    if ( !DirPrefixBlock )
      return 3221225495LL;
    RtlUnicodeStringCopy(DirPrefixBlock + 16, a2);
    v12 = *(_QWORD **)(a1 + 8);
    if ( *v12 != a1 )
      __fastfail(3u);
    *v10 = a1;
    v10[1] = v12;
    *v12 = v10;
    *(_QWORD *)(a1 + 8) = v10;
  }
  return 0LL;
}
