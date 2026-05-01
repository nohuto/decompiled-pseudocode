/*
 * XREFs of ?Scroll@CScrollViewer@@UEAAXI@Z @ 0x1804D9180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::Scroll(CScrollViewer *this, int a2)
{
  CScrollViewer *v2; // rdi
  int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v2 = (CScrollViewer *)((char *)this - 208);
  v3 = *((_DWORD *)this + 12);
  v4 = a2 - 1;
  if ( !v4 )
    goto LABEL_6;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_5:
    v3 -= (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_6:
    v3 += (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
    goto LABEL_7;
  }
  if ( v6 == 1 )
    goto LABEL_5;
LABEL_7:
  CScrollViewer::_ApplyScroll(v2, v3, 0);
}
