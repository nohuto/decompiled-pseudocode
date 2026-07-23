/*
 * XREFs of MiWriteAwePtesPrepare @ 0x140471C9C
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetAweViewPageSize @ 0x14047165C (MiGetAweViewPageSize.c)
 *     MiPageSizeToPteLevel @ 0x140471ED0 (MiPageSizeToPteLevel.c)
 */

__int64 __fastcall MiWriteAwePtesPrepare(__int64 a1)
{
  __int64 v2; // r9
  _KPROCESS *Process; // rax
  __int64 v4; // rdx
  __int64 AweViewPageSize; // rax
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // edx
  __int64 result; // rax
  bool v21; // zf

  v2 = *(_QWORD *)(a1 + 56);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(a1 + 248) = v4;
  *(_QWORD *)(a1 + 40) = (char *)Process + 1024;
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(v4 + 8);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(v4 + 16);
  AweViewPageSize = MiGetAweViewPageSize(v2);
  v7 = v6;
  if ( AweViewPageSize )
    v7 = AweViewPageSize;
  v8 = MiPageSizeToPteLevel(v7);
  *(_DWORD *)(a1 + 236) = v8;
  if ( v8 >= 1 )
    *(_DWORD *)(a1 + 264) |= 0x4000000u;
  v12 = 1LL;
  v13 = 2LL;
  if ( v9 == 16 )
    v12 = v11;
  *(_QWORD *)(a1 + 240) = v12;
  v14 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 280) = v9;
  v15 = a1 + 88;
  do
  {
    *v14 = v15;
    v15 += 80LL;
    *(v14 - 1) = 512LL;
    v14 += 10;
    --v13;
  }
  while ( v13 );
  *(_BYTE *)(v10 + 72) = 0;
  v16 = *(_DWORD *)(a1 + 232);
  *(_BYTE *)(a1 + 256) = 17;
  if ( (v16 & 1) != 0 )
  {
    v17 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(a1 + 48) = v17;
    v18 = *(_DWORD *)(v17 + 48);
    if ( (v18 & 0x180000) != 0x180000 )
      *(_DWORD *)(a1 + 264) |= 0x80000000;
    if ( (*(_DWORD *)(a1 + 268) & 1) != 0 )
      v19 = 4;
    else
      v19 = (v18 >> 5) & 0x1F;
    *(_DWORD *)(a1 + 288) = v19;
    *(_QWORD *)(a1 + 296) = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, *(_DWORD *)(a1 + 264) | (unsigned int)v19);
    result = (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 48LL) >> 10) & 0x7F;
    v21 = *(_QWORD *)(a1 + 312) == 1LL;
    *(_DWORD *)(a1 + 304) = result;
    if ( v21 )
    {
      *(_DWORD *)(a1 + 20) |= 1u;
      *(_QWORD *)(a1 + 312) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 20) |= 4u;
    *(_DWORD *)(a1 + 264) |= 0x80000000;
    *(_QWORD *)(a1 + 296) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_DWORD *)(a1 + 288) = 24;
    *(_DWORD *)(a1 + 304) = 0;
    result = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
