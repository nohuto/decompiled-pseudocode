/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x140168D20
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 * Callees:
 *     <none>
 */

char __fastcall IsChildWindowCoordinateSpaceBoundary(const struct tagWND *a1)
{
  __int64 v1; // rdx
  char v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( (!v3 || (v4 = *(_QWORD *)(v3 + 8)) == 0 || v1 != *(_QWORD *)(v4 + 24))
      && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      return 1;
    }
  }
  return v2;
}
