/*
 * XREFs of sub_18004A638 @ 0x18004A638
 * Callers:
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o__fdclass @ 0x18000CD8A (_o__fdclass.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800149D0 @ 0x1800149D0 (sub_1800149D0.c)
 *     sub_180014BBC @ 0x180014BBC (sub_180014BBC.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     GsDriverEntry @ 0x18003C900 (GsDriverEntry.c)
 *     sub_18004754C @ 0x18004754C (sub_18004754C.c)
 *     sub_180049378 @ 0x180049378 (sub_180049378.c)
 *     sub_18004AB14 @ 0x18004AB14 (sub_18004AB14.c)
 *     sub_18004AB5C @ 0x18004AB5C (sub_18004AB5C.c)
 *     sub_18006BDBC @ 0x18006BDBC (sub_18006BDBC.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18004A638(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  __int64 v13; // r13
  __int64 *v15; // r15
  char v16; // bl
  __int64 v17; // rsi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  int v20; // edi
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  unsigned int *v25; // r12
  unsigned int *v26; // r13
  float v27; // xmm2_4
  unsigned int *v28; // rax
  unsigned int *v29; // rcx
  __m128 v30; // xmm1
  __m128 v31; // xmm2
  unsigned __int64 **v32; // rax
  __int64 v33; // rcx
  __int128 v35; // [rsp+20h] [rbp-D1h] BYREF
  __int64 v36; // [rsp+30h] [rbp-C1h] BYREF
  int v37; // [rsp+38h] [rbp-B9h]
  __int64 v38; // [rsp+40h] [rbp-B1h]
  __int64 v39; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+50h] [rbp-A1h]
  __int64 v41; // [rsp+58h] [rbp-99h]
  __int64 v42; // [rsp+60h] [rbp-91h] BYREF
  __int64 v43; // [rsp+68h] [rbp-89h]
  __int128 v44; // [rsp+70h] [rbp-81h] BYREF
  __int128 v45; // [rsp+80h] [rbp-71h]
  __int128 v46; // [rsp+90h] [rbp-61h]
  __int128 v47; // [rsp+A0h] [rbp-51h]
  __int64 v48; // [rsp+B0h] [rbp-41h]
  __int64 v49; // [rsp+B8h] [rbp-39h]
  _OWORD v50[2]; // [rsp+C0h] [rbp-31h] BYREF

  v13 = a2;
  v41 = a2;
  v48 = a2;
  v39 = a3;
  v15 = a5;
  v38 = (__int64)a5;
  v49 = (__int64)a5;
  v37 = 0;
  v44 = *a8;
  v45 = a8[1];
  v46 = a8[2];
  v47 = a8[3];
  v16 = sub_18004AB14(&v44);
  if ( (unsigned __int8)sub_18004AB5C(&v44) && v16 )
  {
    v17 = a1 + 56;
  }
  else
  {
    v44 = xmmword_1800FA780;
    v45 = xmmword_1800FA790;
    v46 = xmmword_1800FA7A0;
    v47 = xmmword_1800FA7B0;
    sub_180011CC4(
      v50,
      "LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of the matr"
      "ix are either NaN or infinite. The matrix has been set to identity ");
    v17 = a1 + 56;
    sub_180012A94(a1 + 56, &v35);
    sub_1800148EC((__int64)v50);
    sub_18001DCFC(&qword_1801BD308, 4);
    if ( *((_QWORD *)&v35 + 1) )
      sub_180010EC8(*((__int64 *)&v35 + 1));
    sub_1800129D0((__int64)v50);
  }
  sub_180012A94(v17, &v35);
  GsDriverEntry(v35, (__int64)&v44);
  if ( *((_QWORD *)&v35 + 1) )
    sub_180010EC8(*((__int64 *)&v35 + 1));
  v18 = sub_18006BDBC(a3 + 1056, a6, a4);
  v36 = a1;
  v19 = sub_180049378(&v42, &v36, &v39);
  v35 = 0LL;
  v35 = *(_OWORD *)v19;
  *v19 = 0LL;
  v19[1] = 0LL;
  ((void (__fastcall *)(__int64, __int64, __int64, __int128 *))sub_18006BF04)(a3 + 1056, v13, v18, &v35);
  v37 = 1;
  if ( v43 )
    sub_180010EC8(v43);
  if ( *(_BYTE *)(a1 + 72) )
  {
    LODWORD(v36) = *(_DWORD *)(*a5 + 120);
    v20 = v36;
    sub_18001DCFC(&qword_1801BD308, 3);
    sub_18001DCFC(&qword_1801BD308, 3);
    sub_18001DCFC(&qword_1801BD308, 3);
    if ( v20 )
    {
      sub_180012A94(v17, &v39);
      sub_180014E04(v39, &v35);
      if ( v40 )
        sub_180010EC8(v40);
      v21 = v35;
      if ( (_QWORD)v35 )
      {
        v39 = *((_QWORD *)&v35 + 1);
      }
      else
      {
        sub_180012A94(a1 + 56, &v42);
        v22 = sub_180014BBC(v42, v50);
        v21 = *v22;
        v39 = v22[1];
        v23 = v39;
        *v22 = 0LL;
        v22[1] = 0LL;
        *(_QWORD *)&v35 = v21;
        v24 = *((_QWORD *)&v35 + 1);
        *((_QWORD *)&v35 + 1) = v23;
        if ( v24 )
          sub_180010EC8(v24);
        if ( *((_QWORD *)&v50[0] + 1) )
          sub_180010EC8(*((__int64 *)&v50[0] + 1));
        if ( v43 )
          sub_180010EC8(v43);
      }
      if ( !a11 )
        goto LABEL_34;
      v25 = (unsigned int *)(a10 + 4);
      v26 = (unsigned int *)(a10 + 8);
      if ( (__int16)o__fdclass() <= 0 )
      {
        if ( (__int16)o__fdclass() <= 0 )
        {
LABEL_28:
          v27 = *(float *)a10;
          v28 = (unsigned int *)(a10 + 4);
          v29 = (unsigned int *)(a10 + 8);
          if ( *(float *)a10 != 0.0 || (v28 = v25, v29 = v26, *(float *)(a10 + 4) != 0.0) || *(float *)(a10 + 8) != 0.0 )
          {
            if ( a11 )
            {
              *(_QWORD *)&v50[0] = *(_QWORD *)a9;
              DWORD2(v50[0]) = *(_DWORD *)(a9 + 8);
              *((float *)v50 + 3) = v27;
              v30 = (__m128)*v28;
              v31 = (__m128)*v29;
              *(_OWORD *)(v21 + 88) = v50[0];
              *(_QWORD *)(v21 + 104) = _mm_unpacklo_ps(v30, v31).m128_u64[0];
              v15 = (__int64 *)v38;
LABEL_36:
              if ( v39 )
                sub_180010EC8(v39);
              v13 = v41;
              goto LABEL_39;
            }
          }
          v15 = (__int64 *)v38;
LABEL_34:
          v32 = (unsigned __int64 **)sub_18004754C(*v15, v50, 0);
          sub_1800149D0(v21 + 88, (unsigned int)v36, *v32);
          if ( *((_QWORD *)&v50[0] + 1) )
            sub_180010EC8(*((__int64 *)&v50[0] + 1));
          goto LABEL_36;
        }
        v25 = (unsigned int *)(a10 + 4);
        v26 = (unsigned int *)(a10 + 8);
      }
      sub_180011CC4(
        v50,
        "LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bounding box "
        "are either NaN or infinite The Bounding will be recalculated.");
      sub_1800148EC((__int64)v50);
      sub_18001DCFC(&qword_1801BD308, 4);
      a11 = 0;
      sub_1800129D0((__int64)v50);
      goto LABEL_28;
    }
  }
LABEL_39:
  v33 = v15[1];
  if ( v33 )
    sub_180010EC8(v33);
  return v13;
}
