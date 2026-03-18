/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14003841C
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001BAA0 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r10
  signed __int64 v10; // rdi
  __int128 v11; // rax
  signed __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r11
  __int128 v15; // rax
  char result; // al
  int v17; // [rsp+38h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v3 = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  v4 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  v7 = 0LL;
  *(_QWORD *)(a1 + 40) = v6;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = v9;
  v17 = v1;
  while ( v3 < 0x100 )
  {
    v10 = *(_QWORD *)(a1 + 16LL * v3 + 104) - v6;
    v11 = v10 * (__int128)v10;
    v12 = *(_QWORD *)(a1 + 16 * (v3 + 7LL)) - v9;
    if ( (__int64)v11 < 0 )
    {
      if ( *((_QWORD *)&v11 + 1) == -1LL )
      {
        v13 = *(_QWORD *)(a1 + 40);
        v14 = *(_QWORD *)(a1 + 48);
        goto LABEL_5;
      }
    }
    else
    {
      v13 = v6;
      v14 = v9;
      if ( is_mul_ok(v10, v10) )
        goto LABEL_5;
    }
    *(_QWORD *)&v11 = -1LL;
    v13 = v6;
    v14 = v9;
LABEL_5:
    v4 += v11;
    v15 = v10 * (__int128)v12;
    if ( (__int64)v15 < 0 )
    {
      if ( *((_QWORD *)&v15 + 1) == -1LL )
      {
LABEL_7:
        v6 = v13;
        v9 = v14;
        goto LABEL_8;
      }
    }
    else if ( is_mul_ok(v10, v12) )
    {
      goto LABEL_7;
    }
    *(_QWORD *)&v15 = -1LL;
LABEL_8:
    v5 += v15;
    *(_QWORD *)(a1 + 80) = v4;
    v7 += v10;
    v8 += v12;
    *(_QWORD *)(a1 + 72) = v5;
    *(_QWORD *)(a1 + 56) = v7;
    ++v17;
    ++v3;
    *(_DWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 64) = v8;
  }
  result = 1;
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
