/*
 * XREFs of ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401C9F34
 * Callers:
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A1A60 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall SetProcessInitialCapabilities(struct tagPROCESSINFO *a1, __int64 a2, int a3)
{
  bool v4; // di
  bool v5; // bp
  int v6; // ebx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdi
  unsigned __int8 (__fastcall **v11)(struct tagPROCESSINFO *); // rbx

  if ( _bittest64((const signed __int64 *)a1 + 101, 0x28u) )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *((_DWORD *)a1 + 14);
      UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)WPP_GLOBAL_Control, a3);
      LOBYTE(v8) = v5;
      LOBYTE(v9) = v4;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        8,
        22,
        (__int64)&WPP_ecd75a293f58357f88bf2c1d127de49e_Traceguids,
        v6);
    }
  }
  else
  {
    if ( (dword_1402AD8E4 & 1) == 0 )
    {
      qword_1402AA2A0 = 2LL;
      dword_1402AD8E4 |= 1u;
      qword_1402AA298 = (__int64)lambda_341836b4cfbb1a5bccc71938d3338954_::_lambda_invoker_cdecl_;
      qword_1402AA2A8 = (__int64)DirectComposition::CLegacyRenderTargetMarshaler::IsShellResource;
      qword_1402AA2B8 = (__int64)lambda_ba18e81ca637b69fb1f891ffe3f4f6cd_::_lambda_invoker_cdecl_;
      qword_1402AA2C0 = 0x100000000LL;
      qword_1402AA2C8 = (__int64)lambda_e36063bdc5aa44eb1fd63d58d5e6f1dc_::_lambda_invoker_cdecl_;
      qword_1402AA2B0 = 4LL;
    }
    v10 = 0LL;
    v11 = (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&unk_1402AA290;
    do
    {
      if ( v11[1](a1) )
        v10 |= (unsigned __int64)*v11;
      v11 += 2;
    }
    while ( v11 != (unsigned __int8 (__fastcall **)(struct tagPROCESSINFO *))&FP_90_0 );
    tagPROCESSINFO::UpdateCapabilities((__int64)a1, v10, v10);
  }
}
