/*
 * XREFs of PfCalculateProcessHash @ 0x1409D2980
 * Callers:
 *     PfProcessCreateNotification @ 0x1409D1270 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1409D2BA0 (PsGetAllocatedFullProcessImageName.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfCalculateProcessHash(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // r14d
  int AllocatedFullProcessImageName; // eax
  PUNICODE_STRING v6; // rbx
  int v7; // esi
  unsigned __int64 Length; // r9
  __int64 v9; // rcx
  unsigned __int8 *Buffer; // r8
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r9
  PUNICODE_STRING DestinationString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  DestinationString = 0LL;
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    v2 = (_QWORD *)a2;
  if ( !*(_QWORD *)(a1 + 680) )
  {
    v7 = -1073741275;
    return v7 & (unsigned int)-(v2 != 0LL);
  }
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName(a1, &DestinationString);
  v6 = DestinationString;
  v7 = AllocatedFullProcessImageName;
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( DestinationString->Length )
    {
      RtlUpcaseUnicodeString(DestinationString, DestinationString, 0);
      if ( *(_DWORD *)(a1 + 900) )
      {
LABEL_17:
        if ( v4 )
          PfpLogApplicationEvent(a1, (__int128 *)v6);
        if ( v2 )
        {
          *v2 = v6;
          v6 = 0LL;
        }
        v7 = 0;
        goto LABEL_22;
      }
      Length = v6->Length;
      v9 = 314159LL;
      Buffer = (unsigned __int8 *)v6->Buffer;
      if ( Length >= 8 )
      {
        v11 = (unsigned __int64)v6->Length >> 3;
        Length = v6->Length - 8 * v11;
        do
        {
          v12 = Buffer[7];
          v13 = 37
              * (Buffer[6]
               + 37
               * (Buffer[5]
                + 37 * (Buffer[4] + 37 * (Buffer[3] + 37 * (Buffer[2] + 37 * (Buffer[1] + 37 * (*Buffer + 37 * v9)))))));
          Buffer += 8;
          v9 = v12 + v13;
          --v11;
        }
        while ( v11 );
      }
      v14 = Length - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v17 = v15 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 != 1 )
                    goto LABEL_14;
                  LODWORD(v9) = *Buffer++ + 37 * v9;
                }
                LODWORD(v9) = *Buffer++ + 37 * v9;
              }
              LODWORD(v9) = *Buffer++ + 37 * v9;
            }
            LODWORD(v9) = *Buffer++ + 37 * v9;
          }
          LODWORD(v9) = *Buffer++ + 37 * v9;
        }
        LODWORD(v9) = *Buffer++ + 37 * v9;
      }
      LODWORD(v9) = *Buffer + 37 * v9;
LABEL_14:
      if ( (unsigned int)v9 <= 1 )
        LODWORD(v9) = 1;
      *(_DWORD *)(a1 + 900) = v9;
      goto LABEL_17;
    }
    v7 = -1073741198;
  }
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7 & (unsigned int)-(v2 != 0LL);
}
