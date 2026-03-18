/*
 * XREFs of ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801B3120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CAtlasBitmapResource::GetSize(CAtlasBitmapResource *this, _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 32LL))(*(_QWORD *)(v2 + 8) + 8LL);
  }
  else
  {
    *a2 = 1;
    a2[1] = 1;
  }
  return (struct D2D_SIZE_U)a2;
}
