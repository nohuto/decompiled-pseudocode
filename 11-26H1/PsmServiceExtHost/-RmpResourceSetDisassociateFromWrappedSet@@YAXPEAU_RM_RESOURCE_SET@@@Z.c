/*
 * XREFs of ?RmpResourceSetDisassociateFromWrappedSet@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002D008
 * Callers:
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002CE94 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpResourceSetDisassociateFromWrappedSet(struct _RM_RESOURCE_SET *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rax

  v1 = (__int64 *)*((_QWORD *)a1 + 6);
  RmpObjectRelease((char *)a1);
  v3 = *v1;
  v1[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v3 + 16))(v1);
  *((_QWORD *)a1 + 6) = 0LL;
}
