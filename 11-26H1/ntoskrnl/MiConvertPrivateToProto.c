/*
 * XREFs of MiConvertPrivateToProto @ 0x1402E9B0C
 * Callers:
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 * Callees:
 *     MiCreateCombineAnchor @ 0x1402E9BD4 (MiCreateCombineAnchor.c)
 *     MiSharePageGetFlushList @ 0x1402E9CD8 (MiSharePageGetFlushList.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiDecrementCombinedPteEx @ 0x14036BF5C (MiDecrementCombinedPteEx.c)
 */

__int64 __fastcall MiConvertPrivateToProto(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v5; // r15
  __int64 FlushList; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v12 = 0LL;
  v5 = *(_QWORD *)(v2 + 112);
  FlushList = MiSharePageGetFlushList();
  v7 = MiCreateCombineAnchor(v2, a2, &v12);
  v8 = v7;
  if ( !v7 )
  {
    v8 = MiCombineInitialInstance(v2, a2, FlushList);
LABEL_6:
    if ( v8 < 0 )
      return (unsigned int)v8;
LABEL_7:
    *a2 = a1[17];
    a1[17] = (__int64)a2;
    return (unsigned int)v8;
  }
  if ( v7 != -1073741302 )
    goto LABEL_6;
  v9 = FlushList;
  v10 = v12;
  v8 = MiCombineWithExisting(v2, a2, v12, v9);
  if ( v8 >= 0 )
    goto LABEL_7;
  MiDecrementCombinedPteEx(v5, v10 + 32, 0LL);
  return (unsigned int)v8;
}
