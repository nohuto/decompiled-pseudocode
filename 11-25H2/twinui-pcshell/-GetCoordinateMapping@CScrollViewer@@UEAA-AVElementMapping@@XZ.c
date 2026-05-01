/*
 * XREFs of ?GetCoordinateMapping@CScrollViewer@@UEAA?AVElementMapping@@XZ @ 0x1804C6AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CScrollViewer::GetCoordinateMapping(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 208) + 96LL))(a1 + 208) )
  {
    LODWORD(v6) = -(*(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 256));
    v4 = *(_DWORD *)(a1 + 60);
  }
  else
  {
    LODWORD(v6) = -*(_DWORD *)(a1 + 56);
    v4 = *(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 256);
  }
  HIDWORD(v6) = -v4;
  *a2 = v6;
  return a2;
}
