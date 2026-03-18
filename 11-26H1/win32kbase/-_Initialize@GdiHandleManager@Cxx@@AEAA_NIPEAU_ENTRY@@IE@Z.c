/*
 * XREFs of ?_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z @ 0x1401916DC
 * Callers:
 *     ?Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z @ 0x140191628 (-Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z.c)
 * Callees:
 *     ?Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z @ 0x140179558 (-Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z.c)
 *     ?Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z @ 0x1401BC7D0 (-Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

bool __fastcall Cxx::GdiHandleManager::_Initialize(
        Cxx::GdiHandleManager *this,
        int a2,
        struct _ENTRY *a3,
        unsigned int a4,
        int a5)
{
  struct Cxx::GdiHandleEntryDirectory *v6; // rax
  unsigned int i; // edi
  unsigned __int8 (__fastcall **v8)(Cxx::GdiHandleManager *, int *); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  *((_DWORD *)this + 4) = 0;
  _mm_mfence();
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 40) = 10;
  *((_QWORD *)this + 4) = 0LL;
  v6 = Cxx::GdiHandleEntryDirectory::Create(a3, a4);
  *((_QWORD *)this + 1) = v6;
  if ( v6 )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      v8 = *(unsigned __int8 (__fastcall ***)(Cxx::GdiHandleManager *, int *))this;
      a5 = 0;
      if ( !(*v8)(this, &a5) )
      {
        Cxx::GdiHandleEntryDirectory::Destroy(*((char ***)this + 1), v9, v10, v11);
        *((_QWORD *)this + 1) = 0LL;
        break;
      }
    }
    LOBYTE(v6) = *((_QWORD *)this + 1) != 0LL;
  }
  return (char)v6;
}
