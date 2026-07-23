/*
 * XREFs of PfpSectInfoHandleFullBuffer @ 0x140AF8540
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 */

__int64 __fastcall PfpSectInfoHandleFullBuffer(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a2[8] - (_DWORD)a2;
  v4 = a2[11];
  v5 = a2[6] - (_DWORD)a2;
  v6 = a2[10];
  memset_0(a2, 0, 0x40uLL);
  a2[4] = 852013;
  a2[8] = 3;
  a2[6] = v5 - 16;
  a2[5] = 1128485697;
  a2[7] = 1;
  a2[9] = *(_DWORD *)(a1 + 700);
  a2[10] = *(_DWORD *)(a1 + 708);
  a2[12] = v6;
  a2[13] = v3;
  a2[11] = 32;
  a2[14] = v4;
  return PfTTraceListAdd(a1, a2, v8, v9);
}
