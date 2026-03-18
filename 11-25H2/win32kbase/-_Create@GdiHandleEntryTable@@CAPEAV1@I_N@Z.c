/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x140027780
 * Callers:
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x140027AD8 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x140241E00 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v8; // rax

  v2 = 0;
  v5 = 32;
  if ( a2 )
  {
    v2 = 24 * a1;
    if ( 24 * (unsigned __int64)a1 > 0xFFFFFFFF )
      return 0LL;
    v5 = v2 + 32;
    if ( v2 + 32 < v2 )
      return 0LL;
  }
  v7 = Win32AllocPoolImpl(256LL, v5, 0x63746547u);
  if ( v7 )
  {
    v8 = GdiHandleEntryTable::EntryDataLookupTable::Create(a1);
    *(_QWORD *)(v7 + 24) = v8;
    if ( !v8 )
    {
      GreDeleteFastMutex((char *)v7);
      return 0LL;
    }
    if ( a2 )
    {
      *(_QWORD *)v7 = v7 + 32;
      memset((void *)(v7 + 32), 0, v2);
    }
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 8) = a1;
    *(_DWORD *)(v7 + 12) = -1;
  }
  return (struct GdiHandleEntryTable *)v7;
}
