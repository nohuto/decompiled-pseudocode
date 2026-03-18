/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x14006DE90
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006DFE8 (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 *     ReferenceObjectEx @ 0x140036D50 (ReferenceObjectEx.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006DE90 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, __int64 *a2)
{
  int NameSpaceObject; // ebx
  _QWORD *v5; // rdx
  int Src; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+24h] [rbp-24h]
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NameSpaceObject = 0;
  v10[0] = 0LL;
  v9 = 0LL;
  if ( a1 == gpnsNameSpaceRoot )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      ReferenceObjectEx(gpnsNameSpaceOverrideRoot);
      *v5 = gpnsNameSpaceOverrideRoot;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject("^", a1, v10, 0);
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v10[0], &v9);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v8 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src, v9, a2, 0);
        DereferenceObjectEx(v9);
      }
      DereferenceObjectEx(v10[0]);
    }
  }
  return (unsigned int)NameSpaceObject;
}
