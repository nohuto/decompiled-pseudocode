/*
 * XREFs of CmpConstructAndCacheName @ 0x1408C7B80
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 */

__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2)
{
  void *v2; // r8
  __int64 v5; // rax
  int v6; // ebx
  signed __int64 v8; // rcx
  bool v9; // cf
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v5 = *(_QWORD *)(a1 + 296);
  if ( (v5 & 1) != 0 )
    v5 &= ~1uLL;
  if ( !v5 )
  {
    v6 = CmpConstructNameWithStatus(a1, &v10);
    if ( v6 < 0 )
    {
      v2 = v10;
      goto LABEL_7;
    }
    v8 = (signed __int64)v10;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), (signed __int64)v10, 0LL) != 0;
    v5 = *(_QWORD *)(a1 + 296);
    v2 = (void *)(v8 & -(__int64)v9);
    if ( (v5 & 1) != 0 )
      v5 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v5;
  v6 = 0;
LABEL_7:
  if ( v2 )
    CmpFreeTransientPoolWithTag(v2, 0x624E4D43u);
  return (unsigned int)v6;
}
