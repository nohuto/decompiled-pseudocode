/*
 * XREFs of sub_14005EBC0 @ 0x14005EBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140019CD0 @ 0x140019CD0 (sub_140019CD0.c)
 *     sub_140020480 @ 0x140020480 (sub_140020480.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005EBC0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( (unsigned int)sub_140020480(a2) )
  {
    *v6 = v7;
    sub_1400B6010(v7);
  }
  else
  {
    return (unsigned int)sub_140019CD0(v7 + 24, (__int64)&off_1400C1400, v5, v6);
  }
  return v3;
}
