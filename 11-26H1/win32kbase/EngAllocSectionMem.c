/*
 * XREFs of EngAllocSectionMem @ 0x1401F3540
 * Callers:
 *     <none>
 * Callees:
 *     Win32CreateSection @ 0x1401641E4 (Win32CreateSection.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

PVOID __fastcall EngAllocSectionMem(PVOID *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  PVOID v5; // rcx
  PVOID result; // rax
  int v7; // [rsp+20h] [rbp-58h]
  PVOID MappedBase; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize[3]; // [rsp+60h] [rbp-18h] BYREF

  ViewSize[0] = 0LL;
  v3 = a2;
  if ( !(_DWORD)a3 )
    return 0LL;
  v9[0] = a3;
  v9[1] = 0;
  if ( (int)Win32CreateSection(a1, a2, a3, (__int64)v9, v7, 0x8000000) < 0 )
    return 0LL;
  v5 = *a1;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(v5, &MappedBase, ViewSize) >= 0 )
  {
    result = MappedBase;
  }
  else
  {
    ObfDereferenceObject(*a1);
    result = 0LL;
    MappedBase = 0LL;
    *a1 = 0LL;
  }
  if ( (v3 & 1) != 0 )
  {
    if ( result )
    {
      memset(result, 0, LODWORD(ViewSize[0]));
      return MappedBase;
    }
  }
  return result;
}
