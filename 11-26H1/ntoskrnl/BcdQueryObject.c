/*
 * XREFs of BcdQueryObject @ 0x140779B20
 * Callers:
 *     PopBcdGetApplicationPathFromResumeObject @ 0x1407E16B4 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1407E18C4 (PopBcdRegenerateResumeObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140894258 (BiUpdateObjectReferenceInEfiEntry.c)
 *     PopBcdEstablishResumeObject @ 0x140B68C20 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1409D3F80 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiGetObjectDescription @ 0x1409D5C00 (BiGetObjectDescription.c)
 */

__int64 __fastcall BcdQueryObject(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r8d
  int ObjectIdentifier; // ebx

  v6 = a1;
  if ( !a3 )
  {
    if ( a4 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( a2 != 1 )
    return 3221225485LL;
LABEL_3:
  LOBYTE(a1) = a1 & 1;
  v7 = BiAcquireBcdSyncMutant(a1);
  v9 = v7;
  if ( (v7 & 0x80000000) == 0 )
  {
    ObjectIdentifier = 0;
    if ( !a3 || (ObjectIdentifier = BiGetObjectDescription(v6, a3, v7), ObjectIdentifier >= 0) )
    {
      if ( a4 )
        ObjectIdentifier = BiGetObjectIdentifier(v6, a4, v9);
    }
    LOBYTE(v8) = v6 & 1;
    BiReleaseBcdSyncMutant(v8);
    return (unsigned int)ObjectIdentifier;
  }
  else
  {
    BiLogMessage(4LL, L"BcdQueryObject: Failed to acquire BCD sync mutant. Status: %x", v7);
    return v10;
  }
}
