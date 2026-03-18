/*
 * XREFs of ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1801BB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x180125F9C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1801BB728 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180245048 (--1CEffectCompilationTask@@QEAA@XZ.c)
 */

__int64 __fastcall CEffectCompilationTask::Release(CEffectCompilationTask *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 25);
  if ( !v2 )
  {
    if ( CEffectCompilationService::TryAddDeadTask(*((CEffectCompilationService **)this + 2), this) )
    {
      return (unsigned int)std::_Atomic_storage<unsigned int,4>::load((unsigned int *)this + 25);
    }
    else
    {
      CEffectCompilationTask::~CEffectCompilationTask(this);
      operator delete(this);
    }
  }
  return v2;
}
