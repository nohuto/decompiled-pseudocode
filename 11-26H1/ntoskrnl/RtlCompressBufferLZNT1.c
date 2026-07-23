/*
 * XREFs of RtlCompressBufferLZNT1 @ 0x140C08A10
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1CompressChunk @ 0x140C08B40 (LZNT1CompressChunk.c)
 */

__int64 __fastcall RtlCompressBufferLZNT1(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  int v8; // r13d
  char *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  char v12; // si
  __int64 (__fastcall *v13)(_BYTE *, __int64); // r15
  _WORD *v14; // rdi
  __int64 v15; // r12
  __int64 result; // rax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = (int)a4;
  v9 = (char *)a4 + a5;
  v10 = a2 + a3;
  v17 = 0;
  v11 = a2;
  v12 = 1;
  if ( a1 )
  {
    if ( a1 != 256 )
      return 3221225659LL;
    v13 = LZNT1FindMatchMaximum;
  }
  else
  {
    v13 = LZNT1FindMatchStandard;
  }
  v14 = a4;
  v15 = a8;
  while ( v11 < v10 )
  {
    result = LZNT1CompressChunk(v13, v11, v10, v14, v9, &v17, v15);
    if ( (int)result < 0 )
      return result;
    if ( v12 && (_DWORD)result == 279 )
    {
      v11 += 4096LL;
      v14 = (_WORD *)((char *)v14 + v17);
      v12 = 1;
    }
    else
    {
      v12 = 0;
      v11 += 4096LL;
      v14 = (_WORD *)((char *)v14 + v17);
    }
  }
  if ( v14 <= (_WORD *)v9 - 1 )
    *v14 = 0;
  *a7 = (_DWORD)v14 - v8;
  return v12 != 0 ? 0x117 : 0;
}
