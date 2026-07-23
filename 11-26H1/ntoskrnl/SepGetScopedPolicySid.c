/*
 * XREFs of SepGetScopedPolicySid @ 0x1403C8280
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepGetScopedPolicySid(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  unsigned int i; // r9d

  v1 = 0;
  if ( a1 )
  {
LABEL_2:
    v2 = a1 + 8;
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
    {
      if ( i >= v1 && *(_BYTE *)v2 == 19 )
      {
        if ( v2 && (*(_BYTE *)(v2 + 1) & 8) == 0 )
          return v2 + 8;
        v1 = i + 1;
        if ( v2 )
          goto LABEL_2;
        return 0LL;
      }
      v2 += *(unsigned __int16 *)(v2 + 2);
    }
  }
  return 0LL;
}
