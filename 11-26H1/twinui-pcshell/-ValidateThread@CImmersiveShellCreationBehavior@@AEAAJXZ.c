/*
 * XREFs of ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180184A38
 * Callers:
 *     ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801844F0 (-OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x180184590 (-GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z.c)
 *     ?OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z @ 0x1801845F0 (-OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801846E0 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 *     ?GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z @ 0x180184800 (-GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z.c)
 *     ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x180184870 (-CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ValidateThread(CImmersiveShellCreationBehavior *this)
{
  if ( !*((_DWORD *)this + 16) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 16, GetCurrentThreadId(), 0);
  return GetCurrentThreadId() != *((_DWORD *)this + 16) ? 0x8001010E : 0;
}
