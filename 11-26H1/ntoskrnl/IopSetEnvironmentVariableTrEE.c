/*
 * XREFs of IopSetEnvironmentVariableTrEE @ 0x14079DE40
 * Callers:
 *     <none>
 * Callees:
 *     IopIssueTrEERequest @ 0x1405D6398 (IopIssueTrEERequest.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopEfiStatusToNTSTATUS @ 0x14079CF9C (IopEfiStatusToNTSTATUS.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int128 *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int128 v16; // xmm0
  int v17; // ecx
  int v19; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h] BYREF

  v19 = 0;
  v20 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = 2 * v11 + 2;
  Pool2 = ExAllocatePool2(0x100uLL);
  v14 = Pool2;
  if ( Pool2 )
  {
    v16 = *a4;
    v17 = a7 | 6;
    *(_DWORD *)Pool2 = 36;
    *(_OWORD *)(Pool2 + 4) = v16;
    if ( (a7 & 1) == 0 )
      v17 = a7;
    *(_DWORD *)(Pool2 + 20) = v17;
    memmove((void *)(Pool2 + 36), a3, v12);
    *(_DWORD *)(v14 + 32) = v12 + 36;
    *(_QWORD *)(v14 + 24) = Size;
    memmove((void *)(v14 + v12 + 36), Src, Size);
    v15 = IopIssueTrEERequest(2, a1, a2, v14, v12 + Size + 36, (__int64)&v20, 8u, 8u, &v19);
    if ( v15 >= 0 && v20 )
      v15 = IopEfiStatusToNTSTATUS(v20);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
