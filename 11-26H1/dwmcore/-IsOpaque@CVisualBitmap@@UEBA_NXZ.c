/*
 * XREFs of ?IsOpaque@CVisualBitmap@@UEBA_NXZ @ 0x1801D9E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisualBitmap::IsOpaque(CVisualBitmap *this)
{
  __int64 v1; // rcx
  int v2; // eax
  _BYTE v4[4]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+24h] [rbp-24h]

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 72) + 24LL))(v1 + 72, v4);
    v2 = v5;
  }
  else
  {
    v2 = 1;
  }
  return v2 == 3;
}
