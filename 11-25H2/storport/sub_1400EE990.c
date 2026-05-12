/*
 * XREFs of sub_1400EE990 @ 0x1400EE990
 * Callers:
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 *     sub_1400F1128 @ 0x1400F1128 (sub_1400F1128.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 * Callees:
 *     sub_1400F3044 @ 0x1400F3044 (sub_1400F3044.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_140115008 @ 0x140115008 (sub_140115008.c)
 *     sub_140115130 @ 0x140115130 (sub_140115130.c)
 *     sub_140115214 @ 0x140115214 (sub_140115214.c)
 *     sub_140120864 @ 0x140120864 (sub_140120864.c)
 */

__int64 __fastcall sub_1400EE990(__int64 a1, __int64 a2, int a3)
{
  int v4; // r14d
  int v5; // ebp
  unsigned __int16 i; // si
  __int64 v7; // rdi
  int v8; // r8d
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 j; // si
  unsigned __int64 v15; // rdi
  void *v16; // rcx
  __int64 result; // rax

  v4 = 16 * *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 8) << 6;
  if ( *(_QWORD *)(a1 + 728) )
  {
    for ( i = 0; i < *(_WORD *)(a1 + 22); ++i )
    {
      v7 = 192LL * i;
      sub_1400F5FEC(a1, v5, a3, *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728)), *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 8));
      v9 = *(void **)(*(_QWORD *)(a1 + 728) + 24LL);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + 24LL) = 0LL;
      }
      v10 = *(void **)(*(_QWORD *)(a1 + 728) + 32LL);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + 32LL) = 0LL;
      }
      if ( *(_BYTE *)(a1 + 1728) == 1 )
      {
        v11 = *(void **)(v7 + *(_QWORD *)(a1 + 728) + 56);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x51496152u);
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 56) = 0LL;
        }
        v12 = *(_QWORD *)(a1 + 728);
        v13 = *(_QWORD *)(v7 + v12 + 40);
        if ( v13 )
        {
          sub_1400F5FEC(
            a1,
            *(_DWORD *)(a1 + 8) * *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL),
            v8,
            v13,
            *(_QWORD *)(v7 + v12 + 48));
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 40) = 0LL;
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 48) = 0LL;
        }
      }
      sub_140120864(v7 + *(_QWORD *)(a1 + 728));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), 0x52436152u);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 864) )
  {
    for ( j = 0; j < *(_WORD *)(a1 + 26); ++j )
    {
      v15 = (unsigned __int64)j << 7;
      sub_1400F5FEC(a1, v4, a3, *(_QWORD *)(v15 + *(_QWORD *)(a1 + 864)), *(_QWORD *)(v15 + *(_QWORD *)(a1 + 864) + 8));
      v16 = *(void **)(*(_QWORD *)(a1 + 864) + v15 + 64);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0x72446152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15 + 64) = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15 + 72) = 0LL;
      }
      sub_1400F3044(a1, v15 + *(_QWORD *)(a1 + 864));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 864), 0x52436152u);
    *(_QWORD *)(a1 + 864) = 0LL;
  }
  sub_140115008(a1);
  sub_140115214(a1);
  result = sub_140115130(a1);
  *(_WORD *)(a1 + 22) = 0;
  *(_WORD *)(a1 + 26) = 0;
  return result;
}
