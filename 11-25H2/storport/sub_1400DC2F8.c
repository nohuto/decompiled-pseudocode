/*
 * XREFs of sub_1400DC2F8 @ 0x1400DC2F8
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400DE17C @ 0x1400DE17C (sub_1400DE17C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400CAA3C @ 0x1400CAA3C (sub_1400CAA3C.c)
 *     sub_1400E0A18 @ 0x1400E0A18 (sub_1400E0A18.c)
 */

__int64 __fastcall sub_1400DC2F8(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  __int64 v14; // rax

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL);
  v4 = sub_1400143E0(64LL, (unsigned int)(16 * *(_DWORD *)(a1 + 124)), 1380147538LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a1 + 24) = v4;
  if ( !v4 )
    goto LABEL_11;
  v5 = *(_DWORD *)(a1 + 124);
  for ( i = 0; i < v5; v5 = *(_DWORD *)(a1 + 124) )
  {
    v7 = i++;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 16 * v7 + 8) = -1;
  }
  v8 = sub_1400143E0(64LL, v5 << 7, 1380147538LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a1 + 32) = v8;
  if ( v8 )
  {
    InitializeSListHead((PSLIST_HEADER)(a1 + 64));
    v9 = 316LL;
    v10 = 524LL;
    v11 = 0;
    if ( *(_DWORD *)v3 != 1314275652 )
      v9 = 524LL;
    v12 = (*(_DWORD *)(v9 + v3) + 7) & 0xFFFFFFF8;
    while ( v11 < *(_DWORD *)(a1 + 124) )
    {
      v13 = (unsigned __int64)v11 << 7;
      *(_QWORD *)(v13 + *(_QWORD *)(a1 + 32) + 16) = sub_1400CAA3C(v10, v12 + 1184);
      v14 = *(_QWORD *)(a1 + 32);
      if ( !*(_QWORD *)(v13 + v14 + 16) )
        goto LABEL_11;
      *(_WORD *)(v13 + v14 + 54) = v11;
      *(_WORD *)(v13 + *(_QWORD *)(a1 + 32) + 56) = -1;
      *(_DWORD *)(v13 + *(_QWORD *)(a1 + 32) + 80) = 0;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 64), (PSLIST_ENTRY)(v13 + *(_QWORD *)(a1 + 32)));
      ++v11;
    }
  }
  else
  {
LABEL_11:
    v2 = -1073741801;
    sub_1400E0A18(a1);
  }
  return v2;
}
