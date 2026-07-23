/*
 * XREFs of CmpDoWritethroughReparse @ 0x1408C77A0
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1405EF100 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1405EF14C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x1405EF1E0 (RtlWideCharArrayCopyWorker.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpKeyFullNameLength @ 0x1408C7B34 (CmpKeyFullNameLength.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING SourceString,
        __int64 a6,
        UNICODE_STRING *a7)
{
  unsigned __int16 v11; // di
  bool v12; // zf
  unsigned int v13; // ebx
  __int16 v15; // ax
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned __int16 v18; // r15
  __int64 v19; // rsi
  int v20; // eax
  size_t *v21; // r9
  size_t v22; // r9
  UNICODE_STRING *v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  __int16 i; // cx
  PPRIVILEGE_SET v29; // rdx
  size_t cchSrcLength; // [rsp+20h] [rbp-41h]
  ULONG cchSrcLengtha; // [rsp+20h] [rbp-41h]
  ULONG v32; // [rsp+28h] [rbp-39h]
  size_t pcchSrcLength; // [rsp+30h] [rbp-31h] BYREF
  wchar_t *ppszSrc; // [rsp+38h] [rbp-29h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-21h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-19h] BYREF
  size_t pcchNewDestLength; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int128 v39; // [rsp+68h] [rbp+7h] BYREF
  PPRIVILEGE_SET v40[2]; // [rsp+78h] [rbp+17h]
  PPRIVILEGE_SET Privileges; // [rsp+B0h] [rbp+4Fh] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 40) == -1;
  v39 = 0LL;
  WORD1(v39) = -1;
  Privileges = 0LL;
  *(_OWORD *)v40 = 0LL;
  if ( !v12 )
  {
LABEL_2:
    v13 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4120LL) & 0x2000) == 0 )
  {
    v13 = -1073741199;
    goto LABEL_3;
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
    {
      v13 = -1073741199;
    }
    else
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 66) - 1);
      started = CmpStartKcbStackForTopLayerKcb((__int64)&v39, KcbAtLayerHeight);
      v13 = started;
      if ( started >= 0 )
      {
        for ( i = WORD1(v39); i >= 0; --i )
        {
          v29 = i >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v40[1] + i - 2) : v40[i - 1];
          if ( HIWORD(v29[3].Control) && BYTE1(v29[3].Control) == 1 )
            break;
          if ( v29[2].PrivilegeCount != -1 )
            goto LABEL_12;
        }
        goto LABEL_2;
      }
      CmpRecordParseFailure(a6, 65792LL, (unsigned int)started);
    }
  }
  else
  {
LABEL_12:
    v15 = *(_WORD *)(a1 + 66) - 1;
    _mm_lfence();
    if ( v15 >= 2 )
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v15 - 16);
    else
      v16 = *(_QWORD *)(a2 + 8LL * v15 + 8);
    v17 = CmpKeyFullNameLength(v16);
    v18 = v17;
    if ( v17 > 0xFFFF )
    {
      v13 = -1073741811;
      CmpRecordParseFailure(a6, 65872LL, 3221225485LL);
    }
    else
    {
      v19 = a6;
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
        *(_DWORD *)(v19 + 160) |= 1u;
      }
      if ( a4 )
      {
        v25 = CmpConstructNameWithStatus(*(_QWORD *)(v16 + 72), &Privileges);
        v13 = v25;
        if ( v25 < 0 )
        {
          CmpRecordParseFailure(v19, 66048LL, (unsigned int)v25);
          goto LABEL_3;
        }
      }
      else
      {
        v20 = CmpConstructNameWithStatus(v16, &Privileges);
        v13 = v20;
        if ( v20 < 0 )
        {
          CmpRecordParseFailure(v19, 66304LL, (unsigned int)v20);
          goto LABEL_3;
        }
      }
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( DestinationString.Buffer )
      {
        DestinationString.Length = 0;
        DestinationString.MaximumLength = v18;
        ppszDest = 0LL;
        pcchDest = 0LL;
        if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, v21, cchSrcLength, v32) >= 0 )
        {
          ppszSrc = 0LL;
          pcchSrcLength = 0LL;
          pcchNewDestLength = 0LL;
          if ( RtlUnicodeStringValidateSrcWorker(
                 (PCUNICODE_STRING)Privileges,
                 &ppszSrc,
                 &pcchSrcLength,
                 v22,
                 cchSrcLengtha) >= 0 )
          {
            RtlWideCharArrayCopyWorker(ppszDest, pcchDest, &pcchNewDestLength, ppszSrc, pcchSrcLength);
            v11 = pcchNewDestLength;
          }
          v11 *= 2;
          DestinationString.Length = v11;
        }
        if ( a4 )
        {
          if ( (unsigned int)v11 + 2 <= v18 )
          {
            DestinationString.Length = v11 + 2;
            DestinationString.Buffer[(unsigned __int64)v11 >> 1] = 92;
          }
          RtlUnicodeStringCat(&DestinationString, SourceString);
        }
        v23 = a7;
        ExFreePoolWithTag(a7->Buffer, 0);
        *v23 = DestinationString;
        RtlInitUnicodeString(&DestinationString, 0LL);
        *(_DWORD *)(v19 + 24) |= 0x10u;
        v13 = 872;
        v24 = *(unsigned __int8 *)(v19 + 426);
        if ( (unsigned __int8)v24 < 4u )
        {
          *(_DWORD *)(v19 + 8 * v24 + 428) = 872;
          *(_DWORD *)(v19 + 8LL * (unsigned __int8)(*(_BYTE *)(v19 + 426))++ + 432) = 66816;
        }
      }
      else
      {
        v13 = -1073741670;
        CmpRecordParseFailure(v19, 66560LL, 3221225626LL);
      }
    }
  }
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v40[1] )
    CmSiFreeMemory(v40[1]);
  return v13;
}
