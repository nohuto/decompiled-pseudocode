/*
 * XREFs of KeInitializePriQueue @ 0x1405FC02C
 * Callers:
 *     ExpWorkQueueInitialize @ 0x1408462E8 (ExpWorkQueueInitialize.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

int __fastcall KeInitializePriQueue(__int64 a1, int a2)
{
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rax

  *(_WORD *)a1 = 21;
  *(_BYTE *)(a1 + 2) = -84;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 680) = a1 + 672;
  v3 = 32LL;
  *(_QWORD *)(a1 + 672) = a1 + 672;
  v4 = (_DWORD *)(a1 + 536);
  v5 = (_QWORD *)(a1 + 24);
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    *v4++ = 0;
    --v3;
  }
  while ( v3 );
  if ( !a2 )
  {
    LODWORD(v5) = KeQueryActiveProcessorCountEx(0xFFFFu);
    a2 = (int)v5;
  }
  *(_DWORD *)(a1 + 664) = a2;
  return (int)v5;
}
