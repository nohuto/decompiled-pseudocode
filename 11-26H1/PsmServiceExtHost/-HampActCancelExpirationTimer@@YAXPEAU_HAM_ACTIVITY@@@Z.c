/*
 * XREFs of ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180012D50
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180017E80 (-HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007C89C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

void __fastcall HampActCancelExpirationTimer(struct _HAM_ACTIVITY *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 67);
  if ( v2 )
  {
    if ( (unsigned int)TpSetTimerEx(v2, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 67));
    *((_QWORD *)a1 + 67) = 0LL;
    *((_QWORD *)a1 + 68) = 0LL;
  }
}
