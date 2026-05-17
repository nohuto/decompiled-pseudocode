/*
 * XREFs of LdrGetDllHandleByMapping @ 0x1800864B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByMapping @ 0x18008657C (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int LoadedDllByMapping; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0;
  v8 = 0LL;
  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0LL, &v8);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(a1, v8, &v10, &v9);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v9 < 7 )
      {
        LoadedDllByMapping = -1073741515;
        v6 = v10;
      }
      else
      {
        v6 = v10;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount(v10, v5);
        if ( LoadedDllByMapping >= 0 )
          *a2 = *(_QWORD *)(v6 + 48);
      }
      LdrpDereferenceModule(v6);
    }
  }
  return (unsigned int)LoadedDllByMapping;
}
