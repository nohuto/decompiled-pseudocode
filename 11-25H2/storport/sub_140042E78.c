/*
 * XREFs of sub_140042E78 @ 0x140042E78
 * Callers:
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140042E78(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  const void *v4; // r13
  unsigned int v5; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 result; // rax

  v4 = *(const void **)(a2 + 24);
  v5 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v5 = -1073741637;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 184);
    v9 = *(unsigned int *)(v10 + 16) + 32LL;
    if ( v9 <= 0xFFFFFFFF )
    {
      v11 = sub_1400143E0(64LL, (unsigned int)v9, 1918067026LL, *(_QWORD *)(a1 + 8));
      v8 = v11;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 16) = 1771297;
        *(_QWORD *)(v11 + 4) = 0x4E45474D5344504DLL;
        *(_DWORD *)(v11 + 24) = v9 - 28;
        *(_DWORD *)v11 = 28;
        *(_DWORD *)(v11 + 20) = 0;
        memmove((void *)(v11 + 32), v4, *(unsigned int *)(v10 + 16));
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  result = v5;
  *a4 = v9;
  *a3 = v8;
  return result;
}
