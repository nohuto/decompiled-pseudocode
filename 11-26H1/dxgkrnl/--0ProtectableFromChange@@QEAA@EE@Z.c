/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x14004B99C
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004B88C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??0?$Vector@_K@@QEAA@_K@Z @ 0x14004BA44 (--0-$Vector@_K@@QEAA@_K@Z.c)
 *     ??0?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAA@_K@Z @ 0x14004BAE0 (--0-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  unsigned __int8 (__fastcall ***v1)(_QWORD); // rbx
  unsigned __int8 (__fastcall **v3)(_QWORD); // rax
  int v5; // eax

  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 2) = 0;
  v1 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 24);
  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_WORD *)this + 11) = 0;
  Vector<ProtectableFromChange::ModifyingActionConstraints>::Vector<ProtectableFromChange::ModifyingActionConstraints>((char *)this + 24);
  Vector<unsigned __int64>::Vector<unsigned __int64>((char *)this + 64);
  v3 = *v1;
  *((_DWORD *)this + 4) = 1;
  if ( (*v3)(v1) && (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v5 = *((_DWORD *)this + 8);
    if ( v5 >= 0 )
      v5 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 2) = v5;
  }
  return this;
}
