/*
 * XREFs of SepIsLockedDown @ 0x140815978
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140A3D144 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     KIsSideloadingEnabled @ 0x14085100C (KIsSideloadingEnabled.c)
 *     ExQueryFastCacheDevLicense @ 0x140AF6380 (ExQueryFastCacheDevLicense.c)
 */

__int64 __fastcall SepIsLockedDown(unsigned __int8 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v4; // eax
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+18h] BYREF
  ULONG Type; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v6 = 0;
  Type = 0;
  ResultDataSize = 0;
  *a2 = 1;
  if ( a1 < 2u )
  {
    *a2 = 0;
    return v2;
  }
  v2 = KIsSideloadingEnabled(&v6);
  if ( (v2 & 0x80000000) != 0 )
    return v2;
  Data = v6;
  if ( v6 )
    goto LABEL_9;
  v4 = ZwQueryLicenseValue((PUNICODE_STRING)&SshpBlockerCollections.Padding[2], &Type, &Data, 4u, &ResultDataSize);
  v2 = v4;
  if ( v4 != -1073741772 )
  {
    if ( v4 < 0 )
      return v2;
    if ( !Data )
      goto LABEL_8;
LABEL_9:
    *a2 = 0;
    return v2;
  }
  Data = 0;
  v2 = 0;
LABEL_8:
  if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v2;
}
