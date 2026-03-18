/*
 * XREFs of Command_ControllerResetPostResetSuccess @ 0x14003E0C0
 * Callers:
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 */

__int64 __fastcall Command_ControllerResetPostResetSuccess(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // r8
  __int64 **v4; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v12 = &v11;
  v11 = (__int64)&v11;
  DynamicLock_Acquire(v2);
  v4 = (__int64 **)(a1 + 96);
  *(_DWORD *)(a1 + 36) = 1;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    if ( (__int64 **)v5[1] != v4
      || (v6 = (__int64 *)*v5, *(__int64 **)(*v5 + 8) != v5)
      || (*v4 = v6, v6[1] = (__int64)v4, v7 = v12, (__int64 *)*v12 != &v11) )
    {
LABEL_11:
      __fastfail(3u);
    }
    v5[1] = (__int64)v12;
    v3 = &v11;
    *v5 = (__int64)&v11;
    *v7 = (__int64)v5;
    v12 = v5;
  }
  while ( 1 )
  {
    v8 = v11;
    if ( (__int64 *)v11 == &v11 )
      return DynamicLock_Release(*(_QWORD *)(a1 + 112));
    if ( *(__int64 **)(v11 + 8) != &v11 )
      goto LABEL_11;
    v9 = *(_QWORD *)v11;
    if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_11;
    v11 = *(_QWORD *)v11;
    *(_QWORD *)(v9 + 8) = &v11;
    Command_InternalSendCommand(a1, v8, (int)v3);
  }
}
