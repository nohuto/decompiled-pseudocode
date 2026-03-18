/*
 * XREFs of ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1400DE540
 * Callers:
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1400DECC0 (-Delete@GroupedFGBoostProp@@UEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall GroupedFGBoostProp::cleanUpAndReplace(
        GroupedFGBoostProp *this,
        __int64 a2,
        struct _EPROCESS **a3,
        __int64 a4)
{
  char *v6; // rcx
  int v7; // esi

  v6 = (char *)*((_QWORD *)this + 4);
  v7 = a2;
  if ( v6 )
    GreDeleteFastMutex(v6, a2, (__int64)a3, a4);
  *((_DWORD *)this + 6) = v7;
  *((_QWORD *)this + 4) = a3;
}
