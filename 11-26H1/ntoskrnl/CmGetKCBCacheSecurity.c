/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1408C5C50
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  bool IsEqual; // al
  __int64 v11; // rdx

  v2 = *(_QWORD *)(a1 + 88);
  if ( !a2 )
    return *(_QWORD *)(a1 + 88);
  v5 = a1 + 208;
  v6 = *(_QWORD *)(a1 + 216);
  if ( a1 + 208 != v6 )
    goto LABEL_12;
LABEL_4:
  v7 = 0LL;
  while ( 1 )
  {
    if ( !v7 )
      return v2;
    v8 = *(_QWORD *)(v7 + 56);
    if ( v8 )
    {
      if ( v8 == a2
        || ((v9 = *(_QWORD *)(v8 + 56)) == 0 || (v11 = *(_QWORD *)(a2 + 56)) == 0
          ? (IsEqual = CmpTransUowIsEqual((const void *)(v8 + 88), (const void *)(a2 + 88)))
          : (IsEqual = v9 == v11),
            IsEqual) )
      {
        if ( *(_DWORD *)(v7 + 68) == 9 )
          return *(_QWORD *)(v7 + 88);
      }
    }
    if ( !v6 )
      v6 = *(_QWORD *)(v5 + 8);
    if ( v5 == v6 )
      goto LABEL_4;
LABEL_12:
    v7 = v6 - 32;
    v6 = *(_QWORD *)(v6 + 8);
  }
}
