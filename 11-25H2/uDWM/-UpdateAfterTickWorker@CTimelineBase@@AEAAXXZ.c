/*
 * XREFs of ?UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ @ 0x180008E80
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180008BF0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180009F94 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTimelineBase::UpdateAfterTickWorker(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 8);
  v5 = 0LL;
  if ( v2 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 144LL))(v2, &v5) >= 0 )
  {
    v3 = v5;
    v4 = v5 == 0;
    *((_BYTE *)this + 72) = v5 == 0;
    if ( !v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v4 = *((_BYTE *)this + 72);
      v5 = 0LL;
    }
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 32LL))(
        *((_QWORD *)this + 8),
        (char *)this + 48);
      return;
    }
  }
  else
  {
    *((_BYTE *)this + 72) = 1;
  }
  CTimelineBase::JumpToFinalValue(this);
}
