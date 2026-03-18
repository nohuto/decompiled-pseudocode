/*
 * XREFs of AMLIAddNamespaceOverride @ 0x14006D664
 * Callers:
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     FreeObjOwner @ 0x14000C7F0 (FreeObjOwner.c)
 *     FreeOwnedObjects @ 0x14000DABC (FreeOwnedObjects.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x14003938C (InsertOwnerObjList.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 *     CatError @ 0x14006E870 (CatError.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400B6F30 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSCloseHandle @ 0x1400D1E58 (OSCloseHandle.c)
 */

__int64 AMLIAddNamespaceOverride()
{
  int NamespaceOverride; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (gOverrideFlags & 0x20) == 0 )
    return 0;
  v1 = OSOpenAMLINamespaceOverrideHandle(&v5);
  NamespaceOverride = v1;
  if ( v1 == -1073741772 )
  {
    return 0;
  }
  else if ( v1 >= 0 )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      NamespaceOverride = NewObjOwner((_QWORD *)gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner);
      if ( NamespaceOverride >= 0 )
      {
        v3 = NewNameSpaceObject(gpheapGlobal, v2);
        gpnsNameSpaceOverrideRoot = v3;
        if ( v3 )
        {
          *(_DWORD *)(v3 + 40) = 1600085852;
          InsertOwnerObjList((struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner, (struct _EX_RUNDOWN_REF *)v3);
          NamespaceOverride = AMLIAddNextNamespaceOverride(v5, gpnsNameSpaceOverrideRoot);
          OSCloseHandle(v5);
          DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
          if ( NamespaceOverride < 0 )
          {
            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
            FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
            FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
            gpNameSpaceOverrideOwner = 0LL;
            gpnsNameSpaceOverrideRoot = 0LL;
          }
        }
        else
        {
          NamespaceOverride = -1073741670;
          LogError(-1073741670);
          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
        }
      }
    }
  }
  return (unsigned int)NamespaceOverride;
}
