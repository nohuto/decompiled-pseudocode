/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x14007D9B0
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x14007CD30 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  __int64 (*v5)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 3456LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 3464LL);
      if ( v5 )
        v2 = v5();
    }
  }
  *(_DWORD *)this = v2;
}
