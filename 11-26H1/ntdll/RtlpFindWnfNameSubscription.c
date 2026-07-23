/*
 * XREFs of RtlpFindWnfNameSubscription @ 0x18008EB00
 * Callers:
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

_QWORD *__fastcall RtlpFindWnfNameSubscription(__int64 a1, const void *a2)
{
  __int64 v2; // rax
  unsigned __int64 *v3; // rcx
  unsigned __int64 v5; // rbx
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64 *)(a1 + 16);
  v5 = *v3;
  if ( (v2 & 1) != 0 )
  {
    if ( !v5 )
      return 0LL;
    v5 ^= (unsigned __int64)v3;
  }
  v6 = v2 & 1;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v7 = memcmp(a2, (const void *)(v5 - 16), 8uLL);
    if ( v7 < 0 )
    {
      v8 = *(_QWORD *)v5;
      if ( v6 && v8 )
        goto LABEL_13;
      goto LABEL_5;
    }
    if ( v7 <= 0 )
      return (_QWORD *)(v5 - 32);
    v8 = *(_QWORD *)(v5 + 8);
    if ( v6 && v8 )
    {
LABEL_13:
      v5 ^= v8;
      goto LABEL_6;
    }
LABEL_5:
    v5 = v8;
LABEL_6:
    if ( !v5 )
      return 0LL;
  }
}
