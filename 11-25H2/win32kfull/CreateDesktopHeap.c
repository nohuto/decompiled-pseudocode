/*
 * XREFs of CreateDesktopHeap @ 0x1401EC250
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1401EBDA8 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2)
{
  ULONG_PTR v4; // rdi
  NTSTATUS v5; // eax
  int v7; // eax
  __int64 Heap; // rax
  ULONG_PTR v9; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+48h] [rbp-8h] BYREF
  PVOID Section; // [rsp+80h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp+38h] BYREF

  Section = 0LL;
  v4 = a2 + 4096LL;
  v9 = v4;
  v5 = ((__int64 (__fastcall *)(PVOID *, __int64, _QWORD, ULONG_PTR *, int, int, _QWORD, _QWORD))MmCreateSection)(
         &Section,
         983071LL,
         0LL,
         &v9,
         4,
         0x4000000,
         0LL,
         0LL);
  if ( v5 < 0 )
  {
    SetLastNtError(v5);
    return 0LL;
  }
  ObDeleteCapturedInsertInfo(Section);
  MappedBase = 0LL;
  ViewSize = v4;
  v7 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
  if ( v7 < 0 )
  {
    SetLastNtError(v7);
LABEL_9:
    ObfDereferenceObject(Section);
    *a1 = 0LL;
    return 0LL;
  }
  Heap = UserCreateHeap(Section, 0LL, MappedBase, a2, UserCommitDesktopMemory);
  if ( !Heap )
  {
    UserSetLastError(8);
    MmUnmapViewInSessionSpace(MappedBase);
    goto LABEL_9;
  }
  *a1 = Heap;
  return Section;
}
