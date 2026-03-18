/*
 * XREFs of ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402DB2F4
 * Callers:
 *     ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1402A7B14 (-WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUA.c)
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402C3C94 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--operator().c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x14025F34C (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NotifyShell::ArrangementHotKey(int a1, __int64 a2)
{
  __int64 result; // rax
  ShellWindowManagement *v4; // rcx
  const struct tagTHREADINFO *Thread; // rax

  result = anonymous_namespace_::NotifyShellSimplePayload(0LL, 4, a1, a2, 0);
  if ( (_BYTE)result )
  {
    if ( !a1 )
    {
      Thread = ShellWindowManagement::GetThread(v4);
      return LastWokenThread::Set(Thread, 1LL, 0LL);
    }
  }
  return result;
}
