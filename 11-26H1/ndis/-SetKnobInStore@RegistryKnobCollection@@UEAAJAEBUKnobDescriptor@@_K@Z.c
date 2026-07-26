/*
 * XREFs of ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140150340
 * Callers:
 *     <none>
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x140056840 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140138260 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z @ 0x14014A278 (-SetValueUlong64@KRegKey@@QEAAJPEB_W_K@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x140163A60 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::SetKnobInStore(
        RegistryKnobCollection *this,
        const struct KnobDescriptor *a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  NTSTATUS v8; // eax
  wchar_t *Name; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v4 = 0;
  v11 = 0;
  v10 = 0LL;
  v6 = KnobCollection::ValidateKnobValue(this, (unsigned __int64 *)&v12, a2);
  if ( v6 )
  {
    KnobTransaction::~KnobTransaction((KnobTransaction *)&v10);
    return v6;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(RegistryKnobCollection *, __int64, __int128 *))(*(_QWORD *)this + 8LL))(
           this,
           2LL,
           &v10);
    if ( v8
      || ((Name = (wchar_t *)a2->Name, (a2->Flags & 4) == 0)
        ? (v8 = KRegKey::SetValueUlong((KRegKey *)&v10, Name, v12))
        : (v8 = KRegKey::SetValueUlong64((KRegKey *)&v10, Name, v12)),
          v8) )
    {
      v4 = v8;
    }
    KnobTransaction::~KnobTransaction((KnobTransaction *)&v10);
    return v4;
  }
}
