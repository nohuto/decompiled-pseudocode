/*
 * XREFs of PiDevCfgAppendMultiSz @ 0x1407AB6AC
 * Callers:
 *     PiDevCfgRequestDriverConfigurations @ 0x1407ADE78 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgAppendMultiSz(PUNICODE_STRING UnicodeString, const void **a2, const void **a3, char a4)
{
  unsigned int v4; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int16 Length; // dx
  int v13; // ecx
  unsigned int v14; // ecx
  wchar_t *Buffer; // r12
  unsigned __int16 v16; // si
  unsigned __int64 v17; // rax
  _WORD *i; // r14
  __int64 v19; // rax
  __int16 v20; // r13
  unsigned __int64 v21; // r15
  UNICODE_STRING UnicodeStringa; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  *(_QWORD *)&UnicodeStringa.Length = 0LL;
  UnicodeStringa.Buffer = 0LL;
  if ( UnicodeString->Buffer )
  {
    Length = UnicodeString->Length;
    v13 = UnicodeString->Length;
    if ( Length <= 2u )
      v13 = 2;
    if ( a2 )
    {
      v14 = *(unsigned __int16 *)a2 + 2 + v13;
    }
    else
    {
      if ( !a3 )
        goto LABEL_40;
      v14 = *(unsigned __int16 *)a3 + v13;
      if ( Length )
        v14 -= 2;
    }
    if ( v14 > 0xFFFE )
      goto LABEL_4;
    UnicodeStringa.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
    Buffer = UnicodeStringa.Buffer;
    if ( !UnicodeStringa.Buffer )
      goto LABEL_6;
    if ( UnicodeString->Length <= 2u )
    {
      v16 = 0;
    }
    else
    {
      memmove(UnicodeStringa.Buffer, UnicodeString->Buffer, UnicodeString->Length);
      v16 = UnicodeString->Length - 2;
    }
    if ( a2 )
    {
      if ( a4 || !PnpMultiSzContainsString(UnicodeString->Buffer, (wchar_t *)a2[1]) )
      {
        memmove((char *)UnicodeStringa.Buffer + v16, a2[1], *(unsigned __int16 *)a2);
        v17 = (unsigned __int64)(unsigned __int16)(*(_WORD *)a2 + v16) >> 1;
        v16 += *(_WORD *)a2 + 2;
        UnicodeStringa.Buffer[v17] = 0;
      }
    }
    else if ( a3 )
    {
      if ( a4 )
      {
        memmove((char *)UnicodeStringa.Buffer + v16, a3[1], *(unsigned __int16 *)a3);
        v16 += *(_WORD *)a3 - 2;
      }
      else
      {
        for ( i = a3[1]; *i; i += v21 >> 1 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( i[v19] );
          v20 = 2 * v19 + 2;
          v21 = (unsigned int)(2 * v19 + 2);
          if ( !PnpMultiSzContainsString(UnicodeString->Buffer, i) )
          {
            memmove((char *)UnicodeStringa.Buffer + v16, i, (unsigned int)v21);
            v16 += v20;
          }
        }
      }
    }
    UnicodeStringa.Length = v16 + 2;
    UnicodeStringa.MaximumLength = v16 + 2;
    Buffer[(unsigned __int64)v16 >> 1] = 0;
    RtlFreeAnsiString(UnicodeString);
    *UnicodeString = UnicodeStringa;
    UnicodeStringa = 0LL;
    goto LABEL_41;
  }
  if ( !a2 )
  {
    if ( a3 )
    {
      if ( PnpDuplicateUnicodeString((__int64)UnicodeString, (__int64)a3) )
        goto LABEL_41;
      goto LABEL_6;
    }
LABEL_40:
    v4 = -1073741811;
    goto LABEL_41;
  }
  if ( (unsigned int)*(unsigned __int16 *)a2 + 4 > 0xFFFE )
  {
LABEL_4:
    v4 = -2147483643;
    goto LABEL_41;
  }
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  UnicodeString->Buffer = Pool2;
  v10 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    v4 = -1073741670;
    goto LABEL_41;
  }
  v11 = *(_WORD *)a2;
  UnicodeString->Length = *(_WORD *)a2;
  if ( *(_WORD *)a2 )
  {
    memmove(v10, a2[1], *(unsigned __int16 *)a2);
    UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1] = 0;
    UnicodeString->Length += 2;
    v11 = UnicodeString->Length;
  }
  UnicodeString->Buffer[(unsigned __int64)v11 >> 1] = 0;
  UnicodeString->Length += 2;
  UnicodeString->MaximumLength = UnicodeString->Length;
LABEL_41:
  RtlFreeAnsiString(&UnicodeStringa);
  return v4;
}
