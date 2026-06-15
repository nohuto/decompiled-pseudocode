/*
 * XREFs of sub_140039FC0 @ 0x140039FC0
 * Callers:
 *     sub_14006B9F0 @ 0x14006B9F0 (sub_14006B9F0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140039FC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  bool v5; // zf
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 84) > 5u )
  {
    sub_14000C2A8((int)retaddr, 12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp", -2147024809);
    return 2147942487LL;
  }
  else
  {
    v4 = 0;
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a3 + 8) = 3;
    v5 = *(_DWORD *)(a1 + 24) == 0;
    *(_BYTE *)(a3 + 13) = 0;
    *(_BYTE *)(a3 + 12) = !v5;
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 8);
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 40);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 56) = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 64);
    *(_OWORD *)(a3 + 68) = *(_OWORD *)(a1 + 68);
    v6 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 92) = v6;
    *(_WORD *)(a3 + 84) = 257;
    *(_BYTE *)(a3 + 86) = 0;
    if ( v6 )
    {
      do
      {
        v8 = 2LL * v4;
        v9 = v4++ + 6LL;
        *(_OWORD *)(a3 + 16 * v9) = *(_OWORD *)(a1 + 8 * v8 + 88);
      }
      while ( v4 < *(_DWORD *)(a3 + 92) );
    }
    return 0LL;
  }
}
