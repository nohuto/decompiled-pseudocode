/*
 * XREFs of ??1GestureRegistration@ShellGesturesProcessor@@QEAA@XZ @ 0x18007680C
 * Callers:
 *     _ShellGesturesProcessor::RegisterGestureSource_::_1_::dtor$1 @ 0x1801D609A (_ShellGesturesProcessor--RegisterGestureSource_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ShellGesturesProcessor::GestureRegistration::~GestureRegistration(
        ShellGesturesProcessor::GestureRegistration *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
