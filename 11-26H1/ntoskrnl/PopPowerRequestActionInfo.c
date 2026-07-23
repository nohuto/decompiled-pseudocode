/*
 * XREFs of PopPowerRequestActionInfo @ 0x140AF441C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF4534 (PopPowerRequestSpecialRequestSet.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140AF465C (PopPowerRequestSpecialRequestClear.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  ULONG_PTR v2; // rcx
  char PreviousMode; // bp
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  char v9; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  Object = 0LL;
  IsAppContainerOrIdentifyLevelContext = ObpReferenceObjectByHandleWithTag(
                                           v2,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v9);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v9 )
            goto LABEL_4;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_8:
        ObfDereferenceObjectWithTag(v5, 0x72506F50u);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v6 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v5[152] )
        v7 = PopPowerRequestSpecialRequestSet(v5, v6, *(_QWORD *)(a1 + 16));
      else
        v7 = PopPowerRequestReferenceAcquire(v5, v6);
    }
    else if ( v5[152] )
    {
      v7 = PopPowerRequestSpecialRequestClear(v5, v6);
    }
    else
    {
      v7 = PopPowerRequestReferenceRelease(v5, v6);
    }
    IsAppContainerOrIdentifyLevelContext = v7;
    goto LABEL_8;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
