/*
 * XREFs of MiAllocateFastLargePagesForMdl @ 0x1406F2C10
 * Callers:
 *     MiFindPagesForMdl @ 0x140339E68 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiAllocateFastLargePagesForMdl(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v6; // r14
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r8
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 result; // rax
  __int64 v16; // rsi
  _QWORD v17[4]; // [rsp+20h] [rbp-A9h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-89h]
  int v19; // [rsp+44h] [rbp-85h]
  __int64 v20; // [rsp+48h] [rbp-81h]
  __int128 v21; // [rsp+50h] [rbp-79h]
  __int64 *v22; // [rsp+60h] [rbp-69h]
  __int64 v23; // [rsp+68h] [rbp-61h]
  _BYTE *v24; // [rsp+70h] [rbp-59h]
  _BYTE v25[96]; // [rsp+80h] [rbp-49h] BYREF

  memset_0(v25, 0, sizeof(v25));
  v6 = a1[8];
  v17[0] = 0LL;
  v23 = 0LL;
  v7 = *((_DWORD *)a1 + 36);
  v21 = 0LL;
  if ( v7 )
  {
    v8 = 4;
    if ( v7 == 2 )
      v8 = 28;
  }
  else
  {
    v8 = 12;
  }
  v9 = 8;
  v10 = a1[6];
  v11 = v10 * ((unsigned __int64)*(unsigned int *)(v6 + 40) >> 12);
  if ( (a3 & 1) != 0 )
    v9 = 12;
  v12 = a1[1] == 0x100000;
  LODWORD(v17[0]) = v9;
  if ( v12 )
  {
    v9 |= 1u;
    LODWORD(v17[0]) = v9;
  }
  if ( (*((_DWORD *)a1 + 37) & 4) != 0 )
    LODWORD(v17[0]) = v9 | 0x10;
  v17[1] = *a1;
  v13 = a1[4] - v11;
  v18 = a2;
  v17[2] = v13;
  v17[3] = a1[3];
  v22 = a1 + 10;
  v24 = v25;
  v19 = v8;
  v20 = -1LL;
  while ( 1 )
  {
    v14 = qword_140E2D948;
    result = *a1;
    if ( (unsigned __int64)a1[2] < *(_QWORD *)(*a1 + 22280) )
      break;
    MiInitializeLargePfnList((__int64)v25);
    result = MiAllocateLargeZeroPages((unsigned int *)v17);
    v16 = v23;
    if ( !v23 )
      break;
    if ( v14 == qword_140E2D948 )
    {
      MiInitializeFastLargePagesMdlPfns(a1, a2, v25, v23);
      *(_QWORD *)(v6 + 16) = 0LL;
      result = (v16 << 12) / v10;
      *(_DWORD *)(v6 + 40) += result;
      *(_WORD *)(v6 + 10) |= 2u;
      return result;
    }
    MiFreeLargeZeroPages(*a1, (__int64)v25, (LODWORD(v17[0]) >> 2) & 1);
    v23 = 0LL;
  }
  return result;
}
