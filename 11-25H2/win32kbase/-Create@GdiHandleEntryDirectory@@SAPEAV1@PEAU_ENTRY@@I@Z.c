/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140029BAC
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140029A54 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x140241E00 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v6; // rax
  struct GdiHandleEntryDirectory *result; // rax

  v4 = Win32AllocPoolImpl(256LL, 0x810uLL, 0x63746547u);
  if ( !v4 )
    return 0LL;
  v5 = Win32AllocPoolImpl(256LL, 0x20uLL, 0x63746547u);
  if ( !v5 )
  {
LABEL_5:
    GreDeleteFastMutex((char *)v4);
    return 0LL;
  }
  v6 = GdiHandleEntryTable::EntryDataLookupTable::Create(a2);
  *(_QWORD *)(v5 + 24) = v6;
  if ( !v6 )
  {
    GreDeleteFastMutex((char *)v5);
    goto LABEL_5;
  }
  *(_DWORD *)(v5 + 12) = -1;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 8) = a2;
  *(_QWORD *)v5 = a1;
  memset((void *)(v4 + 16), 0, 0x7F8uLL);
  result = (struct GdiHandleEntryDirectory *)v4;
  *(_BYTE *)v4 = 0;
  *(_DWORD *)(v4 + 2056) = a2;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(v4 + 2) = 1;
  return result;
}
