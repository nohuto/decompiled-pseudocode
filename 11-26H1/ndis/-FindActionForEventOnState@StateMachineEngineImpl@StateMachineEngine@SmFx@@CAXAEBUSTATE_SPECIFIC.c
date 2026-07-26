/*
 * XREFs of ?FindActionForEventOnState@StateMachineEngineImpl@StateMachineEngine@SmFx@@CAXAEBUSTATE_SPECIFICATION@3@GPEAUEVENT_ACTION@123@@Z @ 0x14005FA60
 * Callers:
 *     ?FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@Z @ 0x14005F8E0 (-FindActionForEvent@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXGPEAUEVENT_ACTION@123@@.c)
 * Callees:
 *     <none>
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::FindActionForEventOnState(
        const struct SmFx::STATE_SPECIFICATION *a1,
        __int16 a2,
        struct SmFx::StateMachineEngine::StateMachineEngineImpl::EVENT_ACTION *a3)
{
  __int64 v3; // rsi
  __int16 v4; // bx
  __int64 v6; // r11
  const void *const *slots; // rax
  unsigned int i; // ecx
  _WORD *v10; // rdx
  unsigned int j; // edx
  _WORD *v12; // rcx
  unsigned int k; // ecx
  __int16 v14; // dx
  _WORD *v15; // rdx
  __int16 v16; // ax

  *((_BYTE *)a3 + 6) = -1;
  v3 = 0LL;
  v4 = *(_WORD *)a1->activeSlots;
  v6 = v4 & 1;
  if ( (v4 & 2) != 0 )
  {
    slots = a1->slots;
    for ( i = 0; ; ++i )
    {
      v10 = (char *)slots[v6] + 4 * i;
      if ( !*v10 )
      {
        v6 = (unsigned int)(v6 + 1);
        goto LABEL_7;
      }
      if ( *v10 == a2 )
        break;
    }
    *(_DWORD *)a3 = 2;
    *((_QWORD *)a3 + 1) = v10;
  }
  else
  {
LABEL_7:
    if ( (v4 & 4) != 0 )
    {
      for ( j = 0; ; ++j )
      {
        v12 = (char *)a1->slots[v6] + 16 * j;
        if ( !*v12 )
          break;
        if ( *v12 == a2 )
        {
          *(_DWORD *)a3 = 3;
          *((_QWORD *)a3 + 1) = v12;
          return;
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    if ( (v4 & 8) != 0 )
    {
      for ( k = 0; ; ++k )
      {
        v14 = *((_WORD *)a1->slots[v6] + k);
        if ( !v14 )
          break;
        if ( v14 == a2 )
        {
          *(_DWORD *)a3 = 5;
          return;
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v15 = a1->slots[v6];
      while ( 1 )
      {
        v16 = v15[2 * v3];
        if ( !v16 )
          break;
        if ( v16 == a2 )
        {
          *(_DWORD *)a3 = 4;
          *((_QWORD *)a3 + 1) = &v15[2 * v3];
          return;
        }
        v3 = (unsigned int)(v3 + 1);
      }
    }
    *(_DWORD *)a3 = 1;
  }
}
