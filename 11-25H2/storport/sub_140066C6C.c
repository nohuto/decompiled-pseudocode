/*
 * XREFs of sub_140066C6C @ 0x140066C6C
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140066C6C(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebp
  _DWORD *v10; // rsi

  v4 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 184);
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 >= 8 )
    {
      v10 = *(_DWORD **)(a2 + 24);
      memset_0(v10, 0, *(unsigned int *)(v8 + 8));
      *v10 = 24;
      v10[1] = 24;
      if ( v9 >= 0x18 )
      {
        *((_QWORD *)v10 + 1) = *(_QWORD *)(a1 + 8);
        *((_QWORD *)v10 + 2) = sub_140066C40;
        *a3 = 24LL;
        *a4 = 1;
      }
      else
      {
        *a3 = 8LL;
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  return v4;
}
