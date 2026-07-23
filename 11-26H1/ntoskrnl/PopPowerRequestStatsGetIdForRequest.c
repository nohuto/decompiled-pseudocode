/*
 * XREFs of PopPowerRequestStatsGetIdForRequest @ 0x140A900E8
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A90038 (PopPowerRequestStatsCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x14077E9B0 (PopPowerRequestStatsIsDetailedRequestReason.c)
 *     PopPowerRequestStatsFreeId @ 0x140A900B0 (PopPowerRequestStatsFreeId.c)
 *     PopUnicodeStringDeepCopy @ 0x140AE5B68 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140AFF5C0 (PopAnsiStringToUnicodeString.c)
 *     PopPowerRequestStatsIdConcat @ 0x140B02920 (PopPowerRequestStatsIdConcat.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsGetIdForRequest(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  char IsDetailedRequestReason; // al
  unsigned __int64 v5; // rsi
  char v6; // r14
  unsigned __int64 v7; // rdx
  signed int v8; // ebx
  __int64 Pool2; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  UNICODE_STRING *v12; // rbp
  int v13; // eax
  UNICODE_STRING v14; // xmm0
  const WCHAR *v16; // rbp
  __int64 i; // rsi
  __int64 v18; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  DestinationString = 0LL;
  SourceString = 0LL;
  IsDetailedRequestReason = PopPowerRequestStatsIsDetailedRequestReason(v2);
  v5 = 0LL;
  v6 = IsDetailedRequestReason;
  if ( !*(_QWORD *)(v2 + 40) )
    goto LABEL_5;
  v5 = (v2 + 55) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !IsDetailedRequestReason )
    goto LABEL_5;
  v7 = 16LL * *(unsigned int *)(v5 + 20);
  if ( v7 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v8 = (int)v7 + 48 < (unsigned int)v7 ? 0xC0000095 : 0;
  if ( (int)v7 + 48 >= (unsigned int)v7 )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( *(_DWORD *)v2 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
      v12 = (UNICODE_STRING *)(Pool2 + 8);
      v8 = PopAnsiStringToUnicodeString((PUNICODE_STRING)(Pool2 + 8), &DestinationString);
      if ( v8 < 0 )
        goto LABEL_22;
      *(_DWORD *)Pool2 |= 2u;
    }
    else
    {
      v10 = *(_QWORD *)(v2 + 8);
      if ( v10 && (v11 = *(_QWORD *)(v10 + 8)) != 0 )
      {
        v12 = (UNICODE_STRING *)(Pool2 + 8);
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v11 + 56);
      }
      else
      {
        v12 = (UNICODE_STRING *)(Pool2 + 8);
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 8), UNIDENTIFIED_DRIVER);
      }
    }
    v13 = *(_DWORD *)Pool2;
    if ( v6 )
    {
      *(_DWORD *)Pool2 = v13 | 1;
      *(_WORD *)(Pool2 + 40) = *(_WORD *)(v5 + 16);
      *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(v5 + 20);
      RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 24), (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
      v16 = (const WCHAR *)(v5 + *(_QWORD *)(v5 + 24));
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)(Pool2 + 44);
            v16 = (const WCHAR *)((char *)v16 + *(unsigned __int16 *)(Pool2 + 8 * v18) + 2) )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 16 * (i + 3)), v16);
        v18 = 2 * (i + 3);
        i = (unsigned int)(i + 1);
      }
      goto LABEL_26;
    }
    if ( (v13 & 2) != 0 )
    {
LABEL_19:
      if ( v5 )
      {
        if ( (*(_DWORD *)v5 & 1) != 0 )
        {
          RtlInitUnicodeString(&SourceString, (PCWSTR)(v5 + *(_QWORD *)(v5 + 8)));
          v8 = PopPowerRequestStatsIdConcat(v12, &SourceString);
          if ( v8 < 0 )
            goto LABEL_22;
        }
      }
LABEL_26:
      *a2 = Pool2;
      return 0;
    }
    SourceString = 0LL;
    v8 = PopUnicodeStringDeepCopy(&SourceString, v12);
    if ( v8 >= 0 )
    {
      v14 = SourceString;
      *(_DWORD *)Pool2 |= 2u;
      *v12 = v14;
      goto LABEL_19;
    }
LABEL_22:
    PopPowerRequestStatsFreeId((PVOID *)Pool2);
  }
  return (unsigned int)v8;
}
