/*
 * XREFs of sub_140097200 @ 0x140097200
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003FF00 @ 0x14003FF00 (sub_14003FF00.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_140097200(__int64 a1, int a2, __int128 *a3, int a4, void *Src)
{
  __m128i v6; // xmm1
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // edi
  unsigned int v18; // r14d
  __int64 v19; // rcx
  void *v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // r8
  __int128 v23; // xmm1
  __int64 v24; // rcx
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  v6 = (__m128i)a3[1];
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) + 180LL) == -1 )
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) + 180LL),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 96LL) + 168LL));
  v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) + 188LL);
  v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) + 184LL);
  v12 = *(_QWORD *)(a1 + 112);
  v13 = *(_QWORD *)(v12 + 96);
  v14 = *(_DWORD *)(v13 + 148);
  if ( (unsigned int)v10 >= v14 )
  {
    sub_140048108();
    v15 = 433;
LABEL_5:
    v16 = -2005139387;
    sub_14000C2A8(
      (int)retaddr,
      v15,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPServerOutputEndpoint_rtcore.h",
      -2005139387);
    return v16;
  }
  if ( (unsigned int)v11 >= v14 )
  {
    sub_140048108();
    v15 = 434;
    goto LABEL_5;
  }
  v16 = 0;
  if ( (_DWORD)v10 )
    v17 = *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *(_QWORD *)(v12 + 144) + 4)
        + *(_DWORD *)(v12 + 104)
        * *(_DWORD *)(((unsigned __int64)(unsigned int)(v10 - 1) << 6) + *(_QWORD *)(v12 + 144) + 56);
  else
    v17 = *(_DWORD *)(v13 + 172);
  v18 = *(_DWORD *)(v12 + 104) * a2;
  v19 = v18 + v17;
  if ( (unsigned int)v19 <= *(_DWORD *)(*(_QWORD *)(v12 + 96) + 176LL) && a4 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14003FF00(v19, v11, v12, a2, a4, _mm_srli_si128(v6, 8).m128i_i8[0]);
    v20 = (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 80LL) + v17);
    if ( a4 == 2 )
      memset(v20, 0, v18);
    else
      memcpy(v20, Src, v18);
    v21 = *a3;
    v22 = v10 << 6;
    v23 = a3[1];
    *(_DWORD *)(v22 + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 144LL)) = 1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 144LL) + v22 + 4) = v17;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 144LL) + v22 + 56) = a2;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 144LL);
    *(_OWORD *)(v24 + v22 + 16) = v21;
    *(_QWORD *)&v21 = *((_QWORD *)a3 + 4);
    *(_OWORD *)(v24 + v22 + 32) = v23;
    *(_QWORD *)(v24 + v22 + 48) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 144LL) + v22 + 8) = a4;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 88LL) + 188LL), v10 + 1);
  }
  return v16;
}
