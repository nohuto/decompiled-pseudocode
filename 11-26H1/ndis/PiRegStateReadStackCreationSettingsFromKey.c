/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x140151564
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x140151730 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1400743C0 (WdmlibRtlInitUnicodeStringEx.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x140151A04 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x140151C9C (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x140151F5C (CmRegUtilWstrValueGetDword.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(HANDLE KeyHandle, _QWORD *a2)
{
  void *v4; // rsi
  NTSTATUS inited; // eax
  __int64 v6; // r8
  int v7; // edi
  __int64 v8; // r9
  PVOID v9; // rax
  int Dword; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  void *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  P = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( inited >= 0 )
  {
    inited = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, (__int64)&v17);
    v4 = (void *)v17;
    v7 = inited;
    if ( inited >= 0 )
    {
      LOBYTE(v8) = 1;
      v7 = SeCaptureSecurityDescriptor(v17 + *(unsigned int *)(v17 + 8), 0LL, 1LL, v8, &P);
      goto LABEL_5;
    }
  }
  else
  {
    v7 = inited;
  }
  if ( inited == -1073741772 )
    v7 = 0;
LABEL_5:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v7 < 0 )
    goto LABEL_23;
  if ( P )
  {
    v7 = SeUtilSecurityInfoFromSecurityDescriptor(P);
    if ( v7 < 0 )
      goto LABEL_23;
    v9 = P;
    *(_DWORD *)a2 |= 2u;
    a2[1] = v9;
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v6, (char *)a2 + 4);
  v7 = Dword;
  if ( Dword < 0 )
  {
    if ( Dword != -1073741772 )
      goto LABEL_23;
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
  }
  v12 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v11, a2 + 2);
  v7 = v12;
  if ( v12 < 0 )
  {
    if ( v12 != -1073741772 )
      goto LABEL_23;
  }
  else
  {
    *(_DWORD *)a2 |= 4u;
  }
  v14 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v13, (char *)a2 + 20);
  v7 = v14;
  if ( v14 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)v7;
  }
  if ( v14 == -1073741772 )
    return 0;
LABEL_23:
  v15 = (void *)a2[1];
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return (unsigned int)v7;
}
