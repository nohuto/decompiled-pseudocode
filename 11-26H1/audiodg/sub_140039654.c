/*
 * XREFs of sub_140039654 @ 0x140039654
 * Callers:
 *     sub_14006D390 @ 0x14006D390 (sub_14006D390.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140039654(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 84) > 5u )
  {
    sub_14000C2A8((int)retaddr, 18, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp", -2147024809);
    return 2147942487LL;
  }
  else
  {
    v4 = 0;
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 8) = 3;
    *(_BYTE *)(a3 + 12) = *(_DWORD *)(a1 + 32) != 0;
    *(_BYTE *)(a3 + 13) = *(_DWORD *)(a1 + 4) != 0;
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 36);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a3 + 56) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 56);
    *(_OWORD *)(a3 + 68) = *(_OWORD *)(a1 + 60);
    v5 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 92) = v5;
    v6 = *(_DWORD *)(a1 + 84) == 0;
    *(_BYTE *)(a3 + 85) = 0;
    *(_BYTE *)(a3 + 84) = !v6;
    *(_BYTE *)(a3 + 86) = *(_DWORD *)(a1 + 76) != 0;
    *(_DWORD *)(a3 + 88) = *(_DWORD *)(a1 + 80);
    if ( v5 )
    {
      do
      {
        v7 = 2LL * v4;
        v8 = v4++ + 6LL;
        *(_OWORD *)(a3 + 16 * v8) = *(_OWORD *)(a1 + 8 * v7 + 88);
      }
      while ( v4 < *(_DWORD *)(a3 + 92) );
    }
    return 0LL;
  }
}
