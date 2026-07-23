/*
 * XREFs of MiFindEmptyAddressRange @ 0x14099635C
 * Callers:
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 *     MiFindClearVadBitsAligned @ 0x140A74700 (MiFindClearVadBitsAligned.c)
 *     MiFindEmptyAddressRangeInTree @ 0x140A7CF64 (MiFindEmptyAddressRangeInTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        unsigned __int64 *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // r10
  _DWORD *v13; // r8
  _KPROCESS *Process; // rcx
  int v15; // r12d
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r12
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 result; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  bool v34; // cf
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40[9]; // [rsp+40h] [rbp-48h] BYREF
  int v43; // [rsp+A8h] [rbp+20h]
  _KPROCESS *v44; // [rsp+B0h] [rbp+28h]
  int v45; // [rsp+B8h] [rbp+30h]

  v43 = a4;
  v9 = a6;
  v10 = a3;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v13 = a9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = Process;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v15 = 1;
    v35 = *(_QWORD *)&Process[1].PrimaryGroup;
    v16 = (unsigned __int8)*(_DWORD *)(a1 + 64);
    v17 = *(_QWORD *)(a1 + 48) >> 16;
    v45 = 1;
    if ( v35 > 0x100000000LL )
      v17 = (v35 >> 16) - (unsigned __int8)BYTE2(*(_QWORD *)(a1 + 48)) - 1;
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 64) )
      v16 = 1LL;
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
    v45 = 0;
    v17 = 0LL;
  }
  if ( a4 )
    goto LABEL_32;
  if ( v10 == 0x10000 )
  {
    v18 = a2 + 0xFFFF;
    goto LABEL_7;
  }
  if ( (unsigned __int64)(v10 - 0x200000) > 0x7FE00000 || ((v10 - 1) & a2) != 0 )
  {
LABEL_32:
    *v13 = 0;
    if ( v15 )
    {
      v37 = v17 << 16;
      if ( v9 > v37 )
        v9 = v37;
    }
    goto LABEL_33;
  }
  v18 = a2;
LABEL_7:
  v19 = v18 >> 16;
  while ( 1 )
  {
    v20 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)v40 = *(_OWORD *)a1;
    if ( v19 != 1 && v19 >= *(_QWORD *)(a1 + 24) )
      v20 = *(_QWORD *)(a1 + 32);
    v21 = v40[1];
    v22 = qword_140E2DFC8;
    v23 = (v40[1] - qword_140E2DFC8) << 19;
    if ( v9 <= v23 )
      goto LABEL_31;
    if ( a5 && (v31 = (a5 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL, v31 > v23) )
    {
      v32 = (v31 - v23) >> 16;
      if ( v40[0] <= v32 )
        goto LABEL_31;
      v24 = v40[0] - v32;
      *v13 = 0;
      v21 += v32 >> 3;
      v40[0] = v24;
      v40[1] = v21;
    }
    else
    {
      v24 = v40[0];
    }
    if ( v9 && v9 >> 16 < *(_QWORD *)(a1 + 40) && v9 + 1 > v23 )
    {
      if ( v24 > (v9 + 1 - v23) >> 16 )
        v24 = (v9 + 1 - v23) >> 16;
      v40[0] = v24;
    }
    if ( v19 > v24 )
    {
LABEL_31:
      v15 = v45;
      goto LABEL_32;
    }
    v25 = (-524288 * v22 + (v21 << 19)) >> 16;
    if ( v45 && (v25 + v20 < v16 || v25 + v20 >= v17) )
    {
      v20 = v16;
      *v13 = 0;
    }
    if ( v10 == 0x10000 )
    {
      ClearBits = RtlFindClearBitsEx(v40, v19, v20);
      v21 = v40[1];
    }
    else
    {
      ClearBits = MiFindClearVadBitsAligned(v40, v10, v19, v20);
    }
    v27 = ClearBits;
    if ( ClearBits == -1LL )
    {
      v15 = v45;
    }
    else
    {
      v28 = ClearBits + 8 * (v21 - qword_140E2DFC8);
      v15 = v45;
      v29 = v28 << 16;
      if ( v29 < a5 || v29 + (v19 << 16) - 1 > v9 )
      {
        v13 = a9;
        goto LABEL_32;
      }
      if ( !v45 || (v36 = v25 + ClearBits, v25 + v27 >= v16) && v36 < v17 )
      {
        *a8 = v29;
        return 0LL;
      }
    }
    if ( !(unsigned int)MiExpandVadBitMap(a1, v19, a5, v9) )
      break;
    v13 = a9;
    v10 = a3;
  }
  if ( v15 )
    return 3221225495LL;
  *a9 = 0;
LABEL_33:
  v33 = a5;
  if ( *(_QWORD *)(a1 + 56) > a5 )
    v33 = *(_QWORD *)(a1 + 56);
  v34 = v33 < v9;
  if ( v33 > v9 )
  {
    if ( ((__int64)v44[4].ThreadListHead.Flink & 0x20) == 0 || (v38 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v38 = 0xFFFFFFLL;
    v33 &= v38;
    if ( !v33 || v33 > v9 )
      v33 = 0x10000LL;
    if ( v33 < *(_QWORD *)(a1 + 56) && v15 )
      v33 = v16 << 16;
    if ( v33 < a5 )
      v33 = a5;
    v34 = v33 < v9;
  }
  if ( !v34 || v9 - v33 + 1 < a2 )
    return 3221225495LL;
  result = MiFindEmptyAddressRangeInTree((int)v44 + 1368, a2, a3, v43, v33, v9, (__int64)a8);
  if ( (int)result < 0 )
  {
    v39 = v16 << 16;
    if ( !v15 )
      v39 = 0x10000LL;
    if ( v39 < a5 )
      v39 = a5;
    if ( v39 < v33 )
      return MiFindEmptyAddressRangeInTree((int)v44 + 1368, a2, a3, v43, v39, v9, (__int64)a8);
  }
  return result;
}
