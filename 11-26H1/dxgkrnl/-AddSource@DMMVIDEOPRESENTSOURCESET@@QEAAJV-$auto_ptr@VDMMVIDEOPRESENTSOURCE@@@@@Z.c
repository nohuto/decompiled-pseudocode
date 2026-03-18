/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1402684EC
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x140267CB0 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x14005DD18 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x140097F7C (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r11

  v2 = 0;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 58;
  }
  v5 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( !v5 )
  {
    if ( Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v7) )
    {
      *a2 = 0LL;
      goto LABEL_9;
    }
LABEL_8:
    WdLogSingleEntry2(2LL, *a2, a1);
    WdLogGlobalForLineNumber = 80;
    v2 = -1071774953;
    goto LABEL_9;
  }
  if ( v5 == v7 )
    goto LABEL_8;
  WdLogSingleEntry3(2LL, v6, v7, a1);
  WdLogGlobalForLineNumber = 89;
  v2 = -1071774927;
LABEL_9:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
  return v2;
}
