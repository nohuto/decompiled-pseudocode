/*
 * XREFs of HwDebugInitializeProcessorSupport @ 0x140039D34
 * Callers:
 *     HwDebugDiagnosticRegistryHandler @ 0x14000C870 (HwDebugDiagnosticRegistryHandler.c)
 *     InitCommonPerfStateContext @ 0x140032AA0 (InitCommonPerfStateContext.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     HwDebugCreateRegisterGroup @ 0x14003992C (HwDebugCreateRegisterGroup.c)
 */

__int64 __fastcall HwDebugInitializeProcessorSupport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // edx
  int v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __m128i v15; // [rsp+50h] [rbp-28h]

  v3 = (int)a3;
  v14 = 0LL;
  v15 = 0LL;
  if ( qword_1400158D0 && !(_DWORD)a3 )
  {
    v6 = qword_1400158D0(&v14);
    if ( v6 >= 0 )
    {
      *(_OWORD *)(a1 + 1224) = v14;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        32,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
        v11);
    }
  }
  v15 = xmmword_140015F08[v3];
  result = (unsigned __int8)_mm_cvtsi128_si32(v15);
  if ( (unsigned __int8)result + (unsigned __int8)v14 )
  {
    v9 = 0LL;
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= 2 )
      {
        *(_OWORD *)(a2 + 16 * v3 + 8) = v13;
        return result;
      }
      result = HwDebugCreateRegisterGroup(a1, v9, a3, (unsigned __int8 *)&v14, (_QWORD *)&v13 + v9, v3);
      if ( (int)result < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = result;
      LOBYTE(v10) = 2;
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               v10,
               3,
               33,
               (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
               v12);
    }
  }
  return result;
}
