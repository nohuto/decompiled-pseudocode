/*
 * XREFs of EtwTraceDisplayReqChange @ 0x14017B2A8
 * Callers:
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x14017B344 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayReqChange(__int16 a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v4; // rcx
  char v5; // bl
  int CurrentWin32kSessionId; // eax
  int v7; // ecx
  int v8; // r8d

  v3 = a1;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x2000000000008000LL) != 0
    && (qword_1402A9DC8 & 0x2000000000008000LL) == qword_1402A9DC8 )
  {
    v4 = *(unsigned __int16 *)(W32GetUserSessionState(a1, 0x8000, a3) + 68744);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v5 = (_WORD)v4 == 0;
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v4);
      McTemplateK0qhq_EtwWriteTransfer(v7, (unsigned int)&DisplayReqChangeEvent, v8, CurrentWin32kSessionId, v5, v3);
    }
  }
}
