/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x140A786C0
 * Callers:
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405EDE10 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     PspReadDfssConfigurationValues @ 0x140617678 (PspReadDfssConfigurationValues.c)
 *     PspIsDfssEnabled @ 0x1407F3E04 (PspIsDfssEnabled.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140806800 (RtlQueryImageFileExecutionOptions.c)
 *     PspReadIFEOPerfOptions @ 0x140A77A84 (PspReadIFEOPerfOptions.c)
 *     PspReadIFEONodeOptions @ 0x140A78470 (PspReadIFEONodeOptions.c)
 *     PspReadOptionsMapFromIFEO @ 0x140A78624 (PspReadOptionsMapFromIFEO.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140B4EC94 (PspQueryComPlusRunUnderWoW.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140B5CD50 (SepCheckAndSetAuditModeForProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        ULONG a3,
        _DWORD *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // r14d
  ULONG *p_KeyValueInformation; // rdi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  void *Pool2; // rax
  void *v15; // r12
  NTSTATUS v16; // eax
  ULONG *v17; // rcx
  ULONG v18; // eax
  size_t v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  ULONG *v22; // [rsp+48h] [rbp-28h]
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]

  v22 = a6;
  v24 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 8 )
  {
    Length = a5 + 12;
    goto LABEL_7;
  }
  p_KeyValueInformation = (ULONG *)&KeyValueInformation;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  v12 = result;
  if ( result < 0 )
  {
    if ( result == -2147483643 )
    {
      while ( 1 )
      {
        Length = ResultLength;
LABEL_7:
        Pool2 = (void *)ExAllocatePool2(0x41uLL);
        v15 = Pool2;
        if ( !Pool2 )
          return -1073741801;
        p_KeyValueInformation = (ULONG *)Pool2;
        v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v12 = v16;
        if ( v16 >= 0 )
          goto LABEL_13;
        if ( v16 != -2147483643 )
          goto LABEL_29;
        ExFreePoolWithTag(p_KeyValueInformation, 0);
      }
    }
    return result;
  }
  v15 = 0LL;
LABEL_13:
  v17 = p_KeyValueInformation + 2;
  if ( !a3 )
  {
    if ( *v17 > a5 )
    {
      ResultLength = *v17;
      goto LABEL_35;
    }
    a3 = p_KeyValueInformation[1];
    v10 = *v17;
  }
  v18 = p_KeyValueInformation[1];
  switch ( v18 )
  {
    case 3u:
    case 7u:
      if ( a3 == v18 )
      {
        ResultLength = *v17;
        if ( !a4 )
          goto LABEL_35;
        v19 = *v17;
LABEL_55:
        if ( (unsigned int)v19 <= v10 )
        {
          memmove(a4, p_KeyValueInformation + 3, v19);
          goto LABEL_25;
        }
        goto LABEL_35;
      }
LABEL_37:
      v12 = -1073741788;
      goto LABEL_28;
    case 4u:
      if ( a3 == 4 )
      {
        if ( v10 == 4 && p_KeyValueInformation[2] == 4 )
        {
          ResultLength = 4;
          if ( a4 )
          {
            *a4 = p_KeyValueInformation[3];
            goto LABEL_25;
          }
          goto LABEL_35;
        }
        goto LABEL_45;
      }
      goto LABEL_37;
    case 0xBu:
      if ( a3 == 11 )
      {
        if ( v10 == 8 && p_KeyValueInformation[2] == 8 )
        {
          ResultLength = 8;
          if ( a4 )
          {
            *(_QWORD *)a4 = *(_QWORD *)(p_KeyValueInformation + 3);
LABEL_25:
            if ( v22 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v22 = ResultLength;
            goto LABEL_28;
          }
LABEL_35:
          v12 = -2147483643;
          goto LABEL_25;
        }
        goto LABEL_45;
      }
      goto LABEL_37;
  }
  if ( v18 != 1 )
  {
    v12 = -1073741788;
    goto LABEL_25;
  }
  if ( a3 != 4 )
  {
    v19 = p_KeyValueInformation[2];
    ResultLength = p_KeyValueInformation[2];
    goto LABEL_55;
  }
  if ( v10 != 4 )
  {
LABEL_45:
    v12 = -1073741820;
    goto LABEL_28;
  }
  if ( ((unsigned __int8)a4 & 3) == 0 )
  {
    ResultLength = 4;
    if ( a4 )
    {
      DestinationString.Buffer = (wchar_t *)(p_KeyValueInformation + 3);
      DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
      DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
      v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
      goto LABEL_25;
    }
    goto LABEL_35;
  }
  v12 = -2147483646;
LABEL_28:
  if ( v15 )
LABEL_29:
    ExFreePoolWithTag(v15, 0);
  return v12;
}
