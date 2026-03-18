/*
 * XREFs of PiRegStateOpenClassKey @ 0x1400DB2A4
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1400DB600 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1400DB76C (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     CmRegUtilCreateWstrKey @ 0x1400DBA80 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1400DBAE0 (CmRegUtilOpenExistingWstrKey.c)
 */

int __fastcall PiRegStateOpenClassKey(
        const _GUID *DeviceClassGuid,
        unsigned int CreateIfNotPresent,
        unsigned int Disposition,
        unsigned int *ClassKeyHandle,
        void **DeviceClassGuid_0)
{
  int result; // eax
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // edi
  unsigned int createDisposition; // [rsp+70h] [rbp-61h] BYREF
  void *classBranchKey; // [rsp+78h] [rbp-59h] BYREF
  void *classKey[2]; // [rsp+80h] [rbp-51h] BYREF
  wchar_t classGuidString[40]; // [rsp+90h] [rbp-41h] BYREF

  classBranchKey = 0LL;
  classKey[0] = 0LL;
  createDisposition = 0;
  *DeviceClassGuid_0 = 0LL;
  if ( ClassKeyHandle )
    *ClassKeyHandle = 0;
  result = CmRegUtilOpenExistingWstrKey(
             0LL,
             (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
             0x20019u,
             &classBranchKey);
  if ( result >= 0 )
  {
    _snwprintf(
      classGuidString,
      0x27uLL,
      L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
      DeviceClassGuid->Data1,
      DeviceClassGuid->Data2,
      DeviceClassGuid->Data3,
      DeviceClassGuid->Data4[0],
      DeviceClassGuid->Data4[1],
      DeviceClassGuid->Data4[2],
      DeviceClassGuid->Data4[3],
      DeviceClassGuid->Data4[4],
      DeviceClassGuid->Data4[5],
      DeviceClassGuid->Data4[6],
      DeviceClassGuid->Data4[7]);
    v11 = classBranchKey;
    classGuidString[38] = 0;
    if ( Disposition )
    {
      v12 = CmRegUtilCreateWstrKey(classBranchKey, classGuidString, v9, v10, 0LL, &createDisposition, classKey);
      v13 = createDisposition;
    }
    else
    {
      v12 = CmRegUtilOpenExistingWstrKey(classBranchKey, classGuidString, 0xF003Fu, classKey);
      v13 = 2;
    }
    v14 = v12;
    ZwClose(v11);
    if ( v14 >= 0 )
    {
      *DeviceClassGuid_0 = classKey[0];
      if ( ClassKeyHandle )
        *ClassKeyHandle = v13;
    }
    return v14;
  }
  return result;
}
