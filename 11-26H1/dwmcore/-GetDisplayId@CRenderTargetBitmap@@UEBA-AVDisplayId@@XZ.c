/*
 * XREFs of ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ @ 0x1801A7580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  else
    *a2 = -2;
  return a2;
}
