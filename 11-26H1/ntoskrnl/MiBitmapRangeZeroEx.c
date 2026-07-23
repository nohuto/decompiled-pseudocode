/*
 * XREFs of MiBitmapRangeZeroEx @ 0x140316E54
 * Callers:
 *     MiReturnVadBitmapCommit @ 0x140AE3FD0 (MiReturnVadBitmapCommit.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiBitmapRangeZeroEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // r9d
  unsigned __int64 v7; // rcx
  __int64 i; // rdx
  __int64 v9; // r11
  __int64 *v10; // r10
  __int64 PteShadow; // rax
  __int64 j; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(v15, 0, 32);
  v6 = 3;
  v7 = *(_QWORD *)(a1 + 8) + a2 / 8;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15[i] = v7;
  }
  v9 = 3LL;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_12;
    v10 = (__int64 *)v15[--v9];
    --v6;
    PteShadow = *v10;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v10, *v10);
    if ( !PteShadow )
      break;
    if ( (PteShadow & 0x81) == 0x81 )
      goto LABEL_10;
  }
  v3 = 1;
LABEL_10:
  for ( j = (__int64)((_QWORD)(v10 + 1) << 25) >> 16; v6; --v6 )
    j = j << 25 >> 16;
  if ( !j )
LABEL_12:
    j = ((v15[0] << 25) + 0x10000000LL) >> 16;
  *a3 = 8 * (j - *(_QWORD *)(a1 + 8));
  return v3;
}
