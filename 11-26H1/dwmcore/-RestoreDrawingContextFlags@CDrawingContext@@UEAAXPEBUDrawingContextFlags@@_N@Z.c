/*
 * XREFs of ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x1801871E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::RestoreDrawingContextFlags(
        CDrawingContext *this,
        const struct DrawingContextFlags *a2,
        char a3)
{
  __int64 v4; // rcx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r14
  unsigned __int8 v8; // bp
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 1);
  v9 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4) )
    goto LABEL_2;
  v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  if ( v9 )
    (*(void (**)(void))(*(_QWORD *)v9 + 16LL))();
  if ( (**v7)(v7, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v9) < 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 144LL))(v9) )
  {
LABEL_2:
    *((_BYTE *)this + 7964) |= *(_BYTE *)a2;
    *((_BYTE *)this + 7965) |= *((_BYTE *)a2 + 1);
    *((_BYTE *)this + 7966) |= *((_BYTE *)a2 + 2);
    *((_BYTE *)this + 7967) |= *((_BYTE *)a2 + 3);
    *((_BYTE *)this + 7968) |= *((_BYTE *)a2 + 4);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *((unsigned __int8 *)this + 7964));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 184LL))(v9, *((unsigned __int8 *)this + 7967));
    v8 = *((_BYTE *)this + 7968);
    if ( !v8 && !*((_BYTE *)this + 7965) )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 152LL))(*((_QWORD *)this + 1), 0xFFFFFFFFLL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 200LL))(v9, v8);
    if ( !a3 )
    {
      *((_DWORD *)this + 1991) = *(_DWORD *)a2;
      *((_BYTE *)this + 7968) = *((_BYTE *)a2 + 4);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
