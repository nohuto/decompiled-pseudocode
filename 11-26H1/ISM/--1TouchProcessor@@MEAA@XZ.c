/*
 * XREFs of ??1TouchProcessor@@MEAA@XZ @ 0x1801C9C98
 * Callers:
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x1801C9D10 (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchProcessor::~TouchProcessor(TouchProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &TouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &TouchProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &TouchProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  NonPointerProcessor::~NonPointerProcessor(this);
}
