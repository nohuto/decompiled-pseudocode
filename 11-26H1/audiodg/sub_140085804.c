/*
 * XREFs of sub_140085804 @ 0x140085804
 * Callers:
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 */

__int64 __fastcall sub_140085804(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (_BYTE *)(a4 + 16);
  v6 = 0LL;
  v8 = a5[1];
  if ( v8 )
  {
    v9 = *(_QWORD *)sub_14000FFB0(a5, 0LL);
    if ( (*v5 & 2) != 0 && *(_DWORD *)(a2 + 40) != *(_DWORD *)(v9 + 40) )
    {
      v10 = 1542;
LABEL_5:
      v11 = -2005139426;
LABEL_6:
      sub_14000C2A8((int)retaddr, v10, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v11);
      return v11;
    }
    if ( (*v5 & 8) != 0
      && (*(_DWORD *)(a2 + 48) != *(_DWORD *)(v9 + 48) || *(_DWORD *)(a2 + 44) != *(_DWORD *)(v9 + 44)) )
    {
      v10 = 1546;
      goto LABEL_5;
    }
    if ( (*v5 & 4) != 0 && *(float *)(a2 + 52) != *(float *)(v9 + 52) )
    {
      v10 = 1549;
      goto LABEL_5;
    }
  }
  if ( (*(_DWORD *)v5 & 1) == 0 && v8 )
  {
    while ( *(_QWORD *)(a2 + 72) != *(_QWORD *)(*(_QWORD *)sub_14000FFB0(a5, v6) + 72LL) )
    {
      if ( ++v6 >= v8 )
        return 0LL;
    }
    v11 = -2005139425;
    v10 = 1565;
    goto LABEL_6;
  }
  return 0LL;
}
