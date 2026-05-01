/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAPEAV12@@Z @ 0x1800891B4
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180088E44 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002C2EC (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180059744 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18005F058 (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_ACTIVITY_HOST *a3,
        struct ExecutionModel::ResourceSet **a4)
{
  PVOID Heap; // rax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  ExecutionModel::ResourceSet *v11; // rax
  ExecutionModel::ResourceSet *v12; // rax
  struct ExecutionModel::ResourceSet *v13; // rbx

  Heap = HampAllocateHeap(0x48uLL);
  v9 = (__int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x48uLL);
    RmpObjectHeaderInitialize(v9, a1, 1);
    v11 = (ExecutionModel::ResourceSet *)operator new(0x6C8uLL);
    if ( v11 && (v12 = ExecutionModel::ResourceSet::ResourceSet(v11), (v13 = v12) != 0LL) )
    {
      *((_QWORD *)v12 + 8) = a2;
      *((_DWORD *)v12 + 4) = *((_DWORD *)a2 + 4);
      *((_QWORD *)v12 + 3) = *((_QWORD *)a2 + 3);
      *((_QWORD *)v12 + 159) = *((_QWORD *)a2 + 159);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 2) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)v12 + 165) = a3;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v9 + 16)) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)v12 + 164) = v9;
      *((_QWORD *)v12 + 215) = *(_QWORD *)(v9 + 32);
      (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 8LL))(v12);
      *(_QWORD *)(v9 + 48) = v13;
      RmpObjectTableAddObject(
        (struct _RM_OBJECT_TABLE *)(*(_QWORD *)(*((_QWORD *)v13 + 3) + 128LL) + 648LL),
        (struct _RM_OBJECT_HEADER *)v9);
      *a4 = v13;
      return 0x10000000;
    }
    else
    {
      v10 = -805306345;
      RmpObjectRelease((char *)v9);
    }
  }
  else
  {
    return (unsigned int)-805306345;
  }
  return v10;
}
