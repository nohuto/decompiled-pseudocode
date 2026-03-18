/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x14086D520
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x14040C74C (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140AAA2B4 (MiCreateRetpolineRelocationInformation.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x140ABB9B4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140AD69F0 (MiCaptureRetpolineRelocationTables.c)
 *     MiFreeImageRetpolineContext @ 0x140AD6C1C (MiFreeImageRetpolineContext.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  int RetpolineRelocationInformation; // ebx
  _DWORD *Config; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r15
  char v13; // [rsp+28h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a2;
  v16 = 0;
  v17 = 0LL;
  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, a1, a2, &v17);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfigEx(a1, v6);
    if ( Config && (int)*Config >= 228 )
    {
      v9 = *((_QWORD *)Config + 15);
      v10 = 0;
      if ( v9 && v9 >= a1 && v9 < v3 + a1 - 8 )
        v10 = v9 - a1;
      v11 = v17;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         a1,
                                         v3,
                                         (_DWORD)Config,
                                         *Config,
                                         0LL,
                                         *(_WORD *)(v17 + 24),
                                         (__int64)&v16,
                                         (__int64)&v14);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(
                                           a1,
                                           v3,
                                           *(_DWORD *)(v11 + 84),
                                           v16,
                                           (__int64)&v14,
                                           v13,
                                           (__int64)v15);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation(v15, v10, (unsigned int)v3, a3);
          MiFreeImageRetpolineContext(v15);
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
