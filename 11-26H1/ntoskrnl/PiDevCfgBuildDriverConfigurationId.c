/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1404D8620 (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405DAFD8 (RtlUnicodeStringCopyStringEx.c)
 *     PnpIsNullGuid @ 0x140950904 (PnpIsNullGuid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  int v4; // r8d
  _WORD *v5; // rbx
  int v6; // edi
  unsigned int v7; // edi
  void *v10; // r14
  bool IsNullGuid; // al
  __int64 v12; // rdx
  NTSTATUS v13; // edi
  wchar_t *Pool2; // rax
  unsigned __int16 Length; // bx
  __int64 v17; // [rsp+20h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF

  v2 = a1 + 40;
  v3 = a1 + 72;
  v4 = *(unsigned __int16 *)(a1 + 72);
  v5 = (_WORD *)(a1 + 88);
  v6 = *(unsigned __int16 *)(a1 + 40) + 4;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v7 = v4 + v6;
  RemainingString = 0LL;
  TimeFields = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v7 += (unsigned __int16)*v5 + 2;
  v10 = (void *)(a1 + 188);
  IsNullGuid = PnpIsNullGuid((void *)(a1 + 188));
  v12 = v7 + 72;
  if ( IsNullGuid )
    v12 = v7;
  if ( (unsigned __int64)(v12 + 2) > 0xFFFE )
    return (unsigned int)-1073741562;
  DestinationString.Length = v12;
  DestinationString.MaximumLength = v12 + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  DestinationString.Buffer = Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_22;
  }
  v13 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v3);
  if ( v13 < 0 )
    goto LABEL_21;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v13 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", v5);
    if ( v13 < 0 )
      goto LABEL_21;
    Length = *v5 + 2 + DestinationString.Length;
    DestinationString.Length = Length;
  }
  else
  {
    Length = DestinationString.Length;
  }
  if ( PnpIsNullGuid(v10) )
  {
LABEL_20:
    *a2 = DestinationString;
    Pool2 = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v13 = RtlUnicodeStringCopyStringEx(&RemainingString, L",", &RemainingString, 0x800u);
    if ( v13 < 0 )
      goto LABEL_21;
    Length += 2;
  }
  RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
  LODWORD(v18) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
  LODWORD(v17) = TimeFields.Year;
  v13 = RtlUnicodeStringPrintf(
          &RemainingString,
          L",%02d/%02d/%04d,%u.%u.%u.%u",
          (unsigned int)TimeFields.Month,
          (unsigned int)TimeFields.Day,
          v17,
          v18,
          *(unsigned __int16 *)(a1 + 124),
          *(unsigned __int16 *)(a1 + 122),
          *(unsigned __int16 *)(a1 + 120));
  if ( v13 >= 0 )
  {
    DestinationString.Length = RemainingString.Length + Length;
    goto LABEL_20;
  }
LABEL_21:
  Pool2 = DestinationString.Buffer;
LABEL_22:
  if ( Pool2 )
    ExFreePool(Pool2);
  return (unsigned int)v13;
}
