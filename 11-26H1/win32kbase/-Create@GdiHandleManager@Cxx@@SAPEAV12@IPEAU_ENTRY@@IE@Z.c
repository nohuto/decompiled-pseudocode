/*
 * XREFs of ?Create@GdiHandleManager@Cxx@@SAPEAV12@IPEAU_ENTRY@@IE@Z @ 0x140191628
 * Callers:
 *     HmgCreate @ 0x14010E70C (HmgCreate.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z @ 0x1401916DC (-_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

struct Cxx::GdiHandleManager *__fastcall Cxx::GdiHandleManager::Create(
        unsigned int a1,
        struct _ENTRY *a2,
        unsigned int a3)
{
  struct Cxx::GdiHandleManager *result; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // [rsp+20h] [rbp-18h]

  if ( a3 < 0x10000 && a3 < a1 )
    EngBugCheckEx(0x164u, 0x3CuLL, 0LL, 0LL, 0LL);
  result = (struct Cxx::GdiHandleManager *)Win32AllocPoolImpl(256LL, 0x30uLL, 0x636D6847u);
  v7 = (char *)result;
  if ( result )
  {
    *(_QWORD *)result = &Cxx::GdiHandleManager::`vftable';
    *((_DWORD *)result + 4) = 0;
    if ( !Cxx::GdiHandleManager::_Initialize(result, a1, a2, a3, v11) )
    {
      GreDeleteFastMutex(v7, v8, v9, v10);
      return 0LL;
    }
    return (struct Cxx::GdiHandleManager *)v7;
  }
  return result;
}
