/*
 * XREFs of CoreUICallSendVaList @ 0x1400FD958
 * Callers:
 *     CoreUICallSend @ 0x1400FD920 (CoreUICallSend.c)
 * Callees:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400FDAF8 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400FE020 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x140242BD8 (-NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsg.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreUICallSendVaList(
        struct IMessageCallSendHost *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 *a6,
        char *a7)
{
  void *v9; // r9
  unsigned int v12; // edi
  int v13; // ebx
  unsigned int v15; // [rsp+40h] [rbp-C0h]
  unsigned int v16; // [rsp+48h] [rbp-B8h]
  void *v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[120]; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+D8h] [rbp-28h] BYREF
  int v20; // [rsp+E0h] [rbp-20h]
  int v21; // [rsp+E4h] [rbp-1Ch]
  struct IMessageCallSendHost *v22; // [rsp+E8h] [rbp-18h]
  unsigned int v23; // [rsp+F0h] [rbp-10h]

  v9 = 0LL;
  v20 = 26;
  v21 = 2;
  v17 = 0LL;
  if ( a1 && a6 )
  {
    v12 = 0;
    v13 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
            (CoreMessaging::Calling::SendProcessor *)v18,
            a1,
            a4,
            a5,
            a6,
            a7,
            0,
            0,
            v15,
            v16);
    if ( v13 >= 0 )
    {
      if ( v23 >> (v21 + v20) )
      {
        v19 = 4;
        v13 = CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
                (CoreMessaging::Calling::SendProcessor *)(unsigned int)(v21 + v20),
                v22,
                (struct MsgCallState *)&v19);
      }
      else
      {
        v12 = v23;
        v23 >>= v21;
        v13 = 0;
      }
    }
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)a1 + 24LL))(
              a1,
              a2,
              a3,
              v12,
              &v17);
      if ( v13 >= 0 )
      {
        v13 = CoreMessaging::Calling::SendProcessor::MarshalSend(
                (CoreMessaging::Calling::SendProcessor *)v18,
                v17,
                v12,
                a7);
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, void *, unsigned int))(*(_QWORD *)a1 + 32LL))(
                  a1,
                  a2,
                  a3,
                  v17,
                  v12);
          if ( v13 >= 0 )
            return 0;
        }
      }
    }
    v9 = v17;
  }
  else
  {
    v13 = -2147024809;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, a3);
  return (unsigned int)v13;
}
