/*
 * XREFs of sub_1400132C0 @ 0x1400132C0
 * Callers:
 *     sub_140014ED0 @ 0x140014ED0 (sub_140014ED0.c)
 * Callees:
 *     sub_1400135E0 @ 0x1400135E0 (sub_1400135E0.c)
 *     sub_140013B80 @ 0x140013B80 (sub_140013B80.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

HRESULT __fastcall sub_1400132C0(__int64 a1)
{
  __int64 v1; // rax
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  double LowPart; // xmm0_8
  __int64 v10; // rcx
  double v11; // xmm0_8
  double v12; // xmm1_8
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  HRESULT result; // eax
  int v18; // r8d
  HRESULT v19; // r14d
  void *v20; // rcx
  int v21; // ecx
  int v22; // [rsp+30h] [rbp-79h] BYREF
  HRESULT v23; // [rsp+38h] [rbp-71h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-69h] BYREF
  __int64 v25; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h] BYREF
  __int64 v27; // [rsp+58h] [rbp-51h] BYREF
  __int64 v28; // [rsp+60h] [rbp-49h] BYREF
  char v29[16]; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v30; // [rsp+80h] [rbp-29h]
  __int64 v31; // [rsp+88h] [rbp-21h]
  int *v32; // [rsp+90h] [rbp-19h]
  __int64 v33; // [rsp+98h] [rbp-11h]
  __int64 *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]
  __int64 *v36; // [rsp+B0h] [rbp+7h]
  __int64 v37; // [rsp+B8h] [rbp+Fh]
  HRESULT *v38; // [rsp+C0h] [rbp+17h]
  __int64 v39; // [rsp+C8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 104);
  v3 = (float)(int)v1;
  if ( sub_140015070 == *(__int64 (__fastcall **)())(a1 + 216) )
  {
    v4 = v3 * 0.5;
    v5 = 20000LL;
  }
  else
  {
    v4 = v3 * 0.60000002;
    v5 = 50000LL;
  }
  v6 = *(_QWORD *)(a1 + 4664);
  v7 = (unsigned int)(int)v4;
  if ( v1 < 1000000 )
    v6 = sub_1400135E0(a1, v6);
  v8 = v6 + *(_QWORD *)(a1 + 104);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v10 = qword_1400B7000;
  v11 = LowPart * 10000000.0;
  if ( qword_1400B7000 < 0 )
  {
    v10 = qword_1400B7000 & 1;
    v12 = (double)(int)(v10 | ((unsigned __int64)qword_1400B7000 >> 1))
        + (double)(int)(v10 | ((unsigned __int64)qword_1400B7000 >> 1));
  }
  else
  {
    v12 = (double)(int)qword_1400B7000;
  }
  v13 = (unsigned int)(int)(v11 / v12);
  v14 = v8 - v13 + v7 - 20000;
  if ( v14 < 0 )
  {
    if ( (byte_1400E8400 & 0x20) != 0 )
      sub_140013B80(v10, "v", a1, *(unsigned int *)(a1 + 244), v14, 1);
    v14 = 0LL;
  }
  v15 = *(unsigned int *)(a1 + 240);
  v25 = 0LL;
  v16 = v14 - v5;
  if ( v14 - v5 <= 0 )
    v16 = 0LL;
  result = RtwqSetDeadline2(v15, v14 + v13, v16 + v13, &v25);
  v19 = result;
  if ( result >= 0 )
  {
    v20 = *(void **)(a1 + 248);
    if ( v20 )
      result = RtwqCancelDeadline(v20);
  }
  v21 = v25;
  *(_QWORD *)(a1 + 248) = v25;
  if ( (byte_1400E8401 & 8) != 0 )
  {
    v28 = (unsigned int)v14;
    v27 = (unsigned int)v16;
    v22 = *(_DWORD *)(a1 + 244);
    v30 = &v26;
    v32 = &v22;
    v34 = &v27;
    v36 = &v28;
    v38 = &v23;
    v23 = v19;
    v26 = a1;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 8LL;
    v37 = 8LL;
    v39 = 4LL;
    return sub_140014E60(v21, (unsigned int)&unk_1400C56A0, v18, 6, (__int64)v29);
  }
  return result;
}
