/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140048EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx

  if ( (a3 & 0x1C) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 48) )
      {
        HMAssignmentUnlock(v4 + 48, a2);
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
      }
      v5 = (_QWORD *)(*((_QWORD *)this + 2) + 56LL);
      if ( *v5 )
      {
        HMAssignmentUnlock(v5, a2);
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  return CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(this);
}
