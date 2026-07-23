/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x14071B424
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14071BC28 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int16 a1, int a2, int a3)
{
  unsigned int Flink; // esi
  unsigned int Flink_high; // edi
  unsigned int v5; // r9d
  unsigned int Blink; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp-28h]
  unsigned int v10; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = a3;
  LOWORD(v11) = a1;
  Flink = (unsigned int)WheapPfaLock.ThreadListEntry.Flink;
  Flink_high = HIDWORD(WheapPfaLock.ThreadListEntry.Flink);
  v5 = HIDWORD(WheapPfaLock.ThreadListEntry.Flink);
  Blink = (unsigned int)WheapPfaLock.ThreadListEntry.Blink;
  v7 = *(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 24LL);
  v12 = 0;
  v11 = 0;
  *(_DWORD *)(v7 + 56) = a2;
  *(_DWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 8LL) = a2;
  result = BgpDisplayCharacterEx(
             0x20u,
             *(__int64 **)&stru_140E3EAA8.Timer.Processor,
             Flink,
             v5,
             *(_DWORD *)(v7 + 40),
             -1,
             &v12,
             &v11,
             v9);
  if ( (int)result >= 0 )
  {
    if ( Blink < Flink_high + v11 )
      Blink = Flink_high + v11;
    v10 = Blink;
    return BcpSetCursorPosition(Flink + v12, Flink_high, &v10);
  }
  return result;
}
