/*
 * XREFs of sub_180052290 @ 0x180052290
 * Callers:
 *     sub_18006AD9C @ 0x18006AD9C (sub_18006AD9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052290(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD v7[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 96LL);
  if ( *(_DWORD *)v2 != *(_DWORD *)v3
    || *(_DWORD *)(v2 + 4) != *(_DWORD *)(v3 + 4)
    || *(_DWORD *)(v2 + 8) != *(_DWORD *)(v3 + 8)
    || *(_DWORD *)(v2 + 12) != *(_DWORD *)(v3 + 12)
    || *(float *)(v2 + 16) != *(float *)(v3 + 16)
    || *(_DWORD *)(v2 + 20) != *(_DWORD *)(v3 + 20)
    || *(_DWORD *)(v2 + 24) != *(_DWORD *)(v3 + 24)
    || _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(v2 + 28), *(__m128 *)(v3 + 28))) != 15
    || *(float *)(v2 + 44) != *(float *)(v3 + 44)
    || *(float *)(v2 + 48) != *(float *)(v3 + 48) )
  {
    sub_180011CC4(v8, "Attaching a device sampler to an incompatible sampler");
    v5 = (unsigned int)sub_180011CC4(
                         v7,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\sampler.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v5, v6, (unsigned int)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return sub_1800523AC(a1, a2);
}
