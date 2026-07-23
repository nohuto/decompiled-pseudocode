/*
 * XREFs of EtwTraceJobSetQuery @ 0x140AF71B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspSetNetRateControl @ 0x1407FF594 (PspSetNetRateControl.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int128 *__fastcall EtwTraceJobSetQuery(__int64 a1, int a2, __int64 a3, _DWORD *a4, char a5, unsigned __int16 a6)
{
  __int128 v7; // xmm0
  __int16 v8; // r9
  __int128 *result; // rax
  int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r11
  char **v13; // rbx
  __int64 *v14; // rdi
  _QWORD *v15; // rax
  __int64 *v16; // rsi
  _QWORD *v17; // r14
  unsigned __int64 **v18; // r15
  unsigned __int64 **v19; // r12
  _QWORD *v20; // r13
  _QWORD *v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _QWORD *v24; // r9
  _QWORD *v25; // r9
  _QWORD *v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // r8
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+58h] [rbp-B0h]
  _QWORD *v34; // [rsp+60h] [rbp-A8h]
  _QWORD *v35; // [rsp+68h] [rbp-A0h]
  _QWORD *v36; // [rsp+70h] [rbp-98h]
  _QWORD v37[2]; // [rsp+78h] [rbp-90h] BYREF
  char *v38; // [rsp+88h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _QWORD v44[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v45[2]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v46[2]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v49[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v50[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v51[2]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v52[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v53[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v54[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v55[8]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v56; // [rsp+1A8h] [rbp+A0h] BYREF
  int v57; // [rsp+1B8h] [rbp+B0h]
  int v58; // [rsp+1BCh] [rbp+B4h]

  LODWORD(v29) = 0;
  v31 = 0LL;
  v30 = 0LL;
  v56 = 0uLL;
  if ( a1 )
  {
    v7 = *(_OWORD *)(a1 + 1472);
    v57 = *(_DWORD *)(a1 + 1468);
    v56 = v7;
  }
  else
  {
    v57 = 0;
  }
  v8 = a6;
  result = &v56;
  v58 = a2;
  v37[0] = &v56;
  v37[1] = 24LL;
  if ( a6 == 1829 )
  {
    switch ( a2 )
    {
      case 15:
        v38 = (char *)a3;
        v40 = a3 + 4;
        v10 = 3;
        v39 = 4LL;
        v8 = 1836;
        v41 = 4LL;
        return (__int128 *)EtwTraceKernelEvent((int)v37, v10, 0x80000u, v8, 6297860);
      case 12:
        v10 = 13;
        v32 = v48;
        v11 = a3 + 8;
        v33 = v49;
        v12 = a3 + 16;
        v34 = v50;
        v13 = &v38;
        v35 = v51;
        v14 = &v40;
        v15 = v52;
        v16 = &v42;
        v17 = v44;
        v18 = (unsigned __int64 **)v45;
        v19 = (unsigned __int64 **)v46;
        v20 = v47;
        break;
      case 32:
        v38 = (char *)a3;
        v32 = v51;
        v11 = a3 + 8;
        v39 = 4LL;
        v33 = v52;
        v12 = a3 + 16;
        v40 = a3 + 8;
        v34 = v53;
        v13 = (char **)v44;
        v41 = 8LL;
        v35 = v54;
        v14 = v45;
        v15 = v55;
        v42 = a3 + 16;
        v43 = 1LL;
        v16 = v46;
        v10 = 16;
        v17 = v47;
        v18 = (unsigned __int64 **)v48;
        v19 = (unsigned __int64 **)v49;
        v20 = v50;
        break;
      default:
        return result;
    }
    v21 = v32;
    v13[1] = (char *)4;
    v36 = v15;
    *v13 = (char *)(a3 + 40);
    v22 = *(_QWORD *)(a3 + 48);
    *v14 = a3;
    v14[1] = 8LL;
    *v16 = v11;
    v16[1] = 8LL;
    *v17 = v12;
    v17[1] = 8LL;
    v18[1] = (unsigned __int64 *)8;
    v30 = v22 >> 12;
    *v18 = &v30;
    v23 = *(_QWORD *)(a3 + 24);
    v19[1] = (unsigned __int64 *)8;
    v31 = v23 >> 12;
    *v19 = &v31;
    *v20 = a3 + 32;
    v20[1] = 4LL;
    *v21 = a3 + 36;
    v21[1] = 4LL;
    v24 = v33;
    *v33 = a3 + 44;
    v24[1] = 4LL;
    v25 = v34;
    *v34 = a3 + 56;
    v25[1] = 4LL;
    v26 = v35;
    *v35 = a3 + 60;
    v27 = a3 + 64;
    v28 = v36;
    v26[1] = 4LL;
    v8 = 1833;
    *v28 = v27;
    v28[1] = 4LL;
    return (__int128 *)EtwTraceKernelEvent((int)v37, v10, 0x80000u, v8, 6297860);
  }
  if ( a6 == 1830 )
  {
    if ( a2 != 13 )
      return result;
    v38 = (char *)a3;
    v40 = a3 + 4;
    v10 = 19;
    v39 = 4LL;
    v42 = a3 + 8;
    v8 = 1835;
    v41 = 4LL;
    v44[0] = a3 + 16;
    v45[0] = a3 + 24;
    v46[0] = a3 + 32;
    v47[0] = a3 + 40;
    v48[0] = a3 + 48;
    v49[0] = a3 + 56;
    v50[0] = a3 + 80;
    v51[0] = a3 + 64;
    v52[0] = a3 + 72;
    v53[0] = a3 + 76;
    v54[0] = a3 + 88;
    v55[0] = a3 + 92;
    v55[2] = a3 + 96;
    v55[4] = a3 + 100;
    LODWORD(v29) = *a4;
    v55[6] = &v29;
    v43 = 8LL;
    v44[1] = 8LL;
    v45[1] = 8LL;
    v46[1] = 8LL;
    v47[1] = 8LL;
    v48[1] = 8LL;
    v49[1] = 8LL;
    v50[1] = 8LL;
    v51[1] = 8LL;
    v52[1] = 4LL;
    v53[1] = 4LL;
    v54[1] = 4LL;
    v55[1] = 4LL;
    v55[3] = 4LL;
    v55[5] = 4LL;
    v55[7] = 4LL;
    return (__int128 *)EtwTraceKernelEvent((int)v37, v10, 0x80000u, v8, 6297860);
  }
  if ( (unsigned int)a6 - 1831 <= 1 )
  {
    v39 = 4LL;
    v38 = &a5;
    v10 = 2;
    return (__int128 *)EtwTraceKernelEvent((int)v37, v10, 0x80000u, v8, 6297860);
  }
  return result;
}
