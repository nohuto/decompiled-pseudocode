/*
 * XREFs of IommuGetLibraryContext @ 0x14059EC30
 * Callers:
 *     IommupPasidDeviceCreate @ 0x14058AAEC (IommupPasidDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     IommupGetSystemContext @ 0x14059F680 (IommupGetSystemContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IommuGetLibraryContext(int a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 SystemContext; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi

  *a4 = 0LL;
  SystemContext = IommupGetSystemContext(a2);
  v10 = HalpMmAllocCtxAlloc(v8, 64LL);
  if ( !v10 )
    return 3221225626LL;
  v13 = (_QWORD *)HalpMmAllocCtxAlloc(v9, 16LL);
  if ( !v13 )
  {
    HalpMmAllocCtxFree(v12, v10);
    return 3221225626LL;
  }
  memset_0((void *)v10, 0, 0x40uLL);
  *(_DWORD *)(v10 + 16) = a1;
  *(_BYTE *)(v10 + 56) = a3;
  *(_QWORD *)(v10 + 48) = v10 + 40;
  *(_QWORD *)(v10 + 40) = v10 + 40;
  result = 0LL;
  *v13 = SystemContext;
  v13[1] = v10;
  *a4 = v13;
  return result;
}
