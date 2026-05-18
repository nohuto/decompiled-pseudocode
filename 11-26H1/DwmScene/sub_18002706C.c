/*
 * XREFs of sub_18002706C @ 0x18002706C
 * Callers:
 *     sub_180026570 @ 0x180026570 (sub_180026570.c)
 * Callees:
 *     sub_18006C3B4 @ 0x18006C3B4 (sub_18006C3B4.c)
 */

__int64 __fastcall sub_18002706C(__int64 a1, float a2)
{
  float v3; // xmm2_4
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 result; // rax

  v3 = 1000.0 / a2;
  v4 = *(_DWORD *)(a1 + 3912) + 1;
  *(_DWORD *)(a1 + 3912) = v4;
  *(float *)(a1 + 3904) = a2;
  v5 = a2 + *(float *)(a1 + 3908);
  *(float *)(a1 + 3888) = v3;
  *(float *)(a1 + 3908) = v5;
  if ( v5 < 1000.0 )
  {
    v9 = *(float *)(a1 + 3916);
  }
  else
  {
    v6 = (float)v4;
    *(_DWORD *)(a1 + 3900) = *(_DWORD *)(a1 + 3920);
    v7 = *(_DWORD *)(a1 + 3916);
    *(_DWORD *)(a1 + 3920) = 2139095039;
    *(_DWORD *)(a1 + 3896) = v7;
    *(_DWORD *)(a1 + 3916) = -8388609;
    *(_QWORD *)(a1 + 3908) = 0LL;
    v8 = (float)(v6 * 1000.0) / v5;
    v9 = -3.4028235e38;
    *(float *)(a1 + 3892) = v8;
  }
  *(float *)(a1 + 3920) = fminf(v3, *(float *)(a1 + 3920));
  *(float *)(a1 + 3916) = fmaxf(v3, v9);
  *(_QWORD *)(a1 + 3928) = sub_18006C3B4(&unk_1801C85B0, 11LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3952) = sub_18006C3B4(&unk_1801C85B0, 6LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3936) = sub_18006C3B4(&unk_1801C85B0, 5LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3944) = sub_18006C3B4(&unk_1801C85B0, 7LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3960) = sub_18006C3B4(&unk_1801C85B0, 3LL, 2LL, 3LL);
  result = sub_18006C3B4(&unk_1801C85B0, 8LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3968) = result;
  return result;
}
