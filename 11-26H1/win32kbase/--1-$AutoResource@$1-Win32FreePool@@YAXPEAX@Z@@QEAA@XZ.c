/*
 * XREFs of ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140160B14
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1401FA010 (EtwTraceTrappedAppContainerRender.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x1402229E0 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 *     ?CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ @ 0x1402F3598 (-CreateSystemOwnerSecurityDescriptor@@YAPEAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(
        char **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx

  v5 = *a1;
  if ( v5 )
  {
    GreDeleteFastMutex(v5, a2, a3, a4);
    *a1 = 0LL;
  }
}
