/*
 * XREFs of ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A6B4C
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A9320 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall SetProcessInitialCapabilities(struct tagPROCESSINFO *a1)
{
  bool v2; // di
  bool v3; // bp
  int v4; // ebx
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdi
  unsigned __int8 (__fastcall **v9)(struct tagPROCESSINFO *); // rbx

  if ( _bittest64((const signed __int64 *)a1 + 101, 0x28u) )
  {
    v2 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = *((_DWORD *)a1 + 14);
      UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
      LOBYTE(v6) = v3;
      LOBYTE(v7) = v2;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        8,
        22,
        (__int64)&WPP_73c4af39d81e3d70f00c63da4eecef9b_Traceguids,
        v4);
    }
  }
  else
  {
    if ( (dword_1402A3BE0 & 1) == 0 )
    {
      qword_14029F2A0 = 2LL;
      dword_1402A3BE0 |= 1u;
      qword_14029F298 = (__int64)lambda_341836b4cfbb1a5bccc71938d3338954_::_lambda_invoker_cdecl_;
      qword_14029F2A8 = (__int64)DirectComposition::CLegacyRenderTargetMarshaler::IsShellResource;
      qword_14029F2B8 = (__int64)lambda_ba18e81ca637b69fb1f891ffe3f4f6cd_::_lambda_invoker_cdecl_;
      qword_14029F2C0 = 0x100000000LL;
      qword_14029F2C8 = (__int64)lambda_e36063bdc5aa44eb1fd63d58d5e6f1dc_::_lambda_invoker_cdecl_;
      qword_14029F2B0 = 4LL;
    }
    v8 = 0LL;
    v9 = (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&unk_14029F290;
    do
    {
      if ( v9[1](a1) )
        v8 |= (unsigned __int64)*v9;
      v9 += 2;
    }
    while ( v9 != (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&FP_90_0 );
    tagPROCESSINFO::UpdateCapabilities(a1, v8, v8);
  }
}
