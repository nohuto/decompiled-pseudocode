/*
 * XREFs of _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140B2621C
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1409606D0 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 * Callees:
 *     _CmGetRegKeySecurityDescriptor @ 0x140B0B638 (_CmGetRegKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceRegKeySecurityDescriptor(__int64 a1, int a2, _QWORD *a3)
{
  void *v4; // rcx
  unsigned int v6; // ebx
  int RegKeySecurityDescriptor; // eax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v6 = 0;
  if ( !a2 || (a2 & 0xFFFFFCCC) != 0 )
  {
    v6 = -1073741811;
  }
  else
  {
    *a3 = 0LL;
    if ( (a2 & 0xF00) != 0 || (_BYTE)a2 != 50 || !*(_BYTE *)(a1 + 4) )
      return v6;
    RegKeySecurityDescriptor = CmGetRegKeySecurityDescriptor(*(_DWORD *)a1 >= 0xA000000u, &v9);
    v4 = v9;
    v6 = RegKeySecurityDescriptor;
    if ( RegKeySecurityDescriptor >= 0 )
    {
      *a3 = v9;
      return v6;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v6;
}
