/*
 * XREFs of sub_18002C03C @ 0x18002C03C
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CBF8 @ 0x18001CBF8 (sub_18001CBF8.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18002A0F4 @ 0x18002A0F4 (sub_18002A0F4.c)
 *     sub_18002A198 @ 0x18002A198 (sub_18002A198.c)
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002C03C(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  double v9; // xmm6_8
  const void *v10; // rax
  const void *v11; // r10
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  void *v17; // rax
  __int64 v18; // rdx
  __int64 **v19; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v27; // [rsp+38h] [rbp-59h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-41h] BYREF
  __int64 v30; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v31[32]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v32[32]; // [rsp+88h] [rbp-9h] BYREF

  sub_18002AE20((__int64 *)v28);
  v2 = *(_QWORD *)(a1 + 416);
  v3 = *(_QWORD *)(a1 + 424);
  while ( v2 != v3 )
  {
    if ( *(_BYTE *)(v2 + 120) )
    {
      sub_18002A198(
        *(_QWORD **)(a1 + 384),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v2 + 128));
      v4 = v28[0];
      sub_18001CBF8((__int64)v28, (__int64)v28, *((_QWORD *)v28[0] + 1));
      v4[1] = v4;
      *v4 = v4;
      v4[2] = v4;
      v28[1] = 0LL;
      v6 = **(_QWORD **)(v2 + 136);
      v29 = v6;
      while ( !*(_BYTE *)(v6 + 25) )
      {
        v7 = v6 + 32;
        v8 = *(_DWORD *)(v6 + 64);
        if ( v8 )
        {
          if ( v8 == 1 )
          {
            v9 = *(double *)(v6 + 80) - *(double *)(v6 + 72);
            v27 = 0;
            sub_18002A494((__int64 *)v28, (__int64)&v30, v6 + 32, (__int64)&v27);
            *(double *)(v30 + 64) = v9 + *(double *)(v30 + 64);
          }
        }
        else
        {
          sub_1800148EC(v6 + 32);
          v10 = (const void *)sub_1800148EC((__int64)&unk_1801CD958);
          if ( sub_18001CFB0(v11, *(_QWORD *)(v7 + 16), v10, qword_1801CD968) )
          {
            sub_18002A0F4(*(_QWORD **)(a1 + 384), v12, 618LL);
          }
          else
          {
            v13 = *(_QWORD **)(a1 + 384);
            v14 = sub_180014288(v31, (__int64)&unk_1801C8F88, v7);
            sub_1800148EC((__int64)v14);
            sub_18002A0F4(v13, v15, 623LL);
            sub_1800129D0((__int64)v31);
          }
        }
        sub_18001D6F4(&v29, v5);
        v6 = v29;
      }
      v16 = *(__int64 **)v28[0];
      while ( !*((_BYTE *)v16 + 25) )
      {
        v17 = sub_180014288(v32, (__int64)&unk_1801C8F88, (__int64)(v16 + 4));
        sub_18001EA08((__int64)v31, (__int64)v17, (__int64)&unk_1801CD938);
        sub_1800129D0((__int64)v32);
        sub_1800148EC((__int64)v31);
        sub_18002A0F4(*(_QWORD **)(a1 + 384), v18, 644LL);
        sub_1800129D0((__int64)v31);
        v19 = (__int64 **)v16[2];
        if ( *((_BYTE *)v19 + 25) )
        {
          for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v16 = i;
          v16 = i;
        }
        else
        {
          v16 = (__int64 *)v16[2];
          for ( j = *v19; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v16 = j;
        }
      }
      sub_18002A0F4(*(_QWORD **)(a1 + 384), v5, 648LL);
      sub_18002A0F4(*(_QWORD **)(a1 + 384), v22, 649LL);
      sub_18002A0F4(*(_QWORD **)(a1 + 384), v23, 650LL);
      sub_18002A0F4(*(_QWORD **)(a1 + 384), v24, 651LL);
      sub_18002A0F4(*(_QWORD **)(a1 + 384), v25, 652LL);
    }
    v2 += 152LL;
  }
  return sub_18001D620(v28);
}
