/*
 * XREFs of ?QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z @ 0x1401B73CC
 * Callers:
 *     ?QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x1401B72D4 (-QueryInSystemFontsDir@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 *     vInitFontsDirectoryNameInformation @ 0x1402007E0 (vInitFontsDirectoryNameInformation.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::FileQueryObj::QueryNameString(void **this, struct _OBJECT_NAME_INFORMATION *a2, ULONG a3)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp+18h] BYREF

  ReturnLength = a3;
  v4 = *this;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v4, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    ReturnLength = 0;
    v7 = ObQueryNameString(Object, a2, 0x190u, &ReturnLength);
    ObfDereferenceObject(v6);
  }
  return v7 >= 0;
}
