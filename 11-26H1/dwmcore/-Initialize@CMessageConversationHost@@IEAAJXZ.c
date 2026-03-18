/*
 * XREFs of ?Initialize@CMessageConversationHost@@IEAAJXZ @ 0x1801DE18C
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z @ 0x1802143EC (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAUIDwmMessageConversationHost@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeSystemServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x1801DE254 (-InitializeSystemServer@CMessageConversationHost@@AEAAJPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int ConversationHost; // eax
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  v2 = CMessageConversationHost::InitializeSystemServer(this, &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x43u, 0LL);
  }
  else
  {
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
           *((_QWORD *)this + 3),
           &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
           (char *)this + 32);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x4Cu, 0LL);
    }
    else
    {
      ConversationHost = CoreUICallCreateConversationHost(
                           *((_QWORD *)this + 2),
                           *((_QWORD *)this + 3),
                           (char *)this + 40,
                           0LL);
      v3 = ConversationHost;
      if ( ConversationHost < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ConversationHost, 0x58u, 0LL);
      else
        return 0;
    }
  }
  return v3;
}
