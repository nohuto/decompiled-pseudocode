/*
 * XREFs of RtlpHpPgContextAllocate @ 0x18010C620
 * Callers:
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

unsigned __int64 __fastcall RtlpHpPgContextAllocate(unsigned __int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  bool v9; // zf
  unsigned __int64 v10; // r9
  signed __int64 v11; // rdx
  signed __int64 v12; // rax
  bool v13; // cl
  __int64 v14; // rcx
  unsigned int v15; // r15d
  unsigned int v16; // esi
  __int64 v17; // rax
  char *v18; // r13
  char v19; // cl
  __int64 v20; // rbx
  char *v21; // rsi
  unsigned __int64 v22; // r15
  void *v23; // rax
  unsigned __int8 v24; // r12
  size_t v25; // rsi
  void *v26; // r9
  size_t v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ebx
  unsigned int v30; // [rsp+30h] [rbp-28h]
  int v31; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-20h]
  void *v33; // [rsp+40h] [rbp-18h]
  int v34; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+50h]
  __int16 v36; // [rsp+B0h] [rbp+58h] BYREF
  char v37; // [rsp+B2h] [rbp+5Ah]
  int v38; // [rsp+B8h] [rbp+60h]

  v38 = a4;
  v35 = a2;
  v4 = 0LL;
  v5 = a3;
  if ( (unsigned __int64)a3 > *(_QWORD *)(a1 + 72) )
    return v4;
  v9 = (*(_BYTE *)(a1 + 85) & 0x10) == 0;
  v36 = 0;
  v37 = 0;
  if ( v9 || a3 < 0x1000 )
  {
    v10 = qword_1801C5F00;
    do
    {
      v11 = v10 ^ (v10 >> 12) ^ ((v10 ^ (v10 >> 12)) << 25) ^ ((v10 ^ (v10 >> 12) ^ ((v10 ^ (v10 >> 12)) << 25)) >> 27);
      v12 = _InterlockedCompareExchange64(&qword_1801C5F00, v11, v10);
      v9 = v10 == v12;
      v10 = v12;
    }
    while ( !v9 );
    v13 = (unsigned __int8)((-3 * v11) & 7) < (unsigned __int8)(*(_BYTE *)(a1 + 85) & 0xF);
  }
  else
  {
    v13 = 1;
  }
  HIBYTE(v36) = v13 | HIBYTE(v36) & 0xFE;
  if ( a3 - a2 > 0x7F )
    return v4;
  v34 = 0;
  v31 = 0;
  LOBYTE(v36) = v36 & 0x80 | (a3 - a2) & 0x7F;
  v14 = *(_QWORD *)a1;
  v15 = a3 - (((_BYTE)a3 - 1) & 0xF) + 15;
  v32 = (a3 - (((_BYTE)a3 - 1) & 0xF) + 4110) & 0xFFFFF000;
  v16 = v32 + 0x2000;
  v30 = v32 + 0x2000;
  v17 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          v14,
          v32 + 0x2000,
          &v34,
          &v31);
  v18 = (char *)v17;
  if ( !v17 )
    return v4;
  v19 = HIBYTE(v36);
  v20 = v17 + 4096;
  v21 = (char *)(v17 + v16 - 4096);
  if ( (v36 & 0x100) != 0 )
    v22 = v17 + 4096;
  else
    v22 = (unsigned __int64)&v21[-v15];
  v23 = (void *)(v5 + v22);
  v24 = *(_BYTE *)(a1 + 84) ^ (v22 >> 12);
  v33 = v23;
  if ( (v34 & 1) != 0 )
    goto LABEL_12;
  v28 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 80) )
  {
    ((void (__fastcall *)(__int64, char *, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(v28, v18, 4096LL);
    ((void (__fastcall *)(_QWORD, char *, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
      *(_QWORD *)a1,
      v21,
      4096LL);
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v20,
           v32,
           0LL) >= 0 )
      goto LABEL_13;
    v29 = v30;
LABEL_26:
    ((void (__fastcall *)(_QWORD, char *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v18,
      v29,
      0LL);
    return v4;
  }
  v29 = v30;
  if ( ((int (__fastcall *)(__int64, char *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
         v28,
         v18,
         v30,
         0LL) < 0 )
    goto LABEL_26;
  v19 = HIBYTE(v36);
LABEL_12:
  HIBYTE(v36) = v19 | 2;
  memset_thunk_772440563353939046(v18, v24, 0x1000uLL);
  memset_thunk_772440563353939046(v21, v24, 0x1000uLL);
LABEL_13:
  v25 = v21 - (_BYTE *)v33;
  v26 = v18 + 4096;
  v27 = v25;
  if ( (v36 & 0x100) == 0 )
    v27 = v22 - (_QWORD)(v18 + 4096);
  v37 = v27 >> 4;
  HIBYTE(v36) = HIBYTE(v36) & 0xF | (16 * v25);
  if ( (v38 & 2) != 0 )
  {
    RtlHeapZero(v22, (v35 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v26 = v18 + 4096;
  }
  if ( v22 != (_QWORD)(v18 + 4096) )
    memset_thunk_772440563353939046(v26, v24, v22 - (_QWORD)(v18 + 4096));
  if ( v25 )
    memset_thunk_772440563353939046(v33, v24, v25);
  ((void (__fastcall *)(_QWORD, char *, __int16 *, __int64, _DWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
    *(_QWORD *)a1,
    v18,
    &v36,
    3LL,
    0);
  return v22;
}
