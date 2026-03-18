/*
 * XREFs of ?GetPixelColor@CSectionBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1801AD140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CSectionBitmapRealization::GetPixelColor(
        CSectionBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[16]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  if ( v4 )
  {
    v7 = 0LL;
    if ( (**v4)(v4, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v7) >= 0 )
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, _BYTE *, const struct D2D_POINT_2U *))(*(_QWORD *)v7 + 24LL))(
                                                                         v7,
                                                                         v8,
                                                                         a3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return retstr;
}
