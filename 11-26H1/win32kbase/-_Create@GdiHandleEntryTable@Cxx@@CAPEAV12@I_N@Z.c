/*
 * XREFs of ?_Create@GdiHandleEntryTable@Cxx@@CAPEAV12@I_N@Z @ 0x140189584
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z @ 0x1400A6AC0 (-AcquireEntryIndex@GdiHandleManager@Cxx@@UEAA_NPEAI@Z.c)
 *     ?Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z @ 0x1401BC7D0 (-Create@GdiHandleEntryDirectory@Cxx@@SAPEAV12@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct Cxx::GdiHandleEntryTable *__fastcall Cxx::GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rsi

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
    v10 = (a1 + 255) >> 8;
    v11 = 8 * v10;
    if ( (unsigned int)(8 * v10) >= 0xFFFFFFF0 )
    {
      *(_QWORD *)v7 = 0LL;
    }
    else
    {
      v12 = Win32AllocPoolImpl(256LL, (unsigned int)(8 * v10 + 16), 0x746C6547u);
      v13 = v12;
      if ( v12 )
      {
        *(_QWORD *)v12 = v12 + 16;
        *(_DWORD *)(v12 + 8) = a1;
        memset((void *)(v12 + 16), 0, v11);
      }
      *(_QWORD *)v7 = v13;
      if ( v13 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v7 + 8) = v7 + 32;
          memset((void *)(v7 + 32), 0, v2);
        }
        *(_DWORD *)(v7 + 28) = a1;
        *(_DWORD *)(v7 + 20) = -1;
        *(_DWORD *)(v7 + 16) = 0;
        _mm_mfence();
        *(_DWORD *)(v7 + 24) = 0;
        return (struct Cxx::GdiHandleEntryTable *)v7;
      }
    }
    GreDeleteFastMutex((char *)v7, v10, v8, v9);
    return 0LL;
  }
  return (struct Cxx::GdiHandleEntryTable *)v7;
}
