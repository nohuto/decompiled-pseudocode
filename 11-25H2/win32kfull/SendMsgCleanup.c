/*
 * XREFs of SendMsgCleanup @ 0x140114DA0
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1401148A0 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x140114E0C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxReceiverDied @ 0x14016F18C (xxxReceiverDied.c)
 */

void __fastcall SendMsgCleanup(__int64 a1, __int64 a2)
{
  struct tagSMS **v3; // rdi
  struct tagSMS *v4; // rbx
  struct tagSMS *v5; // rcx

  v3 = (struct tagSMS **)(W32GetUserSessionState(a1, a2) + 69056);
  v4 = *v3;
  while ( v4 != (struct tagSMS *)v3 )
  {
    v5 = v4;
    v4 = *(struct tagSMS **)v4;
    if ( *((_QWORD *)v5 + 4) == a1 || *((_QWORD *)v5 + 8) == a1 )
    {
      SenderDied(v5);
    }
    else if ( *((_QWORD *)v5 + 5) == a1 )
    {
      xxxReceiverDied();
    }
  }
}
