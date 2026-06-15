/*
 * XREFs of sub_14006D820 @ 0x14006D820
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 *     sub_140035328 @ 0x140035328 (sub_140035328.c)
 *     sub_14003534C @ 0x14003534C (sub_14003534C.c)
 *     sub_140037724 @ 0x140037724 (sub_140037724.c)
 *     sub_140042134 @ 0x140042134 (sub_140042134.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14005BC54 @ 0x14005BC54 (sub_14005BC54.c)
 *     sub_14006E480 @ 0x14006E480 (sub_14006E480.c)
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14006D820(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  int v10; // edi
  int v11; // edx
  _WORD *v13; // rcx
  unsigned __int16 *v14; // rbx
  unsigned int v15; // eax
  void *v16; // rax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rbx
  int v23; // r9d
  _OWORD *v24; // rbx
  _OWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // r9d
  int v28; // r9d
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  void *v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v36[296]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v37; // [rsp+1C8h] [rbp+C0h]
  __int128 v38; // [rsp+1D8h] [rbp+D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1E8h] [rbp+E0h] BYREF
  _UNKNOWN *retaddr; // [rsp+340h] [rbp+238h]

  v8 = (struct _RTL_CRITICAL_SECTION *)a1;
  *(_QWORD *)&v34 = a1;
  v9 = sub_140006470(a1);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v9, "SrvStreamInstance_Create", 0LL);
  v33[0] = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v8 + 216);
  EnterCriticalSection(v8);
  v35 = v8;
  *(_DWORD *)(a5 + 944) = 0;
  if ( !*(_DWORD *)(a2 + 272) )
  {
    v10 = sub_140035328(*(_DWORD *)a2);
    if ( v10 >= 0 )
    {
      if ( *(_DWORD *)(a2 + 120) >= 0x12u )
      {
        v13 = *(_WORD **)(a2 + 128);
        if ( !v13 )
        {
          v10 = -2147467261;
          goto LABEL_6;
        }
        if ( *v13 != 0xFFFE || *(_DWORD *)(a2 + 120) >= 0x28u )
        {
          v10 = sub_14003534C((__int64)v13);
          if ( v10 < 0 )
            goto LABEL_6;
          v37 = *(_OWORD *)(a2 + 48);
          v38 = v37;
          EtwEventActivityIdControl(4LL, &v38);
          v14 = 0LL;
          v30 = 0LL;
          v15 = *(_DWORD *)(a2 + 280);
          if ( v15 )
          {
            v16 = CoTaskMemAlloc(v15);
            sub_140008C08(&v30, v16);
            v14 = (unsigned __int16 *)v30;
            if ( !v30 )
            {
              v10 = -2147024882;
              sub_14000C2A8(
                (int)retaddr,
                307,
                (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
                -2147024882);
LABEL_17:
              sub_140008C08(&v30, 0LL);
              EtwEventActivityIdControl(4LL, &v38);
              goto LABEL_8;
            }
            memcpy(v30, *(const void **)(a2 + 288), *(unsigned int *)(a2 + 280));
          }
          v29 = 0LL;
          v17 = sub_14006E480(
                  a3,
                  *(_QWORD *)(a2 + 144),
                  *(_QWORD *)(a2 + 32),
                  *(_DWORD *)(a2 + 136) & 1,
                  (__int64)v14,
                  (__int64)&v29);
          v10 = v17;
          if ( v17 < 0 )
          {
            v18 = 312;
LABEL_21:
            sub_14000C2A8((int)retaddr, v18, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v17);
LABEL_22:
            sub_140003238(&v29);
            goto LABEL_17;
          }
          v17 = sub_14004229C(v29, a2, 0LL, v14, a5, v33);
          v10 = v17;
          if ( v17 < 0 )
          {
            v18 = 319;
            goto LABEL_21;
          }
          v17 = sub_14002C780(v33[0]);
          v10 = v17;
          if ( v17 < 0 )
          {
            v18 = 320;
            goto LABEL_21;
          }
          v17 = sub_140004140(v33[0], a4);
          v10 = v17;
          if ( v17 < 0 )
          {
            v18 = 321;
            goto LABEL_21;
          }
          v31 = 0LL;
          v32 = 0LL;
          v19 = v33[0];
          sub_140019444(&v32);
          sub_140019444(&v31);
          v20 = sub_140042134(v19, a2, v29);
          v10 = v20;
          if ( v20 >= 0 )
          {
            v22 = v34;
            v34 = *(_OWORD *)(a2 + 156);
            v20 = sub_1400B6010(v22 - 8);
            v10 = v20;
            if ( v20 >= 0 )
            {
              v33[0] = 0LL;
              if ( *(_QWORD *)(a2 + 248) )
              {
                *(_QWORD *)&v34 = 0LL;
                v20 = sub_140037724(&v34);
                v10 = v20;
                if ( v20 < 0 )
                {
                  v21 = 344;
                  goto LABEL_31;
                }
                v20 = sub_14005BC54((struct _RTL_CRITICAL_SECTION *)v34, *(_QWORD *)(a2 + 248), *(_DWORD *)(a2 + 312));
                v10 = v20;
                if ( v20 < 0 )
                {
                  v21 = 346;
                  goto LABEL_31;
                }
              }
              *(_QWORD *)(a5 + 32) = sub_1400B6010(v22 - 8);
              if ( *(_DWORD *)(a2 + 296) == 1 || (v20 = sub_1400B6010(v31), v10 = v20, v20 >= 0) )
              {
                if ( v32 )
                {
                  v20 = sub_1400B6010(v32);
                  v10 = v20;
                  if ( v20 < 0 )
                  {
                    v21 = 365;
                    goto LABEL_31;
                  }
                }
                else
                {
                  v24 = (_OWORD *)(a5 + 640);
                  memset(v36, 0, sizeof(v36));
                  v25 = v36;
                  v26 = 2LL;
                  do
                  {
                    *v24 = *v25;
                    v24[1] = v25[1];
                    v24[2] = v25[2];
                    v24[3] = v25[3];
                    v24[4] = v25[4];
                    v24[5] = v25[5];
                    v24[6] = v25[6];
                    v24 += 8;
                    *(v24 - 1) = v25[7];
                    v25 += 8;
                    --v26;
                  }
                  while ( v26 );
                  *v24 = *v25;
                  v24[1] = v25[1];
                  *((_QWORD *)v24 + 4) = *((_QWORD *)v25 + 4);
                }
                LOBYTE(v23) = 1;
                sub_1400732C4(*(_QWORD *)(a2 + 144), 1, 0, v23, (__int64)&xmmword_1400C5548, 1065353216);
                LOBYTE(v27) = 1;
                sub_1400732C4(*(_QWORD *)(a2 + 144), 2, 0, v27, (__int64)&xmmword_1400C5548, 1065353216);
                LOBYTE(v28) = 1;
                sub_1400732C4(*(_QWORD *)(a2 + 144), 3, 0, v28, (__int64)&xmmword_1400C5548, 1065353216);
                sub_140007CC0();
                sub_140003238(&v32);
                sub_140003238(&v31);
                sub_140003238(&v29);
                sub_140008C08(&v30, 0LL);
                EtwEventActivityIdControl(4LL, &v38);
                v10 = 0;
                goto LABEL_8;
              }
              v21 = 357;
            }
            else
            {
              v21 = 335;
            }
          }
          else
          {
            v21 = 325;
          }
LABEL_31:
          sub_14000C2A8((int)retaddr, v21, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v20);
          sub_140003238(&v32);
          sub_140003238(&v31);
          goto LABEL_22;
        }
      }
      v10 = -2147024809;
    }
LABEL_6:
    v11 = 298;
    goto LABEL_7;
  }
  v10 = -2147418113;
  v11 = 295;
LABEL_7:
  sub_14000C2A8((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v10);
LABEL_8:
  sub_140018FF0(&v35);
  sub_14000FFE4(v33);
  sub_1400066EC(&PerformanceCount);
  return (unsigned int)v10;
}
