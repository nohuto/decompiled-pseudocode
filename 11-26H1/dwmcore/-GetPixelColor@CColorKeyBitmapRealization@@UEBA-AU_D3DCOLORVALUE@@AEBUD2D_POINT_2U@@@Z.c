/*
 * XREFs of ?GetPixelColor@CColorKeyBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1801CA220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CColorKeyBitmapRealization::GetPixelColor(
        CColorKeyBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  int (__fastcall ***v5)(__int64, GUID *, __int64 *); // rbx
  int (__fastcall **v6)(__int64, GUID *, __int64 *); // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)&retstr->r = 0LL;
  v5 = *(int (__fastcall ****)(__int64, GUID *, __int64 *))(*((_QWORD *)this + 1) + 24LL);
  if ( v5 )
  {
    ((void (__fastcall *)(_QWORD))(*v5)[1])(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
    v6 = *v5;
    v8 = 0LL;
    if ( (*v6)((__int64)v5, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v8) >= 0 )
      *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(*(__int64 (__fastcall **)(__int64, _BYTE *, const struct D2D_POINT_2U *))(*(_QWORD *)v8 + 24LL))(
                                                                         v8,
                                                                         v9,
                                                                         a3);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v5)[2])(v5);
  }
  return retstr;
}
