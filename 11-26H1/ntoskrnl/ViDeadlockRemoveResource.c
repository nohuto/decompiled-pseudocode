/*
 * XREFs of ViDeadlockRemoveResource @ 0x140C3E008
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14064ACD8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x140C3CB00 (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140C3D4DC (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140C27694 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x140C3DED8 (ViDeadlockRemoveNode.c)
 */

__int64 __fastcall ViDeadlockRemoveResource(int *a1, int a2, int **a3)
{
  int v6; // ebp
  __int64 *v7; // rax
  int *v8; // rsi
  int *v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  int **v12; // rcx
  unsigned __int64 v13; // r10
  __int64 result; // rax
  unsigned __int64 v15; // r10

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    v6 = 1;
  }
  else
  {
    v6 = a2;
    if ( !a2 )
    {
      v7 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( v7 )
      {
        ViDeadlockPreprocessOptions(
          byte_140E0EB6C,
          "Deleted lock 0x%p is still owned by the thread 0x%p.",
          4107LL,
          *((_QWORD *)a1 + 1),
          *v7,
          (__int64)a1);
        VfReportIssueWithOptions(
          0xC4u,
          0x100BuLL,
          *((_QWORD *)a1 + 1),
          **((_QWORD **)a1 + 2),
          (ULONG_PTR)a1,
          byte_140E0EB6C);
        v6 = a2;
      }
    }
  }
  v8 = (int *)*((_QWORD *)a1 + 3);
  while ( v8 != a1 + 6 )
  {
    v9 = v8 - 10;
    v8 = *(int **)v8;
    ViDeadlockRemoveNode(v9, v6);
    *(_QWORD *)v9 = *a3;
    *a3 = v9;
  }
  v10 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v11 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v11 + 8) != a1 + 10 || (v12 = (int **)*((_QWORD *)a1 + 6), *v12 != a1 + 10) )
    __fastfail(3u);
  *v12 = (int *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  v13 = *((_QWORD *)a1 + 1) >> 12;
  result = 1023 * (v13 / 0x3FF);
  v15 = 2 * (v13 % 0x3FF);
  if ( *(_QWORD *)(v15 * 8 + v10[2]) != v15 * 8 + v10[2] )
    return VfUtilAddressRangeRemove(
             &v10[v15 + 4],
             *((_QWORD *)a1 + 1),
             (unsigned int)ViDeadlockResourceTypeSizeInfo[*a1]);
  v10[v15 + 4] = 0LL;
  v10[v15 + 5] = 0LL;
  return result;
}
