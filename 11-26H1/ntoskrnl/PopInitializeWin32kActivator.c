/*
 * XREFs of PopInitializeWin32kActivator @ 0x140CD6F6C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 */

__int64 PopInitializeWin32kActivator()
{
  __int64 v0; // r8
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  qword_140F12AE8 = 0LL;
  qword_140F12AE0[0] = 0LL;
  PopInitializeWorkItem((__int64)&unk_140F12C98, (__int64)PopWin32kActivatorWorker, 0LL);
  v2[2] = v0;
  v2[1] = PopWin32kActivatorCallback;
  v2[0] = 1LL;
  result = Pdcv2ActivationClientRegister(123LL, v2, &qword_140F12AF0);
  if ( (int)result < 0 )
    qword_140F12AF0 = 0LL;
  return result;
}
