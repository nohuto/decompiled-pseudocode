/*
 * XREFs of ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x18000877C
 * Callers:
 *     ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x1800084E0 (--_ECDWMDXGIAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWMDXGIAdapter::~CDWMDXGIAdapter(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  _QWORD *i; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = 0;
  for ( i = (_QWORD *)((char *)this + 352); v4 < *((_DWORD *)this + 94); ++v4 )
  {
    v6 = 312LL * v4;
    v7 = *(_QWORD *)(v6 + *i);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = *(_QWORD *)(*i + v6 + 8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CBitmapSourceArray::~CBitmapSourceArray((CDWMDXGIAdapter *)((char *)this + 352));
}
