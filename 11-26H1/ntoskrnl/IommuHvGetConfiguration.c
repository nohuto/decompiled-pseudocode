/*
 * XREFs of IommuHvGetConfiguration @ 0x140CBAB30
 * Callers:
 *     <none>
 * Callees:
 *     IommupGetSystemContext @ 0x14059F680 (IommupGetSystemContext.c)
 */

__int64 __fastcall IommuHvGetConfiguration(unsigned int a1, _DWORD *a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 SystemContext; // rax

  if ( BYTE3(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
  {
    *a2 = HIDWORD(IommuInterfaceStateChangeCallbackPushLock.StackLimit);
    *a3 = IommuInterfaceStateChangeCallbackPushLock.KernelStack;
    SystemContext = IommupGetSystemContext(a1, (__int64)a2, (__int64)a3, a4);
    a4->Thread = (_KTHREAD *)SystemContext;
    return SystemContext == 0 ? 0xC000009A : 0;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    a4->Thread = 0LL;
    return 3221225659LL;
  }
}
