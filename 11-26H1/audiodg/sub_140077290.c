/*
 * XREFs of sub_140077290 @ 0x140077290
 * Callers:
 *     sub_14007F5A0 @ 0x14007F5A0 (sub_14007F5A0.c)
 * Callees:
 *     sub_140075EC0 @ 0x140075EC0 (sub_140075EC0.c)
 */

__int64 __fastcall sub_140077290(__int64 a1, __int64 a2, _BYTE ***a3)
{
  int v3; // ebx
  bool v6; // cf
  bool **v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 40LL) < *(_DWORD *)(*(_QWORD *)(a2 + 8) + 44LL);
    v7 = *(bool ***)a2;
    v8 = *(_QWORD *)(a1 + 32);
    v3 = 0;
    **v7 = v6;
    sub_140075EC0(&v10, v8);
    if ( *(_DWORD *)(a1 + 52) != v10 )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 48) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      ***a3 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
