/*
 * XREFs of ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1401658D0
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 */

__int64 __fastcall GrepBatchTextOut(DC **a1, struct _BATCHTEXTOUT *a2, unsigned int a3, const struct RFONTOBJ::Tag *a4)
{
  unsigned int *v7; // rax
  unsigned int *v8; // rsi
  __int64 v9; // r12
  int v10; // r14d
  ULONG *v11; // r11
  int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rcx
  int v17; // r13d
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int *v27; // rbx
  unsigned int *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // [rsp+70h] [rbp-38h]
  char v34[4]; // [rsp+74h] [rbp-34h] BYREF
  unsigned int *v35; // [rsp+78h] [rbp-30h]
  int v36; // [rsp+C0h] [rbp+18h]

  if ( a3 < 0x54 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v7 = (unsigned int *)AllocFreeTmpBuffer(a3);
  v8 = v7;
  v35 = v7;
  if ( !v7 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v7, a3, a2, a3, 1uLL);
  v9 = 0LL;
  v10 = -1;
  v11 = 0LL;
  v12 = v8[8];
  v13 = v8[14];
  v14 = v8[15];
  v15 = a3 - 84;
  if ( v13 > (a3 - 84) >> 1 )
  {
LABEL_34:
    FreeTmpBuffer(v8);
    return 0LL;
  }
  if ( (_DWORD)v14 )
  {
    if ( (unsigned int)v14 <= v15
      && v13 <= (v15 - (unsigned int)v14) >> (((v8[8] & 0x2000) != 0) + 2)
      && (_DWORD)v14 == (((_DWORD)v14 + 3) & 0xFFFFFFFC) )
    {
      v11 = (unsigned int *)((char *)v8 + v14 + 84);
      goto LABEL_6;
    }
    goto LABEL_34;
  }
LABEL_6:
  v16 = *((_QWORD *)*a1 + 122);
  v17 = *(_DWORD *)(v16 + 184);
  v36 = *(_DWORD *)(v16 + 188);
  v18 = v8[1];
  if ( v17 != v18 )
  {
    *(_DWORD *)(v16 + 184) = v18;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 188LL) = v8[4];
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 7u;
  }
  v19 = *((_QWORD *)*a1 + 122);
  v20 = *(_DWORD *)(v19 + 176);
  v33 = *(_DWORD *)(v19 + 180);
  v21 = v8[2];
  if ( v20 != v21 )
  {
    *(_DWORD *)(v19 + 176) = v21;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 180LL) = v8[5];
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xBu;
  }
  v22 = *((_QWORD *)*a1 + 122);
  v23 = *((_QWORD *)v8 + 8);
  if ( *(_QWORD *)(v22 + 296) != v23 )
  {
    v9 = *(_QWORD *)(v22 + 296);
    *(_QWORD *)(v22 + 296) = v23;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0x10u;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) &= ~0x20u;
  }
  v24 = *((_QWORD *)*a1 + 122);
  v25 = v8[18];
  if ( *(_DWORD *)(v24 + 272) != v25 )
  {
    v10 = *(_DWORD *)(v24 + 272);
    *(_DWORD *)(v24 + 272) = v25;
  }
  v26 = *((_QWORD *)*a1 + 122);
  v27 = *(unsigned int **)(v26 + 324);
  v35 = v27;
  if ( v27 != *(unsigned int **)(v8 + 19) )
  {
    *(_DWORD *)(v26 + 324) = v8[19];
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 328LL) = v8[20];
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 340LL) |= 0x2010u;
  }
  if ( v12 >= 0 )
  {
    v28 = v8 + 9;
  }
  else
  {
    v28 = 0LL;
    v12 &= ~0x80000000;
  }
  GrepExtTextOutWLocked(
    (__int64)v34,
    a1,
    v8[6],
    v8[7],
    v12,
    v28,
    (unsigned __int16 *)v8 + 42,
    v13,
    v11,
    v8[3],
    0LL,
    v8[13],
    a4);
  v29 = *((_QWORD *)*a1 + 122);
  if ( *(_DWORD *)(v29 + 184) != v17 )
  {
    *(_DWORD *)(v29 + 184) = v17;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 188LL) = v36;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 7u;
  }
  v30 = *((_QWORD *)*a1 + 122);
  if ( *(_DWORD *)(v30 + 176) != v20 )
  {
    *(_DWORD *)(v30 + 176) = v20;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 180LL) = v33;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0xBu;
  }
  if ( v9 )
  {
    *(_QWORD *)(*((_QWORD *)*a1 + 122) + 296LL) = v9;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0x10u;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) &= ~0x20u;
  }
  if ( v10 != -1 )
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 272LL) = v10;
  v31 = *((_QWORD *)*a1 + 122);
  if ( __PAIR64__(HIDWORD(v35), (unsigned int)v27) != *(_QWORD *)(v31 + 324) )
  {
    *(_DWORD *)(v31 + 324) = (_DWORD)v27;
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 328LL) = HIDWORD(v35);
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 340LL) |= 0x2010u;
  }
  FreeTmpBuffer(v8);
  return 1LL;
}
