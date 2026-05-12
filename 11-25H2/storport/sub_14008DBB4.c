/*
 * XREFs of sub_14008DBB4 @ 0x14008DBB4
 * Callers:
 *     sub_14009BA1C @ 0x14009BA1C (sub_14009BA1C.c)
 * Callees:
 *     sub_14008C974 @ 0x14008C974 (sub_14008C974.c)
 *     sub_14008DC60 @ 0x14008DC60 (sub_14008DC60.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14008DBB4(__int64 a1, unsigned int *a2)
{
  int v4; // ebx
  unsigned int (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rcx
  char v7; // al
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = sub_14008DC60();
  if ( v4 == -1073741637 )
  {
    v9 = 0LL;
    v4 = sub_14008C974(a1, &v9);
    if ( v4 >= 0 )
    {
      if ( *(_WORD *)(v9 + 2) >= 2u && (v5 = *(unsigned int (__fastcall **)(_QWORD))(v9 + 56)) != 0LL )
        *a2 = (v5(*(_QWORD *)(v9 + 8)) >> 2) & 0x3FF;
      else
        v4 = -1073741637;
    }
  }
  if ( v4 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = *(_BYTE *)(v6 + 109);
    if ( v7 >= 0 )
      *(_BYTE *)(v6 + 109) = v7 | 0x80;
  }
  return (unsigned int)v4;
}
