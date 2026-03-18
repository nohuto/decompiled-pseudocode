/*
 * XREFs of ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1400566D4
 * Callers:
 *     SendMsgCleanup @ 0x140056310 (SendMsgCleanup.c)
 * Callees:
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 */

void __fastcall SenderDied(struct tagSMS *a1)
{
  __int64 v1; // r8
  int v2; // edx
  int v3; // eax
  __int64 v4; // rdx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( !v1 )
    v1 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 4) = 0LL;
  v3 = *((_DWORD *)a1 + 21) | 4;
  *((_DWORD *)a1 + 21) = v3;
  if ( (v3 & 0x4000) != 0 )
  {
    v2 = 1;
    *((_DWORD *)a1 + 21) = v3 | 8;
  }
  if ( *(struct tagSMS **)(v1 + 536) == a1 )
    v2 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 520), 0, 0) & 1) != 0 || !v2 )
  {
    v4 = *((unsigned int *)a1 + 21);
    if ( (v4 & 2) != 0 || (v4 & 9) == 1 )
      UnlinkSendListSms((__int64 *)a1, v4);
    else
      *((_DWORD *)a1 + 21) = v4 | 8;
  }
  else
  {
    *((_DWORD *)a1 + 21) |= 1u;
    *((_QWORD *)a1 + 9) = 0LL;
    SetWakeBit(v1, 512LL);
  }
}
