/*
 * XREFs of WheapGetModuleInfo @ 0x1406D633C
 * Callers:
 *     WheapInitializePshedInterface @ 0x140CE8288 (WheapInitializePshedInterface.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlEqualString @ 0x1404A4570 (RtlEqualString.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheapGetModuleInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int *Pool2; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int i; // esi
  const char *v9; // rbp
  STRING String2; // [rsp+20h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+74h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v13 = 0;
  v3 = 0;
  DestinationString = 0LL;
  Pool2 = 0LL;
  String2 = 0LL;
  while ( 1 )
  {
    v6 = ZwQuerySystemInformation(11LL, Pool2, v3, &v13);
    v7 = v6;
    if ( v6 >= 0 )
      break;
    if ( v6 != -1073741820 )
    {
      if ( !Pool2 )
        return v7;
      goto LABEL_19;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x61656857u);
    v3 = v13;
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v7 = -1073741772;
  RtlInitAnsiString(&DestinationString, "pshed.dll");
  for ( i = 0; i < *Pool2; ++i )
  {
    v9 = (const char *)&Pool2[74 * i + 2];
    RtlInitAnsiString(&String2, &v9[*((unsigned __int16 *)v9 + 19) + 40]);
    if ( RtlEqualString(&DestinationString, &String2, 1u) )
    {
      if ( a2 )
        *a2 = *((_QWORD *)v9 + 2);
      v7 = 0;
      break;
    }
  }
LABEL_19:
  ExFreePoolWithTag(Pool2, 0x61656857u);
  return v7;
}
