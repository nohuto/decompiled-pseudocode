/*
 * XREFs of sub_180097C94 @ 0x180097C94
 * Callers:
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180097C94(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  result = sub_180041DBC(a1 + 8);
  if ( result )
  {
    v7 = a1;
    sub_180029674(a1);
    if ( a2 >= 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 3) )
    {
      sub_180011CC4(v9, "Error: CpuProfiler::EndTimeSpanMarker() called with out of range parameter");
      v5 = sub_180011CC4(
             v8,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\cpupr"
             "ofiler\\cpuprofiler.cpp");
      sub_18006A84C(pExceptionObject, (__int64)v5, v6, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    *(_QWORD *)(56 * a2 + *(_QWORD *)(a1 + 32) + 48) = *sub_180012B20(&v7);
    return sub_1800297F4(a1);
  }
  return result;
}
