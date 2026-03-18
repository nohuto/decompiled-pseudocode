/*
 * XREFs of ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1401D3E88
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1401D371C (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x1403270C8 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140327DC8 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

SURFFAKEOBJ *__fastcall SURFFAKEOBJ::SURFFAKEOBJ(SURFFAKEOBJ *this, HDEV a2, struct DHPDEV__ *a3)
{
  HSURF DefaultBitmap; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  DefaultBitmap = (HSURF)GrepCreateDefaultBitmap();
  SURFREF::SURFREF(this, DefaultBitmap);
  *((_DWORD *)this + 18) = 0;
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 10) = *(_QWORD *)(v8 + 40);
    *((_QWORD *)this + 11) = *(_QWORD *)(v8 + 48);
    *((_WORD *)this + 48) = *(_WORD *)(v8 + 100);
    *(_QWORD *)(v8 + 40) = a3;
    v9 = *((_QWORD *)this + 4);
    v10 = v9 + 48;
    if ( !v9 )
      v10 = 24LL;
    *(_QWORD *)v10 = a2;
    v11 = *((_QWORD *)this + 4);
    v12 = v11 + 100;
    if ( !v11 )
      v12 = 76LL;
    *(_WORD *)v12 = 1;
    if ( !*((_DWORD *)this + 18) )
    {
      PushThreadGuardedObject(
        (char *)this + 40,
        *((_QWORD *)this + 4),
        `SURFFAKEOBJ::SURFFAKEOBJ'::`2'::_lambda_1_::_lambda_invoker_cdecl_,
        v7);
      *((_DWORD *)this + 18) = 1;
    }
  }
  return this;
}
