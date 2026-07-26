/*
 * XREFs of ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1401502D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1KnobTransaction@@QEAA@XZ @ 0x140056840 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x14014A0E8 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall RegistryKnobCollection::ClearKnobInStore(
        RegistryKnobCollection *this,
        const struct KnobDescriptor *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  KRegKey v6[2]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v7 = 0;
  *(_OWORD *)&v6[0].m_ptr = 0LL;
  v4 = (*(__int64 (__fastcall **)(RegistryKnobCollection *, __int64, KRegKey *))(v2 + 8))(this, 2LL, v6);
  if ( !v4 )
    v4 = KRegKey::DeleteValue(v6, (wchar_t *)a2->Name);
  KnobTransaction::~KnobTransaction((KnobTransaction *)v6);
  return v4;
}
