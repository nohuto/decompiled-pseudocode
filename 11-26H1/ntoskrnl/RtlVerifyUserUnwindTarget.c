/*
 * XREFs of RtlVerifyUserUnwindTarget @ 0x140A94E18
 * Callers:
 *     KiVerifyContextIpForUserCet @ 0x1403DA4D0 (KiVerifyContextIpForUserCet.c)
 * Callees:
 *     RtlGetImageBaseAndLoadConfig @ 0x14042E700 (RtlGetImageBaseAndLoadConfig.c)
 *     bsearch_s @ 0x140538ED0 (bsearch_s.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A95000 (RtlpFindDynamicEHContinuationTarget.c)
 */

__int64 __fastcall RtlVerifyUserUnwindTarget(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // edx
  unsigned int v9; // eax
  const void *v10; // r10
  rsize_t v11; // r8
  unsigned __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF
  int Key; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  Key = 0;
  result = RtlGetImageBaseAndLoadConfig(a1, &v12, &v13);
  if ( (int)result >= 0 )
  {
    v7 = v13;
    if ( a3 )
    {
      *(_BYTE *)(a3 + 16) = 1;
      *(_QWORD *)a3 = v12;
      *(_QWORD *)(a3 + 8) = v7;
    }
    if ( v12 )
    {
      v8 = 0x10000;
      if ( a2 != 2 )
        v8 = 0x400000;
      v9 = 192;
      if ( a2 != 2 )
        v9 = 280;
      if ( !v7 || *(_DWORD *)v7 < v9 || (v8 & *(_DWORD *)(v7 + 144)) == 0 )
        return 0LL;
      if ( a2 == 2 )
      {
        v10 = *(const void **)(v7 + 176);
        v11 = *(_QWORD *)(v7 + 184);
        if ( v11 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      else
      {
        v10 = *(const void **)(v7 + 264);
        if ( (unsigned __int64)v10 <= v12 )
          return 0LL;
        v11 = *(_QWORD *)(v7 + 272);
        if ( v11 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      if ( v11 )
      {
        Key = a1 - v12;
        if ( v11 > 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)((*(_DWORD *)(v7 + 144) >> 28) + 4) )
          return 3221225621LL;
        if ( bsearch_s(
               &Key,
               v10,
               v11,
               (unsigned int)((*(_DWORD *)(v7 + 144) >> 28) + 4),
               (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
               0LL) )
        {
          return 0LL;
        }
      }
    }
    if ( a2 )
      return 3221227018LL;
    else
      return (unsigned __int8)RtlpFindDynamicEHContinuationTarget(a1) == 0 ? 0xC000060A : 0;
  }
  return result;
}
