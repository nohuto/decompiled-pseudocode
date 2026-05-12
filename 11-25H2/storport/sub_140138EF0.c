/*
 * XREFs of sub_140138EF0 @ 0x140138EF0
 * Callers:
 *     sub_140134E5C @ 0x140134E5C (sub_140134E5C.c)
 * Callees:
 *     sub_140085014 @ 0x140085014 (sub_140085014.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_1400858E8 @ 0x1400858E8 (sub_1400858E8.c)
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 */

__int64 __fastcall sub_140138EF0(int *a1, _DWORD *a2)
{
  int v4; // ebp
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned __int64 v8; // r10
  _BYTE *v9; // r9
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int8 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v11 = 0;
  *a2 = 0;
  v4 = sub_140085014((__int64)a1, 0, 0, 2048, (__int64 *)&v12);
  if ( v4 >= 0 )
  {
    sub_1400859FC(a1, "GetProtocolList", 0, 0, 0LL, 0LL);
    v4 = sub_14008562C((__int64)a1, v12, v5);
    if ( v4 >= 0 )
    {
      sub_1400859B4(a1, v12, &v13, &v11);
      if ( v11 >= 8 )
      {
        v6 = 0;
        v7 = v13[7] + (v13[6] << 8);
        if ( v7 )
        {
          v8 = v11;
          v9 = v13 + 8;
          do
          {
            if ( (int)(v6 + 8) + 1LL > v8 )
              break;
            if ( *v9 )
            {
              if ( *v9 == 1 )
              {
                *a2 |= 2u;
              }
              else if ( *v9 == 2 )
              {
                *a2 |= 4u;
              }
            }
            else
            {
              *a2 |= 1u;
            }
            ++v6;
            ++v9;
          }
          while ( v6 < v7 );
        }
      }
    }
  }
  if ( v12 )
    sub_1400858E8(a1, v12);
  return (unsigned int)v4;
}
