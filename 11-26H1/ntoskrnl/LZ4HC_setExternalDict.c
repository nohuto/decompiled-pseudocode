/*
 * XREFs of LZ4HC_setExternalDict @ 0x140637F98
 * Callers:
 *     LZ4HC_compress_generic_dictCtx @ 0x1406303C4 (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_setExternalDict(__int64 a1, __int64 a2)
{
  __int64 *v3; // r9
  __int64 v4; // rcx
  _DWORD *v6; // r10
  unsigned __int64 v7; // rbx
  unsigned int *v8; // r11
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ebx
  _DWORD *v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 262152);
  v4 = *(_QWORD *)(a1 + 262152);
  v6 = (_DWORD *)(a1 + 0x40000);
  v7 = *(_QWORD *)(a1 + 0x40000);
  v8 = (unsigned int *)(a1 + 262168);
  if ( v7 >= v4 + 4 )
  {
    v9 = *v8;
    v10 = v7 - v4 + v9 - 3;
    v11 = *(_DWORD *)(a1 + 262176);
    if ( v11 < v10 )
    {
      v12 = (_DWORD *)(v4 + v11 - v9);
      do
      {
        v13 = (unsigned __int64)(unsigned int)(-1640531535 * *v12) >> 17;
        v14 = v11 - *(_DWORD *)(a1 + 4 * v13);
        if ( v14 > 0xFFFF )
          LOWORD(v14) = -1;
        v12 = (_DWORD *)((char *)v12 + 1);
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v11 + 0x20000) = v14;
        *(_DWORD *)(a1 + 4 * v13) = v11++;
      }
      while ( v11 < v10 );
      v4 = *v3;
      v6 = (_DWORD *)(a1 + 0x40000);
      v3 = (__int64 *)(a1 + 262152);
    }
  }
  v15 = *v8;
  result = *v8 + *v6 - *(_DWORD *)v3;
  *v3 = a2;
  *(_QWORD *)v6 = a2;
  *v8 = result;
  *(_DWORD *)(a1 + 262176) = result;
  *(_DWORD *)(a1 + 262172) = v15;
  *(_QWORD *)(a1 + 262160) = v4;
  *(_QWORD *)(a1 + 262184) = 0LL;
  return result;
}
