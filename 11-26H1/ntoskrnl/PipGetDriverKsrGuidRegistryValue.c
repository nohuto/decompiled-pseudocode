/*
 * XREFs of PipGetDriverKsrGuidRegistryValue @ 0x14079FFF0
 * Callers:
 *     PipGetDriverKsrGuid @ 0x14079FF30 (PipGetDriverKsrGuid.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140ADB15C (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetDriverKsrGuidRegistryValue(void *a1, GUID *a2)
{
  int RegistryValue; // eax
  _WORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // rcx
  wchar_t *v9; // rax
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a1);
  v4 = P;
  v5 = RegistryValue;
  if ( RegistryValue >= 0 && *((_DWORD *)P + 1) == 1 )
  {
    v6 = *((unsigned int *)P + 3);
    if ( (unsigned int)v6 >= 2 )
    {
      v7 = *((unsigned int *)P + 2);
      if ( !*(_WORD *)((char *)P + 2 * ((unsigned __int64)(unsigned int)v6 >> 1) + v7 - 2) )
      {
        v8 = (char *)P + v7;
        LODWORD(P) = 0;
        PnpRegSzToString(v8, v6, &P);
        GuidString.MaximumLength = v4[6];
        v9 = (_WORD *)((char *)v4 + *((unsigned int *)v4 + 2));
        GuidString.Length = (unsigned __int16)P;
        GuidString.Buffer = v9;
        v5 = RtlGUIDFromString(&GuidString, a2);
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
