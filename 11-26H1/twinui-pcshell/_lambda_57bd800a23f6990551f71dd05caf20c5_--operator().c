/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x18005B41C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x18005ABF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18005B890 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_57bd800a23f6990551f71dd05caf20c5_::operator()(__int64 *a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int i; // ebx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp-9h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-1h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp+17h] BYREF
  unsigned int *v12; // [rsp+68h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  unsigned int *v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]

  result = *a1;
  v2 = *(unsigned int **)(*a1 + 8);
  v9 = 0;
  v3 = *((_QWORD *)v2 + 1);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 24LL))(v3, &v9);
    if ( (int)result >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v7 = *v2;
        v8 = v2[1];
        v12 = &v8;
        v13 = 4LL;
        v14 = &v7;
        v15 = 4LL;
        result = McGenEventWrite_EventWriteTransfer(
                   &MICROSOFT_TWINUI_PUBLISHER_Context,
                   &ImmersiveShell_AppManager_ZbandChange_Start,
                   v4,
                   3LL,
                   v11);
      }
      for ( i = 0; i < v9; ++i )
      {
        v10 = 0LL;
        result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)v2 + 1) + 32LL))(
                   *((_QWORD *)v2 + 1),
                   i,
                   &GUID_0c40987c_7026_499e_adad_c164c0ffee84,
                   &v10);
        if ( (int)result >= 0 )
        {
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v7 = i;
            v12 = &v7;
            v13 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &MICROSOFT_TWINUI_PUBLISHER_Context,
              &ImmersiveShell_AppManager_ZbandChanged_Start,
              v4,
              2LL,
              v11);
          }
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, v2[1], *v2);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          {
            v8 = result;
            v7 = i;
            v12 = &v7;
            v13 = 4LL;
            v14 = &v8;
            v15 = 4LL;
            result = McGenEventWrite_EventWriteTransfer(
                       &MICROSOFT_TWINUI_PUBLISHER_Context,
                       &ImmersiveShell_AppManager_ZbandChanged_Stop,
                       v4,
                       3LL,
                       v11);
          }
        }
        v6 = v10;
        if ( v10 )
        {
          v10 = 0LL;
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      {
        v8 = *v2;
        v7 = v2[1];
        v12 = &v7;
        v13 = 4LL;
        v14 = &v8;
        v15 = 4LL;
        return McGenEventWrite_EventWriteTransfer(
                 &MICROSOFT_TWINUI_PUBLISHER_Context,
                 &ImmersiveShell_AppManager_ZbandChange_Stop,
                 v4,
                 3LL,
                 v11);
      }
    }
  }
  return result;
}
