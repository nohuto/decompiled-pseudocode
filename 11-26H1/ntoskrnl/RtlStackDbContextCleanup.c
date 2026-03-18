/*
 * XREFs of RtlStackDbContextCleanup @ 0x140623170
 * Callers:
 *     ObpDestroyStackAndObjectTables @ 0x1407C4A14 (ObpDestroyStackAndObjectTables.c)
 *     ObpInitStackAndObjectTables @ 0x1407C4BE8 (ObpInitStackAndObjectTables.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 RtlStackDbContextCleanup()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  _QWORD *i; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // r8
  __int64 *j; // rcx
  __int64 v10; // rbx

  v0 = (_QWORD **)qword_140F131F8;
  v1 = (_QWORD *)qword_140F131F8;
  while ( v1 )
  {
    v2 = (_QWORD *)*v1;
    v1 = v2;
    if ( ((unsigned __int8)v2 & 1) != 0 )
      break;
LABEL_9:
    if ( !v2 )
      goto LABEL_17;
    v3 = v1;
    for ( i = v0; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v1 )
      {
        *i = *v1;
        LODWORD(qword_140F131F0) = qword_140F131F0 - 1;
        *v1 |= 0x8000000000000002uLL;
        v1 = i;
        goto LABEL_16;
      }
    }
    v3 = 0LL;
LABEL_16:
    guard_dispatch_icall_no_overrides(v3, qword_140F13220);
  }
  for ( ++v0; (unsigned __int64)v0 < qword_140F131F8 + 8 * ((unsigned __int64)HIDWORD(qword_140F131F0) >> 5); ++v0 )
  {
    v1 = *v0;
    if ( ((unsigned __int8)*v0 & 1) == 0 )
    {
      v2 = *v0;
      goto LABEL_9;
    }
  }
LABEL_17:
  v5 = (__int64 *)qword_140F131E8;
  v6 = (__int64 *)qword_140F131E8;
  while ( v6 )
  {
    result = *v6;
    v6 = (__int64 *)result;
    if ( (result & 1) != 0 )
      break;
LABEL_25:
    if ( !result )
      goto LABEL_33;
    v8 = v6;
    for ( j = v5; (*j & 1) == 0; j = (__int64 *)*j )
    {
      if ( (__int64 *)*j == v6 )
      {
        *j = *v6;
        LODWORD(qword_140F131E0) = qword_140F131E0 - 1;
        *v6 |= 0x8000000000000002uLL;
        v6 = j;
        goto LABEL_32;
      }
    }
    v8 = 0LL;
LABEL_32:
    guard_dispatch_icall_no_overrides(v8, qword_140F13220);
  }
  ++v5;
  result = qword_140F131E8;
  while ( (unsigned __int64)v5 < qword_140F131E8 + 8 * ((unsigned __int64)HIDWORD(qword_140F131E0) >> 5) )
  {
    v6 = (__int64 *)*v5;
    if ( (*v5 & 1) == 0 )
    {
      result = *v5;
      goto LABEL_25;
    }
    ++v5;
  }
LABEL_33:
  v10 = qword_140F131F8;
  if ( qword_140F131E8 )
    result = guard_dispatch_icall_no_overrides(qword_140F131E8, qword_140F13220);
  if ( v10 )
    return guard_dispatch_icall_no_overrides(v10, qword_140F13220);
  return result;
}
