/*
 * XREFs of sub_180036544 @ 0x180036544
 * Callers:
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_180030A38 @ 0x180030A38 (sub_180030A38.c)
 *     sub_180030B20 @ 0x180030B20 (sub_180030B20.c)
 *     sub_18003145C @ 0x18003145C (sub_18003145C.c)
 *     sub_180031FE8 @ 0x180031FE8 (sub_180031FE8.c)
 *     sub_180038114 @ 0x180038114 (sub_180038114.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
_UNKNOWN **__fastcall sub_180036544(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  HANDLE CurrentProcess; // rax
  SIZE_T v4; // r15
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *i; // rax
  __int64 v12; // r8
  unsigned int v13; // r9d
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rsi
  void (__fastcall *v19)(__int64, _QWORD *, __int64 *, void **); // rdi
  __int64 *v20; // rbx
  bool v21; // al
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // r9
  _BYTE *v26; // rax
  size_t v27; // r8
  void *v28[2]; // [rsp+30h] [rbp-138h] BYREF
  __m128i v29; // [rsp+40h] [rbp-128h] BYREF
  __int128 v30; // [rsp+50h] [rbp-118h]
  __int128 v31; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-F8h]
  stdext::exception *v33; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v34[4]; // [rsp+88h] [rbp-E0h] BYREF
  _QWORD v35[4]; // [rsp+A8h] [rbp-C0h] BYREF
  float v36; // [rsp+C8h] [rbp-A0h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+D0h] [rbp-98h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h] BYREF

  result = &retaddr;
  v32 = a1;
  if ( a1[60] )
  {
    memset(&ppsmemCounters, 0, sizeof(ppsmemCounters));
    CurrentProcess = GetCurrentProcess();
    K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
    v4 = ppsmemCounters.PeakWorkingSetSize - a1[146];
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = 0x8000000000000000uLL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = (_QWORD *)a1[21];
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v12 = i[2];
      v29 = *(__m128i *)(v12 + 448);
      v30 = *(_OWORD *)(v12 + 464);
      v13 = _mm_cvtsi128_si32(v29);
      if ( v13 )
      {
        if ( v29.m128i_i64[1] < v6 )
          v6 = v29.m128i_i64[1];
        if ( v7 < *((__int64 *)&v30 + 1) )
          v7 = *((_QWORD *)&v30 + 1);
        v8 += v30 * v13;
        v5 += v13;
      }
    }
    if ( v5 )
      v9 = v8 / v5;
    sub_180011CC4(v35, "Engine Max Memory Usage");
    if ( (v4 & 0x8000000000000000uLL) != 0LL )
      v14 = (float)(int)(v4 & 1 | (v4 >> 1)) + (float)(int)(v4 & 1 | (v4 >> 1));
    else
      v14 = (float)(int)v4;
    v36 = v14;
    v29.m128i_i64[0] = (__int64)v35;
    v29.m128i_i64[1] = (__int64)&ppsmemCounters;
    sub_180030A38((__int64 *)v28, &v29);
    sub_18000BFA4((__int64)v35, 40LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
    if ( v5 )
    {
      v15 = sub_180024D18(v6);
      sub_180011CC4(v34, "Min Time Per-render-update");
      *(float *)sub_180031FE8((__int64 *)v28, (__int64)v34) = v15;
      sub_1800129D0((__int64)v34);
      v16 = sub_180024D18(v9);
      sub_180011CC4(v34, "Avg Time Per-render-update");
      *(float *)sub_180031FE8((__int64 *)v28, (__int64)v34) = v16;
      sub_1800129D0((__int64)v34);
      v17 = sub_180024D18(v7);
      sub_180011CC4(v34, "Max Time Per-render-update");
      *(float *)sub_180031FE8((__int64 *)v28, (__int64)v34) = v17;
      sub_1800129D0((__int64)v34);
    }
    v18 = a1[60];
    v19 = *(void (__fastcall **)(__int64, _QWORD *, __int64 *, void **))(*(_QWORD *)v18 + 40LL);
    v20 = sub_180030B20(v29.m128i_i64);
    sub_180011CC4(v34, "Engine Shutting Down");
    v19(v18, v34, v20, v28);
    sub_1800129D0((__int64)v34);
    sub_18003145C((void **)&v29);
    result = (_UNKNOWN **)sub_18001D620(v28);
  }
  else if ( !a1[62] )
  {
    return result;
  }
  if ( a1[62] )
  {
    sub_180011CC4(v34, byte_1800F9DE0);
    sub_180038114(&v29);
    v21 = __ExceptionPtrToBool(&v29);
    try
    {
      if ( v21 )
      {
        v31 = 0LL;
        __ExceptionPtrCopy(&v31, &v29);
        v28[0] = &v31;
        __ExceptionPtrRethrow(&v31);
      }
      __ExceptionPtrDestroy(&v29);
    }
    catch ( stdext::exception *v33 )
    {
      v26 = (_BYTE *)(*(__int64 (__fastcall **)(stdext::exception *))(*(_QWORD *)v33 + 8LL))(v33);
      v27 = -1LL;
      do
        ++v27;
      while ( v26[v27] );
      sub_18001490C((__int64)v34, v26, v27);
    }
    sub_180012B20((__int64 *)v28);
    sub_1800148EC((__int64)v34);
    v23 = (unsigned int)(int)sub_180024D18(v22);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v23, v25);
    return (_UNKNOWN **)sub_1800129D0((__int64)v34);
  }
  return result;
}
