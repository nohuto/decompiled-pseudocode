/*
 * XREFs of DpiValidateSpbResource @ 0x140254670
 * Callers:
 *     DpSpbResourceIoControl @ 0x140196280 (DpSpbResourceIoControl.c)
 *     DpCloseSpbResource @ 0x140254240 (DpCloseSpbResource.c)
 *     DpReadSpbResource @ 0x140254290 (DpReadSpbResource.c)
 *     DpWriteSpbResource @ 0x140254440 (DpWriteSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiValidateSpbResource(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // ecx
  struct _EX_RUNDOWN_REF *v12; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry4(0LL, 275LL, 21LL, a3, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 281;
    return result;
  }
  if ( a1
    && (v10 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v10 + 16) == 1953656900
    && ((v11 = *(_DWORD *)(v10 + 20), v11 == 2) || v11 == 3) )
  {
    if ( a2
      && *(_DWORD *)(a2 + 16) == 1953656900
      && *(_DWORD *)(a2 + 20) == 12
      && *(_QWORD *)(a2 + 32) == v10
      && *(_DWORD *)(a2 + 48) )
    {
      v12 = (struct _EX_RUNDOWN_REF *)(a2 + 24);
      if ( a4 )
      {
        ExWaitForRundownProtectionRelease(v12);
LABEL_15:
        *a5 = a2;
        return 0LL;
      }
      if ( ExAcquireRundownProtection(v12) )
        goto LABEL_15;
      WdLogSingleEntry2(3LL, a3, a2);
      WdLogGlobalForLineNumber = 354;
    }
    else
    {
      WdLogSingleEntry2(3LL, a3, a2);
      WdLogGlobalForLineNumber = 327;
    }
    return 3221225712LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a1);
    result = 3221225711LL;
    WdLogGlobalForLineNumber = 300;
  }
  return result;
}
