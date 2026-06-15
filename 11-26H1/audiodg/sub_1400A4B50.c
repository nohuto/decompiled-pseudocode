/*
 * XREFs of sub_1400A4B50 @ 0x1400A4B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400A4B50(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rbx
  signed __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned int v11; // r9d
  __int32 v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  void *v15; // rcx
  int v16; // edx
  __int64 v17; // r12
  void *v18; // rcx
  int v19; // esi
  int v20; // edx
  size_t v21; // r8
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  HANDLE v25; // rax
  HANDLE v26; // rax

  v2 = *(_DWORD *)(a2 + 8);
  v3 = a1 - 472;
  LOBYTE(v4) = 0;
  v5 = a2;
  v6 = a1;
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 472 + 88) + 16LL), 0LL, 0LL);
  LOBYTE(a1) = byte_1400E8401;
  v8 = v7;
  if ( (byte_1400E8401 & 4) != 0 )
  {
    sub_14000F5B0(a1, a2, v3, 19, v2, v7, 0);
    LOBYTE(a1) = byte_1400E8401;
  }
  v9 = *(_QWORD *)(v3 + 88);
  if ( v8 >= 0 )
  {
    if ( !v2 )
      goto LABEL_34;
    v10 = *(_QWORD *)(v6 - 376);
    a2 = v8 % *(unsigned int *)(v6 - 304);
    v4 = *(_DWORD *)(v6 - 368) * v2;
    v11 = a2 + *(_DWORD *)(v10 + 160);
    if ( v11 > *(_DWORD *)(v10 + 164) )
      goto LABEL_34;
    a2 = 1LL;
    if ( v2 >= *(_DWORD *)(v6 + 20) || (v12 = 1, (*(_BYTE *)(v6 - 280) & 1) == 0) )
      v12 = 0;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v6 - 384) + 176LL), v12);
    v13 = *(_DWORD *)(v6 + 16);
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_34;
      v14 = *(_DWORD *)(*(_QWORD *)(v6 - 376) + 164LL);
      if ( v11 + v4 <= v14 )
      {
        if ( v4 > v14 )
          goto LABEL_34;
        v15 = (void *)(*(_QWORD *)(v6 - 392) + v11);
        if ( *(_DWORD *)(v5 + 12) == 1 )
        {
          memcpy(v15, *(const void **)(v6 - 344), v4);
        }
        else
        {
          v16 = 128;
          if ( *(_DWORD *)(v6 - 352) != 8 )
            v16 = 0;
          memset(v15, v16, v4);
        }
        goto LABEL_33;
      }
      v17 = v14 - v11;
      v18 = (void *)(*(_QWORD *)(v6 - 392) + v11);
      if ( *(_DWORD *)(v5 + 12) == 1 )
      {
        memcpy(v18, *(const void **)(v6 - 344), (unsigned int)v17);
        memcpy(
          (void *)(*(_QWORD *)(v6 - 392) + *(unsigned int *)(*(_QWORD *)(v6 - 376) + 160LL)),
          (const void *)(v17 + *(_QWORD *)(v6 - 344)),
          v4 - (unsigned int)v17);
LABEL_33:
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(v6 - 384) + 16LL), v4);
        goto LABEL_34;
      }
      v19 = 128;
      v20 = 128;
      if ( *(_DWORD *)(v6 - 352) != 8 )
        v20 = 0;
      memset(v18, v20, (unsigned int)v17);
      v21 = v4 - (unsigned int)v17;
      if ( *(_DWORD *)(v6 - 352) != 8 )
        v19 = 0;
      v22 = v19;
      v23 = *(unsigned int *)(*(_QWORD *)(v6 - 376) + 160LL);
    }
    else
    {
      if ( *(_DWORD *)(v5 + 12) != 2 )
        goto LABEL_33;
      v22 = 128;
      v21 = v4;
      if ( *(_DWORD *)(v6 - 352) != 8 )
        v22 = 0;
      v23 = v11;
    }
    memset((void *)(*(_QWORD *)(v6 - 392) + v23), v22, v21);
    goto LABEL_33;
  }
  if ( (a1 & 4) != 0 )
    sub_14009D41C(a1, a2, v3);
  sub_140048108();
  _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFE);
LABEL_34:
  v24 = *(_QWORD *)(v6 - 24);
  if ( v24 )
  {
    sub_1400B6010(v24);
    SetEvent(v25);
    sub_1400B6010(*(_QWORD *)(v6 - 16));
    WaitForSingleObject(v26, 0xFFFFFFFF);
  }
  *(_DWORD *)(v6 + 16) = 3;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v24, a2, v6 - 472, 20, v2, v8, v4);
}
