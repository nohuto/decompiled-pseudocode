/*
 * XREFs of sub_140003834 @ 0x140003834
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 *     sub_1400035E0 @ 0x1400035E0 (sub_1400035E0.c)
 *     sub_140003960 @ 0x140003960 (sub_140003960.c)
 *     sub_140005310 @ 0x140005310 (sub_140005310.c)
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_1400301D0 @ 0x1400301D0 (sub_1400301D0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140003834(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = v3 + a2;
  v4 = *(_QWORD *)(a1 + 304);
  v5 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
    sub_1400B6010(v4);
    v5 = v11;
  }
  if ( !v5 )
    goto LABEL_9;
  if ( !v3 )
  {
    if ( *(_DWORD *)(a1 + 168) != 1 )
      goto LABEL_9;
    v9 = sub_1400B6010(v5);
    v7 = v9;
    if ( v9 >= 0 )
      goto LABEL_8;
    sub_14000C2A8(retaddr, 362LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v9);
    if ( v11 )
      sub_1400B6010(v11);
    return v7;
  }
  if ( v3 == 1 && !*(_DWORD *)(a1 + 168) )
  {
    v6 = sub_1400B6010(v5);
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_8:
      v5 = v11;
      goto LABEL_9;
    }
    sub_14000C2A8(retaddr, 367LL, "avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", (unsigned int)v6);
    sub_140003238(&v11);
    return v7;
  }
LABEL_9:
  if ( v5 )
    sub_1400B6010(v5);
  return 0LL;
}
