/*
 * XREFs of ?AllocateSharedSection@@YAJKPEAPEAX00@Z @ 0x1401B46EC
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 * Callees:
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z @ 0x140142390 (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_KPEAT_LARGE_INTEGER@@@Z.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, void **a2, void **a3, void **a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  NTSTATUS v9; // eax
  PVOID v10; // rdi
  int v11; // esi
  void *v12; // rcx
  void *v14; // rcx
  void *SectionHandle; // [rsp+48h] [rbp-69h] BYREF
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  __int64 v17; // [rsp+58h] [rbp-59h] BYREF
  __int64 v18; // [rsp+60h] [rbp-51h]
  void *v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+70h] [rbp-41h]
  int v21; // [rsp+78h] [rbp-39h]
  __int64 v22; // [rsp+80h] [rbp-31h] BYREF
  __int64 v23; // [rsp+88h] [rbp-29h]
  void *v24; // [rsp+90h] [rbp-21h]
  __int64 v25; // [rsp+98h] [rbp-19h]
  int v26; // [rsp+A0h] [rbp-11h]
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-1h] BYREF

  v4 = 0;
  v5 = a1;
  MaximumSize.QuadPart = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  SectionHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 0xF001Fu, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
    return 3221225495LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  v10 = Object;
  v11 = v9;
  v12 = SectionHandle;
  if ( v9 < 0 )
  {
    ZwClose(SectionHandle);
    v12 = 0LL;
    SectionHandle = 0LL;
  }
  if ( v11 < 0 )
    return 3221225495LL;
  ZwClose(v12);
  if ( !v10 )
    return 3221225495LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  SectionHandle = 0LL;
  v21 = 6;
  if ( !Gre::MapViewOfSectionObj::Map((__int64)&v17, (__int64)v10, 1, v5, &SectionHandle) )
  {
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v17);
    Gre::SectionObj::~SectionObj(&Object);
    return 3221225495LL;
  }
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 6;
  SectionHandle = 0LL;
  if ( Gre::MapViewOfSectionObj::Map((__int64)&v22, (__int64)v10, 2, v5, &SectionHandle) )
  {
    v14 = v24;
    *a4 = v19;
    *a3 = v14;
    Object = 0LL;
    *a2 = v10;
    v19 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v20 = 0LL;
    v21 = 6;
    v24 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v25 = 0LL;
    v26 = 6;
  }
  else
  {
    v4 = -1073741801;
  }
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v22);
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v17);
  Gre::SectionObj::~SectionObj(&Object);
  return v4;
}
