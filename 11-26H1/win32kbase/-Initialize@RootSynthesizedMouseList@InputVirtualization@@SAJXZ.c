/*
 * XREFs of ?Initialize@RootSynthesizedMouseList@InputVirtualization@@SAJXZ @ 0x140198F38
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 */

__int64 __fastcall InputVirtualization::RootSynthesizedMouseList::Initialize(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  _QWORD *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  _QWORD *v11; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !*(_QWORD *)(UserSessionState + 19520) )
  {
    v4 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x20uLL, 0x68747455u);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
    }
    *(_QWORD *)(UserSessionState + 19520) = v4;
    if ( isChildPartition(v6, v5, v7) )
    {
      v11 = *(_QWORD **)(W32GetUserSessionState(v9, v8, v10) + 19520);
      v11[1] = v11;
      *v11 = v11;
    }
  }
  return *(_QWORD *)(UserSessionState + 19520) == 0LL ? 0xC0000017 : 0;
}
