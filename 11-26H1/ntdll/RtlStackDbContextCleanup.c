/*
 * XREFs of RtlStackDbContextCleanup @ 0x18010C2BC
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x18014F848 (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  _QWORD *i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 *v12; // r8
  __int64 *j; // rcx

  v1 = *(_QWORD ***)(a1 + 24);
  v3 = v1;
  while ( v3 )
  {
    v4 = (_QWORD *)*v3;
    v3 = v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
      break;
LABEL_13:
    if ( !v4 )
      goto LABEL_8;
    v8 = v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_20;
      }
    }
    v8 = 0LL;
LABEL_20:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v8, *(_QWORD *)(a1 + 64));
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5); ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
    {
      v4 = *v1;
      goto LABEL_13;
    }
  }
LABEL_8:
  v5 = *(__int64 **)(a1 + 8);
  v6 = v5;
  while ( v6 )
  {
    result = *v6;
    v6 = (__int64 *)result;
    if ( (result & 1) != 0 )
      break;
LABEL_30:
    if ( !result )
      goto LABEL_24;
    v12 = v6;
    for ( j = v5; (*j & 1) == 0; j = (__int64 *)*j )
    {
      if ( (__int64 *)*j == v6 )
      {
        *j = *v6;
        --*(_DWORD *)a1;
        *v6 |= 0x8000000000000002uLL;
        v6 = j;
        goto LABEL_37;
      }
    }
    v12 = 0LL;
LABEL_37:
    (*(void (__fastcall **)(__int64 *, _QWORD))(a1 + 56))(v12, *(_QWORD *)(a1 + 64));
  }
  ++v5;
  result = *(_QWORD *)(a1 + 8);
  while ( (unsigned __int64)v5 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
  {
    v6 = (__int64 *)*v5;
    if ( (*v5 & 1) == 0 )
    {
      result = *v5;
      goto LABEL_30;
    }
    ++v5;
  }
LABEL_24:
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v10, *(_QWORD *)(a1 + 64));
  if ( v11 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v11, *(_QWORD *)(a1 + 64));
  return result;
}
