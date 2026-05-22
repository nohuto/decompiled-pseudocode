/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1801116D0
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x18009960C (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x180112D50 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

void __fastcall AlpcPort::Disconnect(AlpcPort *this)
{
  void **v1; // rdi
  _QWORD *v3; // r14
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  v1 = (void **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    if ( (*((__int16 *)this + 30) & 0xFFFF00FF) == 0xA )
      AlpcPort::RejectClientConnection(this);
    NtAlpcDisconnectPort(*v1, 0LL);
    v3 = (_QWORD *)((char *)this + 424);
    while ( 1 )
    {
      v5 = 368LL;
      v4 = 0LL;
      *(_OWORD *)((char *)this + 56) = 0LL;
      *(_OWORD *)((char *)this + 72) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
      *v3 = 0LL;
      *((_WORD *)this + 29) = 40;
      *(_DWORD *)v3 = 1610612736;
      if ( (unsigned int)NtAlpcSendWaitReceivePort(*v1, 0LL, 0LL, 0LL, (char *)this + 56, &v5, (char *)this + 424, &v4) )
        break;
      if ( (*((_WORD *)this + 30) & 0x2000) != 0 )
        AlpcMessage::Cancel((AlpcPort *)((char *)this + 56), *v1);
    }
    SipcWin32Handle::Reset(v1);
  }
  SipcPort::Disconnect(this);
}
