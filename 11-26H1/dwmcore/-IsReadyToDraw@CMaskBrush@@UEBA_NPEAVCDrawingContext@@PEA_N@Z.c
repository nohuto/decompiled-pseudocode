/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180158FC0
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18015A460 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v3; // bl
  __int64 v5; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v5 = *((_QWORD *)this + 15);
  v10 = 0;
  v11 = 0;
  if ( !v5 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v5 + 320LL))(
         v5,
         a2,
         &v10) )
  {
    v8 = *((_QWORD *)this + 14);
    if ( !v8
      || (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v8 + 320LL))(
           v8,
           a2,
           &v11) )
    {
      v3 = 1;
    }
  }
  if ( v10 || v11 )
  {
    result = v3;
    *a3 = 1;
  }
  else
  {
LABEL_8:
    *a3 = 0;
    return v3;
  }
  return result;
}
