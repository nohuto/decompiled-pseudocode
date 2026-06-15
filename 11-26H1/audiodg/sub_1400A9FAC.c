/*
 * XREFs of sub_1400A9FAC @ 0x1400A9FAC
 * Callers:
 *     sub_1400A9838 @ 0x1400A9838 (sub_1400A9838.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400A99B4 @ 0x1400A99B4 (sub_1400A99B4.c)
 */

__int64 __fastcall sub_1400A9FAC(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  int v9; // ebx
  int v10; // edx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v18[10]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = a1;
  v5 = a5;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = sub_1400A99B4(a1, &v20);
  if ( v9 >= 0 )
  {
    if ( (unsigned __int64)(v7 * v6) > 0xFFFFFFFF )
    {
      v10 = 274;
    }
    else
    {
      v11 = 2LL * (unsigned int)(v7 * v6);
      if ( v11 > 0xFFFFFFFF )
      {
        v10 = 275;
      }
      else if ( (unsigned __int64)(v7 * v8) > 0xFFFFFFFF )
      {
        v10 = 279;
      }
      else
      {
        v12 = 2LL * (unsigned int)(v7 * v8);
        if ( v12 > 0xFFFFFFFF )
        {
          v10 = 280;
        }
        else
        {
          v13 = v7 * v20;
          if ( v13 > 0xFFFFFFFF )
          {
            v10 = 284;
          }
          else
          {
            v14 = 2LL * (unsigned int)v13;
            if ( v14 > 0xFFFFFFFF )
            {
              v10 = 285;
            }
            else
            {
              v15 = v11 + 28;
              if ( (unsigned int)v11 >= 0xFFFFFFE4 )
              {
                v10 = 289;
              }
              else
              {
                v16 = v15 + v12;
                if ( v16 < v15 )
                {
                  v10 = 290;
                }
                else
                {
                  v18[0] = v16;
                  v9 = sub_1400A99B4(v16, v18);
                  if ( v9 < 0 )
                  {
                    v10 = 291;
                    goto LABEL_25;
                  }
                  if ( v18[0] + (unsigned int)v14 >= v18[0] )
                  {
                    *v5 = v18[0] + v14;
                    return 0LL;
                  }
                  *v5 = -1;
                  v10 = 293;
                }
              }
            }
          }
        }
      }
    }
    v9 = -2147024362;
    goto LABEL_25;
  }
  v10 = 269;
LABEL_25:
  sub_14000C2A8(
    (int)retaddr,
    v10,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    v9);
  return (unsigned int)v9;
}
