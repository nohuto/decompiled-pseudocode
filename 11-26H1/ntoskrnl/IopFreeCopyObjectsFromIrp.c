/*
 * XREFs of IopFreeCopyObjectsFromIrp @ 0x14040F0AC
 * Callers:
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopUnlockAndFreeMdl @ 0x14040F3F4 (IopUnlockAndFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromIrp(__int64 a1)
{
  __int64 v1; // rax
  struct _MDL *v3; // rcx
  __int64 v4; // rbx
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v1 && _bittest16((const signed __int16 *)(v1 + 2), 9u) && *(_QWORD *)(a1 + 112) )
  {
    v3 = *(struct _MDL **)(a1 + 8);
    if ( v3 )
    {
      IopUnlockAndFreeMdl(v3);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v4 = *(_QWORD *)(a1 + 112);
    v5 = *(void **)(v4 - 24);
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x746C6644u);
    ExFreePoolWithTag((PVOID)(v4 - 80), 0);
  }
}
