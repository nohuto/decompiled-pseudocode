/*
 * XREFs of sub_1400AA1A8 @ 0x1400AA1A8
 * Callers:
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_1400084B4 @ 0x1400084B4 (sub_1400084B4.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400234EC @ 0x1400234EC (sub_1400234EC.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400A6544 @ 0x1400A6544 (sub_1400A6544.c)
 *     sub_1400A91A8 @ 0x1400A91A8 (sub_1400A91A8.c)
 *     sub_1400A9290 @ 0x1400A9290 (sub_1400A9290.c)
 *     sub_1400A94F8 @ 0x1400A94F8 (sub_1400A94F8.c)
 *     sub_1400A9838 @ 0x1400A9838 (sub_1400A9838.c)
 *     sub_1400A9FAC @ 0x1400A9FAC (sub_1400A9FAC.c)
 *     sub_1400AA160 @ 0x1400AA160 (sub_1400AA160.c)
 *     sub_1400AB354 @ 0x1400AB354 (sub_1400AB354.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 sub_1400AA1A8(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, unsigned int a5, ...)
{
  int v6; // r14d
  int v7; // r13d
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  DWORD v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // rsi
  int v22; // eax
  unsigned int v23; // ebx
  __int64 *v24; // rax
  _OWORD *v25; // rbx
  int v26; // eax
  unsigned int v27; // r14d
  _OWORD *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h] BYREF
  PVOID pvAddress; // [rsp+50h] [rbp-68h]
  __int128 v36; // [rsp+58h] [rbp-60h] BYREF
  __int64 v37; // [rsp+68h] [rbp-50h] BYREF
  __int64 v38; // [rsp+70h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v43; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  __int64 v45; // [rsp+F0h] [rbp+38h]
  __int64 v46; // [rsp+F8h] [rbp+40h]
  __int64 v47; // [rsp+100h] [rbp+48h]
  _QWORD *v48; // [rsp+108h] [rbp+50h]
  va_list va1; // [rsp+110h] [rbp+58h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v43 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD);
  v48 = va_arg(va1, _QWORD *);
  v6 = v43;
  v7 = v45;
  v8 = v43 + v45;
  if ( (int)v43 + (int)v45 < (unsigned int)v43 )
  {
    sub_14000C2A8(
      (int)retaddr,
      51,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
      -2147024362);
    return 2147942934LL;
  }
  else
  {
    v9 = 4LL * a5;
    if ( v9 > 0xFFFFFFFF )
    {
      sub_14000C2A8(
        (int)retaddr,
        56,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
        -2147024362);
      return 2147942934LL;
    }
    else
    {
      LODWORD(v43) = 0;
      v10 = sub_1400A9FAC(v9, v46, v47, v8, (__int64 *)va);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v13 = v43 + 832;
        if ( (unsigned int)v43 >= 0xFFFFFCC0 )
        {
          sub_14000C2A8(
            (int)retaddr,
            66,
            (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
            -2147024362);
          return 2147942934LL;
        }
        else
        {
          v33 = 0LL;
          sub_140019444(&v33);
          try
          {
            sub_1400B6010(a2);
            v15 = v14;
            if ( v14 >= 0 )
            {
              LODWORD(v45) = 0;
              pvAddress = 0LL;
              sub_1400B6010(v33);
              v18 = v16;
              if ( v16 >= 0 )
              {
                if ( (unsigned int)v45 >= v13 )
                {
                  sub_1400A9290(&v34, v17);
                  if ( v34 )
                  {
                    v19 = sub_1400A9838(v34, (__int64)pvAddress + 832, v43, v9, v46, v47, v8);
                    v20 = v19;
                    if ( v19 >= 0 )
                    {
                      v21 = pvAddress;
                      *(_QWORD *)(a1 + 1312) = (char *)pvAddress + 8;
                      *v21 = 806;
                      v21[1] = 1396785988;
                      memset(*(void **)(a1 + 1312), 0, 0x4CuLL);
                      v22 = sub_1400AA160(a1 + 584, (_DWORD *)(*(_QWORD *)(a1 + 1312) + 40LL));
                      v23 = v22;
                      if ( v22 >= 0 )
                      {
                        v36 = 0LL;
                        v24 = sub_1400A91A8(&v37, (__int64)(v21 + 21));
                        sub_1400234EC(&v36, v24);
                        if ( v38 )
                          sub_140007588(v38);
                        if ( (_QWORD)v36 )
                        {
                          if ( a3[8] <= 0x100u )
                          {
                            v25 = (_OWORD *)(a1 + 156);
                            memcpy((void *)(a1 + 300), a3, a3[8] + 18LL);
                            *(_DWORD *)(a1 + 284) = a5;
                            *(_DWORD *)(a1 + 288) = v6;
                            *(_DWORD *)(a1 + 292) = v7;
                            *(_DWORD *)(a1 + 296) = v13;
                            if ( a4 && (v26 = sub_1400084B4((_WORD *)(a1 + 156), 64LL, a4), v27 = v26, v26 < 0) )
                            {
                              sub_14000C2A8(
                                (int)retaddr,
                                124,
                                (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                                v26);
                              if ( *((_QWORD *)&v36 + 1) )
                                sub_140007588(*((__int64 *)&v36 + 1));
                              sub_1400A94F8(&v34);
                              sub_140003238(&v33);
                              result = v27;
                            }
                            else
                            {
                              v28 = v21 + 97;
                              v29 = 3LL;
                              do
                              {
                                *v28 = *v25;
                                v28[1] = v25[1];
                                v28[2] = v25[2];
                                v28[3] = v25[3];
                                v28[4] = v25[4];
                                v28[5] = v25[5];
                                v28[6] = v25[6];
                                v28 += 8;
                                *(v28 - 1) = v25[7];
                                v25 += 8;
                                --v29;
                              }
                              while ( v29 );
                              *v28 = *v25;
                              v28[1] = v25[1];
                              *((_WORD *)v28 + 16) = *((_WORD *)v25 + 16);
                              v30 = sub_1400AB354(a1, v21);
                              v31 = v30;
                              if ( v30 >= 0 )
                              {
                                WerRegisterMemoryBlock(v21, v13);
                                sub_14001821C((__int64 *)(a1 + 88), v33);
                                v32 = v34;
                                v34 = 0LL;
                                *(_QWORD *)(a1 + 1320) = v32;
                                sub_1400A6544((__int64 *)(a1 + 728), &v36);
                                sub_14003826C(&v33, v48);
                                if ( *((_QWORD *)&v36 + 1) )
                                  sub_140007588(*((__int64 *)&v36 + 1));
                                sub_1400A94F8(&v34);
                                sub_140003238(&v33);
                                result = 0LL;
                              }
                              else
                              {
                                sub_14000C2A8(
                                  (int)retaddr,
                                  129,
                                  (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                                  v30);
                                if ( *((_QWORD *)&v36 + 1) )
                                  sub_140007588(*((__int64 *)&v36 + 1));
                                sub_1400A94F8(&v34);
                                sub_140003238(&v33);
                                result = v31;
                              }
                            }
                          }
                          else
                          {
                            sub_14000C2A8(
                              (int)retaddr,
                              113,
                              (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                              -2147024809);
                            if ( *((_QWORD *)&v36 + 1) )
                              sub_140007588(*((__int64 *)&v36 + 1));
                            sub_1400A94F8(&v34);
                            sub_140003238(&v33);
                            result = 2147942487LL;
                          }
                        }
                        else
                        {
                          sub_14000C2A8(
                            (int)retaddr,
                            110,
                            (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                            -2147024882);
                          if ( *((_QWORD *)&v36 + 1) )
                            sub_140007588(*((__int64 *)&v36 + 1));
                          sub_1400A94F8(&v34);
                          sub_140003238(&v33);
                          result = 2147942414LL;
                        }
                      }
                      else
                      {
                        sub_14000C2A8(
                          (int)retaddr,
                          105,
                          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                          v22);
                        sub_1400A94F8(&v34);
                        sub_140003238(&v33);
                        result = v23;
                      }
                    }
                    else
                    {
                      sub_14000C2A8(
                        (int)retaddr,
                        87,
                        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                        v19);
                      sub_1400A94F8(&v34);
                      sub_140003238(&v33);
                      result = v20;
                    }
                  }
                  else
                  {
                    sub_14000C2A8(
                      (int)retaddr,
                      84,
                      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                      -2147024882);
                    sub_1400A94F8(&v34);
                    sub_140003238(&v33);
                    result = 2147942414LL;
                  }
                }
                else
                {
                  sub_14000C2A8(
                    (int)retaddr,
                    76,
                    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                    -2147024882);
                  sub_140003238(&v33);
                  result = 2147942414LL;
                }
              }
              else
              {
                sub_14000C2A8(
                  (int)retaddr,
                  75,
                  (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                  v16);
                sub_140003238(&v33);
                result = v18;
              }
            }
            else
            {
              sub_14000C2A8(
                (int)retaddr,
                70,
                (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                v14);
              sub_140003238(&v33);
              result = v15;
            }
          }
          catch ( ... )
          {
            LODWORD(v43) = sub_14004EEE4(
                             (int)retaddr,
                             150,
                             (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp");
            return (unsigned int)v43;
          }
        }
      }
      else
      {
        sub_14000C2A8(
          (int)retaddr,
          63,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          v10);
        return v11;
      }
    }
  }
  return result;
}
