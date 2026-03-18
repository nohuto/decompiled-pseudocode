/*
 * XREFs of ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140159F74
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 */

__int64 __fastcall InputVirtualization::RootSynthesizedMouseList::Initialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_QWORD *)(UserSessionState + 19488) )
  {
    v3 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x68747455u);
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      v3[3] = 0LL;
      v3[2] = 0LL;
      v3[3] = 0LL;
    }
    *(_QWORD *)(UserSessionState + 19488) = v3;
    if ( isChildPartition(v5, v4) )
    {
      v8 = *(_QWORD **)(W32GetUserSessionState(v7, v6) + 19488);
      v8[1] = v8;
      *v8 = v8;
    }
  }
  return *(_QWORD *)(UserSessionState + 19488) == 0LL ? 0xC0000017 : 0;
}
