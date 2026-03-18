/*
 * XREFs of ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174E60
 * Callers:
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJPEAVCDrawingContext@@@Z @ 0x1802AAB40 (-RecordUse@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WB.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EAAJPEAVCDrawingContext@@@Z @ 0x1802ABF40 (-RecordUse@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@E.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJPEAVCDrawingContext@@@Z @ 0x1802AF840 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  int v10; // ecx
  int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 16LL))(a2 + 16);
  v5 = *a1;
  *(_QWORD *)v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, int *))(v5 + 112))(a1, v4, v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\bitmaprealization.cpp",
      (const char *)(unsigned int)v6);
    if ( *(_QWORD *)v11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 16LL))(*(_QWORD *)v11);
    return v7;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, int *))(*a1 + 56))(a1, &v12);
    if ( ((v12 + 3) & 0xFFFFFFFD) != 0 )
    {
      v10 = *(_DWORD *)(a2 + 56);
      if ( v12 == v10 || v10 == -3 )
        *(_BYTE *)(a2 + 7981) = 1;
      else
        *(_BYTE *)(a2 + 7984) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 64))(a1) )
    {
      if ( *((_BYTE *)g_pComposition + 6458) )
        *(_BYTE *)(a2 + 7983) = 1;
      else
        *(_BYTE *)(a2 + 7980) = 1;
    }
    v8 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 24LL))(
                       *(_QWORD *)v11 + 8LL,
                       v13)
                   + 8);
    if ( v8 == 1 )
    {
LABEL_12:
      *(_BYTE *)(a2 + 7982) = 1;
    }
    else
    {
      switch ( v8 )
      {
        case 3:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 21:
        case 23:
        case 24:
        case 25:
          goto LABEL_12;
        default:
          break;
      }
    }
    if ( *(_QWORD *)v11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 16LL))(*(_QWORD *)v11);
    return 0LL;
  }
}
