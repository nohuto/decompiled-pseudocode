/*
 * XREFs of _lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator() @ 0x18005A1F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___::Run @ 0x1802BA2A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6b79eb4b576a38d0be641e968c7b0b59___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x18005A094 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18005A854 (McTemplateU0q_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_UNKNOWN **__fastcall lambda_6b79eb4b576a38d0be641e968c7b0b59_::operator()(unsigned int *a1)
{
  _UNKNOWN **result; // rax
  unsigned int *v2; // rsi
  _DWORD *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, GUID *, unsigned int **); // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = a1;
  v3 = a1 + 3;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    result = (_UNKNOWN **)McTemplateU0dddd_EventWriteTransfer(
                            (__int64)a1,
                            (__int64)&ImmersiveShell_AppManager_ModeChange_Start,
                            a1[2],
                            0,
                            *v3,
                            0);
  v4 = 0;
  if ( v2[4] )
  {
    do
    {
      v10 = 0LL;
      v5 = *(_QWORD *)v2;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, unsigned int **))(**(_QWORD **)v2 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      result = (_UNKNOWN **)v6(v5, v4, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v10);
      if ( (int)result >= 0 )
      {
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0q_EventWriteTransfer(v7, &ImmersiveShell_AppManager_ModeChanged_Start, v4);
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, v2[3]);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          result = (_UNKNOWN **)McTemplateU0q_EventWriteTransfer(v8, &ImmersiveShell_AppManager_ModeChanged_Stop, v4);
      }
      a1 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
      }
      ++v4;
    }
    while ( v4 < v2[4] );
    v3 = v2 + 3;
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    return (_UNKNOWN **)McTemplateU0dddd_EventWriteTransfer(
                          (__int64)a1,
                          (__int64)&ImmersiveShell_AppManager_ModeChange_Stop,
                          v2[2],
                          0,
                          *v3,
                          0);
  return result;
}
