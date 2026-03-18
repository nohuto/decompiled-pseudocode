/*
 * XREFs of ParseNestedContext @ 0x1400707F0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     AsyncCallBack @ 0x14000F688 (AsyncCallBack.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
      v3 = DupObjData((_QWORD *)gpheapGlobal, v6, a2 + 48);
  }
  AsyncCallBack((_QWORD *)a1, v3);
  FreeDataBuffs(a2 + 48, 1u);
  v7 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = v7 & 0xFFFFFEFF;
  *(_DWORD *)(a1 + 64) = v7 ^ (*(_DWORD *)(a2 + 112) ^ v7) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v8);
  *(_QWORD *)(a2 + 40) = 0LL;
  v9 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v9[1];
  HeapFree(v9);
  return 0x8000LL;
}
