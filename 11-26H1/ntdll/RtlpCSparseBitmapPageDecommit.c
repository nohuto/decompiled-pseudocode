/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x1800682E0
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x18006E19C (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x180037B30 (RtlWakeAddressAll.c)
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  _RTL_SRWLOCK *v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  BOOL v13; // eax
  unsigned __int64 v14; // rax
  volatile signed __int32 **v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // r9
  __int64 v18; // r8
  bool i; // zf
  unsigned __int64 v20; // rax
  bool v21; // al
  __int64 v22; // rdi
  __int64 v23; // [rsp+28h] [rbp-A0h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+60h] [rbp-68h]
  unsigned __int64 v29; // [rsp+68h] [rbp-60h]
  unsigned __int64 v30; // [rsp+70h] [rbp-58h]
  __int64 v31; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp-40h]
  int v34; // [rsp+E8h] [rbp+20h]

  v4 = (_RTL_SRWLOCK *)a1;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v34 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v32 = (_QWORD *)(a1 + 8);
  v27 = v5;
  v6 = *(_QWORD *)(a1 + 8);
  v28 = v6;
  v7 = a2 << 15;
  v29 = a2 << 15;
  v8 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v30 = v9;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_21;
    if ( v7 >= v27 )
    {
LABEL_14:
      v13 = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      v13 = !_bittest64((const signed __int64 *)(v6 + 8 * (v8 >> 6)), 0);
    }
    else
    {
      if ( v27 - v7 < v9 )
        goto LABEL_14;
      v11 = (_QWORD *)(v6 + 8 * (v7 >> 6));
      v12 = (_QWORD *)(v6 + 8 * ((v9 + v7 - 1) >> 6));
      if ( v11 == v12 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7;
      }
      else
      {
        if ( ((-1LL << v7) & *v11) != 0 )
          goto LABEL_14;
        for ( ++v11; v11 != v12; ++v11 )
        {
          if ( *v11 )
            goto LABEL_14;
        }
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1);
      }
      v13 = (v14 & *v11) == 0;
    }
LABEL_20:
    if ( !v13 )
      goto LABEL_36;
LABEL_21:
    RtlAcquireSRWLockExclusive(v4 + 3);
    v31 = *(_QWORD *)(a1 + 32);
    if ( v31 == -1 )
      break;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v23 = 0LL;
    RtlpWaitOnAddress(a1 + 32, &v31, 8LL);
    v4 = (_RTL_SRWLOCK *)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_36;
    a3 = 0;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  v34 = 1;
  v15 = (volatile signed __int32 **)a1;
  if ( !_bittest64(*(const signed __int64 **)a1, a2) || v7 >= v27 )
    goto LABEL_36;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_36;
    if ( _bittest64((const signed __int64 *)(v6 + 8 * (v8 >> 6)), 0) )
    {
      v21 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v27 - v7 < v9 )
      goto LABEL_36;
    v16 = (__int64 *)(v6 + 8 * (v7 >> 6));
    v17 = (__int64 *)(v6 + 8 * ((v9 + v7 - 1) >> 6));
    v18 = *v16;
    if ( v16 != v17 )
    {
      for ( i = ((-1LL << v7) & v18) == 0; i; i = v18 == 0 )
      {
        v18 = *++v16;
        if ( v16 == v17 )
        {
          v20 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v7 - 1);
          goto LABEL_34;
        }
      }
      goto LABEL_36;
    }
    v20 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7;
LABEL_34:
    v15 = (volatile signed __int32 **)a1;
    v21 = (v20 & v18) == 0;
LABEL_35:
    if ( !v21 )
    {
LABEL_36:
      v22 = a1;
      goto LABEL_37;
    }
  }
  _interlockedbittestandreset64(*v15, a2);
  BaseAddress = (PVOID)(*v32 + (a2 << 12));
  RegionSize = 4096LL;
  v22 = a1;
  if ( *(_BYTE *)(a1 + 50) == 5 )
    ((void (__fastcall *)(__int64, __int64, PVOID *, ULONG_PTR *, int, __int64))(MEMORY[0x10] ^ RtlpHpHeapGlobals))(
      MEMORY[0] ^ RtlpHpHeapGlobals,
      -1LL,
      &BaseAddress,
      &RegionSize,
      0x4000,
      v23);
  else
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
LABEL_37:
  if ( v34 )
  {
    *(_QWORD *)(v22 + 32) = -1LL;
    RtlWakeAddressAll((PVOID)(v22 + 32));
  }
}
