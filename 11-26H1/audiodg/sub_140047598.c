/*
 * XREFs of sub_140047598 @ 0x140047598
 * Callers:
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 * Callees:
 *     sub_140048FA0 @ 0x140048FA0 (sub_140048FA0.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005B310 @ 0x14005B310 (sub_14005B310.c)
 */

__int64 __fastcall sub_140047598(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  const wchar_t *v8; // rcx
  char v9; // dl
  __int64 v10; // rax
  char *v11; // rbx
  _BYTE v12[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( !a5 || !a2 )
    return -1LL;
  v6 = a2 - 1;
  if ( (unsigned __int64)(a2 + a5) >= 0x10 )
    return sub_140048FA0(a1);
  memset(v12, 0, sizeof(v12));
  v8 = L"/\\";
  v9 = 1;
  while ( v8 != &asc_1400C7460[a5] )
  {
    if ( *v8 >= 0x100u )
    {
      v9 = 0;
      break;
    }
    v10 = *(unsigned __int8 *)v8++;
    v12[v10] = 1;
  }
  v11 = &a1[2 * v6];
  if ( v9 )
  {
    while ( *(_WORD *)v11 >= 0x100u || !v12[*(unsigned __int16 *)v11] )
    {
      if ( v11 == a1 )
        return -1LL;
      v11 -= 2;
    }
  }
  else
  {
    while ( !sub_14005B310(v8, *(unsigned __int16 *)v11, a5) )
    {
      if ( v11 == a1 )
        return -1LL;
      v11 -= 2;
    }
  }
  return (v11 - a1) >> 1;
}
