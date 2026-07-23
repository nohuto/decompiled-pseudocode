/*
 * XREFs of ExCreatePool @ 0x1406CFA90
 * Callers:
 *     <none>
 * Callees:
 *     ExpLogSecurePoolCreate @ 0x1406D0820 (ExpLogSecurePoolCreate.c)
 *     ExpSecurePoolCreate @ 0x1406D506C (ExpSecurePoolCreate.c)
 */

__int64 __fastcall ExCreatePool(int a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rdi
  int v5; // r10d
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned int v12; // ebx
  int v13; // r10d
  int v14; // r10d
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = a1 & 0xD;
  if ( a3 )
  {
    v8 = 0LL;
    while ( (unsigned int)v8 < *(_DWORD *)(a3 + 4) )
    {
      v9 = *(_QWORD *)(a3 + 8);
      v10 = 3 * v8;
      if ( *(_DWORD *)(v9 + 24 * v8) != 1 || v4 )
        return 3221225713LL;
      v8 = (unsigned int)(v8 + 1);
      v4 = v9 + 8 + 8 * v10;
    }
  }
  v12 = a1 & ~v5;
  v13 = v5 - 1;
  if ( v13 )
  {
    v14 = v13 - 3;
    if ( !v14 || v14 == 4 )
      return 3221225659LL;
    else
      return 3221225711LL;
  }
  else
  {
    ExpLogSecurePoolCreate(retaddr);
    if ( v4 )
    {
      return 3221225713LL;
    }
    else
    {
      result = ExpSecurePoolCreate(v12, a2);
      if ( (int)result >= 0 )
        *a4 = qword_140E6BFA8 ^ (unsigned __int64)&dword_140E6BF60;
    }
  }
  return result;
}
