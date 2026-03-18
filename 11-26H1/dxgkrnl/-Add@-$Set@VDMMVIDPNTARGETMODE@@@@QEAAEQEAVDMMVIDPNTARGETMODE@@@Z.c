/*
 * XREFs of ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x14002A530
 * Callers:
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x14037AB00 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14002A620 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall Set<DMMVIDPNTARGETMODE>::Add(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  if ( Set<DMMVIDPNTARGETMODE>::FindByValue() )
    return 0;
  v4 = a1 + 3;
  if ( a2 )
  {
    v5 = 0LL;
    if ( (_QWORD *)*v4 != v4 )
      v5 = *v4 - 8LL;
    while ( v5 )
    {
      if ( v5 == a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 108;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
        return 1;
      }
      v6 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v6 - 1);
      if ( v6 == v4 )
        v5 = 0LL;
    }
  }
  v8 = (_QWORD *)a1[4];
  v9 = (_QWORD *)(a2 + 8);
  if ( (_QWORD *)*v8 != v4 )
    __fastfail(3u);
  *v9 = v4;
  *(_QWORD *)(a2 + 16) = v8;
  *v8 = v9;
  a1[4] = v9;
  ++a1[5];
  return 1;
}
