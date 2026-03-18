/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1401E8700
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x14007A83C (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  int i; // edi
  struct tagCURSOR *v3; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v3 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v3 )
        _DestroyCursor(v3, 0LL);
    }
    Win32FreePool(*((void **)a1 + 12));
  }
  return 1LL;
}
