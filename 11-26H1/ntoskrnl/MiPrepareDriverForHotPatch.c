/*
 * XREFs of MiPrepareDriverForHotPatch @ 0x140879848
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1407257D0 (RtlGetHotPatchSize.c)
 *     MiLockHotPatchPages @ 0x140877998 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x140877A3C (MiLockHotPatchUndoPages.c)
 */

__int64 __fastcall MiPrepareDriverForHotPatch(__int64 a1)
{
  int *v1; // rsi
  unsigned int HotPatchSize; // r14d
  unsigned int v4; // ebx
  int v5; // ebp
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax

  v1 = *(int **)(a1 + 32);
  HotPatchSize = RtlGetHotPatchSize(*(_DWORD **)(a1 + 24));
  v4 = 0;
  while ( 1 )
  {
    v5 = *v1;
    if ( !*v1 )
      break;
    v6 = (__int64 *)(a1 + 8);
    v7 = (__int64 *)a1;
    if ( v5 < 0 )
      v6 = (__int64 *)a1;
    v8 = (__int64)(v1 + 1);
    if ( v5 < 0 )
      v7 = (__int64 *)(a1 + 8);
    v9 = *v6;
    result = MiLockHotPatchPages(*v7, v8, v5 & 0xFFF, HotPatchSize, v5, 0);
    if ( (int)result < 0 )
      return result;
    if ( (v5 & 0xFC000) == 0x5C000 )
    {
      result = MiLockHotPatchPages(v9, v8, v5 & 0xFFF, HotPatchSize, v5, 1u);
      if ( (int)result < 0 )
        return result;
    }
    v1 = (int *)(v8 + 4LL * (v5 & 0xFFF) * HotPatchSize);
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( !v11 )
    return 0LL;
  v12 = MiLockHotPatchUndoPages(*(_QWORD *)a1, v11);
  if ( v12 < 0 )
    return (unsigned int)v12;
  return v4;
}
