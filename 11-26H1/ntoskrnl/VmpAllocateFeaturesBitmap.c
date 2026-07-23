/*
 * XREFs of VmpAllocateFeaturesBitmap @ 0x14077EAA8
 * Callers:
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 VmpAllocateFeaturesBitmap()
{
  __int64 Pool2; // rax
  __int64 v1; // rcx

  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)Pool2 = 4;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
  return v1;
}
