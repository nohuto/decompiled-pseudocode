/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x140344ED8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140344904 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 v4; // r9
  _QWORD *v5; // rdx
  _QWORD *v6; // r10
  _QWORD *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r9
  _QWORD *v15; // rax

  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1005;
  }
  v4 = (__int64)*a2;
  v5 = a1 + 3;
  v6 = (_QWORD *)a1[3];
  v7 = 0LL;
  v8 = v6 - 1;
  if ( v6 != a1 + 3 )
    v7 = v6 - 1;
  if ( v7 )
  {
    while ( *((_DWORD *)v7 + 6) != *(_DWORD *)(v4 + 24) )
    {
      v9 = (_QWORD *)v7[1];
      v7 = v9 - 1;
      if ( v9 == v5 )
        v7 = 0LL;
      if ( !v7 )
        goto LABEL_10;
    }
    if ( v7 == (_QWORD *)v4 )
      goto LABEL_21;
    WdLogSingleEntry3(2LL, *(unsigned int *)(v4 + 24), *a2, a1);
    WdLogGlobalForLineNumber = 1036;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
    return 3223192370LL;
  }
  else
  {
LABEL_10:
    if ( v6 != v5 )
    {
      v10 = v6 - 1;
      if ( v6 != (_QWORD *)8 )
      {
        while ( v10 != (_QWORD *)v4 )
        {
          v11 = (_QWORD *)v10[1];
          v10 = v11 - 1;
          if ( v11 == v5 )
            v10 = 0LL;
          if ( !v10 )
            goto LABEL_16;
        }
LABEL_21:
        WdLogSingleEntry2(2LL, *a2, a1);
        WdLogGlobalForLineNumber = 1027;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
        return 3223192344LL;
      }
    }
LABEL_16:
    if ( v4 && v6 != v5 )
    {
      while ( v8 )
      {
        if ( v8 == (_QWORD *)v4 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 108;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_28;
        }
        v15 = (_QWORD *)v8[1];
        v8 = v15 - 1;
        if ( v15 == v5 )
          v8 = 0LL;
      }
    }
    v12 = (_QWORD *)a1[4];
    v13 = (_QWORD *)(v4 + 8);
    if ( (_QWORD *)*v12 != v5 )
      __fastfail(3u);
    *v13 = v5;
    v13[1] = v12;
    *v12 = v13;
    a1[4] = v13;
    ++a1[5];
LABEL_28:
    *a2 = 0LL;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
    return 0LL;
  }
}
