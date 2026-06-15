/*
 * XREFs of sub_140027D7C @ 0x140027D7C
 * Callers:
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 *     sub_14006EE30 @ 0x14006EE30 (sub_14006EE30.c)
 * Callees:
 *     sub_140027A34 @ 0x140027A34 (sub_140027A34.c)
 */

void __fastcall sub_140027D7C(__int64 *a1, int a2)
{
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = a2;
  v4 = *a1;
  if ( *(_DWORD *)(v4 - 16) > a2 )
    v3 = *(_DWORD *)(v4 - 16);
  if ( *(int *)(v4 - 8) <= 1 )
  {
    v5 = *(_DWORD *)(v4 - 12);
    if ( v5 < v3 )
    {
      if ( v5 <= 0x40000000 )
        v6 = v5 / 2;
      else
        v6 = 0x100000;
      v7 = v5 + v6;
      if ( v7 >= v3 )
        v3 = v7;
      sub_14006EEF4(a1, (unsigned int)v3);
    }
  }
  else
  {
    sub_140027A34(a1, v3);
  }
}
