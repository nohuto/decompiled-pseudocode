/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x1403DFC80
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x140A8DEE4 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A8EAE0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

NTSTATUS __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, __int64 a2, int a3, ULONG Flags, __int64 *a5)
{
  char v5; // si
  LANGID v7; // di
  NTSTATUS result; // eax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // edx
  unsigned int *i; // rcx
  PVOID ResourceDllBase; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR ResourceOffset[2]; // [rsp+38h] [rbp-10h] BYREF

  ResourceDllBase = 0LL;
  v5 = Flags;
  if ( (unsigned int)(a3 - 3) > 1 )
    return -1073741583;
  if ( (Flags & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  ResourceOffset[0] = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, &ResourceDllBase, ResourceOffset, Flags);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741766 )
      return -1073020927;
  }
  else
  {
    v9 = (int)ResourceDllBase;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && result >= 0 )
    {
      v10 = *(_DWORD *)(a2 + 24);
      v11 = *a5;
      ResourceOffset[0] = 0LL;
      if ( ResourceDllBase && v11 )
      {
        result = LdrpAccessResourceDataNoMultipleLanguage(ResourceDllBase, v11, ResourceOffset, 0LL);
        if ( result >= 0 )
        {
          v12 = *(_DWORD *)ResourceOffset[0];
          for ( i = (unsigned int *)(ResourceOffset[0] + 4); v12--; i += 3 )
          {
            if ( v10 >= *i && v10 <= i[1] )
              return 0;
          }
          result = -1073741559;
        }
      }
      else
      {
        result = -1073741811;
      }
      *a5 = 0LL;
    }
  }
  return result;
}
