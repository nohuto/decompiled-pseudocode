/*
 * XREFs of MiLogWsAging @ 0x14050545C
 * Callers:
 *     MiAgeWorkingSet @ 0x1402DF150 (MiAgeWorkingSet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogWsAging(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r10
  const CHAR *v14; // r11
  char v15; // al
  int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-D8h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+90h] [rbp-70h] BYREF
  char *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _BYTE v37[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  int *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  _BYTE *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  int *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  _BYTE v62[64]; // [rsp+190h] [rbp+90h] BYREF

  v4 = *(_QWORD *)(a2 + 152);
  v5 = *(_QWORD *)(a2 + 160);
  v8 = a2 - (_QWORD)v62;
  v9 = v62;
  v10 = 8LL;
  do
  {
    v11 = *(_QWORD *)((char *)v9 + v8 + 56);
    *v9++ = v11;
    --v10;
  }
  while ( v10 );
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL);
    if ( (_BYTE)v11 )
    {
      v15 = *(_DWORD *)(v13 + 184) & 0xF;
      v36 = v12;
      v22 = v15;
      v35 = &v22;
      tlgCreate1Sz_char((__int64)v37, v14);
      v23 = v16;
      v38 = &v23;
      v39 = 4LL;
      v40 = &v27;
      v27 = v4;
      v42 = &v28;
      v29 = *(_QWORD *)(a3 + 40);
      v44 = &v29;
      v30 = *(_QWORD *)(a3 + 16);
      v46 = &v30;
      v31 = *(_QWORD *)(a3 + 32);
      v48 = &v31;
      v32 = *(_QWORD *)(a3 + 24);
      v50 = &v32;
      v33 = *(_QWORD *)(a3 + 48);
      v52 = &v33;
      v54 = &v24;
      v25 = *(_DWORD *)(a3 + 12);
      v56 = &v25;
      v58 = v62;
      v26 = *(unsigned __int16 *)(v17 + 174);
      v60 = &v26;
      v41 = 8LL;
      v28 = v5;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 8LL;
      v49 = 8LL;
      v51 = 8LL;
      v53 = 8LL;
      v24 = a4;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 64LL;
      v61 = 4LL;
      LOBYTE(v11) = tlgWriteEx_EtwWriteEx(v18, (unsigned __int8 *)&word_140058F1E, v18, 1u, v20, v21, 0x10u, &v34);
    }
  }
  return v11;
}
