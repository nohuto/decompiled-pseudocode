/*
 * XREFs of sub_140098810 @ 0x140098810
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140025810 @ 0x140025810 (sub_140025810.c)
 *     sub_140040834 @ 0x140040834 (sub_140040834.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_14009D47C @ 0x14009D47C (sub_14009D47C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140098810(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rcx
  int v18; // r8d
  unsigned int v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // edi
  __int64 v25; // r8
  int v26; // r10d
  unsigned int v27; // r9d
  __int64 v28; // rax

  v3 = a2;
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 508LL) = a2;
  v6 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(v6 + 504) = 2;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(a1, a2, *(_QWORD *)(a1 + 136), 9, a2, *(_DWORD *)(*(_QWORD *)(a1 + 136) + 112LL), 0);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL);
  if ( (*(_DWORD *)(v7 + 164) & 1) == 0 || !v3 )
    goto LABEL_9;
  v8 = _InterlockedCompareExchange64(
         (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 16LL),
         0LL,
         0LL);
  a2 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL);
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 136);
  v10 = v9;
  v11 = *(_QWORD *)(v7 + 88);
  if ( v8 < 0 || v9 < 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v7, a2, *(_QWORD *)(a1 + 136));
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFE);
    goto LABEL_9;
  }
  if ( v8 < v9 )
  {
LABEL_9:
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 136) + 176LL), 1);
LABEL_10:
    v12 = *(_QWORD *)(a1 + 136);
    v13 = *(_QWORD *)(v12 + 128);
    goto LABEL_11;
  }
  sub_1400B6010(v7);
  v15 = *(_QWORD *)(a1 + 136);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a3 + 32);
  v16 = *(_DWORD *)(v15 + 104) * v3;
  v17 = *(_QWORD *)(a1 + 136);
  v18 = *(_DWORD *)(*(_QWORD *)(v15 + 88) + 4LL) + 1;
  v19 = **(_DWORD **)(v17 + 88);
  v20 = 0;
  if ( v18 != *(_DWORD *)(*(_QWORD *)(v17 + 96) + 132LL) )
    v20 = v18;
  if ( v20 == v19 )
  {
    v21 = *(_QWORD *)(a1 + 136);
    v22 = (unsigned __int64)(v19 + 1 < *(_DWORD *)(*(_QWORD *)(v21 + 96) + 132LL) ? v19 + 1 : 0) << 6;
    _InterlockedExchange(
      *(volatile __int32 **)(v21 + 88),
      v19 + 1 < *(_DWORD *)(*(_QWORD *)(v21 + 96) + 132LL) ? v19 + 1 : 0);
    *(_DWORD *)(v22 + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52) = 1;
    if ( (byte_1400E8401 & 1) != 0 )
      sub_14009D47C(
        v19 << 6,
        v21,
        *(_QWORD *)(a1 + 136),
        v8,
        *(_DWORD *)(((unsigned __int64)v19 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 4),
        v10,
        v16);
    sub_140025810(*(_QWORD *)(a1 + 136) + 216LL, 6, "CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v7 = *(_QWORD *)(a1 + 136);
  v23 = *(unsigned int *)(v7 + 168);
  if ( (unsigned int)v23 >= (int)v8 - (int)v10 )
    v24 = v10 + v23 - v8;
  else
    v24 = v16;
  v25 = *(_QWORD *)(v7 + 96);
  a2 = v8 % v23;
  v26 = *(_DWORD *)(v25 + 160);
  v27 = v26 + a2;
  if ( v24 < v16 )
  {
    if ( (byte_1400E8401 & 1) != 0 )
      sub_140040834(
        v7,
        v26 + (unsigned int)(v10 % *(unsigned int *)(v7 + 168)),
        v7,
        v27,
        v26 + v10 % *(unsigned int *)(v7 + 168),
        v16);
    if ( v10 > 0 )
      sub_140025810(*(_QWORD *)(a1 + 136) + 216LL, 7, "CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v24 )
    {
      v28 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 88) = v24;
      *(_DWORD *)(v28 + 504) = 1;
    }
    goto LABEL_9;
  }
  if ( v16 + v27 > *(_DWORD *)(v25 + 168) )
  {
    *(_DWORD *)(v7 + 504) = 1;
    goto LABEL_10;
  }
  *(_DWORD *)(v7 + 504) = 0;
  v12 = *(_QWORD *)(a1 + 136);
  v13 = *(_QWORD *)(v12 + 80) + v27;
LABEL_11:
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(v7, a2, v12, 10, v3, 0, 0);
  return v13;
}
