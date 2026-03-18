/*
 * XREFs of ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1401C1E98
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 */

__int64 __fastcall GrepBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *a2, unsigned int a3)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rsi
  __int64 v8; // r12
  int v9; // r14d
  int *v10; // r11
  int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r15d
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  int *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v32[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v33; // [rsp+68h] [rbp-30h]
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

  if ( a3 < 0x54 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v6 = (unsigned int *)AllocFreeTmpBuffer(a3);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v6, a3, a2, a3, 1uLL);
  v8 = 0LL;
  v9 = -1;
  v10 = 0LL;
  v11 = v7[8];
  v12 = v7[14];
  v13 = v7[15];
  v14 = a3 - 84;
  if ( v12 > (a3 - 84) >> 1 )
  {
LABEL_33:
    FreeTmpBuffer(v7);
    return 0LL;
  }
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)v13 <= v14
      && v12 <= (v14 - (unsigned int)v13) >> (((v7[8] & 0x2000) != 0) + 2)
      && (_DWORD)v13 == (((_DWORD)v13 + 3) & 0xFFFFFFFC) )
    {
      v10 = (int *)((char *)v7 + v13 + 84);
      goto LABEL_10;
    }
    goto LABEL_33;
  }
LABEL_10:
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v16 = *(_DWORD *)(v15 + 184);
  v34 = *(_DWORD *)(v15 + 188);
  v17 = v7[1];
  if ( v16 != v17 )
  {
    *(_DWORD *)(v15 + 184) = v17;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = v7[4];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
  }
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v19 = *(_DWORD *)(v18 + 176);
  v35 = *(_DWORD *)(v18 + 180);
  v20 = v7[2];
  if ( v19 != v20 )
  {
    *(_DWORD *)(v18 + 176) = v20;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v7[5];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v21 = *((_QWORD *)v7 + 8);
  v22 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_QWORD *)(v22 + 296) != v21 )
  {
    v8 = *(_QWORD *)(v22 + 296);
    *(_QWORD *)(v22 + 296) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
  }
  v23 = v7[18];
  v24 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v24 + 272) != v23 )
  {
    v9 = *(_DWORD *)(v24 + 272);
    *(_DWORD *)(v24 + 272) = v23;
  }
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v26 = *(_QWORD *)(v25 + 324);
  v33 = v26;
  if ( v26 != *(_QWORD *)(v7 + 19) )
  {
    *(_DWORD *)(v25 + 324) = v7[19];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = v7[20];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  if ( v11 >= 0 )
  {
    v27 = (int *)(v7 + 9);
  }
  else
  {
    v27 = 0LL;
    v11 &= ~0x80000000;
  }
  GrepExtTextOutWLocked(
    (__int64)v32,
    a1,
    v7[6],
    v7[7],
    v11,
    v27,
    (unsigned __int16 *)v7 + 42,
    v12,
    v10,
    v7[3],
    0LL,
    v7[13]);
  v28 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v28 + 184) != v16 )
  {
    *(_DWORD *)(v28 + 184) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = v34;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
  }
  v29 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v29 + 176) != v19 )
  {
    *(_DWORD *)(v29 + 176) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v35;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  if ( v8 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
  }
  if ( v9 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 272LL) = v9;
  v30 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( __PAIR64__(HIDWORD(v33), v26) != *(_QWORD *)(v30 + 324) )
  {
    *(_DWORD *)(v30 + 324) = v26;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v33);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  FreeTmpBuffer(v7);
  return 1LL;
}
