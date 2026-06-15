/*
 * XREFs of sub_140007CC0 @ 0x140007CC0
 * Callers:
 *     sub_140007B90 @ 0x140007B90 (sub_140007B90.c)
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_140016660 @ 0x140016660 (sub_140016660.c)
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 *     sub_140019370 @ 0x140019370 (sub_140019370.c)
 *     sub_140021EE0 @ 0x140021EE0 (sub_140021EE0.c)
 *     sub_140022360 @ 0x140022360 (sub_140022360.c)
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_1400301D0 @ 0x1400301D0 (sub_1400301D0.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_14006C720 @ 0x14006C720 (sub_14006C720.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 * Callees:
 *     sub_140007F0C @ 0x140007F0C (sub_140007F0C.c)
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_14000802C @ 0x14000802C (sub_14000802C.c)
 *     sub_140008174 @ 0x140008174 (sub_140008174.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027464 @ 0x140027464 (sub_140027464.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400631E8 @ 0x1400631E8 (sub_1400631E8.c)
 *     sub_140063350 @ 0x140063350 (sub_140063350.c)
 *     sub_140063E30 @ 0x140063E30 (sub_140063E30.c)
 *     sub_1400644A8 @ 0x1400644A8 (sub_1400644A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=7
__int64 sub_140007CC0()
{
  int v0; // r10d
  __int64 v1; // r9
  int v2; // r11d
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // esi
  int i; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-99h] BYREF
  int v14; // [rsp+40h] [rbp-89h]
  int v15; // [rsp+44h] [rbp-85h]
  int v16; // [rsp+48h] [rbp-81h]
  int v17; // [rsp+4Ch] [rbp-7Dh]
  __int64 v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  int v20; // [rsp+60h] [rbp-69h]
  int v21; // [rsp+64h] [rbp-65h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  _QWORD v24[2]; // [rsp+80h] [rbp-49h] BYREF
  int v25; // [rsp+90h] [rbp-39h]
  int v26; // [rsp+94h] [rbp-35h]
  int v27; // [rsp+98h] [rbp-31h]
  int v28; // [rsp+9Ch] [rbp-2Dh]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+B0h] [rbp-19h]
  int v32; // [rsp+B4h] [rbp-15h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int128 v35; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+17h]
  __int128 v37; // [rsp+E8h] [rbp+1Fh]
  int v38; // [rsp+F8h] [rbp+2Fh]
  unsigned int v39; // [rsp+130h] [rbp+67h] BYREF
  __int64 v40; // [rsp+138h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+140h] [rbp+77h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v25 = 17;
  v29 = 0xFFFFFFFFLL;
  v30 = 0LL;
  v31 = 0;
  v32 = 10;
  v33 = 0LL;
  v34 = 0LL;
  v26 = 1061158912;
  v27 = 1048576000;
  v28 = 1074790400;
  sub_140007FAC(v24);
  v13[0] = 0LL;
  v13[1] = 0LL;
  v14 = v0;
  v18 = v1;
  v19 = 0LL;
  v20 = 0;
  v21 = v2;
  v22 = 0LL;
  v23 = 0LL;
  v15 = 1061158912;
  v16 = 1048576000;
  v17 = 1074790400;
  sub_140007FAC(v13);
  v3 = 0LL;
  v40 = 0LL;
  v39 = 0;
  if ( dword_1400E8948 )
  {
    EnterCriticalSection(&CriticalSection);
    v41 = &CriticalSection;
    v7 = dword_1400E8788;
    for ( i = 0; i < v7; ++i )
    {
      v9 = (_QWORD *)sub_140027464(v6, (unsigned int)i);
      if ( (int)sub_1400B6010(*v9) < 0 )
      {
LABEL_11:
        sub_140018FF0(&v41);
        goto LABEL_5;
      }
    }
    sub_140018FF0(&v41);
    EnterCriticalSection(&stru_1400E8750);
    v41 = &stru_1400E8750;
    v10 = (_QWORD *)qword_1400E7C38;
    while ( v10 )
    {
      v11 = v10[2];
      v10 = (_QWORD *)*v10;
      if ( (int)sub_140063350(v11, &v35, v24, v13) < 0 )
        goto LABEL_11;
    }
    sub_140018FF0(&v41);
    sub_140063E30(v24, v13);
    v12 = sub_1400644A8(&v35, &v40, &v39);
    v3 = v40;
    if ( v12 >= 0 )
      RtlPublishWnfStateData(qword_1400E8940, 0LL, v40, v39, 0LL);
LABEL_5:
    while ( v36 )
    {
      v5 = sub_140008174(&v35);
      if ( v5 )
        sub_1400631E8(v5);
    }
  }
  j_j__o_free(v3, 1LL);
  sub_140007F0C(v13);
  sub_140007F0C(v24);
  return sub_14000802C(&v35);
}
