/*
 * XREFs of ViDeadlockKeWaitForMultipleObjects_Exit @ 0x140C4DE50
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockObjectAcquired @ 0x140C3DCF0 (ViDeadlockObjectAcquired.c)
 */

char __fastcall ViDeadlockKeWaitForMultipleObjects_Exit(__int64 a1)
{
  signed int v1; // eax
  __int64 v2; // r9
  __int64 v3; // r8
  _BYTE **v4; // rdx
  unsigned int v5; // ecx

  v1 = *(_DWORD *)(a1 + 52) & 0xFFFFFF7F;
  if ( *(_BYTE *)(a1 + 25) )
  {
    if ( *(int *)(a1 + 52) >= 0 && v1 < *(_DWORD *)(a1 + 48) )
    {
      v2 = *(_QWORD *)a1;
      v3 = *(_QWORD *)(a1 + 16);
      v4 = (_BYTE **)(*(_QWORD *)(a1 + 40) + 8LL * v1);
      v5 = 1;
      goto LABEL_7;
    }
  }
  else if ( !v1 )
  {
    v2 = *(_QWORD *)a1;
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_BYTE ***)(a1 + 40);
    v5 = *(_DWORD *)(a1 + 48);
LABEL_7:
    LOBYTE(v1) = ViDeadlockObjectAcquired(v5, v4, v3, v2);
  }
  return v1;
}
