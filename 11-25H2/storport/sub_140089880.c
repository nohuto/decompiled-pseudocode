/*
 * XREFs of sub_140089880 @ 0x140089880
 * Callers:
 *     sub_14005D120 @ 0x14005D120 (sub_14005D120.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140089880(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *v8; // rax
  __int64 result; // rax

  v4 = 0;
  v8 = (_DWORD *)sub_1400143E0(64LL, 108LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( v8 )
  {
    v8[4] = 2954880;
    *v8 = 28;
    v8[3] = *(_DWORD *)(a1 + 4124);
    v8[6] = 80;
    v8[8] = 80;
    v8[7] = 1;
  }
  else
  {
    v4 = -1073741670;
  }
  *a3 = v8;
  result = v4;
  *a4 = 108;
  return result;
}
