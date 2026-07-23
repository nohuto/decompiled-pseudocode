/*
 * XREFs of CmpCreatePredefined @ 0x14085135C
 * Callers:
 *     CmpCreatePerfKeys @ 0x140851200 (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 */

__int64 __fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, __int64 a3)
{
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+74h] [rbp-8Ch]
  __int128 v14; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v16[14]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-38h]

  v9[1] = 0;
  v13 = 0;
  memset_0(v16, 0, 0x1D0uLL);
  Handle = 0LL;
  DestinationString = 0LL;
  CmpInitializeParseContext(v16);
  v16[6] = 16777217;
  v16[0] = 33;
  v17 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  v9[0] = 48;
  v10 = a1;
  v12 = 576;
  v14 = 0LL;
  if ( (int)ObOpenObjectByName((unsigned int)v9, (_DWORD)CmKeyObjectType, 0, 0, 131097, (__int64)v16, (__int64)&Handle) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
  }
  return CmpCleanupParseContext(v16, 0LL);
}
