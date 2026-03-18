/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400D8D30
 * Callers:
 *     CoreMsgInitialize @ 0x1400DA980 (CoreMsgInitialize.c)
 * Callees:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400D8EE8 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::RegistrarClient::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  const unsigned __int8 **v3; // rsi
  unsigned int v4; // ebx
  int i; // edi
  int v6; // eax
  __int64 UserCoreMessagingSessionState; // rax
  int v8; // edi
  __int64 v9; // rsi
  const unsigned __int8 **v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // [rsp+40h] [rbp-D8h]
  unsigned int v14; // [rsp+48h] [rbp-D0h]
  _QWORD v15[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v16[128]; // [rsp+60h] [rbp-B8h] BYREF
  int v17; // [rsp+E0h] [rbp-38h]
  int v18; // [rsp+E4h] [rbp-34h]
  unsigned int v19; // [rsp+F0h] [rbp-28h]

  v18 = 2;
  v17 = 26;
  v15[0] = &CoreMessagingK::SendHost::s_Vtbl;
  v3 = (const unsigned __int8 **)&off_1402557A0;
  v4 = 0;
  for ( i = 29; i; --i )
  {
    v6 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
           (CoreMessaging::Calling::SendProcessor *)v16,
           (struct IMessageCallSendHost *)v15,
           0,
           0,
           *v3,
           0LL,
           1,
           0x200u,
           v13,
           v14);
    if ( v6 < 0 )
      CoreMessagingK::Runtime::BugCheck(1024LL, v6, 0LL);
    if ( v19 > v4 )
      v4 = v19;
    ++v3;
  }
  if ( v4 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v4, 0LL);
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v17 = 26;
  v8 = 35;
  v9 = UserCoreMessagingSessionState;
  v18 = 2;
  v10 = (const unsigned __int8 **)&off_140255890;
  *(_WORD *)(UserCoreMessagingSessionState + 48) = v4;
  v11 = 0;
  while ( v8 )
  {
    v12 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
            (CoreMessaging::Calling::SendProcessor *)v16,
            (struct IMessageCallSendHost *)v15,
            0,
            0,
            *v10,
            0LL,
            1,
            0x200u,
            v13,
            v14);
    if ( v12 < 0 )
      CoreMessagingK::Runtime::BugCheck(1026LL, v12, 0LL);
    if ( v19 > v11 )
      v11 = v19;
    --v8;
    ++v10;
  }
  if ( v11 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v11, 0LL);
  *(_WORD *)(v9 + 50) = v11;
}
