/*
 * XREFs of ?RecordUse@CAtlasBitmapResource@@UEAAJPEAVCDrawingContext@@@Z @ 0x180195AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::RecordUse(CAtlasBitmapResource *this, struct CDrawingContext *a2)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ebx
  unsigned int v9; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v4 = *((_QWORD *)this + 2) == 0LL;
  v5 = v3;
  v11 = 0LL;
  if ( v4 )
    ModuleFailFastForHRESULT(-2003304315, retaddr);
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL) + 104LL))(
           *(_QWORD *)(v6 + 8) + 8LL,
           v5,
           &v11);
    if ( v7 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      return 0LL;
    }
    v9 = 137;
  }
  else
  {
    v7 = -2003304307;
    v9 = 134;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v9, 0LL);
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0xA1,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\atlasbitmapresource.cpp",
    (const char *)(unsigned int)v7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v7;
}
