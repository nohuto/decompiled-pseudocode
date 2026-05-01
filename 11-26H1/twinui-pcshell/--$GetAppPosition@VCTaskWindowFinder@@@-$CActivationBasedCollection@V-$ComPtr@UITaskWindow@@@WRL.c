/*
 * XREFs of ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1801CE4F0
 * Callers:
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802227C0 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v7; // ebx
  unsigned __int64 i; // rdi
  __int64 v9; // r15
  __int64 *v10; // rcx
  __int64 v11; // rax

  v7 = 0;
  *a4 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(a1 + 16) )
      return (unsigned int)-2147319765;
    if ( *((_BYTE *)a2 + 16) )
      break;
    v10 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8 * i);
    v11 = *v10;
    if ( *a2 )
    {
      v9 = *a2;
      if ( (*(__int64 (**)(void))(v11 + 32))() == v9 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v11 + 48))(v10, a2[1]) )
    {
      break;
    }
  }
  *a4 = i;
  return v7;
}
