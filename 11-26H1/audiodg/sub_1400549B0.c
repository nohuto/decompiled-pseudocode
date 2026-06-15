/*
 * XREFs of sub_1400549B0 @ 0x1400549B0
 * Callers:
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     sub_14003FC00 @ 0x14003FC00 (sub_14003FC00.c)
 */

__int64 __fastcall sub_1400549B0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rbp
  __int64 **v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2[12];
  v3 = (__int64 **)(a1 + 16);
  v5 = sub_14003D070(a2[12], (_QWORD *)(a1 + 16));
  v6 = v5;
  if ( v5 >= 0 )
  {
    sub_14003FC00(**v3, (__int64)a2);
    v8 = v2;
    *((_DWORD *)*v3 + 2) = a2[13];
    *((_DWORD *)*v3 + 3) = a2[14];
    *((_DWORD *)*v3 + 4) = a2[15];
    *((_DWORD *)*v3 + 5) = a2[16];
    *((_DWORD *)*v3 + 6) = a2[17];
    *((_DWORD *)*v3 + 7) = a2[18];
    v9 = (__int64)&a2[v2] + a2[19];
    if ( (_DWORD)v2 )
    {
      v10 = 32LL;
      do
      {
        *(_DWORD *)((char *)*v3 + v10) = *(_DWORD *)(v10 + v9 + 48);
        v10 += 4LL;
        --v8;
      }
      while ( v8 );
    }
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 173, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v5);
    return v6;
  }
}
