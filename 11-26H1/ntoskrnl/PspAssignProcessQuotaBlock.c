/*
 * XREFs of PspAssignProcessQuotaBlock @ 0x140ABA378
 * Callers:
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     PspLockQuotaListShared @ 0x1404C8964 (PspLockQuotaListShared.c)
 *     PspUnlockQuotaListShared @ 0x1404CF97C (PspUnlockQuotaListShared.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspInitializeQuotaBlock @ 0x1407F5B50 (PspInitializeQuotaBlock.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     PspLookupProcessQuotaBlock @ 0x140ABA274 (PspLookupProcessQuotaBlock.c)
 *     PspHashKeyValue @ 0x140ABA614 (PspHashKeyValue.c)
 *     PspReadUserQuotaLimits @ 0x140ABA648 (PspReadUserQuotaLimits.c)
 *     PspSafeReferenceQuotaBlock @ 0x140ABA778 (PspSafeReferenceQuotaBlock.c)
 *     PspDereferenceQuota @ 0x140AF422C (PspDereferenceQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PspAssignProcessQuotaBlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // di
  _BYTE *v8; // rsi
  unsigned __int8 *v9; // rdx
  ULONG v10; // ebp
  unsigned __int64 NpxState; // rbx
  volatile signed __int64 *v12; // r15
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // r11
  char *i; // rdi
  int UserQuotaLimits; // edi
  LIST_ENTRY *v19; // rdi
  __int64 *Pool2; // rax
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // [rsp+20h] [rbp-B8h]
  _BYTE Sid1[80]; // [rsp+30h] [rbp-A8h] BYREF
  struct _KTHREAD *v24; // [rsp+80h] [rbp-58h] BYREF

  memset_0(Sid1, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v22 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a3 + 48), 1u);
  v9 = **(unsigned __int8 ***)(a3 + 152);
  v10 = 4 * v9[1] + 8;
  if ( v10 <= 0x44 )
    memmove(Sid1, v9, v10);
  ExReleaseResourceLite(*(PERESOURCE *)(a3 + 48));
  KeLeaveCriticalRegion();
  if ( a1 && (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
  {
    v7 = 1;
    v10 = 0;
    v22 = 1;
  }
  else
  {
    v8 = Sid1;
  }
  v24 = KeGetCurrentThread();
  NpxState = 0LL;
  v12 = (volatile signed __int64 *)PspSiloMonitorLock.WaitListEntry.Blink + 3 * (unsigned int)PspHashKeyValue(v8, v10);
  PspLockQuotaListShared(v15, v12, v13, v14);
  if ( v8 )
  {
    for ( i = (char *)*((_QWORD *)v12 + 1); i != (char *)(v12 + 1); i = *(char **)i )
    {
      if ( RtlEqualSid(v8, i + 56) )
      {
        NpxState = (unsigned __int64)(i - 520);
        goto LABEL_27;
      }
    }
  }
  else if ( v7 )
  {
    NpxState = PspSiloMonitorLock.NpxState;
LABEL_27:
    if ( NpxState )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(NpxState) )
        _InterlockedIncrement((volatile signed __int32 *)(NpxState + 516));
      else
        NpxState = 0LL;
    }
  }
  PspUnlockQuotaListShared((__int64)v24, (signed __int64 *)v12);
  if ( !NpxState )
  {
    if ( a1 )
    {
      v19 = 0LL;
    }
    else
    {
      UserQuotaLimits = PspReadUserQuotaLimits(Sid1);
      if ( UserQuotaLimits < 0 )
        return (unsigned int)UserQuotaLimits;
      v19 = (LIST_ENTRY *)&v24;
    }
    Pool2 = (__int64 *)ExAllocatePool2(0x48uLL);
    NpxState = (unsigned __int64)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    UserQuotaLimits = PspInitializeQuotaBlock(a1, v19, Pool2);
    if ( UserQuotaLimits < 0 )
    {
LABEL_25:
      PspDereferenceQuota(NpxState);
      return (unsigned int)UserQuotaLimits;
    }
    if ( v8 )
      RtlCopySid(v10, (PSID)(NpxState + 576), Sid1);
    v21 = PspLookupProcessQuotaBlock(v8, v10, v22, NpxState);
    if ( v21 )
    {
      PspDereferenceQuota(NpxState);
      NpxState = v21;
    }
  }
  if ( !*(_QWORD *)(a2 + 760) )
  {
    *(_QWORD *)(a2 + 760) = NpxState;
    return 0LL;
  }
  if ( (__int64 *)_InterlockedCompareExchange64(
                    (volatile signed __int64 *)(a2 + 760),
                    NpxState,
                    (signed __int64)&PspSystemQuotaBlock) == &PspSystemQuotaBlock )
    return 0LL;
  UserQuotaLimits = -1073741823;
  if ( NpxState )
    goto LABEL_25;
  return (unsigned int)UserQuotaLimits;
}
