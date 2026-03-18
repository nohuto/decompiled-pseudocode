/*
 * XREFs of ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14011AE7C
 * Callers:
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x140119A1C (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x14011A3D8 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x14011CE2C (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x14011DEE0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     CleanupHidRequestList @ 0x140275000 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidPageOnlyRequest(struct tagHID_PAGEONLY_REQUEST ***a1)
{
  struct tagHID_PAGEONLY_REQUEST **v1; // rdx
  struct tagHID_PAGEONLY_REQUEST **v2; // rax

  v1 = *a1;
  if ( (*a1)[1] != (struct tagHID_PAGEONLY_REQUEST *)a1 || (v2 = a1[1], *v2 != (struct tagHID_PAGEONLY_REQUEST *)a1) )
    __fastfail(3u);
  *v2 = (struct tagHID_PAGEONLY_REQUEST *)v1;
  v1[1] = (struct tagHID_PAGEONLY_REQUEST *)v2;
  Win32FreePool(a1);
}
