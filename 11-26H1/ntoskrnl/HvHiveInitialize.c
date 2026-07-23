/*
 * XREFs of HvHiveInitialize @ 0x140ABA1EC
 * Callers:
 *     CmpHiveInitialize @ 0x140ABA0E0 (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvHiveInitialize(_DWORD *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 result; // rax

  memset_0(a1, 0, 0x608uLL);
  v2 = a1 + 224;
  *a1 = -1092567328;
  v3 = a1 + 222;
  v4 = 2LL;
  do
  {
    *((_DWORD *)v2 - 148) = -1;
    *v2 = v3;
    *(v2 - 1) = v3;
    v3 += 158;
    v2 += 79;
    --v4;
  }
  while ( v4 );
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  result = 0LL;
  *((_OWORD *)a1 + 14) = 0LL;
  *((_OWORD *)a1 + 15) = 0LL;
  *((_OWORD *)a1 + 16) = 0LL;
  *((_QWORD *)a1 + 34) = 0LL;
  return result;
}
