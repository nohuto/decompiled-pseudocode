/*
 * XREFs of sub_140015C88 @ 0x140015C88
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14003B304 @ 0x14003B304 (sub_14003B304.c)
 *     sub_140044864 @ 0x140044864 (sub_140044864.c)
 *     sub_140045224 @ 0x140045224 (sub_140045224.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140015C88(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  const WCHAR *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = sub_140045224(&v9, 0LL);
  v3 = retaddr;
  if ( v2 < 0 )
    sub_140007934((int)retaddr, 1403, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v2);
  v4 = v9;
  if ( v9 && *(_DWORD *)(v9 + 28) )
  {
    *(_DWORD *)(a1 + 244) = *(_DWORD *)(v9 + 32);
    *(_DWORD *)(a1 + 240) = *(_DWORD *)(v4 + 28);
  }
  else
  {
    v10 = L"Audio";
    v5 = a1 + 256;
    v6 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 256) = 0LL;
    if ( v6 )
      sub_1400B6010(v6);
    if ( (int)sub_140044864(a1 + 256, &v10) >= 0 )
    {
      v3 = *(_DWORD **)v5;
      *(_DWORD *)(a1 + 240) = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
      *(_DWORD *)(a1 + 244) = v3[5];
    }
  }
  result = sub_14003B304(v3, a1 + 244, a1 + 232);
  if ( v4 )
    return sub_1400B6010(v4);
  return result;
}
