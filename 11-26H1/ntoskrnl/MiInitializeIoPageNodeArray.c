/*
 * XREFs of MiInitializeIoPageNodeArray @ 0x1404C9EDC
 * Callers:
 *     MiCreateIoPfnNode @ 0x14050B570 (MiCreateIoPfnNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeIoPageNodeArray(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // eax
  unsigned __int64 v4; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 512LL;
  do
  {
    v3 = v1++ & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1);
    v4 = (unsigned __int64)(unsigned int)(2 * (v3 - *(_DWORD *)(a1 + 24))) >> 5;
    result = (3 << (2 * (v3 - *(_BYTE *)(a1 + 24)))) | *(_DWORD *)(a1 + 4 * v4 + 44) & (unsigned int)~(3 << (2 * (v3 - *(_BYTE *)(a1 + 24))));
    *(_DWORD *)(a1 + 4 * v4 + 44) = result;
    --v2;
  }
  while ( v2 );
  return result;
}
