/*
 * XREFs of AccelpWriteCompressionHeaderFormat @ 0x1406E5234
 * Callers:
 *     AccelCompressBuffer @ 0x1406E2E00 (AccelCompressBuffer.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall AccelpWriteCompressionHeaderFormat(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4, __int64 a5, int a6)
{
  unsigned int v7; // r14d
  int v11; // ecx
  size_t v12; // r8
  __int64 v13; // rbx
  size_t v14; // r8

  v7 = 0;
  v11 = a1[4] - 2;
  if ( !v11 )
  {
    v14 = (unsigned int)a1[5];
    v13 = (unsigned int)(v14 + *a2);
    memmove(a4, a1 + 7, v14);
    *(_DWORD *)((char *)a4 + v13) = a6;
    goto LABEL_6;
  }
  if ( v11 == 1 )
  {
    v12 = (unsigned int)a1[5];
    v13 = (unsigned int)(v12 + *a2);
    memmove(a4, a1 + 7, v12);
    a4[4] = a3;
    a4[5] = *a2;
    *(_DWORD *)((char *)a4 + v13) = a6;
LABEL_6:
    *(_DWORD *)((char *)a4 + v13 + 4) = a3;
    *a2 += a1[5] + a1[6];
    return v7;
  }
  return (unsigned int)-1073741637;
}
