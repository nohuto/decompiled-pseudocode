/*
 * XREFs of sub_180059AA0 @ 0x180059AA0
 * Callers:
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     sub_180038F30 @ 0x180038F30 (sub_180038F30.c)
 *     sub_180038F8C @ 0x180038F8C (sub_180038F8C.c)
 *     sub_180040F4C @ 0x180040F4C (sub_180040F4C.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18004E988 @ 0x18004E988 (sub_18004E988.c)
 *     sub_18005921C @ 0x18005921C (sub_18005921C.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_18005A4A4 @ 0x18005A4A4 (sub_18005A4A4.c)
 *     sub_18005ABFC @ 0x18005ABFC (sub_18005ABFC.c)
 *     sub_18005DA8C @ 0x18005DA8C (sub_18005DA8C.c)
 *     sub_18006C37C @ 0x18006C37C (sub_18006C37C.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=20
_UNKNOWN **__fastcall sub_180059AA0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 *v5; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __m128i v22; // xmm6
  __int64 *v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int128 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp-70h]
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int64 v54; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-58h]
  _QWORD v56[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v57[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v58; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-20h]
  __int64 *v60; // [rsp+F0h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-10h]
  char v62[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h]
  __int64 v65; // [rsp+118h] [rbp+10h]
  __int128 v66; // [rsp+128h] [rbp+20h] BYREF
  __int64 v67[3]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v68[4]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v69[4]; // [rsp+170h] [rbp+68h] BYREF
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF

  result = &retaddr;
  v5 = a2;
  v60 = a2;
  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 72) )
  {
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    if ( (_BYTE)result )
    {
      sub_180029EF8(*v5 + 24, v8);
      sub_180012C40(&v54, a3);
      if ( !v54 )
      {
        v9 = sub_180026650(*v5, &v45, 0);
        sub_180011F5C(&v54, v9);
        if ( *((_QWORD *)&v45 + 1) )
          sub_180010EC8(*((__int64 *)&v45 + 1));
      }
      sub_1800592E4(a1, &v49, (__int64)v5);
      v10 = *v5;
      v61 = v10;
      sub_180029EF8(v10 + 24, v11);
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 184LL))(v54);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 200LL))(v54, &v51);
      v13 = sub_1800162D0(&v45, v12);
      sub_180038F8C(v14, v13);
      v15 = sub_1800162D0(&v45, &v51);
      sub_180038F30(v16, v15);
      v17 = sub_1800162D0(&v45, v12);
      sub_180038F8C(v18, v17);
      v19 = sub_1800162D0(&v45, &v51);
      sub_180038F30(v20, v19);
      if ( v52 )
        sub_180010F00(v52);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 104LL))(*v5, &v49);
      sub_18005ABFC(a1, &v58);
      sub_18001C8C0(v69, a1 + 24, (__int64)" scene");
      sub_180099888(v62, &v49, v69);
      v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v54 + 200LL))(v54, &v47);
      sub_180030C74(v67, v21);
      if ( *((_QWORD *)&v47 + 1) )
        sub_180010F00(*((volatile signed __int32 **)&v47 + 1));
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v5, a3);
      sub_180012A94(a1 + 56, &v47);
      v22 = (__m128i)v47;
      v66 = v47;
      v23 = (__int64 *)sub_18001367C(v47, &v47);
      v59 = *v23;
      v64 = v59;
      v24 = v23[1];
      v48 = v24;
      v65 = v24;
      *v23 = 0LL;
      v23[1] = 0LL;
      if ( *((_QWORD *)&v47 + 1) )
        sub_180010EC8(*((__int64 *)&v47 + 1));
      v25 = *(_QWORD *)(sub_18007AB60(a1) + 512);
      sub_18004E988(v25, (__int64 *)&v45);
      v26 = *(_QWORD *)v45;
      v46 = *(_QWORD *)v45;
      while ( !*(_BYTE *)(v26 + 25) )
      {
        v27 = sub_1800181BC(v68, v26 + 32);
        sub_18004E8E8(v25, &v47, (__int64)v27);
        v28 = v47;
        v29 = (_QWORD *)sub_18005DA8C(v47, &v51);
        (*(void (__fastcall **)(_QWORD, __int128 *, __int64 *))(*(_QWORD *)*v29 + 32LL))(*v29, &v58, &v54);
        if ( v52 )
          sub_180010EC8((__int64)v52);
        v30 = *(_DWORD *)(a1 + 316);
        if ( v30 == 2 || v30 == 4 )
        {
          v34 = (_QWORD *)sub_18005DA8C(v28, v56);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v34 + 96LL))(*v34, *v5);
          v33 = v56[1];
        }
        else
        {
          v31 = (_QWORD *)sub_18005DA8C(v28, v57);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v31 + 96LL))(*v31, *v5);
          v33 = v57[1];
        }
        if ( v33 )
          sub_180010EC8(v33);
        if ( *((_QWORD *)&v47 + 1) )
          sub_180010EC8(*((__int64 *)&v47 + 1));
        sub_18001D6F4(&v46, v32);
        v26 = v46;
      }
      v35 = *(int *)(a1 + 168);
      v46 = v35;
      if ( *(_DWORD *)(a1 + 176) == -1 )
        v36 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4) - 1;
      else
        v36 = *(int *)(a1 + 176);
      v56[0] = v36;
      v57[0] = 0LL;
      v37 = *(_QWORD *)(a1 + 104);
      if ( 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v37) >> 4) )
      {
        v38 = 0LL;
        do
        {
          if ( *(_BYTE *)(v37 + v38) )
          {
            if ( v7 != v35 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v5 + 96LL))(*v5, 9LL) )
            {
              sub_18005921C(a1, v7);
              v39 = *(_QWORD *)(a1 + 416);
              if ( v39 != *(_QWORD *)(a1 + 424) )
              {
                v40 = *(_QWORD *)(a1 + 424);
                do
                {
                  *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
                  *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
                  sub_18006C37C(a1 + 504, *(_QWORD *)(v37 + v38 + 8), 0LL);
                  sub_18006C37C(v41, *(_QWORD *)(v37 + v38 + 16), 1LL);
                  v53 = *(_QWORD *)(v37 + v38 + 24);
                  v47 = 0LL;
                  if ( *((_QWORD *)&v58 + 1) )
                    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL));
                  v47 = v58;
                  v42 = sub_180013440(v68, v39);
                  sub_180040F4C(v59, (__int64)v42, (__int64)&v49, (__int64 *)&v47, (_QWORD *)(v37 + v38 + 32), v53);
                  if ( *((_QWORD *)&v47 + 1) )
                    sub_180010EC8(*((__int64 *)&v47 + 1));
                  v39 += 32LL;
                }
                while ( v39 != v40 );
                v36 = v56[0];
                v5 = v60;
                v7 = v57[0];
              }
              if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v36 == v7 )
                sub_18005A4A4(a1, &v49);
            }
            v35 = v46;
          }
          v57[0] = ++v7;
          v38 += 48LL;
          v37 = *(_QWORD *)(a1 + 104);
        }
        while ( v7 < 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v37) >> 4) );
        v24 = v48;
        v10 = v61;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
      sub_18004C0E0((void **)&v45, (__int64)&v45);
      if ( v24 )
        sub_180010EC8(v24);
      v43 = _mm_srli_si128(v22, 8).m128i_u64[0];
      if ( v43 )
        sub_180010EC8(v43);
      sub_18003197C((__int64)v67);
      sub_18009993C(v62);
      sub_1800129D0((__int64)v69);
      if ( (*(_DWORD *)(a1 + 440) & 0x10000) != 0 )
      {
        sub_180011CC4(v69, "Symbols");
        sub_180099888(&v66, &v49, v69);
        v44 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v54 + 200LL))(v54, v62);
        sub_180030C74(v67, v44);
        if ( v63 )
          sub_180010F00(v63);
        sub_180034428();
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 112LL))(*v5, &v49);
      v45 = 0LL;
      sub_180038F8C(v49, (__int64 *)&v45);
      v45 = 0LL;
      sub_180038F30(v49, (__int64 *)&v45);
      v45 = 0LL;
      sub_180038F8C(*(_QWORD *)(v10 + 272), (__int64 *)&v45);
      v45 = 0LL;
      result = (_UNKNOWN **)sub_180038F30(*(_QWORD *)(v10 + 272), (__int64 *)&v45);
      if ( *((_QWORD *)&v58 + 1) )
        result = (_UNKNOWN **)sub_180010EC8(*((__int64 *)&v58 + 1));
      if ( v50 )
        result = (_UNKNOWN **)sub_180010EC8(v50);
      if ( v55 )
        return (_UNKNOWN **)sub_180010EC8(v55);
    }
  }
  return result;
}
