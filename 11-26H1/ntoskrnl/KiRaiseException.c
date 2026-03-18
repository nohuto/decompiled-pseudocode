/*
 * XREFs of KiRaiseException @ 0x1403D3C10
 * Callers:
 *     NtRaiseException @ 0x1407278B0 (NtRaiseException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiDispatchException @ 0x1403D3400 (KiDispatchException.c)
 *     KyRaiseException @ 0x1403D3E8C (KyRaiseException.c)
 *     KiSetupForInstrumentationReturn @ 0x140488168 (KiSetupForInstrumentationReturn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 */

__int64 __fastcall KiRaiseException(_DWORD *a1, __int64 a2, void *a3, __int64 a4, char a5)
{
  char PreviousMode; // r14
  unsigned int ULongFromUser; // eax
  unsigned int v11; // esi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void *InstrumentationCallback; // rcx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v16[24]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-D0h]

  memset_0(v16, 0, 0x98uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a1 + 6);
    v11 = ULongFromUser;
    if ( ULongFromUser > 0xF )
      return 3221225485LL;
    RtlCopyFromUser(v16, a1, 8 * ULongFromUser + 32);
    a1 = v16;
    v17 = v11;
  }
  result = KyRaiseException(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    *a1 &= ~0x10000000u;
    KiDispatchException(a1, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0 )
      {
        InstrumentationCallback = CurrentThread->Process->InstrumentationCallback;
        if ( *(void **)(a4 + 360) != InstrumentationCallback )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 1 )
            __writecr8(1uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(InstrumentationCallback) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(InstrumentationCallback, 1LL);
          }
          KiSetupForInstrumentationReturn(a4);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
    }
    return 0LL;
  }
  return result;
}
