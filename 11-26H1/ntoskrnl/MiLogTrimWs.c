/*
 * XREFs of MiLogTrimWs @ 0x1403C491C
 * Callers:
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7, int a8)
{
  _QWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  char v20; // al
  int v21; // r9d
  __int64 v22; // r10
  int v23; // r8d
  int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+30h] [rbp-D8h]
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v40[6]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v41[16]; // [rsp+D8h] [rbp-30h] BYREF
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  __int64 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __int64 *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  __int64 *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  __int64 *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]

  v11 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a2 + 174));
  v12 = v11[2808];
  result = v11[2906];
  v14 = v11[2932];
  v15 = *(_QWORD *)(a2 + 152);
  v16 = *(_QWORD *)(a2 + 160);
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    result = tlgKeywordOn(stru_140E366D8.FirstArgument, 1LL);
    if ( (_BYTE)result )
    {
      v20 = *(_DWORD *)(v18 + 184) & 0xF;
      v40[5] = v17;
      LOBYTE(v26) = v20;
      v40[4] = (__int64)&v26;
      tlgCreate1Sz_char(v41, v19);
      v27 = v21;
      v42 = &v27;
      v43 = 4LL;
      v44 = &v31;
      v31 = v15;
      v46 = &v32;
      v45 = 8LL;
      v48 = &v33;
      v34 = a5;
      v50 = &v34;
      v52 = &v35;
      v36 = a6;
      v54 = &v36;
      v56 = &v37;
      v58 = &v38;
      v60 = &v39;
      v28 = a7;
      v62 = &v28;
      v29 = a8;
      v64 = &v29;
      LODWORD(v30) = *(unsigned __int16 *)(v22 + 174);
      v66 = &v30;
      v32 = v16;
      v47 = 8LL;
      v33 = a4;
      v49 = 8LL;
      v51 = 8LL;
      v35 = a3;
      v53 = 8LL;
      v55 = 8LL;
      v37 = v12;
      v57 = 8LL;
      v38 = v14;
      v59 = 8LL;
      v39 = v14;
      v61 = 8LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      return tlgWriteEx_EtwWriteEx(v23, (int)&byte_140058DC5, v23, 1, v24, v25, 0x11u, (__int64)v40);
    }
  }
  return result;
}
