/*
 * XREFs of ?UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY@@MEAAJXZ @ 0x140213620
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x14020E740 (-Release@DXGVMBUSCHANNEL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::UnregisterAsSubscriber(__int64 this)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(this + 128);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(v1 + 72), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = this + 16;
  v4 = -this;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  DXGVMBUSCHANNEL::Release((DXGVMBUSCHANNEL *)v1);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return 0LL;
}
