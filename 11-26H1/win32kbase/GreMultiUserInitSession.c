/*
 * XREFs of GreMultiUserInitSession @ 0x1400FC220
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1400FC330 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall GreMultiUserInitSession(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned __int16 *a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned int v12; // edi
  char *v13; // rcx
  __int64 v14; // rbp
  unsigned __int16 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rcx
  unsigned __int16 *v20; // rax

  *(_DWORD *)(a1 + 4) = a5;
  v12 = 0;
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = a4;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 24) = a2;
  v13 = *(char **)(a1 + 40);
  if ( v13 )
    GreDeleteFastMutex(v13, a2, a3, a4);
  v14 = (unsigned int)(a8 + 1);
  v15 = (unsigned __int16 *)Win32AllocPoolImpl(256LL, 2 * v14, 0x79737355u);
  *(_QWORD *)(a1 + 40) = v15;
  if ( v15 )
  {
    StringCchCopyNW(v15, (unsigned int)(a8 + 1), a9, (unsigned int)(a8 + 1));
    *(_DWORD *)(a1 + 48) = v14;
    v12 = 1;
  }
  v19 = *(char **)(a1 + 56);
  if ( v19 )
    GreDeleteFastMutex(v19, v16, v17, v18);
  v20 = (unsigned __int16 *)Win32AllocPoolImpl(256LL, 2LL * (unsigned int)(a10 + 1), 0x79737355u);
  *(_QWORD *)(a1 + 56) = v20;
  if ( v20 )
  {
    StringCchCopyNW(v20, (unsigned int)(a10 + 1), a11, (unsigned int)(a10 + 1));
    return 1;
  }
  return v12;
}
