/*
 * XREFs of RtlpHpFixedVsFree @ 0x1404D6ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpFixedVsFree(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  int v6; // r12d
  int v8; // r13d
  char v9; // bp
  __int128 v10; // xmm0
  unsigned __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 *v14; // r11
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  bool i; // zf
  __int64 v18; // rdx
  unsigned __int128 v19; // [rsp+30h] [rbp-38h] BYREF

  v4 = (unsigned __int64)(unsigned int)a3 >> 12;
  v5 = (unsigned __int64)(a2 - a1) >> 12;
  v6 = a2;
  v8 = a3;
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) != 0 )
    v9 = -1;
  else
    v9 = RtlpHpAcquireLockExclusive((int *)(a1 + 24), *(unsigned __int8 *)(a1 + 32), a3, a4);
  v10 = *(_OWORD *)(a1 + 48);
  v11 = a1 ^ *(_QWORD *)(a1 + 56);
  v19 = __PAIR128__(v11, v10);
  if ( v5 >= (unsigned __int64)v10 )
    goto LABEL_13;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64((const signed __int64 *)(v11 + 8 * (v5 >> 6)), v5 & 0x3F) )
      goto LABEL_7;
LABEL_13:
    RtlpLogHeapFailure(8, a1, v6, v8, 0LL, 0LL);
    __fastfail(0x32u);
  }
  if ( (unsigned __int64)v10 - v5 < v4 )
    goto LABEL_13;
  v12 = (__int64 *)(v11 + 8 * (v5 >> 6));
  v13 = *v12;
  v14 = (__int64 *)(v11 + 8 * ((v5 + v4 - 1) >> 6));
  if ( v12 == v14 )
  {
    v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5;
    v16 = v13 & v15;
  }
  else
  {
    for ( i = (v13 & (-1LL << v5)) == -1LL << v5; ; i = v18 == -1 )
    {
      if ( !i )
        goto LABEL_13;
      v18 = *++v12;
      if ( v12 == v14 )
        break;
    }
    v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v5 + (unsigned __int8)v4 - 1);
    v16 = v18 & v15;
  }
  if ( v16 != v15 )
    goto LABEL_13;
LABEL_7:
  RtlClearBitsEx((__int64)&v19, v5, v4);
  if ( (*(_DWORD *)(a1 + 20) & 0x8000000) == 0 )
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 24), *(unsigned __int8 *)(a1 + 32), v9);
}
