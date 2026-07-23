/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x14046FEC0
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1402C3430 (CcSetVacbLargeOffset.c)
 */

char __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  int v5; // r9d
  int v6; // ecx
  __int64 v7; // r11
  int v8; // ebx
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax

  v4 = a2;
  v5 = 0;
  v6 = 25;
  v7 = *(_QWORD *)(a1 + 88);
  do
  {
    v8 = v6;
    v6 += 7;
    ++v5;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v6 );
  do
  {
    v9 = v8;
    v10 = a2 >> v8;
    v8 -= 7;
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)v10);
    a2 &= (1LL << v9) - 1;
    --v5;
  }
  while ( v5 );
  v11 = 2048LL;
  v12 = 2048LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    v12 = 1024LL;
  *(_DWORD *)(v12 + v7) += a3;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    v11 = 1024LL;
  v13 = *(_DWORD *)(v11 + v7) | *(_DWORD *)(v11 + v7 + 4);
  if ( !*(_QWORD *)(v11 + v7) )
  {
    v14 = 2052LL;
    if ( (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
      v14 = 1028LL;
    ++*(_DWORD *)(v14 + v7);
    LOBYTE(v13) = CcSetVacbLargeOffset(a1, v4 & 0xFFFFFFFFFE000000uLL, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  }
  return v13;
}
