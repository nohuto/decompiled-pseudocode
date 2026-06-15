/*
 * XREFs of sub_1400AA844 @ 0x1400AA844
 * Callers:
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
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
 *     sub_1400AB3D8 @ 0x1400AB3D8 (sub_1400AB3D8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 sub_1400AA844(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, unsigned int a5, ...)
{
  int v6; // r12d
  unsigned int v7; // r14d
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  int v12; // r13d
  DWORD v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  _OWORD *v19; // rbx
  int v20; // eax
  unsigned int v21; // esi
  _DWORD *v22; // rsi
  int v23; // eax
  unsigned int v24; // r14d
  __int64 *v25; // rax
  int v26; // eax
  unsigned int v27; // r14d
  _OWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // [rsp+48h] [rbp-70h] BYREF
  __int64 v34; // [rsp+50h] [rbp-68h] BYREF
  PVOID pvAddress; // [rsp+58h] [rbp-60h]
  __int128 v36; // [rsp+60h] [rbp-58h] BYREF
  __int64 v37; // [rsp+70h] [rbp-48h] BYREF
  __int64 v38; // [rsp+78h] [rbp-40h]
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
  v7 = v43 + v45;
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
    v8 = 4LL * a5;
    if ( v8 > 0xFFFFFFFF )
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
      v9 = sub_1400A9FAC(v8, v46, v47, v7, (__int64 *)va);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v12 = v43;
        v13 = v43 + 864;
        if ( (unsigned int)v43 >= 0xFFFFFCA0 )
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
              pvAddress = 0LL;
              sub_1400B6010(v33);
              v18 = v16;
              if ( v16 >= 0 )
              {
                if ( v13 )
                {
                  sub_14000C2A8(
                    (int)retaddr,
                    76,
                    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                    -2147024882);
                  sub_140003238(&v33);
                  result = 2147942414LL;
                }
                else
                {
                  v19 = (_OWORD *)(a1 + 156);
                  *(_DWORD *)(a1 + 284) = 448;
                  sub_1400A9290(&v34, v17);
                  if ( v34 )
                  {
                    v20 = sub_1400A9838(v34, (__int64)pvAddress + 864, v12, v8, v46, v47, v7);
                    v21 = v20;
                    if ( v20 >= 0 )
                    {
                      v22 = pvAddress;
                      *(_QWORD *)(a1 + 1344) = (char *)pvAddress + 24;
                      v22[3] = 852;
                      v22[4] = 1396785988;
                      v22[1] = 1;
                      v22[2] = v13;
                      v22[5] = v12;
                      memset(*(void **)(a1 + 1344), 0, 0x4CuLL);
                      v23 = sub_1400AA160(a1 + 616, (_DWORD *)(*(_QWORD *)(a1 + 1344) + 40LL));
                      v24 = v23;
                      if ( v23 >= 0 )
                      {
                        v36 = 0LL;
                        v25 = sub_1400A91A8(&v37, (__int64)(v22 + 25));
                        sub_1400234EC(&v36, v25);
                        if ( v38 )
                          sub_140007588(v38);
                        if ( (_QWORD)v36 )
                        {
                          if ( a3[8] <= 0x100u )
                          {
                            memcpy((void *)(a1 + 308), a3, a3[8] + 18LL);
                            *(_DWORD *)(a1 + 288) = a5;
                            *(_DWORD *)(a1 + 292) = v6;
                            *(_DWORD *)(a1 + 296) = v45;
                            *(_DWORD *)(a1 + 300) = v13;
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
                              v28 = v22 + 101;
                              v29 = 3LL;
                              do
                              {
                                *v28 = *v19;
                                v28[1] = v19[1];
                                v28[2] = v19[2];
                                v28[3] = v19[3];
                                v28[4] = v19[4];
                                v28[5] = v19[5];
                                v28[6] = v19[6];
                                v28 += 8;
                                *(v28 - 1) = v19[7];
                                v19 += 8;
                                --v29;
                              }
                              while ( v29 );
                              *v28 = *v19;
                              v28[1] = v19[1];
                              v28[2] = v19[2];
                              v28[3] = v19[3];
                              v30 = sub_1400AB3D8(a1, v22);
                              v31 = v30;
                              if ( v30 >= 0 )
                              {
                                WerRegisterMemoryBlock(v22, v13);
                                sub_14001821C((__int64 *)(a1 + 88), v33);
                                v32 = v34;
                                v34 = 0LL;
                                *(_QWORD *)(a1 + 1352) = v32;
                                sub_1400A6544((__int64 *)(a1 + 760), &v36);
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
                          v23);
                        sub_1400A94F8(&v34);
                        sub_140003238(&v33);
                        result = v24;
                      }
                    }
                    else
                    {
                      sub_14000C2A8(
                        (int)retaddr,
                        87,
                        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                        v20);
                      sub_1400A94F8(&v34);
                      sub_140003238(&v33);
                      result = v21;
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
            LODWORD(v45) = sub_14004EEE4(
                             (int)retaddr,
                             150,
                             (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp");
            return (unsigned int)v45;
          }
        }
      }
      else
      {
        sub_14000C2A8(
          (int)retaddr,
          63,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
          v9);
        return v10;
      }
    }
  }
  return result;
}
