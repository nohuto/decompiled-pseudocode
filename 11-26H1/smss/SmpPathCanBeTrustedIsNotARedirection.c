/*
 * XREFs of SmpPathCanBeTrustedIsNotARedirection @ 0x140017244
 * Callers:
 *     SmpCheckFolderForRedirections @ 0x140013524 (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x14001483C (SmpForceDeleteTargetFile.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 * Callees:
 *     GetFinalPathNameByHandleW @ 0x14001B504 (GetFinalPathNameByHandleW.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

bool __fastcall SmpPathCanBeTrustedIsNotARedirection(HANDLE Handle, unsigned __int16 *a2, int a3)
{
  WCHAR *Heap; // rdi
  bool v7; // r14
  unsigned int FinalPathNameByHandleW; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  const WCHAR *v11; // r8
  __int16 v12; // cx
  __int64 v13; // rdx
  char v15; // [rsp+38h] [rbp-240h] BYREF

  Heap = 0LL;
  v7 = 0;
  if ( *a2 >= 0xCu )
  {
    FinalPathNameByHandleW = GetFinalPathNameByHandleW(Handle);
    v9 = FinalPathNameByHandleW;
    if ( FinalPathNameByHandleW )
    {
      v10 = FinalPathNameByHandleW + 2;
      if ( v10 > 0x106 )
      {
        Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 2LL * v10);
        if ( !Heap )
          return v7;
        v9 = GetFinalPathNameByHandleW(Handle);
        if ( !v9 )
        {
LABEL_15:
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
          return v7;
        }
        v11 = Heap + 4;
      }
      else
      {
        v11 = (const WCHAR *)&v15;
      }
      if ( *a2 >= (unsigned __int64)(2LL * (int)v9) )
      {
        if ( a3 && v9 > 7 )
        {
          v12 = 92;
          v13 = v9 - 4;
          v11[v9 - 3] = 0;
          ++v9;
        }
        else
        {
          v12 = 0;
          v13 = v9 - 4;
        }
        v11[v13] = v12;
        v7 = RtlCompareUnicodeStrings((PCWCH)(*((_QWORD *)a2 + 1) + 8LL), v9 - 3, v11, v9 - 3, 1u) == 0;
      }
      if ( Heap )
        goto LABEL_15;
    }
  }
  return v7;
}
