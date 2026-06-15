/*
 * XREFs of sub_140016858 @ 0x140016858
 * Callers:
 *     sub_140015F50 @ 0x140015F50 (sub_140015F50.c)
 *     sub_140016660 @ 0x140016660 (sub_140016660.c)
 *     sub_140016980 @ 0x140016980 (sub_140016980.c)
 *     sub_140016A40 @ 0x140016A40 (sub_140016A40.c)
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_14001C154 @ 0x14001C154 (sub_14001C154.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_14003EDD0 @ 0x14003EDD0 (sub_14003EDD0.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_1400801B0 @ 0x1400801B0 (sub_1400801B0.c)
 *     sub_1400805E0 @ 0x1400805E0 (sub_1400805E0.c)
 *     sub_140080640 @ 0x140080640 (sub_140080640.c)
 *     sub_1400806A0 @ 0x1400806A0 (sub_1400806A0.c)
 *     sub_1400807B0 @ 0x1400807B0 (sub_1400807B0.c)
 *     sub_140087960 @ 0x140087960 (sub_140087960.c)
 *     sub_140088A38 @ 0x140088A38 (sub_140088A38.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_1400909A0 @ 0x1400909A0 (sub_1400909A0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140016858(void **a1, void *a2)
{
  void *v2; // rdi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 && v2 != (void *)-1LL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
