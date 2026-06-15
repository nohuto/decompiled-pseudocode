/*
 * XREFs of sub_140032D48 @ 0x140032D48
 * Callers:
 *     sub_1400AB180 @ 0x1400AB180 (sub_1400AB180.c)
 *     sub_1400AB210 @ 0x1400AB210 (sub_1400AB210.c)
 * Callees:
 *     sub_14002819C @ 0x14002819C (sub_14002819C.c)
 */

__int64 __fastcall sub_140032D48(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rbx
  unsigned int v5; // esi
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned int *)(a1 + 500);
  v5 = a3;
  if ( *(_DWORD *)(a1 + 496) != a2 || *v4 != (_DWORD)a3 )
  {
    if ( (unsigned int)dword_1400E7460 > 5 )
    {
      v10 = a3;
      v11 = a1 + 8;
      v9 = a2;
      sub_14002819C(a1, (__int64)&unk_1400D4498, a3, a4, &v11, (__int64)&v9, (__int64)&v10);
    }
    *(_DWORD *)(a1 + 496) = a2;
    *v4 = v5;
  }
  return sub_140032DE0(a1, a2, v5);
}
