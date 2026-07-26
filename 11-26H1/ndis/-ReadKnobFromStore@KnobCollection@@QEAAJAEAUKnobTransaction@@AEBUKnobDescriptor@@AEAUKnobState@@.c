/*
 * XREFs of ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1401653F0
 * Callers:
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x14014FB2C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140165340 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x140068600 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KnobCollection::ReadKnobFromStore(
        KnobCollection *this,
        struct KnobTransaction *a2,
        struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  unsigned __int64 CurrentValue; // rax
  KnobDescriptor *v9; // rcx
  __int64 v10; // r9
  int v11; // eax
  __int64 result; // rax
  unsigned __int64 v13; // rax

  CurrentValue = KnobDescriptor::GetCurrentValue(a3);
  if ( *(_QWORD *)v10 == CurrentValue )
  {
    v11 = *(_DWORD *)(v10 + 12);
  }
  else
  {
    v13 = KnobDescriptor::GetCurrentValue(v9);
    *(_QWORD *)v10 = v13;
    v11 = 0;
  }
  *(_DWORD *)(v10 + 16) = v11;
  result = (*(__int64 (__fastcall **)(KnobCollection *, struct KnobTransaction *))(*(_QWORD *)this + 32LL))(this, a2);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    result = (*(__int64 (__fastcall **)(KnobCollection *, char *, struct KnobDescriptor *, struct KnobState *))(*(_QWORD *)this + 32LL))(
               this,
               (char *)a2 + 8,
               a3,
               a4);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != -1073741275 )
        return result;
      *(_QWORD *)a4 = a3->DefaultValue;
      *((_DWORD *)a4 + 4) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 4) = 2;
    }
  }
  else
  {
    *((_DWORD *)a4 + 4) = 3;
  }
  return 0LL;
}
