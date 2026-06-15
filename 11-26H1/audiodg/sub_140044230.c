/*
 * XREFs of sub_140044230 @ 0x140044230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400443F8 @ 0x1400443F8 (sub_1400443F8.c)
 *     sub_1400A2D44 @ 0x1400A2D44 (sub_1400A2D44.c)
 *     sub_1400A2E00 @ 0x1400A2E00 (sub_1400A2E00.c)
 */

__int64 __fastcall sub_140044230(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  signed __int64 v5; // rdi
  signed __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // r15
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // edx
  double v15; // xmm1_8
  __int64 v16; // rcx

  v2 = a1 - 8;
  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 8 + 88) + 16LL), 0LL, 0LL);
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 24LL), 0LL, 0LL);
  result = sub_1400443F8(a1 - 8, v5);
  if ( (_BYTE)result && (result = sub_1400443F8(v2, v6), (_BYTE)result) )
  {
    if ( v5 >= v6 )
    {
      v10 = v5 - v6;
    }
    else
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_1400A2D44(v9, v8, v2, 4, 0, v5, v6, 0);
      v10 = 0;
      ShipAssert(65537LL, 0LL);
    }
    v11 = (_DWORD *)(a1 + 96);
    if ( (byte_1400E8401 & 4) != 0 )
      sub_1400A2D44(
        v6 / (unsigned int)*v11,
        v5 % (unsigned int)*v11,
        v2,
        3,
        0,
        v5 / (unsigned int)*v11,
        v6 / (unsigned int)*v11,
        v10 / *v11);
    v12 = v10 / *v11;
    v13 = *(_QWORD *)(a1 + 88);
    v14 = *(_DWORD *)(v13 + 188) % (unsigned int)*(unsigned __int16 *)(v13 + 192);
    result = *(_DWORD *)(v13 + 188) / (unsigned int)*(unsigned __int16 *)(v13 + 192);
    v15 = (double)v12 * 10000000.0 / (double)(int)result + 0.5;
    v16 = (unsigned int)(int)v15;
    *a2 = v16;
    if ( (byte_1400E8401 & 4) != 0 )
      return sub_1400A2E00(v16, v14, 0, 100, v5, v6, (int)v15, v12, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
