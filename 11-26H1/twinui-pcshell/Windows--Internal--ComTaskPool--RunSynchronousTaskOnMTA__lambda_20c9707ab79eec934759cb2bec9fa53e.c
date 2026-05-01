/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e___ @ 0x1804431BC
 * Callers:
 *     ?SetFrameWindow@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1801B42D0 (-SetFrameWindow@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e___(
        __int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx

  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_20c9707ab79eec934759cb2bec9fa53e____0(
           v3,
           CurrentThreadId,
           a1);
}
