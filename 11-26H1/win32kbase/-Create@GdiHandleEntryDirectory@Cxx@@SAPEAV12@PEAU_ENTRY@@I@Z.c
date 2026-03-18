/*
 * XREFs of ?Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z @ 0x1401BC7D0
 * Callers:
 *     ?_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z @ 0x1401916DC (-_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z @ 0x140189584 (-_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct Cxx::GdiHandleEntryDirectory *__fastcall Cxx::GdiHandleEntryDirectory::Create(
        struct _ENTRY *a1,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct Cxx::GdiHandleEntryTable *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct Cxx::GdiHandleEntryTable *v13; // rdi
  _QWORD *v14; // rcx
  struct Cxx::GdiHandleEntryDirectory *result; // rax

  v4 = Win32AllocPoolImpl(256LL, 0x10uLL, 0x63746547u);
  if ( v4 )
  {
    v5 = Win32AllocPoolImpl(256LL, 0x800uLL, 0x63746547u);
    if ( v5 )
    {
      *(_QWORD *)v4 = v5;
      v9 = Cxx::GdiHandleEntryTable::_Create(a2, 0);
      v13 = v9;
      if ( v9 )
      {
        *((_QWORD *)v9 + 1) = a1;
        memset(*(void **)v4, 0, 0x800uLL);
        v14 = *(_QWORD **)v4;
        result = (struct Cxx::GdiHandleEntryDirectory *)v4;
        *(_BYTE *)(v4 + 14) = 0;
        *(_DWORD *)(v4 + 8) = a2;
        *v14 = v13;
        *(_WORD *)(v4 + 12) = 1;
        return result;
      }
      GreDeleteFastMutex(*(char **)v4, v10, v11, v12);
    }
    GreDeleteFastMutex((char *)v4, v6, v7, v8);
  }
  return 0LL;
}
