/*
 * XREFs of sub_14000E0B4 @ 0x14000E0B4
 * Callers:
 *     sub_14000E018 @ 0x14000E018 (sub_14000E018.c)
 * Callees:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000E0B4(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 **v4; // r9
  __int64 *i; // r8
  __int64 *v6; // rdx
  __int64 *v7; // rdx
  bool v8; // zf

  v3 = 0;
  v4 = (__int64 **)(a1 + 48LL * a3);
  for ( i = *v4; ; i = (__int64 *)*i )
  {
    if ( !i )
      return (unsigned int)-2005139430;
    if ( *(_QWORD *)(i[2] + 16) == *(_QWORD *)(a2 + 16) )
      break;
  }
  v6 = (__int64 *)*i;
  if ( i == *v4 )
    *v4 = v6;
  else
    *(_QWORD *)i[1] = v6;
  v7 = (__int64 *)i[1];
  if ( i == v4[1] )
    v4[1] = v7;
  else
    *(_QWORD *)(*i + 8) = v7;
  *i = (__int64)v4[4];
  v4[4] = i;
  v8 = v4[2] == (__int64 *)1;
  v4[2] = (__int64 *)((char *)v4[2] - 1);
  if ( v8 )
    sub_14000D9B8((__int64)v4);
  return v3;
}
