/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400FDE48
 * Callers:
 *     CoreMsgInitialize @ 0x1400FC350 (CoreMsgInitialize.c)
 * Callees:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400FE020 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CoreMessagingK::RegistrarClient::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  const unsigned __int8 **v3; // rsi
  unsigned int v4; // ebx
  int i; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 UserCoreMessagingSessionState; // rax
  int v10; // edi
  __int64 v11; // rsi
  const unsigned __int8 **v12; // r14
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // [rsp+40h] [rbp-D8h]
  unsigned int v17; // [rsp+48h] [rbp-D0h]
  _QWORD v18[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v19[128]; // [rsp+60h] [rbp-B8h] BYREF
  int v20; // [rsp+E0h] [rbp-38h]
  int v21; // [rsp+E4h] [rbp-34h]
  unsigned int v22; // [rsp+F0h] [rbp-28h]

  v21 = 2;
  v20 = 26;
  v18[0] = &CoreMessagingK::SendHost::s_Vtbl;
  v3 = (const unsigned __int8 **)&off_14024BDB0;
  v4 = 0;
  for ( i = 29; i; --i )
  {
    v6 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
           (CoreMessaging::Calling::SendProcessor *)v19,
           (struct IMessageCallSendHost *)v18,
           0,
           0,
           *v3,
           0LL,
           1,
           0x200u,
           v16,
           v17);
    v7 = (unsigned int)v6;
    if ( v6 < 0 )
      goto LABEL_8;
    if ( v22 > v4 )
      v4 = v22;
    ++v3;
  }
  v7 = 0LL;
LABEL_8:
  v8 = 0;
  if ( (int)v7 < 0 )
    v8 = v7;
  if ( v8 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v8, 0LL);
  if ( v4 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v4, 0LL);
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v7, a2, a3);
  v20 = 26;
  v10 = 35;
  v11 = UserCoreMessagingSessionState;
  v21 = 2;
  v12 = (const unsigned __int8 **)&off_14024BEA0;
  *(_WORD *)(UserCoreMessagingSessionState + 48) = v4;
  v13 = 0;
  while ( v10 )
  {
    v14 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
            (CoreMessaging::Calling::SendProcessor *)v19,
            (struct IMessageCallSendHost *)v18,
            0,
            0,
            *v12,
            0LL,
            1,
            0x200u,
            v16,
            v17);
    if ( v14 < 0 )
      goto LABEL_19;
    if ( v22 > v13 )
      v13 = v22;
    --v10;
    ++v12;
  }
  v14 = 0;
LABEL_19:
  v15 = 0;
  if ( v14 < 0 )
    v15 = v14;
  if ( v15 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v15, 0LL);
  if ( v13 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v13, 0LL);
  *(_WORD *)(v11 + 50) = v13;
}
