/*
 * XREFs of CmpEnumerateKcbCacheBucket @ 0x1408B5D5C
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x1408B5C5C (CmpEnumerateAllOpenSubKeys.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CmpEnumerateKcbCacheBucket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // r10
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = *(_QWORD *)(a2 + 16);
  while ( v4 )
  {
    v8 = *(unsigned __int16 *)(a1 + 12);
    v9 = v4 - 16;
    v10 = *(unsigned __int16 *)(v4 - 16 + 12);
    v4 = *(_QWORD *)(v4 + 8);
    if ( (unsigned __int16)v8 < (unsigned __int16)v10 )
    {
      v11 = v10;
      v12 = v9;
      if ( v11 != v8 )
      {
        v13 = (unsigned int)(v11 - v8);
        do
        {
          v12 = *(_QWORD *)(v12 + 72);
          --v13;
        }
        while ( v13 );
      }
      if ( v12 == a1 )
      {
        result = guard_dispatch_icall_no_overrides(v9, a4);
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  return 0LL;
}
