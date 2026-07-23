/*
 * XREFs of KiInitializeKThreadExtension @ 0x1405232F0
 * Callers:
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall KiInitializeKThreadExtension(_QWORD *a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  char v11; // r8
  unsigned __int64 v12; // rcx

  v3 = (unsigned __int16)KiMaximumGroups;
  v6 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  a1[72] = v6;
  v7 = v6 + 8 * v3 + 8;
  *(_WORD *)v6 = 1;
  *(_WORD *)(v6 + 2) = v3;
  *(_DWORD *)(v6 + 4) = 0;
  memset_0((void *)(v6 + 8), 0, 8 * v3);
  a1[69] = v7;
  *(_WORD *)v7 = 1;
  *(_WORD *)(v7 + 2) = v3;
  *(_DWORD *)(v7 + 4) = 0;
  memset_0((void *)(v7 + 8), 0, 8 * v3);
  v8 = v7 + 8 * v3 + 8;
  a1[134] = v8;
  v9 = (v8 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
  result = KiAbpGlobalState;
  v11 = a2 != 0 ? 8 : 0;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    result = v9 + 16;
    *(_WORD *)(v9 + 30) = 6;
    *(_QWORD *)v9 = v9 + 16;
    if ( a2 )
    {
      *(_BYTE *)(v9 + 334) = v11;
      *(_BYTE *)(v9 + 335) = 1;
      *(_QWORD *)(v9 + 8) = v9 + 320;
    }
    a1[142] = v9;
  }
  else
  {
    *(_QWORD *)v9 = a1;
    *(_BYTE *)(v9 + 12) = 6;
    a1[142] = v9;
    v12 = v9 + 544;
    if ( a2 )
    {
      *(_QWORD *)v12 = a1;
      *(_BYTE *)(v12 + 12) = v11;
      a1[143] = v12;
    }
  }
  return result;
}
