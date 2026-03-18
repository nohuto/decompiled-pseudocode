/*
 * XREFs of sub_140A3E0E8 @ 0x140A3E0E8
 * Callers:
 *     WbHeapExecutionUnloadModule @ 0x140A3DEC0 (WbHeapExecutionUnloadModule.c)
 *     sub_140A3DFCC @ 0x140A3DFCC (sub_140A3DFCC.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 */

__int64 __fastcall sub_140A3E0E8(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  int v5; // ebx
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 != -1 )
    goto LABEL_4;
  v5 = sub_140909110(a1, a2, a3, a5, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
LABEL_4:
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
      (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
      (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
    --*(_DWORD *)(a1 + 4);
  }
  return (unsigned int)v5;
}
