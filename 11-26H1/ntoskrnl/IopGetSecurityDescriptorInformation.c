/*
 * XREFs of IopGetSecurityDescriptorInformation @ 0x140AFAC84
 * Callers:
 *     IoCreateDeviceSecure @ 0x140AFAA30 (IoCreateDeviceSecure.c)
 *     IopQuerySecureDeviceClassState @ 0x140B3140C (IopQuerySecureDeviceClassState.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopGetSecurityDescriptorInformation(_WORD *a1, BOOLEAN *a2, _DWORD *a3)
{
  __int16 v5; // dx
  __int64 v6; // rax
  char *v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  char *v10; // r8
  NTSTATUS result; // eax
  BOOLEAN DaclPresent; // [rsp+40h] [rbp+8h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+48h] [rbp+10h] BYREF
  PACL Dacl; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( *(_BYTE *)a1 != 1 )
    return -1073741736;
  v5 = a1[1];
  if ( v5 >= 0 )
  {
    v7 = (char *)*((_QWORD *)a1 + 1);
  }
  else
  {
    v6 = *((unsigned int *)a1 + 1);
    if ( (_DWORD)v6 )
      v7 = (char *)a1 + v6;
    else
      v7 = 0LL;
  }
  v8 = v7 != 0LL;
  if ( v5 >= 0 )
  {
    v10 = (char *)*((_QWORD *)a1 + 2);
  }
  else
  {
    v9 = *((unsigned int *)a1 + 2);
    if ( (_DWORD)v9 )
      v10 = (char *)a1 + v9;
    else
      v10 = 0LL;
  }
  DaclDefaulted = (v5 & 2) != 0;
  if ( v10 )
    v8 |= 2u;
  if ( (v5 & 0x10) != 0 )
  {
    DaclPresent = 1;
    DaclDefaulted = (v5 & 0x20) != 0;
    v8 |= 8u;
  }
  else
  {
    DaclPresent = 0;
  }
  result = RtlGetDaclSecurityDescriptor(a1, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( result >= 0 )
  {
    if ( DaclPresent )
      v8 |= 4u;
    *a2 = DaclDefaulted;
    *a3 = v8;
  }
  return result;
}
