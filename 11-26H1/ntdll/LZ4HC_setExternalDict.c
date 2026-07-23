/*
 * XREFs of LZ4HC_setExternalDict @ 0x18011F6CC
 * Callers:
 *     LZ4HC_compress_generic_dictCtx @ 0x1800EFA3C (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_setExternalDict(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 v4; // r11
  _DWORD *v5; // r10
  unsigned __int64 v6; // rcx
  unsigned int *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int v11; // ebp
  _DWORD *v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 result; // rax
  unsigned int v17; // ecx

  v2 = (__int64 *)(a1 + 262152);
  v4 = *(_QWORD *)(a1 + 262152);
  v5 = (_DWORD *)(a1 + 0x40000);
  v6 = *(_QWORD *)(a1 + 0x40000);
  v8 = (unsigned int *)(a1 + 262168);
  if ( v6 >= v4 + 4 )
  {
    v9 = *v8;
    v10 = *(_DWORD *)(a1 + 262176);
    v11 = v6 - v4 + v9 - 3;
    if ( v10 < v11 )
    {
      v12 = (_DWORD *)(v4 + v10 - v9);
      do
      {
        v13 = (unsigned __int64)(unsigned int)(-1640531535 * *v12) >> 17;
        v14 = v10 - *(_DWORD *)(a1 + 4 * v13);
        if ( v14 > 0xFFFF )
          LOWORD(v14) = -1;
        v12 = (_DWORD *)((char *)v12 + 1);
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v10 + 0x20000) = v14;
        *(_DWORD *)(a1 + 4 * v13) = v10++;
      }
      while ( v10 < v11 );
      v4 = *v2;
      v5 = (_DWORD *)(a1 + 0x40000);
      v2 = (__int64 *)(a1 + 262152);
    }
  }
  v15 = *v8;
  result = (unsigned int)(*v5 - *(_DWORD *)v2);
  *(_DWORD *)(a1 + 262172) = *v8;
  v17 = result + v15;
  *v8 = v17;
  *v2 = a2;
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(a1 + 262160) = v4;
  *(_DWORD *)(a1 + 262176) = v17;
  *(_QWORD *)(a1 + 262184) = 0LL;
  return result;
}
