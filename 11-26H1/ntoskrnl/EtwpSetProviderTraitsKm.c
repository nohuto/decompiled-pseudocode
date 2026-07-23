/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x140918EBC
 * Callers:
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpEventWriteRegistrationStatus @ 0x14082B850 (EtwpEventWriteRegistrationStatus.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v3; // ax
  unsigned int v5; // esi
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PRTL_BALANCED_NODE Node; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  v5 = a3;
  v15 = 0;
  if ( (v3 & 8) != 0 || (v3 & 1) == 0 )
  {
    v9 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 112) )
  {
    v9 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = (_RTL_BALANCED_NODE *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 28), Src, v5);
      v9 = EtwpSetProviderTraitsCommon(
             0,
             0,
             (int)&v15,
             a1,
             v8,
             v5,
             (PKGUARDED_MUTEX)&stru_140F03830.SchedulerApcFill5[40],
             (PRTL_RB_TREE)&stru_140F03830.SuspendEvent.Header.WaitListHead.Blink);
      if ( !v9 )
        return v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_SET_TRAITS_FAILED) )
  {
    LODWORD(Node) = v9;
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, (__int64)Node);
  }
  return v9;
}
