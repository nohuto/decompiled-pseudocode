/*
 * XREFs of ?Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z @ 0x14022B2B0
 * Callers:
 *     ?ObjectInit@BufferCollectionObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14022A2F0 (-ObjectInit@BufferCollectionObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVIComp.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x140182DCC (GreDxgkGetSharedAllocationObjectType.c)
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
  __int64 v11; // rdx
  PVOID v12; // rcx
  char *v13; // rdi
  __int64 v14; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  void *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID *v19; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0LL;
  KeEnterCriticalRegion();
  v13 = (char *)Win32AllocPoolWithQuotaImpl(v10, 8 * a3, 0x66624344u);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = (unsigned int)v9;
      if ( (unsigned int)v9 >= a3 )
      {
        *((_QWORD *)this + 3) = a3;
        *((_QWORD *)this + 2) = v13;
        *((struct _LUID *)this + 4) = a4;
        *((_BYTE *)this + 8) = 1;
        goto LABEL_11;
      }
      SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType((__int64)v12, v11);
      v16 = a2[v9];
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(v16, 0xF0001u, SharedAllocationObjectType, 1, &Object, 0LL);
      if ( v8 < 0 )
        break;
      v12 = Object;
      *(_QWORD *)&v13[8 * v9] = Object;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( (_DWORD)v9 )
    {
      v19 = (PVOID *)v13;
      do
      {
        ObfDereferenceObject(*v19++);
        --v14;
      }
      while ( v14 );
    }
    GreDeleteFastMutex(v13, v11, v17, v18);
  }
  else
  {
    v8 = -1073741801;
  }
LABEL_11:
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
