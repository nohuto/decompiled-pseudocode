/*
 * XREFs of ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x140241E00
 * Callers:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x140027780 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140029BAC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct GdiHandleEntryTable::EntryDataLookupTable *__fastcall GdiHandleEntryTable::EntryDataLookupTable::Create(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi

  v2 = 8 * ((unsigned int)(a1 + 255) >> 8);
  if ( v2 >= 0xFFFFFFF0 )
    return 0LL;
  v3 = Win32AllocPoolImpl(256LL, v2 + 16, 0x746C6547u);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = v3 + 16;
    *(_DWORD *)(v3 + 8) = a1;
    memset((void *)(v3 + 16), 0, v2);
  }
  return (struct GdiHandleEntryTable::EntryDataLookupTable *)v4;
}
