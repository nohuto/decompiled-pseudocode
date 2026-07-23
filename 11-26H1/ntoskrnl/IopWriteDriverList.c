/*
 * XREFs of IopWriteDriverList @ 0x1404E55E0
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     IoFillTriageDumpBuffer @ 0x1405C9264 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IopWriteDriverList(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  PVOID *v4; // rbx
  int v5; // ebp
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = (PVOID *)PsLoadedModuleList;
  v5 = a1;
  v6 = a1 + (unsigned int)a3;
  v7 = (unsigned int *)(a1 + a4);
  v8 = 0;
  while ( 1 )
  {
    if ( v4 == &PsLoadedModuleList )
      return 0LL;
    if ( !(unsigned __int8)IopIsAddressRangeValid(v4, 160LL, a3)
      || !(unsigned __int8)IopIsAddressRangeValid(v4[12], *((unsigned __int16 *)v4 + 44), v9) )
    {
      break;
    }
    v10 = *((unsigned __int16 *)v4 + 44) >> 1;
    *v7 = v10;
    memmove(v7 + 1, v4[12], 2 * v10);
    *((_WORD *)v7 + *v7 + 2) = 0;
    v11 = v8++;
    v12 = v6 + 144 * v11;
    *(_OWORD *)(v12 + 8) = *(_OWORD *)v4;
    *(_OWORD *)(v12 + 24) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v12 + 40) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v12 + 56) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v12 + 72) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v12 + 88) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v12 + 104) = *((_OWORD *)v4 + 6);
    *(_OWORD *)(v12 + 120) = *((_OWORD *)v4 + 7);
    *(_QWORD *)(v12 + 136) = v4[16];
    *(_DWORD *)(v12 + 136) = *((_DWORD *)v4 + 39);
    *(_DWORD *)(v12 + 72) = *((_DWORD *)v4 + 38);
    *(_DWORD *)v12 = (_DWORD)v7 - v5;
    v4 = (PVOID *)*v4;
    v7 = (unsigned int *)(((unsigned __int64)v7 + 2 * *v7 + 13) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 3221225473LL;
}
