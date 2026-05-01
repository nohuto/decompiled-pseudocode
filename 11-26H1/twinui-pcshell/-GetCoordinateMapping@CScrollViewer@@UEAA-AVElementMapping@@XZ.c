/*
 * XREFs of ?GetCoordinateMapping@CScrollViewer@@UEAA?AVElementMapping@@XZ @ 0x1804D8B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CScrollViewer::GetCoordinateMapping(__int64 a1, _QWORD *a2)
{
  char v4; // al
  int v5; // ecx
  bool v6; // zf
  int v7; // eax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 208) + 96LL))(a1 + 208);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = v4 == 0;
  v7 = *(_DWORD *)(a1 + 60);
  if ( v6 )
    v7 += *(_DWORD *)(a1 + 256);
  else
    v5 += *(_DWORD *)(a1 + 256);
  *a2 = __PAIR64__(-v7, -v5);
  return a2;
}
