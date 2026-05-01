/*
 * XREFs of ??1LightweightPropertySet@@QEAA@XZ @ 0x1800FEB14
 * Callers:
 *     ??1UwpWindowWrapperBase@@QEAA@XZ @ 0x1800FD648 (--1UwpWindowWrapperBase@@QEAA@XZ.c)
 *     ??1WindowWrapperBase@@QEAA@XZ @ 0x180421120 (--1WindowWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LightweightPropertySet::~LightweightPropertySet(LPVOID *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rsi
  __int64 v4; // rcx

  v2 = (unsigned __int64 *)(this + 1);
  if ( *this )
  {
    for ( i = 0LL; i < *v2; ++i )
    {
      v4 = *((_QWORD *)*this + i);
      if ( v4 )
      {
        *((_QWORD *)*this + i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    CoTaskMemFree(*this);
    *this = 0LL;
  }
  *v2 = 0LL;
  this[3] = 0LL;
}
