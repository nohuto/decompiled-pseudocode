/*
 * XREFs of DxgkEngAssertGdiOutput @ 0x140117BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x14004BB48 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  BOOL v8; // edi
  PDEV *i; // rcx
  PDEV *v10; // rax
  PDEV *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rax
  int v15; // esi
  PDEV *j; // rcx
  PDEV *v17; // rax
  PDEV *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  _BOOL8 result; // rax
  __int64 (__fastcall *v22)(_QWORD, __int64); // rax

  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1132LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 728;
  }
  v8 = 1;
  for ( i = 0LL; ; i = v11 )
  {
    v10 = hdevEnumerate<1>(i);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*((_DWORD *)v10 + 10) & 0x20400) == 0 )
    {
      v12 = *((_QWORD *)v10 + 321);
      if ( *(_QWORD *)(v12 + 232) == a1 )
      {
        v13 = *(unsigned int *)(v12 + 248);
        if ( (unsigned int)v13 < a3 )
        {
          *((_DWORD *)v11 + 652) = -(*(_BYTE *)(v13 + a2) != 0) - 2147483645;
          v14 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v11 + 340);
          if ( v14 )
            LODWORD(v14) = v14(*((_QWORD *)v11 + 223), 0LL);
          *((_DWORD *)v11 + 652) = 0;
          v8 = v8 && (_DWORD)v14;
        }
      }
    }
  }
  v15 = 0;
  for ( j = 0LL; ; j = v18 )
  {
    v17 = hdevEnumerate<1>(j);
    v18 = v17;
    if ( !v17 )
      break;
    if ( (*((_DWORD *)v17 + 10) & 0x20400) == 0 )
    {
      v19 = *((_QWORD *)v17 + 321);
      if ( *(_QWORD *)(v19 + 232) == a1 )
      {
        v20 = *(unsigned int *)(v19 + 248);
        if ( (unsigned int)v20 < a3 )
        {
          if ( *(_BYTE *)(v20 + a2) )
          {
            *((_DWORD *)v18 + 652) = 0x80000000;
            v22 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v18 + 340);
            if ( v22 )
              LODWORD(v22) = v22(*((_QWORD *)v18 + 223), 1LL);
            *((_DWORD *)v18 + 652) = 0;
            v8 = v8 && (_DWORD)v22;
            v15 = 1;
          }
        }
      }
    }
  }
  result = v8;
  *a4 = v15 != 0;
  return result;
}
