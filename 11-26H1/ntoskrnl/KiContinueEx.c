/*
 * XREFs of KiContinueEx @ 0x1403D8880
 * Callers:
 *     NtContinueEx @ 0x14072BFC0 (NtContinueEx.c)
 * Callees:
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall KiContinueEx(volatile void *Address, _BYTE *a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  int v5; // eax
  _BYTE *v6; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rcx
  int v10; // edi
  struct _KTHREAD *CurrentThread; // r12
  bool v12; // di
  char ULongFromUser; // di
  char v14; // al
  __int64 v15; // rcx

  v5 = a3;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v9 = KeGetCurrentIrql();
    if ( (_BYTE)v9 != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 1;
      KiRaiseIrqlProcessIrqlFlags(v9, a2);
    }
    v5 = a3;
  }
  v10 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v12 = 0;
    if ( (unsigned __int64)v6 <= 0xFF )
    {
      v14 = (char)v6;
    }
    else
    {
      ProbeForRead(v6, 0x18uLL, 8u);
      ULongFromUser = RtlReadULongFromUser(v6 + 4);
      v14 = ULongFromUser & 1;
      v12 = (ULongFromUser & 2) != 0;
    }
    if ( v14 )
    {
      ProbeForWrite(Address, 0x4D0uLL, 0x10u);
      LOBYTE(v15) = 1;
      KeTestAlertThread(v15);
      if ( v12 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
      {
        a4->FaultAddress = (unsigned __int64)Address;
        a4->ErrorCode = a3;
        KiDeliverApc(1, 0LL, a4);
        v10 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      ProbeForRead(Address, 0x4D0uLL, 0x10u);
    }
    v10 = KiContinuePreviousModeUser(Address, a3, a4, v6);
    if ( v10 >= 0 )
      v10 = 1;
  }
  else
  {
    if ( (unsigned __int64)v6 > 0xFF )
      LOBYTE(v6) = v6[4] & 1;
    KeContextToKframes((_DWORD)a4, v5, (_DWORD)Address, *((_DWORD *)Address + 12), 0LL);
    if ( (_BYTE)v6 )
      KeTestAlertThread(0LL);
  }
LABEL_19:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
  }
  return (unsigned int)v10;
}
