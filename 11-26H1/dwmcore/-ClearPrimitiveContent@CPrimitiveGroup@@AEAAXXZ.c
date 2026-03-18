/*
 * XREFs of ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x18027DBC0
 * Callers:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180094F18 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009D060 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroup::ClearPrimitiveContent(CPrimitiveGroup *this)
{
  *((_DWORD *)this + 99) = -1;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_BYTE *)this + 400) = 0;
  *(_QWORD *)((char *)this + 388) = 0LL;
  *((_DWORD *)this + 96) = 0;
}
