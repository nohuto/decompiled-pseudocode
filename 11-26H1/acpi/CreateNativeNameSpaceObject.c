/*
 * XREFs of CreateNativeNameSpaceObject @ 0x140052A74
 * Callers:
 *     InitializeNativeNamespace @ 0x1400542D0 (InitializeNativeNamespace.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D1E8 (AMLICreateNativeNamespaceObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     SetClearAssociatedNativeObject @ 0x14006D5EC (SetClearAssociatedNativeObject.c)
 *     GetNextNameSegment @ 0x14006E0BC (GetNextNameSegment.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateNativeNameSpaceObject(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  int NameSpaceObject; // eax
  __int64 v12; // r15
  int v13; // ebx
  _BYTE *ObjectPath; // r13
  _BYTE *v15; // rdi
  int NextNameSegment; // eax
  int v17; // eax
  __int64 *v18; // rdi
  __int64 *v19; // rdx
  __int64 *v21; // [rsp+30h] [rbp-50h] BYREF
  _BYTE *v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  _QWORD *v27; // [rsp+60h] [rbp-20h]
  __int64 *v28; // [rsp+68h] [rbp-18h]
  _BYTE Src[8]; // [rsp+70h] [rbp-10h] BYREF

  v28 = a8;
  v8 = 0LL;
  v26 = gpNativeNameSpaceOwner;
  v9 = 0LL;
  v24 = gpnsNativeNameSpaceOverrideRoot;
  v10 = 0LL;
  v27 = (_QWORD *)gpheapGlobal;
  v25 = gpnsNameSpaceRoot;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  NameSpaceObject = GetNameSpaceObject(a2, a3, (__int64 *)&v22, 0);
  v12 = (__int64)v22;
  v13 = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    ObjectPath = GetObjectPath((__int64)v22);
    if ( ObjectPath )
    {
      DereferenceObjectEx(v12);
      v12 = 0LL;
      v22 = ObjectPath;
      v15 = ObjectPath;
      if ( *ObjectPath == 92 )
      {
        v15 = ObjectPath + 1;
        v22 = ObjectPath + 1;
      }
      v13 = GetNameSpaceObject(v15, v24, (__int64 *)&v21, 0);
      if ( v13 >= 0 )
      {
        FreeNameSpaceObjects(v21);
        v21 = 0LL;
      }
      v9 = v25;
      ReferenceObjectEx(v25);
      Src[4] = 0;
      v10 = v24;
      ReferenceObjectEx(v24);
      while ( v15 )
      {
        NextNameSegment = GetNextNameSegment(v15, Src, &v22);
        v13 = NextNameSegment;
        if ( NextNameSegment < 0 )
        {
          if ( NextNameSegment != -1073741197 )
            goto LABEL_22;
          v13 = 0;
          goto LABEL_21;
        }
        v13 = GetNameSpaceObject(Src, v9, &v23, 0);
        if ( v13 < 0 )
        {
          v8 = v23;
          goto LABEL_22;
        }
        v17 = CreateNameSpaceObject(v27, (__int64)Src, v10, v26, (__int64 *)&v21, 0x20000);
        v8 = v23;
        v13 = v17;
        v18 = v21;
        if ( v17 < 0 )
        {
          if ( v17 != -1073741771 )
            goto LABEL_22;
          v13 = 0;
        }
        else
        {
          v19 = v21;
          *((_WORD *)v21 + 32) |= 0xA00u;
          SetClearAssociatedNativeObject(v8, v19);
        }
        DereferenceObjectEx(v10);
        v21 = 0LL;
        v10 = (__int64)v18;
        DereferenceObjectEx(v9);
        v15 = v22;
        v9 = v8;
        v8 = 0LL;
        v23 = 0LL;
      }
      if ( v13 < 0 )
        goto LABEL_22;
LABEL_21:
      *v28 = v10;
      v10 = 0LL;
LABEL_22:
      ExFreePoolWithTag(ObjectPath, 0);
    }
    else
    {
      v13 = -1073741670;
    }
  }
  if ( v12 )
    DereferenceObjectEx(v12);
  if ( v9 )
    DereferenceObjectEx(v9);
  if ( v10 )
    DereferenceObjectEx(v10);
  if ( v8 )
    DereferenceObjectEx(v8);
  return (unsigned int)v13;
}
