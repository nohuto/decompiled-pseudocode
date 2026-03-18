/*
 * XREFs of RunMethodCallBack @ 0x14006F410
 * Callers:
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 */

void __fastcall RunMethodCallBack(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  _BYTE *v5; // rax
  const char *v6; // rdx
  void *v7; // rbx
  __int64 v8; // rdx
  _BYTE *ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rbx

  v3 = *a1;
  if ( a2 )
  {
    if ( dword_14008ED38 )
    {
      ObjectPath = GetObjectPath(v3);
      v10 = byte_140075A82;
      v11 = ObjectPath;
      if ( ObjectPath )
        v10 = ObjectPath;
      ConPrintf("\n%s failed with the following error:\n%s\n", v10, pszDest);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v5 = GetObjectPath(v3);
    v6 = byte_140075A82;
    v7 = v5;
    if ( v5 )
      v6 = v5;
    ConPrintf("\n%s completed successfully with object data:\n", v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    DumpObject(a3, v8, 0LL);
  }
  fRunningMethod = 0;
}
