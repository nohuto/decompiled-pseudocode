/*
 * XREFs of ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B8D70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x1800B70B4 (-MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCManager::SetConvertGraspToSystemGesture(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        char a3,
        int a4)
{
  ISMTracing *v6; // rcx
  struct MPCHolographicInputManager *Instance; // rax
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  __int64 v10; // rdx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(v6, a3, a4);
  }
  Instance = MPCHolographicInputManager::GetInstance();
  v8 = (_QWORD *)*((_QWORD *)Instance + 414);
  for ( i = (_QWORD *)*((_QWORD *)Instance + 413); i != v8; ++i )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 312LL))(*i) == a4 )
    {
      LOBYTE(v10) = a3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*i + 376LL))(*i, v10);
    }
  }
  return 0LL;
}
