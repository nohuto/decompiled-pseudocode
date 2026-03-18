/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180197B5C
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801979A0 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180245118 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800F4F48 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_BYTE *)this + 240) )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 22) )
    {
      do
      {
        if ( *(struct CEffectCompilationTask **)(*((_QWORD *)this + 8) + 8 * v7) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 22) );
      if ( (unsigned int)v7 < *((_DWORD *)this + 22) )
      {
        v8 = *((unsigned int *)this + 50);
        if ( (unsigned int)v7 < (unsigned int)v8 )
        {
          if ( !a3 )
            goto LABEL_10;
        }
        else
        {
          v9 = *((_QWORD *)this + 8);
          v10 = *(_QWORD *)(v9 + 8 * v7);
          *(_QWORD *)(v9 + 8 * v7) = *(_QWORD *)(v9 + 8 * v8);
          *(_QWORD *)(v9 + 8LL * (unsigned int)v8) = v10;
          LODWORD(v7) = ++*((_DWORD *)this + 50);
          if ( !a3 )
          {
            *((_BYTE *)this + 242) = 1;
LABEL_10:
            SetEvent(*((HANDLE *)this + 7));
            goto LABEL_11;
          }
        }
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this + 8, v7);
        --*((_DWORD *)this + 50);
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  if ( v3 )
    LeaveCriticalSection(v3);
}
