/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14002C24C
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14002B900 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     ??0DispBrokerClient@DispBroker@@QEAA@XZ @ 0x14019BAA4 (--0DispBrokerClient@DispBroker@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v2; // ebx
  int (*v3)(void); // rax
  __int64 (*v4)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3904LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v4 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3912LL);
      if ( v4 )
        v2 = v4();
    }
  }
  *(_DWORD *)this = v2;
}
