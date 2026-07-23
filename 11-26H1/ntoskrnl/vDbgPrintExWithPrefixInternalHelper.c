/*
 * XREFs of vDbgPrintExWithPrefixInternalHelper @ 0x1403993F0
 * Callers:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     vDbgPrintEx @ 0x140399210 (vDbgPrintEx.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     vDbgPrintExWithPrefixInternal @ 0x14039933C (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     DbgBreakPointWithStatus @ 0x140536DB0 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x140536DC0 (DebugPrint.c)
 *     _vsnprintf @ 0x140537950 (_vsnprintf.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternalHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        va_list Args,
        char a6,
        unsigned int a7,
        char a8)
{
  __int64 v10; // r11
  unsigned int v11; // r10d
  unsigned __int64 v12; // rax
  void *v13; // rsp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  size_t v16; // rdi
  __int64 v17; // rdx
  char *v18; // r15
  unsigned __int64 v19; // r14
  int v20; // edi
  size_t v21; // r14
  int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v25; // rcx
  struct _KTHREAD *Next; // rsi
  unsigned int i; // r13d
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp+0h] BYREF
  int v31; // [rsp+24h] [rbp+4h]
  int v32; // [rsp+28h] [rbp+8h]
  __int128 v33; // [rsp+30h] [rbp+10h] BYREF
  int v34; // [rsp+40h] [rbp+20h]
  char *Format; // [rsp+48h] [rbp+28h]

  Format = a4;
  v30 = a3;
  v33 = 0LL;
  v10 = 101LL;
  if ( a2 < 0x9C )
    v10 = a2;
  v11 = 3;
  if ( a2 < 0x9C )
    v11 = a3;
  if ( v11 <= 0x1F )
    v11 = 1 << v11;
  if ( (v11 & Kd_WIN2000_Mask) == 0 && (v11 & *(_DWORD *)*(&KdComponentTable + v10)) == 0 )
    return 0LL;
  v12 = a7 + 15LL;
  if ( v12 <= a7 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v14 = -1LL;
  do
    ++v14;
  while ( a1[v14] );
  v15 = a7 - 1;
  v16 = v15;
  if ( v14 <= v15 )
    v16 = v14;
  memmove(&v30, a1, v16);
  v18 = (char *)&v30 + v16;
  v31 = 0;
  v19 = a7 - v16;
  v20 = 0;
  if ( !v19 || v19 > 0x7FFFFFFF )
    v20 = -1073741811;
  v31 = v20;
  if ( v20 < 0 )
  {
    if ( v19 )
      *v18 = 0;
  }
  else
  {
    v20 = 0;
    v32 = 0;
    v21 = v19 - 1;
    v22 = vsnprintf(v18, v21, Format, Args);
    if ( v22 < 0 || v22 > v21 )
    {
      v18[v21] = 0;
      v20 = -2147483643;
      v32 = -2147483643;
    }
    else if ( v22 == v21 )
    {
      v18[v21] = 0;
    }
    v31 = v20;
  }
  v34 = v20;
  if ( !a8 || v20 != -2147483643 )
  {
    if ( v20 == -2147483643 )
    {
      *((_BYTE *)&v30 + a7 - 2) = 10;
      *((_BYTE *)&v30 + v15) = 0;
    }
    else
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *((_BYTE *)&v30 + v15) );
    }
    *((_QWORD *)&v33 + 1) = &v30;
    LOWORD(v33) = v15;
    if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0
      || LOBYTE(RtlpBootStatHandleLock.StackBase) != 1 )
    {
      i = v30;
    }
    else
    {
      v23 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 0xCu )
      {
        v25 = KeGetCurrentIrql();
        if ( (_BYTE)v25 != 12 )
          __writecr8(0xCuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v17) = 12;
          KiRaiseIrqlProcessIrqlFlags(v25, v17);
        }
      }
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
      Next = (struct _KTHREAD *)SshpBlockerCollections.SystemAffinityTokenListHead.Next;
      for ( i = v30;
            Next != (struct _KTHREAD *)&SshpBlockerCollections.SystemAffinityTokenListHead;
            Next = *(struct _KTHREAD **)&Next->Header.Lock )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Next[-1].Padding[3]) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
          if ( v23 )
            ExReleaseRundownProtection_0(v23 + 1);
          v23 = (struct _EX_RUNDOWN_REF *)&Next[-1].Padding[2];
          guard_dispatch_icall_no_overrides(&v33, a2, i);
          ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&RtlpBootStatHandleLock.StackBase + 1);
      if ( v23 )
        ExReleaseRundownProtection_0(v23 + 1);
      if ( CurrentIrql < 0xCu )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    v28 = DebugPrint(&v33, a2, i);
    v20 = v28;
    if ( a6 == 1 && v28 == -2147483645 )
    {
      DbgBreakPointWithStatus(1u);
      return 0;
    }
  }
  return (unsigned int)v20;
}
