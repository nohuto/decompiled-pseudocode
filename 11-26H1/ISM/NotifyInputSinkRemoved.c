/*
 * XREFs of NotifyInputSinkRemoved @ 0x180047CA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetLuidFromInputSinkHandle @ 0x180047DE0 (_anonymous_namespace_--GetLuidFromInputSinkHandle.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180047E30 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z @ 0x180048110 (-InputSinkRemoved@InputSinkDataCache@@QEAAX_K@Z.c)
 */

__int64 __fastcall NotifyInputSinkRemoved(__int64 a1)
{
  RTL_SRWLOCK *Instance; // rdi
  unsigned __int64 LuidFromInputSinkHandle; // rax

  Instance = (RTL_SRWLOCK *)InputSinkDataCache::GetInstance();
  LuidFromInputSinkHandle = anonymous_namespace_::GetLuidFromInputSinkHandle(a1);
  InputSinkDataCache::InputSinkRemoved(Instance, LuidFromInputSinkHandle);
  return 1LL;
}
