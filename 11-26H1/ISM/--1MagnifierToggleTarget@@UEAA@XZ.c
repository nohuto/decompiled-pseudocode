/*
 * XREFs of ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801B1E00
 * Callers:
 *     ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801B1FA0 (--_EMagnifierGestureTarget@@UEAAPEAXI@Z.c)
 *     ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x1801B2020 (--_GMagnifierToggleTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierToggleTarget::~MagnifierToggleTarget(MagnifierToggleTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 8LL))(v3 + 16);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
