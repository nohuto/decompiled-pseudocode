/*
 * XREFs of KiTimerDispatch @ 0x140C81710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTimerDispatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // r10
  unsigned __int64 v4; // rdx
  unsigned int v5; // r9d
  char *v6; // r11
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx

  _mm_lfence();
  v2 = 25;
  v3 = (char *)(*(_QWORD *)(a1 + 64) ^ a2 | 0xFFFF800000000000uLL);
  v4 = __ROR8__(v3, (*(_BYTE *)(a1 + 64) ^ a2) & 0x3F);
  v5 = 0;
  v6 = v3 - 8;
  v7 = v4;
  do
  {
    v6 += 8;
    v8 = *(_QWORD *)v6;
    *(_QWORD *)v6 = &v3[(v4 ^ *(_QWORD *)v6) + v5];
    v4 = (unsigned __int64)&v3[__ROL8__(
                                 v7 ^ __ROR8__(v5 ^ (unsigned __int64)(200 - v5), ~(_BYTE)v8 & 0x3F),
                                 (v8 ^ 5) & 0x3F)];
    if ( v5 == 24 && *(_QWORD *)v3 != 0x85131481131482ELL )
    {
      v9 = *(_QWORD *)v3 ^ *(_QWORD *)v6 ^ 0x85131481131482ELL;
      *(_QWORD *)v6 = v9;
      v2 += *((_DWORD *)v6 + 1);
      *(_QWORD *)v6 = *(_QWORD *)v3 ^ v9 ^ 0x85131481131482ELL;
    }
    ++v5;
    v7 = v4;
  }
  while ( v5 < v2 );
  v10 = *(_QWORD *)v3 ^ 0x85131481131482ELL;
  *(_DWORD *)v3 = 288442414;
  return ((__int64 (__fastcall *)(char *, __int64, _QWORD, _QWORD))v3)(v3, v10, 0LL, 0LL);
}
