/*
 * XREFs of DxgkEngAssertGdiOutput @ 0x1400291F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1400281B8 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  BOOL v8; // edi
  __int64 i; // rcx
  __int64 (__fastcall *OwnerTable)(_QWORD, _QWORD); // rax
  struct _ERESOURCE *v11; // rax
  struct _ERESOURCE *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // esi
  __int64 j; // rcx
  struct _ERESOURCE *v17; // rax
  struct _ERESOURCE *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  _BOOL8 result; // rax
  __int64 (__fastcall *v22)(POWNER_ENTRY, __int64); // rax

  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1220LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 746;
  }
  v8 = 1;
  for ( i = 0LL; ; i = (__int64)v12 )
  {
    v11 = hdevEnumerate<1>(i);
    v12 = v11;
    if ( !v11 )
      break;
    if ( ((__int64)v11->ExclusiveWaiters & 0x20400) == 0 )
    {
      v13 = *(_QWORD *)&v11[24].NumberOfSharedWaiters;
      if ( *(_QWORD *)(v13 + 232) == a1 )
      {
        v14 = *(unsigned int *)(v13 + 248);
        if ( (unsigned int)v14 < a3 )
        {
          LODWORD(v12[25].SystemResourcesList.Blink) = -(*(_BYTE *)(v14 + a2) != 0) - 2147483645;
          OwnerTable = (__int64 (__fastcall *)(_QWORD, _QWORD))v12[26].OwnerTable;
          if ( OwnerTable )
            LODWORD(OwnerTable) = OwnerTable(v12[17].OwnerTable, 0LL);
          LODWORD(v12[25].SystemResourcesList.Blink) = 0;
          v8 = v8 && (_DWORD)OwnerTable;
        }
      }
    }
  }
  v15 = 0;
  for ( j = 0LL; ; j = (__int64)v18 )
  {
    v17 = hdevEnumerate<1>(j);
    v18 = v17;
    if ( !v17 )
      break;
    if ( ((__int64)v17->ExclusiveWaiters & 0x20400) == 0 )
    {
      v19 = *(_QWORD *)&v17[24].NumberOfSharedWaiters;
      if ( *(_QWORD *)(v19 + 232) == a1 )
      {
        v20 = *(unsigned int *)(v19 + 248);
        if ( (unsigned int)v20 < a3 )
        {
          if ( *(_BYTE *)(v20 + a2) )
          {
            LODWORD(v18[25].SystemResourcesList.Blink) = 0x80000000;
            v22 = (__int64 (__fastcall *)(POWNER_ENTRY, __int64))v18[26].OwnerTable;
            if ( v22 )
              LODWORD(v22) = v22(v18[17].OwnerTable, 1LL);
            LODWORD(v18[25].SystemResourcesList.Blink) = 0;
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
