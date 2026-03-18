/*
 * XREFs of ?Unpremultiply@@YAII@Z @ 0x180292B64
 * Callers:
 *     ?AlphaDivide_32bppPARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B6170 (-AlphaDivide_32bppPARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Unpremultiply(unsigned int a1)
{
  __int64 v2; // r9
  int v3; // ecx
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // eax

  v2 = HIBYTE(a1);
  if ( !(_DWORD)v2 || (_DWORD)v2 == 255 )
    return a1;
  v3 = UnpremultiplyTable[v2];
  v4 = (_DWORD)v2 << 24;
  v5 = (v3 * (unsigned int)BYTE2(a1)) >> 16;
  v6 = (v3 * (unsigned int)BYTE1(a1)) >> 16;
  v7 = (v3 * (unsigned int)(unsigned __int8)a1) >> 16;
  if ( v5 > 0xFF )
    v5 = 255;
  v8 = v4 | (v5 << 16);
  if ( v6 > 0xFF )
    v6 = 255;
  v9 = v8 | (v6 << 8);
  if ( v7 > 0xFF )
    v7 = 255;
  return v7 | v9;
}
