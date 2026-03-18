/*
 * XREFs of InitializeNativeNamespace @ 0x1400542D0
 * Callers:
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 * Callees:
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     NewNameSpaceObject @ 0x14000FA34 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x14003938C (InsertOwnerObjList.c)
 *     CreateNativeNameSpaceObject @ 0x140052A74 (CreateNativeNameSpaceObject.c)
 */

__int64 InitializeNativeNamespace()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  LODWORD(v1) = NewObjOwner((_QWORD *)gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNativeNameSpaceOwner);
  if ( (int)v1 >= 0 )
  {
    v2 = NewNameSpaceObject(gpheapGlobal, v0);
    gpnsNativeNameSpaceOverrideRoot = v2;
    if ( v2 )
    {
      *(_DWORD *)(v2 + 40) = 1600085852;
      InsertOwnerObjList((struct _EX_RUNDOWN_REF *)gpNativeNameSpaceOwner, (struct _EX_RUNDOWN_REF *)v2);
      v4 = 0;
      v5 = 0LL;
      do
      {
        v6 = CreateNativeNameSpaceObject(v1, apszDefinedRootObjs[v5], 0LL, v3, v8, v9, v10, &v11);
        v1 = (unsigned int)v6;
        if ( v6 < 0 )
          break;
        ++v4;
        *(_QWORD *)((char *)&AmliNativePreDefinedRootObjects + v5 * 8) = v11;
        ++v5;
      }
      while ( v4 < 5 );
    }
    else
    {
      LODWORD(v1) = -1073741670;
    }
  }
  return (unsigned int)v1;
}
