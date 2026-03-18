/*
 * XREFs of sub_140022B60 @ 0x140022B60
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140027EFC @ 0x140027EFC (sub_140027EFC.c)
 */

__int64 __fastcall sub_140022B60(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  int v8; // edx
  unsigned __int64 v9; // rcx
  _DWORD *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = (_DWORD *)sub_14000B900(a2, &v11);
  if ( *v11 >= 0x64u )
  {
    v5 = (unsigned int)v3[13];
    v6 = (unsigned int)*v11;
    v7 = (unsigned int)v3[14];
    if ( v6 >= v7 + v5 + 36 )
    {
      if ( (_DWORD)v5 && (((_BYTE)v5 + 36) & 7) != 0 || v3[9] != 3 || (v8 = v3[10]) == 0 )
      {
LABEL_15:
        *(_BYTE *)(v4 + 3) = 6;
        return 3238002694LL;
      }
      if ( v7 + 36 <= v6 )
      {
        v9 = v6 - (v7 + 36);
        if ( (!(_DWORD)v7 || v5 >= v9) && (((v8 - 3) & 0xFFFFFFFD) != 0 || v9 >= 0x40) )
        {
          if ( ((v8 - 3) & 0xFFFFFFFD) == 0 )
            return sub_140027EFC(a1, v4);
          goto LABEL_15;
        }
      }
    }
  }
  *(_BYTE *)(v4 + 3) = 21;
  return 3238002694LL;
}
