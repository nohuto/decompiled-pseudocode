/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x140119700
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1401FB31C (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v2; // ecx
  __int64 v4; // rdx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v2 = 0;
  if ( !CurrentProcessWin32Process || !*(_QWORD *)CurrentProcessWin32Process )
    return 0LL;
  if ( *(_DWORD *)(CurrentProcessWin32Process + 868) )
  {
    v4 = *(_QWORD *)(CurrentProcessWin32Process + 808);
    if ( (v4 & 0x30) == 0x10 )
      return (v4 & 0x200) == 0;
  }
  return v2;
}
