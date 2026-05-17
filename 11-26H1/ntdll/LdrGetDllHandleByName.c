/*
 * XREFs of LdrGetDllHandleByName @ 0x180084930
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(__int128 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rdx
  int LoadedDllByName; // ebx
  __int64 v6; // rdi
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0;
  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v8, &v9);
  if ( LoadedDllByName >= 0 )
  {
    if ( v9 < 7 )
    {
      LoadedDllByName = -1073741515;
      v6 = v8;
    }
    else
    {
      v6 = v8;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v8, v4);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v6 + 48);
    }
    LdrpDereferenceModule(v6);
  }
  return (unsigned int)LoadedDllByName;
}
