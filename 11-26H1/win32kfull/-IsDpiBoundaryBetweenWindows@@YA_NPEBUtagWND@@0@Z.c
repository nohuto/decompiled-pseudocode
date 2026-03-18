/*
 * XREFs of ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x14002C6E0
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiBoundaryBetweenWindows(const struct tagWND *a1, const struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *((_QWORD *)a2 + 5);
  v3 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v3 + 256) == *(_QWORD *)(v2 + 256) )
    return (((unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v2 + 288) >> 8)) & 0x1FF) != 0;
  return (*(_DWORD *)(v3 + 288) & 0xF) != 2 || (*(_DWORD *)(v2 + 288) & 0xF) != 2;
}
