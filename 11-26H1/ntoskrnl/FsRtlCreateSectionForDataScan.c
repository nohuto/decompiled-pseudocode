/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x1403100A0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CcZeroEndOfLastPage @ 0x1403110A8 (CcZeroEndOfLastPage.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     MmCreateSectionEx @ 0x14098B2D0 (MmCreateSectionEx.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x140AA5290 (FsRtlAcquireToCreateMappedSection.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  void *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS MappedSection; // ebx
  NTSTATUS v15; // eax
  LARGE_INTEGER v16; // rbx
  int inserted; // esi
  char v18; // di
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v21; // r15
  NTSTATUS result; // eax
  int v23; // [rsp+40h] [rbp-40h]
  ULONGLONG ullMultiplicand; // [rsp+50h] [rbp-30h]
  char v25[4]; // [rsp+60h] [rbp-20h] BYREF
  int v26; // [rsp+64h] [rbp-1Ch] BYREF
  int v27[2]; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+70h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-8h] BYREF

  FileSize.QuadPart = 0LL;
  *(_QWORD *)v27 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  *(_DWORD *)v25 = 0;
  v26 = 0;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  MappedSection = FsRtlAcquireToCreateMappedSection(
                    (_DWORD)FileObject,
                    SectionPageProtection,
                    1,
                    AllocationAttributes,
                    (__int64)v25,
                    (__int64)&v26);
  if ( MappedSection < 0 )
  {
    KeLeaveCriticalRegion();
    result = MappedSection;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  else
  {
    v15 = FsRtlGetFileSize(FileObject, &FileSize);
    v16 = FileSize;
    inserted = v15;
    if ( v15 >= 0 )
    {
      if ( FileSize.QuadPart )
      {
        v18 = v25[0];
        while ( 1 )
        {
          LODWORD(ullMultiplicand) = 0;
          Section = MmCreateSectionEx(
                      (int)v27,
                      (int)ObjectAttributes,
                      v16.LowPart,
                      SectionPageProtection,
                      AllocationAttributes,
                      0LL,
                      (__int64)FileObject,
                      v18,
                      v23,
                      0LL,
                      ullMultiplicand);
          inserted = Section;
          if ( Section != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
        }
        v12 = *(void **)v27;
        if ( Section >= 0 )
        {
          FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(*(_QWORD *)v27);
          v21 = FileObjectForSection;
          if ( FileObjectForSection )
          {
            CcZeroEndOfLastPage(FileObjectForSection);
            ObfDereferenceObjectWithTag(v21, 0x746C6644u);
          }
        }
      }
      else
      {
        inserted = -1073741807;
      }
    }
    FsRtlReleaseFile(FileObject);
    KeLeaveCriticalRegion();
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( inserted >= 0 )
    {
      ObfReferenceObjectWithTag(v12, 0x746C6644u);
      inserted = ObInsertObject(v12, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *SectionObject = v12;
        if ( SectionFileSize )
          *SectionFileSize = v16;
      }
    }
    return inserted;
  }
  return result;
}
