/*
 * XREFs of AMLIGetFieldUnitRegionObj @ 0x14001D2F0
 * Callers:
 *     InternalRawAccessOpRegionHandler @ 0x14001CFF0 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     CreateObjectHandle @ 0x14001F000 (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetFieldUnitRegionObj(__int64 *a1, _QWORD *a2)
{
  int FieldUnitRegionObj; // ebx
  __int64 v4; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  dword_14008ED38 = 0;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj(a1, &v6);
  if ( FieldUnitRegionObj >= 0 && v6 )
  {
    *a2 = CreateObjectHandle(v6);
    DereferenceObjectEx(v4);
  }
  return (unsigned int)FieldUnitRegionObj;
}
