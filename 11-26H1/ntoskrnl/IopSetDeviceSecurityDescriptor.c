/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140AFA774
 * Callers:
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140AFA6D4 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r13
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  __int64 i; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  v5 = a5;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; ObDereferenceSecurityDescriptor(i, 1u, v22, v23) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12);
    P = (PVOID)v11;
    if ( !v11 )
      break;
    v13 = RtlpSetSecurityObject(0LL, *a2, a3, (__int64 *)&P, 0, a4, v5, 0LL);
    if ( v13 < 0 || (v13 = ObLogSecurityDescriptor(P, &i, 1u), ExFreePoolWithTag(P, 0), v13 < 0) )
    {
      v17 = 1;
      goto LABEL_10;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = i;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16);
      v17 = 2;
LABEL_10:
      ObDereferenceSecurityDescriptor((__int64)v11, v17, v14, v15);
      return (unsigned int)v13;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v19);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u, v20, v21);
  }
  return (unsigned int)-1073741609;
}
