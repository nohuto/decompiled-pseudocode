/*
 * XREFs of sub_180088E28 @ 0x180088E28
 * Callers:
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18001FB68 @ 0x18001FB68 (sub_18001FB68.c)
 *     sub_18004F428 @ 0x18004F428 (sub_18004F428.c)
 *     sub_18004F4C4 @ 0x18004F4C4 (sub_18004F4C4.c)
 *     sub_18004FA2C @ 0x18004FA2C (sub_18004FA2C.c)
 *     sub_1800876BC @ 0x1800876BC (sub_1800876BC.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 *     sub_1800898E0 @ 0x1800898E0 (sub_1800898E0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180088E28(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  size_t v10; // rbx
  const void *v11; // rax
  _BYTE *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // xmm1_4
  int v26; // xmm2_4
  __int64 v27; // rax
  int v29; // [rsp+20h] [rbp-E0h] BYREF
  int v30; // [rsp+24h] [rbp-DCh] BYREF
  int v31; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-C0h]
  _QWORD v34[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v35[5]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[30]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[16]; // [rsp+180h] [rbp+80h] BYREF
  size_t v38; // [rsp+190h] [rbp+90h]
  _BYTE v39[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v40[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v41[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v42[4]; // [rsp+200h] [rbp+100h] BYREF

  v32[0] = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  sub_180011CC4(v42, "LUT_3D_SIZE");
  sub_180011CC4(v41, "DOMAIN_MIN");
  sub_180011CC4(v40, "DOMAIN_MAX");
  v6 = 0LL;
  v7 = 0;
  sub_1800143C0((__int64)v37);
  v8 = 0LL;
  while ( 1 )
  {
    v9 = sub_18004F428(a2, (__int64)v37);
    if ( !(unsigned __int8)std::ios_base::operator bool(v9 + *(int *)(*(_QWORD *)v9 + 4LL)) )
      break;
    v10 = v38;
    if ( v38 )
    {
      v11 = (const void *)sub_1800148EC((__int64)v37);
      if ( !sub_18001CFB0(v11, v10, "\r", 1LL) )
      {
        v12 = (_BYTE *)sub_1800148EC((__int64)v37);
        if ( *v12 != 35 )
        {
          if ( v12[v10 - 1] == 13 )
            sub_18001FB68((__int64)v37, v10 - 1);
          v32[1] = v34;
          v13 = sub_1800181BC(v34, (__int64)v42);
          v14 = sub_1800181BC(v35, (__int64)v37);
          if ( (unsigned __int8)sub_1800898E0(v14, v13) )
          {
            sub_18004F4C4(v36, (__int64)v37);
            sub_1800143C0((__int64)v39);
            v15 = sub_1800876BC((__int64)v36, (__int64)v39);
            std::istream::operator>>(v15, v32);
            v5 = v32[0] * v32[0] * v32[0];
            v16 = (_QWORD *)(a3 + 8);
            v17 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
            if ( v5 < v17 )
            {
              v18 = *v16 + 16 * v5;
              goto LABEL_15;
            }
            if ( v5 > v17 )
            {
              if ( v5 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
              {
                v18 = sub_180087C7C(*(_QWORD *)(a3 + 16), v5 - v17, (__int64)v16);
LABEL_15:
                v16[1] = v18;
              }
              else
              {
                sub_180087AAC((const void **)(a3 + 8), v32[0] * v32[0] * v32[0]);
              }
            }
            sub_1800129D0((__int64)v39);
            goto LABEL_22;
          }
          v33 = v35;
          v19 = sub_1800181BC(v35, (__int64)v41);
          v20 = sub_1800181BC(v34, (__int64)v37);
          sub_1800898E0(v20, v19);
          v33 = v35;
          v21 = sub_1800181BC(v35, (__int64)v40);
          v22 = sub_1800181BC(v34, (__int64)v37);
          if ( (unsigned __int8)sub_1800898E0(v22, v21) )
          {
            v7 = 1;
          }
          else if ( v7 && v32[0] )
          {
            sub_18004F4C4(v36, (__int64)v37);
            v31 = 0;
            v29 = 0;
            v30 = 0;
            v23 = std::istream::operator>>(v36, &v31);
            v24 = std::istream::operator>>(v23, &v29);
            std::istream::operator>>(v24, &v30);
            v25 = v29;
            v26 = v30;
            v27 = *(_QWORD *)(a3 + 8);
            *(_DWORD *)(v27 + v8) = v31;
            *(_DWORD *)(v27 + v8 + 4) = v25;
            *(_DWORD *)(v27 + v8 + 8) = v26;
            *(_DWORD *)(v27 + v8 + 12) = 1065353216;
            ++v6;
            v8 += 16LL;
            if ( v6 == v5 )
            {
              sub_18004FA2C((__int64)v36);
              break;
            }
LABEL_22:
            sub_18004FA2C((__int64)v36);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v32[0];
  sub_1800129D0((__int64)v37);
  sub_1800129D0((__int64)v40);
  sub_1800129D0((__int64)v41);
  return sub_1800129D0((__int64)v42);
}
