/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180112AF8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x180112DE4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        __int64 *a2,
        char a3,
        _DWORD *a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 **v11; // rax

  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( a3 )
  {
    v8 = *(__int64 **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v9 = *v8;
      if ( *(__int64 **)(*v8 + 8) == v8 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(v9 + 8) = a1;
        goto LABEL_5;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  v8 = *(__int64 **)(a1 + 8);
  if ( *v8 != a1 )
    goto LABEL_15;
  v11 = (__int64 **)v8[1];
  if ( *v11 != v8 )
    goto LABEL_15;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = (__int64 *)a1;
LABEL_5:
  if ( v8 != (__int64 *)a1 )
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v8 + 2);
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v8 + 2);
      operator delete(v8, 0x18uLL);
    }
    --*(_DWORD *)(a1 + 16);
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return a2;
}
