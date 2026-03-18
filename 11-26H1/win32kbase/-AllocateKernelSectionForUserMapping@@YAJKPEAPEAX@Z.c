/*
 * XREFs of ?AllocateKernelSectionForUserMapping@@YAJKPEAPEAX@Z @ 0x14015D860
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 * Callees:
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 */

__int64 __fastcall AllocateKernelSectionForUserMapping(unsigned int a1, void **a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  int v5; // esi
  void *v6; // rcx
  union _LARGE_INTEGER MaximumSize; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *SectionHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MaximumSize.QuadPart = a1 + 16LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SectionHandle = 0LL;
  if ( ZwCreateSection(&SectionHandle, 0xF001Fu, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
    goto LABEL_8;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  v6 = SectionHandle;
  if ( v3 < 0 )
  {
    ZwClose(SectionHandle);
    v6 = 0LL;
    SectionHandle = 0LL;
  }
  if ( v5 < 0 )
  {
LABEL_8:
    Object = 0LL;
  }
  else
  {
    ZwClose(v6);
    if ( v4 )
    {
      *a2 = v4;
      return 0LL;
    }
  }
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)&Object);
  return 3221225495LL;
}
