/*
 * XREFs of sub_140014A00 @ 0x140014A00
 * Callers:
 *     sub_140014708 @ 0x140014708 (sub_140014708.c)
 *     sub_14005AC44 @ 0x14005AC44 (sub_14005AC44.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_140014A00(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int v5; // r14d
  unsigned int v6; // esi
  __int64 v9; // rbp
  __int64 Pool2; // rax
  _DWORD *v11; // rbx
  int v12; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = 0;
  if ( *(_DWORD *)v4 == 1431193940 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1431193940 )
    v4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 272LL, 1918067026LL);
  v11 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 28;
    *(_DWORD *)(Pool2 + 16) = 1771392;
    *(_QWORD *)(Pool2 + 4) = 0x455241574D524946LL;
    if ( v4 )
      v12 = *(_DWORD *)(v4 + 1392);
    else
      v12 = *(_DWORD *)(v9 + 4124);
    v11[3] = v12;
    v11[6] = 244;
    v11[7] = 1;
    v11[9] = 1;
    v11[11] = 56;
    v11[10] = v4 == 0;
    v11[8] = 24;
    v11[12] = 216;
    v11[14] = 2;
    v11[15] = 24;
  }
  else
  {
    sub_14008D9B8(v5, 64, 272, 1918067026, 0x80000000);
    v6 = -1073741670;
  }
  result = v6;
  *a3 = v11;
  *a4 = 272;
  return result;
}
