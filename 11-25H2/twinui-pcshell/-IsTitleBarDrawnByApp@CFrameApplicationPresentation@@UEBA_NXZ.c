/*
 * XREFs of ?IsTitleBarDrawnByApp@CFrameApplicationPresentation@@UEBA_NXZ @ 0x180228BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CFrameApplicationPresentation::IsTitleBarDrawnByApp(CFrameApplicationPresentation *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 15);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 128LL))(v1, &v4);
    return v4 != 0;
  }
  return v2;
}
