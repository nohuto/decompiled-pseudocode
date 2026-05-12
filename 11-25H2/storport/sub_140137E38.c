/*
 * XREFs of sub_140137E38 @ 0x140137E38
 * Callers:
 *     sub_1401369E0 @ 0x1401369E0 (sub_1401369E0.c)
 *     sub_140136A88 @ 0x140136A88 (sub_140136A88.c)
 *     sub_140136B1C @ 0x140136B1C (sub_140136B1C.c)
 *     sub_140136BF4 @ 0x140136BF4 (sub_140136BF4.c)
 *     sub_140136D10 @ 0x140136D10 (sub_140136D10.c)
 *     sub_1401374D4 @ 0x1401374D4 (sub_1401374D4.c)
 *     sub_140138270 @ 0x140138270 (sub_140138270.c)
 *     sub_140138454 @ 0x140138454 (sub_140138454.c)
 *     sub_1401386B4 @ 0x1401386B4 (sub_1401386B4.c)
 *     sub_1401388C0 @ 0x1401388C0 (sub_1401388C0.c)
 *     sub_140138960 @ 0x140138960 (sub_140138960.c)
 *     sub_1401396CC @ 0x1401396CC (sub_1401396CC.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     sub_14013A658 @ 0x14013A658 (sub_14013A658.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 *     sub_14013A99C @ 0x14013A99C (sub_14013A99C.c)
 * Callees:
 *     sub_1400859B4 @ 0x1400859B4 (sub_1400859B4.c)
 *     sub_140085D5C @ 0x140085D5C (sub_140085D5C.c)
 *     sub_140138090 @ 0x140138090 (sub_140138090.c)
 *     sub_140138324 @ 0x140138324 (sub_140138324.c)
 *     sub_14013AC30 @ 0x14013AC30 (sub_14013AC30.c)
 *     sub_14013B0FC @ 0x14013B0FC (sub_14013B0FC.c)
 *     sub_14013B440 @ 0x14013B440 (sub_14013B440.c)
 *     sub_14013BC70 @ 0x14013BC70 (sub_14013BC70.c)
 *     sub_14013BD18 @ 0x14013BD18 (sub_14013BD18.c)
 *     sub_14013C334 @ 0x14013C334 (sub_14013C334.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140137E38(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, __int64 *, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64),
        __int64 a10)
{
  int *v10; // r12
  __int64 v12; // rax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r8d
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  const char *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-10h]
  int v36; // [rsp+54h] [rbp-Ch]
  unsigned int v37; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+48h] BYREF

  v10 = *(int **)a1;
  v12 = *(_QWORD *)(a2 + 48);
  v33 = *(_QWORD *)(a2 + 40);
  v38 = 0LL;
  v37 = 0;
  v31 = v12;
  sub_1400859B4(v10, v33, &v38, &v37);
  v36 = 0;
  v34 = v38 + 56;
  v35 = v37 - 56;
  LODWORD(v16) = sub_14013BC70(&v34, a3, a4);
  if ( (int)v16 >= 0 )
  {
    if ( !a5 || (LODWORD(v16) = a5(a1, a2, &v34, a6), (int)v16 >= 0) )
    {
      LODWORD(v16) = sub_14013BD18(&v34);
      if ( (int)v16 >= 0 )
      {
        v17 = 0;
        v18 = 0;
        if ( a3 != 255 )
        {
          v17 = *(_DWORD *)(a2 + 8);
          v18 = *(_DWORD *)(a2 + 4);
        }
        LODWORD(v16) = sub_14013C334(v38, v37, a2, v36, v17, v18);
        if ( (int)v16 >= 0 )
        {
          v20 = sub_140138090(v10, v33, v19, 0LL);
          v16 = v20;
          if ( v20 < 0 )
          {
            v23 = "TcglibpCallMethod-SEND failed";
LABEL_12:
            sub_140085D5C(*(int **)a1, v23, a3, a4, v16, 0LL);
            goto LABEL_23;
          }
          LOBYTE(v22) = 1;
          v24 = sub_140138090(v10, v31, v21, v22);
          v16 = v24;
          if ( v24 < 0 )
          {
            v23 = "TcglibpCallMethod-RECV failed";
            goto LABEL_12;
          }
          sub_1400859B4(v10, v31, &v38, &v37);
          if ( !(unsigned int)sub_14013AC30(a1, v38, v37) )
          {
            v32 = 0LL;
            v25 = sub_14013B440(a1);
            v16 = v25;
            if ( v25 < 0 )
            {
              v26 = *(unsigned __int8 *)(a1 + 88);
              v27 = "ParseTcgReceivedPayload failed";
              v28 = v16;
            }
            else
            {
              LODWORD(v26) = sub_14013B0FC(a1, a7, a8, &v32);
              LODWORD(v16) = v26;
              if ( (int)v26 >= 0 )
              {
                if ( a9 )
                {
                  v29 = a9(a1, a2, v32, a10);
                  LODWORD(v16) = v29;
                  if ( v29 < 0 )
                    sub_140085D5C(*(int **)a1, "TcglibpCallMethod-Parsing data failed", a3, a4, v29, 0LL);
                }
                goto LABEL_22;
              }
              v27 = "ParseTcgMethodData failed";
              v26 = (int)v26;
              v28 = 0LL;
            }
            sub_140085D5C(*(int **)a1, v27, a3, a4, v26, v28);
          }
LABEL_22:
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
LABEL_23:
  sub_140138324(v10, v33, v31);
  return (unsigned int)v16;
}
