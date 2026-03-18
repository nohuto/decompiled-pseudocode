/*
 * XREFs of ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x140435A30
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1401C7154 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__&DxgkSampleDisplayState_ @ 0x14005A994 (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3__-.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F8020 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 */

__int64 __fastcall DXGSESSIONDATA::SendCachedAsyncRefreshOrientation(DXGSESSIONDATA *this)
{
  char v2; // di
  __int64 v3; // rdx
  DXGSESSIONDATA *v5; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v6[24]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v7[96]; // [rsp+60h] [rbp-78h] BYREF

  v2 = 0;
  memset(v7, 0, sizeof(v7));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGSESSIONDATA *)((char *)this + 19040), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( *((_BYTE *)this + 19104) )
  {
    v5 = this;
    v2 = 1;
    InitDisplayBrokerMessage_DispBroker::AlpcDatagram_5___lambda_39dd1e7efdff86aa8f7625aa8d27b0c3___DxgkSampleDisplayState_(
      v7,
      v3,
      (__int64)&v5);
  }
  *((_BYTE *)this + 19104) = 0;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  if ( v2 )
    return DispBrokerClient::SendDisplayBrokerMessage(
             (DXGSESSIONDATA *)((char *)this + 18984),
             0x10000u,
             (struct _PORT_MESSAGE *)v7,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  else
    return 0LL;
}
