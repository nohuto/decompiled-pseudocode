/*
 * XREFs of RtlpHpPgCleanupAllocationForCompaction @ 0x18010140C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpEnvProtectVA @ 0x180101AC8 (RtlpHpEnvProtectVA.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpPgCleanupAllocationForCompaction(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r10d
  unsigned __int8 v11; // dl
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r15
  unsigned int i; // eax
  _BYTE *v18; // r11
  int v19; // r9d
  __int64 result; // rax
  unsigned __int64 v21; // r9
  unsigned int j; // r8d
  __int16 v23; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v24; // [rsp+52h] [rbp+Ah]

  v23 = 0;
  v24 = 0;
  ((void (__fastcall *)(_QWORD, __int64, __int16 *, __int64, int))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 56)))(
    *(_QWORD *)a1,
    a2,
    &v23,
    3LL,
    1);
  if ( (v23 & 0x200) != 0 )
  {
    v7 = a2 + 4096;
    v8 = a3 - 0x2000;
    if ( (v23 & 0x100) != 0 )
      v9 = 4096LL;
    else
      v9 = 16 * ((unsigned int)v24 + 256);
    v10 = v9 + a2;
    v11 = *(_BYTE *)(a1 + 84) ^ ((unsigned __int64)(v9 + a2) >> 12);
    if ( v8 < 8 )
    {
      v13 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
      v16 = 0LL;
    }
    else
    {
      v12 = v7 + v8;
      v13 = (a2 + 4103) & 0xFFFFFFFFFFFFFFF8uLL;
      v14 = (v7 + v8) & 0xFFFFFFFFFFFFFFF8uLL;
      v15 = v14 - v13;
      v8 = v13 - v7;
      v16 = v12 - v14;
    }
    for ( i = 0; i < v8; ++i )
    {
      v18 = (_BYTE *)(v7 + i);
      if ( *v18 != v11 )
      {
LABEL_12:
        v19 = (int)v18;
        return RtlpLogHeapFailure(11, *(_QWORD *)(a1 + 64), v10, v19, 0LL, 0LL);
      }
    }
    v21 = v15 >> 3;
    for ( j = 0; j < (unsigned int)v21; ++j )
    {
      v18 = (_BYTE *)(v13 + 8LL * j);
      if ( *(_QWORD *)v18 != 0x101010101010101LL * v11 )
        goto LABEL_12;
    }
    for ( result = 0LL; (unsigned int)result < v16; result = (unsigned int)(result + 1) )
    {
      v19 = result + v14;
      if ( *(_BYTE *)((unsigned int)result + v14) != v11 )
        return RtlpLogHeapFailure(11, *(_QWORD *)(a1 + 64), v10, v19, 0LL, 0LL);
    }
  }
  else
  {
    result = RtlpHpEnvProtectVA(a2, v6, 4LL);
    if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741779 )
      return RtlpLogHeapFailure(0, *(_QWORD *)(a1 + 64), a2, 4096, (int)result, 0LL);
  }
  return result;
}
