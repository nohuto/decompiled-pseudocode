/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1401D0C0C
 * Callers:
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x140152194 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 *     EtwTraceTrappedAppContainerRender @ 0x1401D0E50 (EtwTraceTrappedAppContainerRender.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x14021F238 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(char **a1)
{
  char *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *a1 = 0LL;
  }
}
