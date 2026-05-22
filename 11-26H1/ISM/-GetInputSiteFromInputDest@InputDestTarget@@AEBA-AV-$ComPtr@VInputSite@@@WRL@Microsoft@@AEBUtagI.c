/*
 * XREFs of ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180081B80
 * Callers:
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800F7474 (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x1800F76E0 (-IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180016EE0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18002AE40 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputDestTarget::GetInputSiteFromInputDest(__int64 a1, __int64 *a2, __int64 a3)
{
  struct InputSiteManager *InputSiteManager; // rax
  __int64 v6; // rsi
  char *InputSiteFromId; // rax
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v12 = a1;
  InputSiteManager = ISMStatics::GetInputSiteManager();
  v6 = (__int64)InputSiteManager;
  *a2 = 0LL;
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, (__int64)&v12, 0, v12);
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, InputSiteFromId);
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( !*a2 && (*(_BYTE *)a3 & 2) != 0 )
  {
    v9 = (char *)InputSiteManager::GetInputSiteFromId(v6, (__int64)&v12, 1u, *(unsigned int *)(a3 + 24));
    Microsoft::WRL::ComPtr<InputSite>::operator=(a2, v9);
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return a2;
}
