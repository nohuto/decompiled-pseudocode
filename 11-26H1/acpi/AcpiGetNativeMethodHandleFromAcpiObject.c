/*
 * XREFs of AcpiGetNativeMethodHandleFromAcpiObject @ 0x14004D778
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiGetNativeMethodHandleFromAcpiObject(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  unsigned int v4; // r8d
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int16 v10; // cx

  v2 = 0LL;
  v4 = -1073741823;
  v6 = *a1;
  while ( (unsigned int)v2 < 5 )
  {
    if ( AmliGlobalPreDefinedRootObjects[v2] == v6 )
    {
      for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
      {
        if ( (__int64 *)AcpiAmliPreDefinedRootAcpiObjects[i] == a1 )
        {
          v8 = AcpiAmliPreDefinedRootNativeHandles[i];
          goto LABEL_17;
        }
      }
      return (unsigned int)-1073741275;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  v9 = *(_QWORD *)(v6 + 104);
  if ( !v9 )
    return v4;
  v10 = *(_WORD *)(v6 + 66);
  if ( v10 == 6 || (unsigned __int16)(v10 - 12) <= 1u )
  {
    v8 = *(_QWORD *)(v9 + 944);
  }
  else
  {
    if ( v10 != 11 )
      return v4;
    v8 = *(_QWORD *)(v9 + 136);
  }
LABEL_17:
  *a2 = v8;
  return 0;
}
