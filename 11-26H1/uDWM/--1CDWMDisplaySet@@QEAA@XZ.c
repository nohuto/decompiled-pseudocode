/*
 * XREFs of ??1CDWMDisplaySet@@QEAA@XZ @ 0x18000845C
 * Callers:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800570E0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDWMDisplaySet::~CDWMDisplaySet(CDWMDisplaySet *this)
{
  int v2; // eax
  __int64 v3; // rbx
  CBitmapSourceArray *i; // rsi
  CDWMDisplay *v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 16) - 1;
  v3 = v2;
  for ( i = (CDWMDisplaySet *)((char *)this + 40); v3 >= 0; --v3 )
  {
    v5 = *(CDWMDisplay **)(*(_QWORD *)i + 8 * v3);
    if ( v5 )
    {
      CDWMDisplay::Release(v5);
      *(_QWORD *)(*(_QWORD *)i + 8 * v3) = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  CBitmapSourceArray::~CBitmapSourceArray(i);
}
