/*
 * XREFs of ?uDiv128by64@@YA_K_K00AEA_K@Z @ 0x140164550
 * Callers:
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1401644A8 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 * Callees:
 *     ?NumberOfLeadingZeros@@YAH_K@Z @ 0x14016475C (-NumberOfLeadingZeros@@YAH_K@Z.c)
 */

unsigned __int64 __fastcall uDiv128by64(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v6; // eax
  char v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdi
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 result; // rax

  if ( a1 >= a3 )
  {
    result = -1LL;
    *a4 = -1LL;
  }
  else
  {
    v6 = NumberOfLeadingZeros(a3);
    v7 = v6;
    v8 = a3 << v6;
    v10 = HIDWORD(v8);
    v12 = (v11 << v6) | (-(__int64)v6 >> 63) & (v9 >> (64 - (unsigned __int8)v6));
    v13 = v9 << v6;
    v14 = HIDWORD(v8) << 32;
    v15 = (unsigned int)v13;
    v16 = v12 / HIDWORD(v8);
    v17 = v12 - HIDWORD(v8) * v16;
    v18 = (unsigned int)v8 * v16;
    v19 = HIDWORD(v13) + (v17 << 32);
    do
    {
      if ( v16 < 0x100000000LL && v18 <= v19 )
        break;
      --v16;
      v18 -= (unsigned int)v8;
      v17 += v10;
      v19 += v14;
    }
    while ( v17 < 0x100000000LL );
    v20 = HIDWORD(v13) + (v12 << 32) - v8 * v16;
    v21 = (unsigned int)v8 * (v20 / v10);
    v22 = v20 % v10;
    v23 = v20 / v10;
    v24 = v15 + ((v20 % v10) << 32);
    do
    {
      if ( v23 < 0x100000000LL && v21 <= v24 )
        break;
      --v23;
      v21 -= (unsigned int)v8;
      v22 += v10;
      v24 += v14;
    }
    while ( v22 < 0x100000000LL );
    *a4 = (v15 + (v20 << 32) - v8 * v23) >> v7;
    return v23 + (v16 << 32);
  }
  return result;
}
