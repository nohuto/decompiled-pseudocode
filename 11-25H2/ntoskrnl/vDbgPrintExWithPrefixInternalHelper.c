/*
 * XREFs of vDbgPrintExWithPrefixInternalHelper @ 0x1403A97C0
 * Callers:
 *     vDbgPrintEx @ 0x1403A9560 (vDbgPrintEx.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 *     DebugPrint @ 0x1404FA0A0 (DebugPrint.c)
 *     _vsnprintf @ 0x1404FAC00 (_vsnprintf.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
  unsigned __int64 v13; // rax
  void *v14; // rsp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  size_t v17; // rdi
  char *v18; // r15
  size_t v19; // r14
  int v20; // edi
  size_t v21; // r14
  int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v25; // rcx
  struct _EX_RUNDOWN_REF *Count; // rsi
  unsigned int v27; // r13d
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
  v13 = a7 + 15LL;
  if ( v13 <= a7 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = -1LL;
  do
    ++v15;
  while ( a1[v15] );
  v16 = a7 - 1;
  v17 = v16;
  if ( v15 <= v16 )
    v17 = v15;
  memmove(&v30, a1, v17);
  v18 = (char *)&v30 + v17;
  v31 = 0;
  v19 = a7 - v17;
  v20 = 0;
  if ( v19 - 1 > 0x7FFFFFFE )
    v20 = -1073741811;
  v31 = v20;
  if ( v20 < 0 )
  {
    if ( v19 )
      *v18 = 0;
    goto LABEL_28;
  }
  v20 = 0;
  v32 = 0;
  v21 = v19 - 1;
  v22 = vsnprintf(v18, v21, Format, Args);
  if ( v22 < 0 || v22 > v21 )
  {
    v18[v21] = 0;
    v20 = -2147483643;
    v32 = -2147483643;
    goto LABEL_23;
  }
  if ( v22 != v21 )
  {
LABEL_23:
    v31 = v20;
    goto LABEL_28;
  }
  v18[v21] = 0;
  v31 = 0;
LABEL_28:
  v34 = v20;
  if ( !a8 || v20 != -2147483643 )
  {
    if ( v20 == -2147483643 )
    {
      *((_BYTE *)&v30 + a7 - 2) = 10;
      *((_BYTE *)&v30 + v16) = 0;
    }
    else
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *((_BYTE *)&v30 + v16) );
    }
    *((_QWORD *)&v33 + 1) = &v30;
    LOWORD(v33) = v16;
    if ( (KiBugCheckActive & 3) != 0 || RtlpDebugPrintCallbacksActive != 1 )
    {
      v27 = v30;
    }
    else
    {
      v23 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 0xCu )
      {
        v25 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v25);
      }
      ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
      Count = (struct _EX_RUNDOWN_REF *)RtlpDebugPrintCallbackList;
      v27 = v30;
      if ( RtlpDebugPrintCallbackList != (_UNKNOWN *)&RtlpDebugPrintCallbackList )
      {
        do
        {
          if ( ExAcquireRundownProtection_0(Count - 2) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
            if ( v23 )
              ExReleaseRundownProtection_0(v23 + 1);
            v23 = Count - 3;
            guard_dispatch_icall_no_overrides(&v33, a2);
            ExAcquireSpinLockSharedAtDpcLevel(&RtlpDebugPrintCallbackLock);
          }
          Count = (struct _EX_RUNDOWN_REF *)Count->Count;
        }
        while ( Count != (struct _EX_RUNDOWN_REF *)&RtlpDebugPrintCallbackList );
      }
      ExReleaseSpinLockSharedFromDpcLevel(&RtlpDebugPrintCallbackLock);
      if ( v23 )
        ExReleaseRundownProtection_0(v23 + 1);
      if ( CurrentIrql < 0xCu )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    v28 = DebugPrint(&v33, a2, v27);
    v20 = v28;
    if ( a6 == 1 && v28 == -2147483645 )
    {
      DbgBreakPointWithStatus(1u);
      return 0;
    }
  }
  return (unsigned int)v20;
}
