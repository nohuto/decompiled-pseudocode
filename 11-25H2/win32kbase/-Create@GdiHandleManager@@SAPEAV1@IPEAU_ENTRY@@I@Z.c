/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140029A54
 * Callers:
 *     HmgCreate @ 0x140028D7C (HmgCreate.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140029BAC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(unsigned int a1, struct _ENTRY *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  struct GdiHandleEntryDirectory *v9; // rax

  if ( a3 < 0x10000 && a3 < a1 )
    return 0LL;
  v6 = Win32AllocPoolImpl(256LL, 0x20uLL, 0x636D6847u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_DWORD *)(v6 + 8) = a1;
  v9 = GdiHandleEntryDirectory::Create(a2, a3);
  *(_QWORD *)(v7 + 16) = v9;
  if ( !v9 )
  {
    GreDeleteFastMutex((char *)v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
