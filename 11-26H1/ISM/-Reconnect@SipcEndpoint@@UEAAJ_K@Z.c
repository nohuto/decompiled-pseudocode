/*
 * XREFs of ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x180112AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180093550 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??0SipcPrivateNamespace@@QEAA@XZ @ 0x18010F714 (--0SipcPrivateNamespace@@QEAA@XZ.c)
 *     ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010F914 (--1SipcPrivateNamespace@@QEAA@XZ.c)
 *     ?Create@SipcPrivateNamespace@@QEAAJXZ @ 0x180110910 (-Create@SipcPrivateNamespace@@QEAAJXZ.c)
 *     ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x180110AFC (-CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x180110D1C (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 *     ?CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z @ 0x1801111B4 (-CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z.c)
 *     ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x1801115F8 (-DecreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 *     ?DisableSectionEvents@SipcPort@@QEAAXXZ @ 0x180111634 (-DisableSectionEvents@SipcPort@@QEAAXXZ.c)
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x180112030 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 *     ?PopFront@?$NtList@VSipcSection@@@@QEAAPEAVSipcSection@@XZ @ 0x180112758 (-PopFront@-$NtList@VSipcSection@@@@QEAAPEAVSipcSection@@XZ.c)
 *     ?PushBack@?$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z @ 0x1801128B0 (-PushBack@-$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcEndpoint::Reconnect(SipcEndpoint *this, unsigned __int64 a2)
{
  void *v5; // rbx
  void *v6; // rdi
  int v7; // esi
  char v8; // al
  int ProxyEvents; // eax
  unsigned __int16 v10; // ax
  LARGE_INTEGER *v11; // rax
  __int64 v12; // rcx
  LARGE_INTEGER v13; // rsi
  __int16 v14; // ax
  SipcPort *v15; // r15
  SipcPort *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r13
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  void *v20; // rax
  void *v21; // rax
  DWORD v22; // [rsp+50h] [rbp-B0h] BYREF
  void *v23; // [rsp+58h] [rbp-A8h] BYREF
  void *v24; // [rsp+60h] [rbp-A0h] BYREF
  SipcPort *v25; // [rsp+68h] [rbp-98h] BYREF
  void *v26[10]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27[9]; // [rsp+C4h] [rbp-3Ch] BYREF

  if ( *((_BYTE *)this + 48) == 1 )
    return 2147549183LL;
  if ( *((_BYTE *)this + 60) )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  SipcPrivateNamespace::SipcPrivateNamespace((SipcPrivateNamespace *)v26);
  v7 = SipcPrivateNamespace::Create((SipcPrivateNamespace *)v26);
  if ( v7 < 0 )
    goto LABEL_12;
  v8 = *((_BYTE *)this + 48);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
      ProxyEvents = SipcSignalFactory::CreateProxyEvents(v10, (const struct SipcPrivateNamespace *)v26);
      if ( ProxyEvents < 0 )
        goto LABEL_11;
    }
  }
  else
  {
    ProxyEvents = SipcSignalFactory::CreateClientEvents((const struct SipcPrivateNamespace *)v26, &v24, &v23);
    if ( ProxyEvents < 0 )
    {
LABEL_11:
      v7 = ProxyEvents;
LABEL_12:
      SipcPrivateNamespace::~SipcPrivateNamespace(v26);
      SipcWin32Handle::Reset(&v23);
      SipcWin32Handle::Reset(&v24);
      return (unsigned int)v7;
    }
    v5 = v24;
    v6 = v23;
  }
  v11 = (LARGE_INTEGER *)*((_QWORD *)this + 5);
  v12 = *((_QWORD *)this + 2);
  v25 = 0LL;
  v22 = 0;
  v13 = v11[4];
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  ProxyEvents = AlpcPort::CreateClientPort(
                  (int *)(*((_QWORD *)this + 5) + 8LL),
                  *(_DWORD *)(*((_QWORD *)this + 5) + 24LL),
                  *(_BYTE *)(*((_QWORD *)this + 5) + 28LL),
                  *(_BYTE *)(*((_QWORD *)this + 5) + 29LL),
                  v27,
                  a2,
                  v14,
                  v13,
                  &v22,
                  &v25);
  if ( ProxyEvents < 0 )
    goto LABEL_11;
  v15 = (SipcPort *)*((_QWORD *)this + 2);
  v16 = v25;
  if ( !v15 )
    goto LABEL_23;
  while ( *((_DWORD *)v15 + 6) )
  {
    v17 = NtList<SipcSection>::PopFront((_DWORD *)v15 + 2);
    v18 = v17;
    if ( *(_DWORD *)(v17 + 88) == 1 )
    {
      *(_DWORD *)(v17 + 88) = 2;
    }
    else
    {
      if ( *(_DWORD *)(v17 + 88) != 2 )
        goto LABEL_20;
      SipcPort::DecreaseSectionEventCount(v15);
    }
    SipcPort::IncreaseSectionEventCount(v16);
LABEL_20:
    NtList<SipcSection>::PushBack((__int64)v16 + 8, v18);
  }
  v19 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v19 )
    (**v19)(v19, 1LL);
LABEL_23:
  *((_QWORD *)this + 2) = v16;
  v20 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v5;
  v24 = v20;
  v21 = (void *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v6;
  v23 = v21;
  LODWORD(v21) = v22;
  *((_BYTE *)this + 60) = 1;
  *((_DWORD *)this + 16) = (_DWORD)v21;
  if ( (_DWORD)v21 )
    SipcPort::DisableSectionEvents(v16);
  (*(void (__fastcall **)(_QWORD, SipcEndpoint *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), this);
  SipcPrivateNamespace::~SipcPrivateNamespace(v26);
  SipcWin32Handle::Reset(&v23);
  SipcWin32Handle::Reset(&v24);
  return 0LL;
}
