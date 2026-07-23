/*
 * XREFs of MiValidateControlAreaPartition @ 0x140491A04
 * Callers:
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x14049E0E0 (MiReferenceExistingControlArea.c)
 *     MiShareExistingControlArea @ 0x140A63F80 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(__int64 a1, __int64 a2)
{
  ULONG *v2; // r10
  ULONG **v3; // rax
  int v5; // eax

  v2 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_DWORD *)(a2 + 56) & 0x100) != 0 )
    {
      if ( v2 == *(ULONG **)(stru_140E2ED08.ThreadLock
                           + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x400000;
LABEL_15:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &MiSystemPartition )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x800000;
    goto LABEL_15;
  }
  if ( *v3 == v2 && ((*(_DWORD *)(a2 + 56) ^ (*(_DWORD *)a1 >> 13)) & 0x100) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x400000u;
  return 3221226614LL;
}
