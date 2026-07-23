/*
 * XREFs of RtlCompressBufferLZNT1 @ 0x1800FAB60
 * Callers:
 *     <none>
 * Callees:
 *     LZNT1CompressChunk @ 0x1800FAC6C (LZNT1CompressChunk.c)
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
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  char *v10; // rbp
  int v11; // r14d
  char v12; // di
  __int64 (__fastcall *v13)(); // r12
  __int64 v14; // r13
  _WORD *v15; // rbx
  __int64 result; // rax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2;
  v9 = a2 + a3;
  v17 = 0;
  v10 = (char *)a4 + a5;
  v11 = (int)a4;
  v12 = 1;
  if ( a1 )
  {
    if ( a1 != 256 )
      return 3221225659LL;
    v13 = (__int64 (__fastcall *)())LZNT1FindMatchMaximum;
  }
  else
  {
    v13 = LZNT1FindMatchStandard;
  }
  v14 = a8;
  v15 = a4;
  while ( v8 < v9 )
  {
    result = LZNT1CompressChunk(v13, v8, v9, v15, v10, &v17, v14);
    if ( (int)result < 0 )
      return result;
    if ( !v12 || (v12 = 1, (_DWORD)result != 279) )
      v12 = 0;
    v8 += 4096LL;
    v15 = (_WORD *)((char *)v15 + v17);
  }
  if ( v15 <= (_WORD *)v10 - 1 )
    *v15 = 0;
  *a7 = (_DWORD)v15 - v11;
  return v12 != 0 ? 0x117 : 0;
}
