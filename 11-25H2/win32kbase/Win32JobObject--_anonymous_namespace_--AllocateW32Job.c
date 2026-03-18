/*
 * XREFs of Win32JobObject::_anonymous_namespace_::AllocateW32Job @ 0x1401ACB44
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::Create @ 0x1401ACDAC (Win32JobObject--_anonymous_namespace_--Create.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     CreateGlobalAtomTable @ 0x1401092B0 (CreateGlobalAtomTable.c)
 */

__int64 __fastcall Win32JobObject::_anonymous_namespace_::AllocateW32Job(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v10; // di
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v2 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x626A7355u);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( CreateGlobalAtomTable((PRTL_ATOM_TABLE *)(v2 + 16)) < 0 )
  {
    GreDeleteFastMutex((char *)v3);
    return 0LL;
  }
  *(_QWORD *)(v3 + 8) = a1;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 69096);
  *(_QWORD *)v3 = v7;
  *(_QWORD *)(W32GetUserSessionState(v7, v8) + 69096) = v3;
  v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v10;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      14,
      10,
      (__int64)&WPP_24285db1a4f43635ee6b597c88f141a8_Traceguids,
      v3,
      a1);
  }
  return v3;
}
