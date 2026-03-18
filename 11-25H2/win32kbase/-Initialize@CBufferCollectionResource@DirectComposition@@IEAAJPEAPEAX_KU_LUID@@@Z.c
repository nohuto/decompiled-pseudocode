/*
 * XREFs of ?Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z @ 0x140228FDC
 * Callers:
 *     ?ObjectInit@BufferCollectionObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x140228040 (-ObjectInit@BufferCollectionObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVIComp.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x140153028 (GreDxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall DirectComposition::CBufferCollectionResource::Initialize(
        DirectComposition::CBufferCollectionResource *this,
        void **a2,
        unsigned __int64 a3,
        struct _LUID a4)
{
  NTSTATUS v8; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  PVOID v11; // rcx
  char *v12; // rdi
  __int64 v13; // rbp
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  void *v15; // rcx
  PVOID *v16; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0LL;
  KeEnterCriticalRegion();
  v12 = (char *)Win32AllocPoolWithQuotaImpl(v10, 8 * a3, 0x66624344u);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = (unsigned int)v9;
      if ( (unsigned int)v9 >= a3 )
      {
        *((_QWORD *)this + 3) = a3;
        *((_QWORD *)this + 2) = v12;
        *((struct _LUID *)this + 4) = a4;
        *((_BYTE *)this + 8) = 1;
        goto LABEL_11;
      }
      SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType((__int64)v11);
      v15 = a2[v9];
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(v15, 0xF0001u, SharedAllocationObjectType, 1, &Object, 0LL);
      if ( v8 < 0 )
        break;
      v11 = Object;
      *(_QWORD *)&v12[8 * v9] = Object;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( (_DWORD)v9 )
    {
      v16 = (PVOID *)v12;
      do
      {
        ObfDereferenceObject(*v16++);
        --v13;
      }
      while ( v13 );
    }
    GreDeleteFastMutex(v12);
  }
  else
  {
    v8 = -1073741801;
  }
LABEL_11:
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
