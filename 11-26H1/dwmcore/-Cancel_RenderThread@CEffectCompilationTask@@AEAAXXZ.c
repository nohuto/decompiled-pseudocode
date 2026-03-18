/*
 * XREFs of ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180245118
 * Callers:
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18022EEBC (--1CEffectCompilationService@@EEAA@XZ.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180245048 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CEffectCompilationTask::Cancel_RenderThread(CEffectCompilationTask *this)
{
  struct _TP_WORK *v2; // rcx
  CEffectCompilationService *v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = (CEffectCompilationService *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 18) = 1;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v3, this, 1);
}
