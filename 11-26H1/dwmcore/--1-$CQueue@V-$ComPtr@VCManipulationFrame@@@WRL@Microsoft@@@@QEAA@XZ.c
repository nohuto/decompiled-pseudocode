/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18020A8E4
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1802B9F40 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 3);
  while ( 1 )
  {
    v3 = 0LL;
    v6 = 0LL;
    EnterCriticalSection(v2);
    v4 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
      __fastfail(3u);
    *a1 = v5;
    *(_QWORD *)(v5 + 8) = a1;
    if ( v4 != a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v6, v4 + 2);
      if ( v4 )
      {
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v4 + 2);
        operator delete(v4, 0x18uLL);
      }
      --*((_DWORD *)a1 + 4);
      v3 = v6;
    }
    LeaveCriticalSection(v2);
    if ( !v3 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  DeleteCriticalSection(v2);
}
