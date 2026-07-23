/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x140AA5DB0
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1, void *a2)
{
  void *Teb; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // eax
  struct _KTHREAD *CurrentThread; // r8

  Teb = a2;
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
  }
  v4 = 3596LL;
  if ( Teb )
    v4 = (__int64)Teb + 11788;
  v5 = 4LL;
  if ( Teb )
    v5 = (__int64)Teb + 8196;
  v6 = *(_DWORD *)v5;
  v7 = 8LL;
  if ( Teb )
    v7 = (__int64)Teb + 8200;
  v8 = *(_DWORD *)v7;
  if ( a1 >= *(_DWORD *)v7 && a1 <= v6 )
    return 1LL;
  return v8 != *(_DWORD *)v4 && a1 >= v8 - 4096 && a1 <= v6;
}
