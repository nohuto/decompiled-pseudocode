/*
 * XREFs of ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x140242D64
 * Callers:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x140069B64 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x140069EC4 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400FDAF8 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400FE190 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x140242AAC (-MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z.c)
 *     ?UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z @ 0x140242C58 (-UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessaging::Calling::FailFast::Error(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 UserCoreMessagingSessionState; // rax

  v3 = BugCheckParameter2;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(BugCheckParameter1, BugCheckParameter2, a3);
  *(_QWORD *)(UserCoreMessagingSessionState + 80) = BugCheckParameter1;
  *(_DWORD *)(UserCoreMessagingSessionState + 88) = v3;
  KeBugCheckEx(0x173u, BugCheckParameter1, v3, 0LL, 0LL);
}
