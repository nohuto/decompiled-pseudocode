/*
 * XREFs of RaidBusEnumeratorProcessBusUnit @ 0x1400518A4
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorDeleteScsiIdentity @ 0x140011C04 (StorDeleteScsiIdentity.c)
 *     StorCompareScsiIdentity @ 0x14003DBB0 (StorCompareScsiIdentity.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessBusUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  char v5; // al
  __int64 *v6; // r15
  __int64 *v7; // r14
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  void *Pool; // rax
  void *v12; // rsi
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int16 v23; // dx
  __int64 v24; // rcx
  char v25; // al
  __int64 result; // rax
  __int64 *v27; // r8

  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 93);
  if ( *(_BYTE *)(a2 + 92) )
  {
    if ( !v5 )
      return StorDeleteScsiIdentity(a2 + 32);
    *(_DWORD *)(a2 + 88) = 1;
  }
  else if ( v5 )
  {
    v6 = (__int64 *)(a2 + 32);
    v7 = (__int64 *)(v3 + 112);
    v8 = StorCompareScsiIdentity((__int64 *)(a2 + 32), (__int64 *)(v3 + 112));
    switch ( v8 )
    {
      case 2:
        v9 = (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 3LL) | (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 2LL) << 8))
           + 4;
        if ( v9 > 0xFFFF )
          v9 = 0xFFFF;
        v10 = v9;
        Pool = (void *)RaidAllocatePool(64LL, v9, 842096978LL, *(_QWORD *)(*a1 + 8LL));
        v12 = Pool;
        if ( Pool )
        {
          memmove(Pool, *(const void **)(a2 + 64), v10);
          v13 = *(void **)(v3 + 144);
          if ( v13 )
            ExFreePoolWithTag(v13, 0x32316152u);
          *(_QWORD *)(v3 + 144) = v12;
        }
        goto LABEL_15;
      case 3:
        v14 = *(_QWORD *)(v3 + 160);
        *(_QWORD *)(v3 + 160) = *(_QWORD *)(a2 + 80);
        v15 = *(_QWORD *)(a2 + 72);
        *(_QWORD *)(a2 + 80) = v14;
        v16 = *(_QWORD *)(v3 + 152);
        *(_QWORD *)(v3 + 152) = v15;
        v17 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 72) = v16;
        v18 = *(_QWORD *)(v3 + 144);
        *(_QWORD *)(v3 + 144) = v17;
        v19 = *v6;
        *(_QWORD *)(a2 + 64) = v18;
        v20 = *v7;
        *v7 = v19;
        v21 = *(_QWORD *)(a2 + 48);
        *v6 = v20;
        LOWORD(v20) = *(_WORD *)(v3 + 122);
        v22 = *(_QWORD *)(v3 + 128);
        v23 = *(_WORD *)(v3 + 120);
        *(_QWORD *)(v3 + 128) = v21;
        *(_WORD *)(v3 + 120) = *(_WORD *)(a2 + 40);
        *(_WORD *)(v3 + 122) = *(_WORD *)(a2 + 42);
        *(_QWORD *)(a2 + 48) = v22;
        *(_WORD *)(a2 + 40) = v23;
        *(_WORD *)(a2 + 42) = v20;
        v24 = *(_QWORD *)(v3 + 24);
        if ( v24 )
        {
          v25 = *(_BYTE *)(v24 + 108);
          if ( (v25 & 0x20) == 0 )
            *(_BYTE *)(v24 + 108) = v25 | 0x20;
        }
        goto LABEL_15;
      case 0:
LABEL_15:
        *(_DWORD *)(a2 + 88) = 2;
        return StorDeleteScsiIdentity(a2 + 32);
    }
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + 504LL) |= 0x40u;
  }
  result = RaidAllocatePool(64LL, 96LL, 1950703954LL, *(_QWORD *)(*a1 + 8LL));
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)a2;
    *(_OWORD *)(result + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(result + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(result + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(result + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(result + 80) = *(_OWORD *)(a2 + 80);
    if ( *(_DWORD *)(a2 + 88) == 1 )
      a1[7] = 0LL;
    result += 16LL;
    v27 = (__int64 *)a1[16];
    if ( (_QWORD *)*v27 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *(_QWORD *)(result + 8) = v27;
    *v27 = result;
    a1[16] = result;
  }
  return result;
}
