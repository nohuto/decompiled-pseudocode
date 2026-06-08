/*
 * XREFs of HwDebugInitializeProcessorSupport @ 0x14003B350
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x140004EC0 (HwDebugDiagnosticRegistryHandler.c)
 *     InitCommonPerfStateContext @ 0x140047E50 (InitCommonPerfStateContext.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     HwDebugCreateRegisterGroup @ 0x140046E44 (HwDebugCreateRegisterGroup.c)
 */

__int64 __fastcall HwDebugInitializeProcessorSupport(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __m128i v13; // [rsp+50h] [rbp-28h]

  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  if ( qword_1400194A0 && !a3 )
  {
    v6 = qword_1400194A0(&v12);
    if ( v6 >= 0 )
    {
      *(_OWORD *)(a1 + 1224) = v12;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v9);
    }
  }
  v13 = xmmword_140019AD8[v3];
  result = (unsigned __int8)_mm_cvtsi128_si32(v13);
  if ( (unsigned __int8)result + (unsigned __int8)v12 )
  {
    v8 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= 2 )
      {
        *(_OWORD *)(a2 + 16 * v3 + 8) = v11;
        return result;
      }
      result = HwDebugCreateRegisterGroup(a1, v8, a3, (unsigned int)&v12, (__int64)&v11 + 8 * v8, v3);
      if ( (int)result < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = result;
      return WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               3u,
               0x21u,
               (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
               v10);
    }
  }
  return result;
}
