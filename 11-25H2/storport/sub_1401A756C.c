/*
 * XREFs of sub_1401A756C @ 0x1401A756C
 * Callers:
 *     sub_140063E68 @ 0x140063E68 (sub_140063E68.c)
 *     sub_140192B10 @ 0x140192B10 (sub_140192B10.c)
 * Callees:
 *     sub_140055B38 @ 0x140055B38 (sub_140055B38.c)
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     sub_1401316E4 @ 0x1401316E4 (sub_1401316E4.c)
 */

__int64 __fastcall sub_1401A756C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = sub_14013115C(a1);
  if ( !v3 )
    return 3221225485LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 24), 1u);
  v4 = sub_1401316E4(v3, (_QWORD *)(a2 + 40));
  v5 = v4;
  if ( v4 )
  {
    sub_140055B38((__int64)v4, -1073741536);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --*(_BYTE *)(v3 + 1);
    ExFreePoolWithTag(v5, 0x4E456152u);
  }
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
  return 0LL;
}
