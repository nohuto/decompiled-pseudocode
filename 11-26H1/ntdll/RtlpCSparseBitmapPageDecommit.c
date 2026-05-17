/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180079AC0
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x18008AD64 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x18004D5B0 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  const signed __int64 *v12; // rax
  volatile signed __int32 **v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // r9
  __int64 v16; // r8
  bool i; // zf
  __int64 v18; // rdi
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+60h] [rbp-68h]
  __int64 v25; // [rsp+68h] [rbp-60h]
  unsigned __int64 v26; // [rsp+70h] [rbp-58h]
  __int64 v27; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v28; // [rsp+88h] [rbp-40h]
  int v30; // [rsp+E8h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  v22 = 0LL;
  v21 = 0LL;
  v30 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v28 = (_QWORD *)(a1 + 8);
  v23 = v5;
  v6 = *(_QWORD *)(a1 + 8);
  v24 = v6;
  v7 = a2 << 15;
  v25 = a2 << 15;
  v8 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v26 = v9;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_21;
    if ( v7 >= v23 )
    {
LABEL_14:
      LODWORD(v12) = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      LODWORD(v12) = !_bittest64((const signed __int64 *)(v6 + 8 * (v8 >> 6)), 0);
    }
    else
    {
      if ( v23 - v7 < v9 )
        goto LABEL_14;
      a2 = v6 + 8 * (v7 >> 6);
      v11 = v6 + 8 * ((v9 + v7 - 1) >> 6);
      if ( a2 == v11 )
      {
        v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7);
      }
      else
      {
        if ( ((-1LL << v7) & *(_QWORD *)a2) != 0 )
          goto LABEL_14;
        for ( a2 += 8LL; a2 != v11; a2 += 8LL )
        {
          if ( *(_QWORD *)a2 )
            goto LABEL_14;
        }
        v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1));
      }
      LODWORD(v12) = ((unsigned __int64)v12 & *(_QWORD *)a2) == 0;
    }
LABEL_20:
    if ( !(_DWORD)v12 )
      goto LABEL_36;
LABEL_21:
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 24), a2);
    v27 = *(_QWORD *)(a1 + 32);
    if ( v27 == -1 )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 24));
    RtlpWaitOnAddress(a1 + 32, (unsigned int)&v27, 8, 0, RtlpWaitOnAddressSpinCycleCount, 0LL);
    v4 = a1;
    v12 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, v3) )
      goto LABEL_36;
    a3 = 0;
  }
  *(_QWORD *)(a1 + 32) = v3;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 24));
  v30 = 1;
  v13 = (volatile signed __int32 **)a1;
  v12 = *(const signed __int64 **)a1;
  if ( !_bittest64(*(const signed __int64 **)a1, v3) )
    goto LABEL_36;
  LOBYTE(v12) = v23;
  if ( v7 >= v23 )
    goto LABEL_36;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_36;
    if ( _bittest64((const signed __int64 *)(v6 + 8 * (v8 >> 6)), 0) )
    {
      LOBYTE(v12) = 0;
      goto LABEL_35;
    }
  }
  else
  {
    LOBYTE(v12) = v23 - v7;
    if ( v23 - v7 < v9 )
      goto LABEL_36;
    v14 = (__int64 *)(v6 + 8 * (v7 >> 6));
    v15 = (__int64 *)(v6 + 8 * ((v9 + v7 - 1) >> 6));
    v16 = *v14;
    if ( v14 != v15 )
    {
      v12 = (const signed __int64 *)(-1LL << v7);
      for ( i = ((-1LL << v7) & v16) == 0; i; i = v16 == 0 )
      {
        v16 = *++v14;
        if ( v14 == v15 )
        {
          v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1));
          goto LABEL_34;
        }
      }
      goto LABEL_36;
    }
    v12 = (const signed __int64 *)(0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7);
LABEL_34:
    v13 = (volatile signed __int32 **)a1;
    LOBYTE(v12) = ((unsigned __int64)v12 & v16) == 0;
LABEL_35:
    if ( !(_BYTE)v12 )
    {
LABEL_36:
      v18 = a1;
      goto LABEL_37;
    }
  }
  _interlockedbittestandreset64(*v13, v3);
  v22 = *v28 + (v3 << 12);
  v21 = 4096LL;
  v18 = a1;
  if ( *(_BYTE *)(a1 + 50) == 5 )
    LOBYTE(v12) = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64 *, int))(MEMORY[0x10] ^ RtlpHpHeapGlobals))(
                    MEMORY[0] ^ RtlpHpHeapGlobals,
                    -1LL,
                    &v22,
                    &v21,
                    0x4000);
  else
    LOBYTE(v12) = ZwFreeVirtualMemory(-1LL, &v22, &v21, 0x4000LL);
LABEL_37:
  if ( v30 )
  {
    *(_QWORD *)(v18 + 32) = -1LL;
    LOBYTE(v12) = RtlWakeAddressAll(v18 + 32);
  }
  return (char)v12;
}
