/*
 * XREFs of AslStringPatternMatchExW @ 0x1409D59C0
 * Callers:
 *     KseLookupHardwareId @ 0x1407C137C (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpFindNextNamedTagHelper @ 0x14088BCD4 (SdbpFindNextNamedTagHelper.c)
 *     SdbpCheckAttribute @ 0x14088D628 (SdbpCheckAttribute.c)
 *     AslpProcessMatchRegNode @ 0x1408912FC (AslpProcessMatchRegNode.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1409D5500 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x1409D59A0 (AslStringPatternMatchW.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1409D84BC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140A973CC (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x1407821B4 (RtlWideStringLengthFromUser.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringPatternMatchExW(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rdi
  unsigned int v5; // ebx
  int v6; // r12d
  WCHAR *v7; // rsi
  PVOID v8; // r13
  size_t v9; // r14
  unsigned __int16 *v10; // rax
  __int64 v11; // rax
  size_t v12; // r13
  WCHAR *Pool2; // rax
  WCHAR v14; // cx
  int v15; // edx
  __int16 v16; // dx
  unsigned __int64 v17; // r9
  struct _LIST_ENTRY *Flink; // r10
  WCHAR v19; // r14
  WCHAR v21; // bx
  int v22; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+34h] [rbp-54h]
  PVOID v24; // [rsp+38h] [rbp-50h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v26; // [rsp+48h] [rbp-40h]
  PVOID P; // [rsp+50h] [rbp-38h]

  v25 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  v5 = 0;
  v22 = 0;
  v6 = 0;
  if ( MmIsUserAddress((unsigned __int64)a1) )
  {
    v11 = RtlWideStringLengthFromUser(a1);
    v12 = 2 * v11 + 2;
    if ( 2 * v11 == 2 )
    {
      RtlCopyFromUser(&v22, a1, 4uLL);
      v7 = (WCHAR *)&v22;
      v25 = (unsigned __int16 *)&v22;
    }
    else
    {
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      v25 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741801;
        v23 = -1073741801;
        v8 = v24;
        goto LABEL_14;
      }
      P = Pool2;
      RtlCopyFromUser(Pool2, a1, v12);
    }
  }
  else
  {
    v7 = a1;
    v25 = a1;
  }
  if ( !MmIsUserAddress((unsigned __int64)a2) )
  {
    v4 = a2;
    v26 = a2;
LABEL_5:
    v8 = v24;
    goto LABEL_14;
  }
  v9 = 2 * RtlWideStringLengthFromUser(a2) + 2;
  v10 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
  v4 = v10;
  v26 = v10;
  if ( !v10 )
  {
    v6 = -1073741801;
    v23 = -1073741801;
    goto LABEL_5;
  }
  v8 = v10;
  v24 = v10;
  RtlCopyFromUser(v10, a2, v9);
LABEL_14:
  if ( v6 < 0 )
    goto LABEL_35;
  while ( 1 )
  {
    v14 = *v7;
    if ( !*v7 && !*v4 )
    {
LABEL_34:
      v5 = 1;
      goto LABEL_35;
    }
    if ( v14 == 63 )
      goto LABEL_28;
    if ( v14 != 42 )
      break;
    v15 = v7[1];
    if ( v15 == 42 )
    {
      ++v7;
    }
    else
    {
      if ( !(_WORD)v15 )
        goto LABEL_34;
      if ( (_WORD)v15 == *v4 )
        goto LABEL_46;
      PsGetCurrentServerSiloGlobals();
      Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
      if ( (unsigned int)v17 >= 0x61 )
      {
        if ( (unsigned int)v17 > 0x7A )
        {
          if ( Flink && (unsigned __int16)v17 >= 0xC0u )
            LOWORD(v17) = *((_WORD *)&Flink->Flink
                          + (v17 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v17 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                        + v17;
        }
        else
        {
          LOWORD(v17) = v17 - 32;
        }
      }
      if ( v16 == (_WORD)v17 )
      {
LABEL_46:
        if ( (unsigned int)AslStringPatternMatchExW(v7 + 1, v4) )
          goto LABEL_34;
      }
LABEL_25:
      if ( !*v4 )
        goto LABEL_41;
      ++v4;
    }
  }
  v19 = *v4;
  if ( v14 == *v4 || (v21 = RtlUpcaseUnicodeChar(v14), v21 == RtlUpcaseUnicodeChar(v19)) )
  {
LABEL_28:
    ++v7;
    goto LABEL_25;
  }
LABEL_41:
  v5 = 0;
LABEL_35:
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x74705041u);
  return v5;
}
