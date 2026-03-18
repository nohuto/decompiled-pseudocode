/*
 * XREFs of ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x180181A10
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB380 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::ValidateRenderTargetInfo(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2)
{
  char *v5; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // rax
  char *v8; // rcx
  int v9; // ebx
  int v10; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 15) )
  {
    if ( *((_BYTE *)this + 128) )
    {
      v5 = (char *)this + 80;
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 10) + 64LL))(
                       (char *)this + 80,
                       &v11);
      if ( *(_DWORD *)a2 == *v6
        && *((_DWORD *)a2 + 1) == v6[1]
        && ((v7 = *((_QWORD *)this + 11),
             v8 = (char *)this + 88,
             v9 = *((_DWORD *)a2 + 2),
             v10 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(v7 + 56))(v8, &v11),
             v10 == -1)
         || v10 == v9
         || v9 == -3) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 56LL))(v5) || *((_BYTE *)a2 + 20) )
        {
          return 0LL;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0x1DBu, 0LL);
          return 2147942405LL;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304287, 0x1D6u, 0LL);
        return 2291663009LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1E1u, 0LL);
    return 2291674884LL;
  }
}
