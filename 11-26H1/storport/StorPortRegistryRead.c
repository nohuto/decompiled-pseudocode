/*
 * XREFs of StorPortRegistryRead @ 0x140037CD0
 * Callers:
 *     <none>
 * Callees:
 *     PortMiniportRegistryRead @ 0x140037EB0 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1400380DC (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x14005C428 (StorpPortRegistryValidate.c)
 */

char __fastcall StorPortRegistryRead(
        PVOID VirtualAddress,
        PCSZ SourceString,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6)
{
  int **v9; // rax
  int *v10; // rcx
  int v11; // edx
  _DWORD *v12; // rbx
  __int64 v13; // r14
  int v14; // edx
  int v15; // eax
  char v16; // si
  int v17; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  if ( KeGetCurrentIrql() )
    goto LABEL_19;
  if ( !MmIsAddressValid(VirtualAddress) )
    goto LABEL_19;
  v9 = (int **)*((_QWORD *)VirtualAddress - 2);
  if ( !v9 )
    goto LABEL_19;
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_19;
  v11 = *v10;
  if ( ((_DWORD)v9[31] & 1) == 0 )
  {
    if ( v11 == 1094997074 )
    {
      v12 = v10 + 518;
      goto LABEL_8;
    }
LABEL_19:
    *a6 = 0;
    return 0;
  }
  if ( v11 != 1314275652 )
    goto LABEL_19;
  v12 = v10 + 230;
LABEL_8:
  v13 = *((_QWORD *)v10 + 2);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v12, a5, a6) )
    return 0;
  v15 = *a6;
  v16 = 0;
  v12[13] = v14 - v12[8];
  v12[11] = v15;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v13 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v17 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v12);
      if ( v17 >= 0 )
      {
        v16 = 1;
        *a6 = v12[11];
      }
      else if ( v17 == -1073741789 )
      {
        *a6 = v12[12];
      }
      else
      {
        *a6 = 0;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v16;
}
