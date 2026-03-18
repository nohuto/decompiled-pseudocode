/*
 * XREFs of ?CopyPixels@CMappedTexture@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B88A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMappedTexture::CopyPixels(CMappedTexture *this, const struct WICRect *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
  {
    v3 = -2003292412;
    v4 = 97LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\MappedTexture.h",
      (const char *)v3);
    return v3;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *))(*(_QWORD *)v2 + 48LL))(v2, a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 104LL;
    goto LABEL_5;
  }
  return v3;
}
