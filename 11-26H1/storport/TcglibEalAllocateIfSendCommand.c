/*
 * XREFs of TcglibEalAllocateIfSendCommand @ 0x14008CC34
 * Callers:
 *     TcglibpAllocateRequestResources @ 0x140133C68 (TcglibpAllocateRequestResources.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 */

__int64 __fastcall TcglibEalAllocateIfSendCommand(__int64 a1, char a2, __int16 a3, int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned int v10; // ebp
  void *Pool; // r14
  void *v12; // r12
  __int64 Srb; // r8
  char v14; // al
  unsigned int LockArray_high; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rax
  _BYTE *v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v24; // ebp

  v5 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = a1;
    if ( *(_DWORD *)v6 == 1314275652 )
    {
      v8 = v6 + 274;
      goto LABEL_8;
    }
    if ( *(_DWORD *)v6 != 1094997074 )
    {
      v8 = 98LL;
      goto LABEL_8;
    }
  }
  else if ( *(_DWORD *)a1 != 1094997074 )
  {
    return (unsigned int)-1073741637;
  }
  v8 = v6 + 482;
LABEL_8:
  v9 = v7;
  v10 = (a4 + 511) & 0xFFFFFE00;
  if ( !v7 )
    v9 = v6;
  Pool = (void *)RaidAllocatePool(64LL, (a4 + 511) & 0xFFFFFE00, 1129603410LL, *(_QWORD *)(v9 + 8));
  if ( !Pool )
    return (unsigned int)-1073741801;
  v12 = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(v9 + 8));
  if ( !v12 )
  {
LABEL_15:
    v5 = -1073741801;
    ExFreePoolWithTag(Pool, 0x43546152u);
    return v5;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(v9 + 8), 0, *(_BYTE *)v8, 1);
  if ( !Srb )
  {
    ExFreePoolWithTag(v12, 0x4E536152u);
    goto LABEL_15;
  }
  v14 = *(_BYTE *)v8;
  *(_BYTE *)(Srb + 3) = 0;
  if ( v14 == 1 )
  {
    *(_DWORD *)(Srb + 20) = 0;
    *(_DWORD *)(Srb + 24) = 384;
    if ( *(_DWORD *)v6 == 1094997074 && (*(_BYTE *)(v6 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(v6 + 6232) + 8LL * LockArray_high));
      v16 = **(_QWORD **)(*(_QWORD *)(v6 + 6232) + 8LL * LockArray_high);
      *(_DWORD *)(Srb + 44) = HIDWORD(v16);
    }
    else
    {
      LODWORD(v16) = -1;
    }
    *(_DWORD *)(Srb + 32) = v16;
    *(_QWORD *)(Srb + 64) = Pool;
    *(_DWORD *)(Srb + 60) = v10;
    *(_QWORD *)(Srb + 80) = 0LL;
    if ( v7 )
      v17 = *(_DWORD *)(v7 + 1392);
    else
      v17 = *(_DWORD *)(v6 + 4188);
    v18 = *(unsigned int *)(Srb + 52);
    *(_DWORD *)(Srb + 40) = v17;
    if ( v7 )
    {
      *(_BYTE *)(v18 + Srb + 8) = *(_BYTE *)(v7 + 104);
      *(_BYTE *)(v18 + Srb + 9) = *(_BYTE *)(v7 + 105);
      v19 = *(_BYTE *)(v7 + 106);
    }
    else
    {
      *(_WORD *)(v18 + Srb + 8) = 0;
      v19 = 0;
    }
    *(_BYTE *)(v18 + Srb + 10) = v19;
    v20 = *(unsigned int *)(Srb + 120);
    *(_DWORD *)(v20 + Srb) = 64;
    v21 = (_BYTE *)(Srb + v20 + 24);
    *(_DWORD *)(v20 + Srb + 4) = 32;
    *(_WORD *)(v20 + Srb + 8) = -256;
    *(_QWORD *)(v20 + Srb + 16) = v12;
    *(_BYTE *)(v20 + Srb + 10) = 12;
  }
  else
  {
    *(_WORD *)Srb = 88;
    *(_BYTE *)(Srb + 2) = 0;
    *(_DWORD *)(Srb + 12) = 384;
    if ( v7 )
    {
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(v7 + 104);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(v7 + 105);
      v22 = *(_BYTE *)(v7 + 106);
    }
    else
    {
      *(_WORD *)(Srb + 5) = 0;
      v22 = 0;
    }
    *(_BYTE *)(Srb + 7) = v22;
    *(_BYTE *)(Srb + 8) = -1;
    *(_QWORD *)(Srb + 24) = Pool;
    *(_DWORD *)(Srb + 16) = v10;
    *(_QWORD *)(Srb + 48) = 0LL;
    if ( v7 )
      v23 = *(_DWORD *)(v7 + 1392);
    else
      v23 = *(_DWORD *)(v6 + 4188);
    *(_DWORD *)(Srb + 20) = v23;
    v21 = (_BYTE *)(Srb + 72);
    *(_WORD *)(Srb + 10) = -244;
    *(_QWORD *)(Srb + 32) = v12;
  }
  v21[4] |= 0x80u;
  v21[1] = a2;
  v21[3] = a3;
  v21[2] = HIBYTE(a3);
  v24 = v10 >> 9;
  v21[9] = v24;
  v21[8] = BYTE1(v24);
  v21[7] = BYTE2(v24);
  *v21 = -75;
  v21[6] = HIBYTE(v24);
  *a5 = Srb;
  return v5;
}
