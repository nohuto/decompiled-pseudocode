/*
 * XREFs of ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021EB58
 * Callers:
 *     ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x14021EF10 (-sOnChildNotification@CIVChannel@@CAJPEAX@Z.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021ED8C (-Reconnect@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::OnChildNotification(CIVChannel *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx

  if ( isRootPartition((__int64)this, (__int64)a2) )
  {
    v4 = a2[2];
    v5 = (unsigned int)a2[3];
    if ( v4 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 10);
      (*((void (__fastcall **)(_QWORD, __int64))this + 2))(*(_QWORD *)this, v5);
    }
    else if ( v4 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 10);
    }
    return 0LL;
  }
  if ( a2[2] != 2 )
    return 0LL;
  return CIVChannel::Reconnect(this);
}
