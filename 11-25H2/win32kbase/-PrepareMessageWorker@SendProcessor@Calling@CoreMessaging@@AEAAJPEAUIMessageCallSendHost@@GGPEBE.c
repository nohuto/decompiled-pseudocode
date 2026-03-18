/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1400FE020
 * Callers:
 *     CoreUICallSendVaList @ 0x1400FD958 (CoreUICallSendVaList.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400FDE48 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 * Callees:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1400FE190 (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 *     ?NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x140242BD8 (-NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsg.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        __int16 a3,
        __int16 a4,
        const unsigned __int8 *a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  struct MsgCallState *v8; // rdi
  int v9; // r10d
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int i; // eax
  _DWORD *v14; // r14
  _BYTE *v16; // rax

  v8 = (CoreMessaging::Calling::SendProcessor *)((char *)this + 120);
  *((_DWORD *)this + 31) = -1;
  v9 = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = a5;
  *((_QWORD *)this + 17) = a2;
  *((_WORD *)this + 74) = a3;
  *((_WORD *)this + 75) = a4;
  v11 = *a5;
  *(_QWORD *)this = a5 + 1;
  *((_DWORD *)this + 20) = v11;
  if ( (unsigned int)v11 <= 0x10 && (a7 || !(_DWORD)v11 || a6) )
  {
    *((_DWORD *)this + 31) = 0;
    v12 = 8;
    *((_QWORD *)this + 1) = a5 + 1;
    for ( i = 0; i < *((_DWORD *)this + 20); i = *((_DWORD *)this + 31) )
    {
      v14 = (_DWORD *)((char *)this + 84);
      v9 = CoreMessaging::Calling::SendProcessor::ReadParameterSize(this, &a6, a7, a8, 0, 0, (unsigned int *)this + 21);
      if ( v9 < 0 )
        goto LABEL_9;
      *((_DWORD *)this + *((unsigned int *)this + 31) + 4) = *v14;
      v11 = (unsigned int)*v14;
      if ( (unsigned int)v11 > 0xFFFFFFFC
        || (v11 = ((_DWORD)v11 + 3) & 0xFFFFFFFC, (int)v11 + 4 < (unsigned int)v11)
        || v12 + (_DWORD)v11 + 4 < v12 )
      {
        *(_DWORD *)v8 = 7;
        goto LABEL_9;
      }
      ++*((_DWORD *)this + 31);
      v12 += v11 + 4;
    }
    v16 = (_BYTE *)*((_QWORD *)this + 1);
    LOBYTE(v11) = *v16;
    *((_QWORD *)this + 1) = v16 + 1;
    if ( (_BYTE)v11 )
    {
      *(_DWORD *)v8 = 203;
    }
    else
    {
      *((_DWORD *)this + 36) = v12;
      v9 = 0;
    }
  }
  else
  {
    *(_DWORD *)v8 = 204;
  }
LABEL_9:
  if ( *(_DWORD *)v8 )
    return (unsigned int)CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
                           (CoreMessaging::Calling::SendProcessor *)v11,
                           *((struct IMessageCallSendHost **)this + 17),
                           v8);
  return (unsigned int)v9;
}
