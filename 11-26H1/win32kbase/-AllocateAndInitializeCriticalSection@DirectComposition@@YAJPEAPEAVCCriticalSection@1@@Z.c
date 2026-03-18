/*
 * XREFs of ?AllocateAndInitializeCriticalSection@DirectComposition@@YAJPEAPEAVCCriticalSection@1@@Z @ 0x14011058C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::AllocateAndInitializeCriticalSection(
        DirectComposition *this,
        struct DirectComposition::CCriticalSection **a2)
{
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_QWORD *)this = 0LL;
  v3 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, sizeof(struct _ERESOURCE));
    v6 = ExInitializeResourceLite(v4);
    if ( v6 >= 0 )
      *(_QWORD *)this = v4;
    else
      GreDeleteFastMutex((char *)v4, v5, v7, v8);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
