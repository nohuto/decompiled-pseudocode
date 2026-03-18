/*
 * XREFs of ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14002A3F8
 * Callers:
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402A90C0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall Set<DMMVIDPNPRESENTPATH>::Add(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rdi
  _QWORD *v4; // r9
  _QWORD *v6; // r10
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v11; // rax

  v2 = a1 + 3;
  v3 = (_QWORD *)a1[3];
  v4 = 0LL;
  v6 = v3 - 1;
  if ( v3 != a1 + 3 )
    v4 = v3 - 1;
  if ( v4 )
  {
    do
    {
      if ( *(_DWORD *)(v4[11] + 24LL) == *(_DWORD *)(a2[11] + 24LL)
        && *(_DWORD *)(v4[12] + 24LL) == *(_DWORD *)(a2[12] + 24LL) )
      {
        break;
      }
      v11 = (_QWORD *)v4[1];
      v4 = v11 - 1;
      if ( v11 == v2 )
        v4 = 0LL;
    }
    while ( v4 );
    if ( v4 )
      return 0;
  }
  if ( a2 && v3 != v2 )
  {
    while ( v6 )
    {
      if ( v6 == a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 108;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
        return 1;
      }
      v9 = (_QWORD *)v6[1];
      v6 = v9 - 1;
      if ( v9 == v2 )
        v6 = 0LL;
    }
  }
  v7 = (_QWORD *)a1[4];
  v8 = a2 + 1;
  if ( (_QWORD *)*v7 != v2 )
    __fastfail(3u);
  *v8 = v2;
  a2[2] = v7;
  *v7 = v8;
  v2[1] = v8;
  ++a1[5];
  return 1;
}
