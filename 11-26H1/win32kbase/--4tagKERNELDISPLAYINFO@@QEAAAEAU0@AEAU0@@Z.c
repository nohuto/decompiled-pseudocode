/*
 * XREFs of ??4tagKERNELDISPLAYINFO@@QEAAAEAU0@AEAU0@@Z @ 0x1401D7B6C
 * Callers:
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401D7CA4 (-DrvDriverFailure@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall tagKERNELDISPLAYINFO::operator=(__int64 *a1, _DWORD **a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  _DWORD *v5; // r10
  _DWORD *v6; // rax
  unsigned int v7; // ecx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  a1[2] = (__int64)a2[2];
  *(_OWORD *)(a1 + 3) = *(_OWORD *)(a2 + 3);
  a1[5] = (__int64)a2[5];
  a1[6] = (__int64)a2[6];
  a1[7] = (__int64)a2[7];
  a1[8] = (__int64)a2[8];
  a1[9] = (__int64)a2[9];
  a1[10] = (__int64)a2[10];
  *((_DWORD *)a1 + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)a1 + 23) = *((_DWORD *)a2 + 23);
  v3 = *a1;
  v4 = 0LL;
  v5 = a2[12];
  if ( v5 )
    *(_QWORD *)(v3 + 8) = *((_QWORD *)v5 + 6);
  else
    *(_QWORD *)(v3 + 8) = 0LL;
  a1[12] = (__int64)v5;
  v6 = a2[13];
  if ( v6 )
    v4 = *((_QWORD *)v6 + 6);
  *(_QWORD *)(*a1 + 16) = v4;
  a1[13] = (__int64)v6;
  *(_DWORD *)(*a1 + 24) = (*a2)[6];
  *(_DWORD *)(*a1 + 28) = (*a2)[7];
  *(_DWORD *)(*a1 + 32) = (*a2)[8];
  *(_DWORD *)(*a1 + 36) = (*a2)[9];
  a1[15] = (__int64)a2[15];
  *((_WORD *)a1 + 64) = *((_WORD *)a2 + 64);
  v7 = *((_DWORD *)a2 + 33) ^ (*((_DWORD *)a1 + 33) ^ *((_DWORD *)a2 + 33)) & 0xFFFFFFFE;
  *((_DWORD *)a1 + 33) = v7;
  *((_DWORD *)a1 + 33) = *((_DWORD *)a2 + 33) ^ (*((_DWORD *)a2 + 33) ^ v7) & 0xFFFFFFFD;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a2 + 34);
  *((_OWORD *)a1 + 9) = *((_OWORD *)a2 + 9);
  *(_DWORD *)*a1 = **a2;
  return a1;
}
