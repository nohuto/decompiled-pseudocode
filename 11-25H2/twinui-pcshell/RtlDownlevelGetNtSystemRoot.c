/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x18013CFF8
 * Callers:
 *     AslEnvBuildBasic @ 0x18013AABC (AslEnvBuildBasic.c)
 *     AslEnvVarQuery @ 0x18013DB8C (AslEnvVarQuery.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v2; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_18089D660;
  if ( !qword_18089D660 )
  {
    v0 = 2147352624LL;
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v2 = Library;
    if ( Library )
    {
      ProcAddress = GetProcAddress(Library, "RtlGetNtSystemRoot");
      if ( ProcAddress )
        v0 = ProcAddress();
      FreeLibrary(v2);
    }
    qword_18089D660 = v0;
  }
  return v0;
}
