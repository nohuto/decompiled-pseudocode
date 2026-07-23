/*
 * XREFs of LdrCaptureDynamicRelocationTableHeader @ 0x140ABD6B4
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1408738F0 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 *     MiApplyDynamicRelocations @ 0x140D03FA8 (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrCaptureDynamicRelocationTableHeader(
        char *BaseOfImage,
        ULONG64 Size,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  NTSTATUS v10; // r10d
  unsigned __int16 v11; // bx
  int v12; // esi
  __int64 v13; // r11
  __int64 v14; // r11
  char *v15; // rdi
  char *v16; // r8
  __int64 v17; // rax
  int v18; // edx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-20h] BYREF

  v8 = (unsigned int)Size;
  OutHeaders = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  *a7 = 0;
  if ( a6 == 523 )
  {
    if ( a4 >= 0xE6 )
    {
      v11 = *(_WORD *)(a3 + 228);
      v12 = *(_DWORD *)(a3 + 224);
    }
    if ( a4 >= 0xC8 )
      v13 = *(_QWORD *)(a3 + 192);
  }
  else
  {
    if ( a4 >= 0x8E )
    {
      v11 = *(_WORD *)(a3 + 140);
      v12 = *(_DWORD *)(a3 + 136);
    }
    if ( a4 >= 0x7C )
      v13 = *(unsigned int *)(a3 + 120);
  }
  if ( v11 )
  {
    v15 = &BaseOfImage[(unsigned int)Size];
    v10 = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > OutHeaders->FileHeader.NumberOfSections )
      return (unsigned int)-1073741701;
    v16 = (char *)OutHeaders + OutHeaders->FileHeader.SizeOfOptionalHeader;
    if ( v15 <= &v16[40 * v11 - 16] || v15 < &v16[40 * v11 + 24] )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v14 = (unsigned int)(v12 + *(_DWORD *)&v16[40 * v11 - 4]);
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v14 = (unsigned int)(v13 - a5);
    else
      v14 = (unsigned int)(v13 - (_DWORD)BaseOfImage);
  }
  if ( v14 + 8 < (unsigned __int64)(unsigned int)v14 )
    return (unsigned int)-1073741701;
  if ( v14 + 8 > v8 )
    return (unsigned int)-1073741701;
  v17 = *(_QWORD *)&BaseOfImage[v14];
  v18 = HIDWORD(v17) + 8;
  if ( (unsigned int)(HIDWORD(v17) + 8) < HIDWORD(v17)
    || v18 + (int)v14 < (unsigned int)v14
    || v18 + (int)v14 > (unsigned int)v8 )
  {
    return (unsigned int)-1073741701;
  }
  else
  {
    *a7 = v14;
    if ( a8 )
      *a8 = v17;
  }
  return (unsigned int)v10;
}
