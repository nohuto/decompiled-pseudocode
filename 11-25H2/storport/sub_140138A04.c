/*
 * XREFs of sub_140138A04 @ 0x140138A04
 * Callers:
 *     sub_140134E5C @ 0x140134E5C (sub_140134E5C.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085014 @ 0x140085014 (sub_140085014.c)
 *     sub_140085320 @ 0x140085320 (sub_140085320.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_1400858E8 @ 0x1400858E8 (sub_1400858E8.c)
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 *     sub_140138D34 @ 0x140138D34 (sub_140138D34.c)
 *     sub_140139008 @ 0x140139008 (sub_140139008.c)
 *     sub_1401396CC @ 0x1401396CC (sub_1401396CC.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013A658 @ 0x14013A658 (sub_14013A658.c)
 *     sub_14013A898 @ 0x14013A898 (sub_14013A898.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140138A04(int **a1, __int64 a2)
{
  int *v2; // r15
  char v4; // r14
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // eax
  _BYTE v12[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-35h] BYREF
  ULONG_PTR v14; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v18; // [rsp+90h] [rbp+17h]

  v2 = *a1;
  v15 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v4 = 1;
  v16 = 0LL;
  v13 = 0;
  memset(v17, 0, sizeof(v17));
  v6 = sub_140085320((__int64)v2, 1, 1, 2048, (__int64 *)&v14);
  if ( v6 >= 0 )
  {
    v6 = sub_14008562C((__int64)v2, v14, v7);
    sub_1400858E8(*a1, v14);
    if ( v6 >= 0 )
    {
      v6 = sub_140085014((__int64)v2, 1, 1, 2048, (__int64 *)&v15);
      if ( v6 >= 0 )
      {
        sub_1400859FC(*a1, "GetCapabilities", 0, 0, 0LL, 0LL);
        v8 = v15;
        v6 = sub_14008562C((__int64)v2, v15, v9);
        if ( v6 >= 0 )
        {
          sub_1400859B4(*a1, v8, &v16, &v13);
          v6 = sub_140139008(a1, v16, v13, a2);
        }
        sub_1400858E8(v2, v8);
        if ( v6 >= 0 )
        {
          if ( (int)sub_14013A658(a1, v17, a2 + 8) >= 0 )
            goto LABEL_13;
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 3u )
            sub_140055930((__int64)off_140168120->AttachedDevice, 0xBu, (__int64)&unk_140154FF0);
          v10 = sub_140135DCC((__int64)a1, (__int64)v17);
          v6 = v10;
          if ( v10 >= 0 )
          {
            v6 = sub_14013A658(a1, v17, a2 + 8);
            if ( v6 < 0 )
              return (unsigned int)v6;
LABEL_13:
            v6 = sub_14013A898(a1, v17, 0x20500000001LL);
            if ( v6 < 0 )
              return (unsigned int)v6;
            v6 = sub_140138200((__int64)a1, (__int64)v17, 0x20500000002LL, 6u, a2 + 68, 4, 0LL);
            if ( v6 < 0 )
              goto LABEL_22;
            *(_BYTE *)(a2 + 64) = 1;
            v12[0] = 0;
            v6 = sub_140138200((__int64)a1, (__int64)v17, 0x900000006LL, 5u, (__int64)v12, 1, 0LL);
            if ( v6 < 0 || v12[0] )
            {
              if ( !*(_BYTE *)(a2 + 148) )
              {
LABEL_22:
                sub_14013A45C(a1, v17);
                if ( v6 >= 0 )
                {
                  if ( *(_BYTE *)(a2 + 64) )
                  {
                    if ( *(_DWORD *)(a2 + 68) == 9 )
                    {
                      v6 = sub_14013A898(a1, v17, 0x20500000002LL);
                      if ( v6 >= 0 )
                      {
                        v6 = sub_140138D34(a1, v17, a2);
                        if ( v6 >= 0 )
                          v6 = sub_1401396CC(a1, v17, a2 + 80);
                        sub_14013A45C(a1, v17);
                      }
                    }
                  }
                }
                return (unsigned int)v6;
              }
              if ( !*(_BYTE *)(a2 + 149) && *(_BYTE *)(a2 + 150) )
                v4 = 0;
            }
            *(_BYTE *)(a2 + 4) = v4;
            goto LABEL_22;
          }
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
            sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_140154FF0, v10);
        }
      }
    }
  }
  return (unsigned int)v6;
}
