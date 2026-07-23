/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x1408738F0
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x140429E94 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140AA7894 (MiCreateRetpolineRelocationInformation.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABD6B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD3700 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x140AD392C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(PVOID BaseOfImage, ULONG64 Size, __int64 a3)
{
  __int64 v3; // r14
  NTSTATUS RetpolineRelocationInformation; // ebx
  _DWORD *Config; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  PIMAGE_NT_HEADERS v10; // r15
  char v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (unsigned int)Size;
  LODWORD(v15) = 0;
  OutHeaders = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfigEx((unsigned int *)BaseOfImage);
    if ( Config && (int)*Config >= 228 )
    {
      v8 = *((_QWORD *)Config + 15);
      v9 = 0;
      if ( v8 && v8 >= (unsigned __int64)BaseOfImage && v8 < (unsigned __int64)BaseOfImage + v3 - 8 )
        v9 = v8 - (_DWORD)BaseOfImage;
      v10 = OutHeaders;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         BaseOfImage,
                                         (unsigned int)v3,
                                         0LL,
                                         OutHeaders->OptionalHeader.Magic,
                                         (__int64)&v15,
                                         (__int64)&v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(
                                           (_DWORD)BaseOfImage,
                                           v3,
                                           v10->OptionalHeader.SizeOfHeaders,
                                           v15,
                                           (__int64)&v13,
                                           v12,
                                           (__int64)v14);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(v14, v9, (unsigned int)v3, a3);
          MiFreeImageRetpolineContext(v14);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)RetpolineRelocationInformation;
}
