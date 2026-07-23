/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18007D850
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007D91C (LdrpFindLoadedDllByMapping.c)
 *     LdrpFatalExceptionFilter @ 0x18015B5A0 (LdrpFatalExceptionFilter.c)
 */

NTSTATUS __cdecl LdrGetDllHandleByMapping(PVOID BaseAddress, PVOID *DllHandle)
{
  int LoadedDllByMapping; // ebx
  void *Buf1; // [rsp+28h] [rbp-10h] BYREF

  Buf1 = 0LL;
  LoadedDllByMapping = RtlImageNtHeaderEx(1u, BaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&Buf1);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, Buf1);
    if ( LoadedDllByMapping >= 0 )
    {
      LoadedDllByMapping = -1073741515;
      LdrpDereferenceModule(0LL);
    }
  }
  return LoadedDllByMapping;
}
