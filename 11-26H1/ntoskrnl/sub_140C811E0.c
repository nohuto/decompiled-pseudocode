/*
 * XREFs of sub_140C811E0 @ 0x140C811E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 */

unsigned __int64 __fastcall sub_140C811E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  int v11; // ecx
  __int64 v12; // rax

  if ( !*(_DWORD *)(a3 + 2328) )
  {
    *(_QWORD *)(a3 + 2344) = 0LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2360) = a1;
    v5 = *(_DWORD *)(a3 + 2520);
    *(_QWORD *)(a3 + 2336) = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 2352) = 272LL;
    *(_DWORD *)(a3 + 2328) = 1;
    if ( (v5 & 0x20000000) == 0 && (*(_DWORD *)(a3 + 2524) & 0x200000) != 0 && (v5 & 1) != 0 )
    {
      v6 = *(unsigned int *)(a3 + 2676);
      v7 = *(_QWORD *)(a3 + 2104);
      result = (unsigned int)(*(_DWORD *)(a3 + 2052) - v6);
      v8 = (_QWORD *)(v6 + a3);
      v9 = *(_QWORD *)(a3 + 2680);
      v10 = &v8[(unsigned __int64)(unsigned int)result >> 3];
      while ( v8 != v10 )
      {
        *v8 ^= v9;
        result = v7 ^ *v8;
        v9 = (result + __ROR8__(v9, v9 & 0x3F)) ^ 0xF05;
        ++v8;
      }
      *(_DWORD *)(a3 + 2524) &= ~0x200000u;
      if ( v9 != *(_QWORD *)(a3 + 2688) )
      {
        v11 = *(_DWORD *)(a3 + 2052);
        v12 = *(_QWORD *)(a3 + 1416);
        *(_QWORD *)v12 = a3;
        *(_DWORD *)(v12 + 16) = v11;
        if ( !*(_DWORD *)(a3 + 2328) )
          *(_QWORD *)(*(_QWORD *)(a3 + 1416) + 24LL) = v9 ^ *(_QWORD *)(a3 + 2688);
        return sub_140C7F03C(a3, 0LL, v9, 256LL);
      }
    }
  }
  return result;
}
