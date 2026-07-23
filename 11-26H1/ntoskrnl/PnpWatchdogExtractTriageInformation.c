/*
 * XREFs of PnpWatchdogExtractTriageInformation @ 0x1404E98D4
 * Callers:
 *     PnpWatchdogBugcheck @ 0x1405DC274 (PnpWatchdogBugcheck.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall PnpWatchdogExtractTriageInformation(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int16 **a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // r10d
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  _QWORD *v13; // rcx
  __int16 *result; // rax
  __int64 v15; // rcx
  int v16; // r10d
  __int64 v17; // rcx
  _QWORD *v18; // rcx

  v6 = *(_DWORD *)(a1 + 16);
  *a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v16 = v12 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
            __fastfail(5u);
          v17 = *(_QWORD *)(a1 + 24);
          v9 = *(_QWORD *)(v17 + 8);
          *a3 = *(_QWORD *)(v17 + 16);
        }
        else
        {
          v18 = *(_QWORD **)(a1 + 24);
          v9 = v18[2];
          *a3 = v18[3];
          *a2 = v18[1];
        }
      }
      else
      {
        v13 = *(_QWORD **)(a1 + 24);
        *a3 = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
        v8 = v13[1];
        *a2 = *v13;
      }
    }
    else
    {
      *a3 = *(_QWORD *)&PnpDeviceActionThread;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      *a2 = v15;
      if ( v15 )
        v8 = *(_QWORD *)(v15 + 32);
    }
  }
  else
  {
    *a3 = *(_QWORD *)&PnpDeviceEventThread;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    if ( v8 )
      *a2 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
  }
  if ( a5 )
    *a5 = v8;
  if ( a6 )
    *a6 = v9;
  result = &PnpEmptyUnicodeString;
  if ( *(_WORD *)(a1 + 40) )
    result = (__int16 *)(a1 + 40);
  *a4 = result;
  return result;
}
