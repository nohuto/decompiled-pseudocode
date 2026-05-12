/*
 * XREFs of sub_1401A74B0 @ 0x1401A74B0
 * Callers:
 *     sub_140063E68 @ 0x140063E68 (sub_140063E68.c)
 *     sub_140192B10 @ 0x140192B10 (sub_140192B10.c)
 * Callees:
 *     sub_140055B38 @ 0x140055B38 (sub_140055B38.c)
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     sub_1401316E4 @ 0x1401316E4 (sub_1401316E4.c)
 */

__int64 __fastcall sub_1401A74B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = sub_14013115C(a1);
  if ( !v4 )
    return 3221225485LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 24), 1u);
  v5 = sub_1401316E4(v4, (_QWORD *)(a2 + 40));
  if ( v5 )
  {
    if ( (v5[4] & 1) != 0 )
      sub_140055B38((__int64)v5, -1073741536);
  }
  else
  {
    v2 = -1073741275;
  }
  ExReleaseResourceLite((PERESOURCE)(v4 + 24));
  KeLeaveCriticalRegion();
  return v2;
}
