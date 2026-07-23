/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x140A82CB4
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1, _QWORD *Teb)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rdx

  if ( !Teb )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
  }
  v2 = Teb[1];
  v3 = Teb[2];
  if ( a1 >= v3 && a1 <= v2 )
    return 1LL;
  return v3 != Teb[655] && a1 >= v3 - 4096 && a1 <= v2;
}
