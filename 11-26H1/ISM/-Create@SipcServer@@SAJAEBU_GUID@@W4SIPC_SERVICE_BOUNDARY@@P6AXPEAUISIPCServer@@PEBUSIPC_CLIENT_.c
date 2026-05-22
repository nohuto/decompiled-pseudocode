/*
 * XREFs of ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x18005E1E4
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x18005D6B4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180060524 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18007DCB0 (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z4@Z @ 0x180094E20 (--0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INF.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?Release@?$SipcObjectBase@UISIPCServer@@@@UEAAKXZ @ 0x180112E70 (-Release@-$SipcObjectBase@UISIPCServer@@@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcServer::Create(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int ServerPort; // edi
  void *v14; // rax

  *a6 = 0LL;
  if ( !memcmp_0(&xmmword_180201748, &unk_180200998, 0x10uLL) )
    return 2147942487LL;
  v7 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
    return 2147942414LL;
  v8 = SipcServer::SipcServer(v7);
  v12 = v8;
  if ( !v8 )
    return 2147942414LL;
  ServerPort = AlpcPort::CreateServerPort(v10, v9, v11, v8 + 56);
  if ( ServerPort < 0
    || (ServerPort = AggregateWaitHandle::Initialize((AggregateWaitHandle *)(v12 + 64)), ServerPort < 0)
    || (v14 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 56) + 40LL))(*(_QWORD *)(v12 + 56)),
        ServerPort = AggregateWaitHandle::AddHandle((AggregateWaitHandle *)(v12 + 64), v14),
        ServerPort < 0) )
  {
    SipcObjectBase<ISIPCServer>::Release(v12);
    return (unsigned int)ServerPort;
  }
  else
  {
    *a6 = v12;
    return 0LL;
  }
}
