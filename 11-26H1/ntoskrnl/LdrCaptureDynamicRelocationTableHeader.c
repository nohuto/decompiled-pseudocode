/*
 * XREFs of LdrCaptureDynamicRelocationTableHeader @ 0x140ABB9B4
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x14086D520 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x1409CC9F0 (MiParseImageLoadConfig.c)
 *     MiApplyDynamicRelocations @ 0x140CFDC00 (MiApplyDynamicRelocations.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrCaptureDynamicRelocationTableHeader(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  int v10; // r10d
  unsigned __int16 v11; // bx
  int v12; // esi
  __int64 v13; // r11
  __int64 v14; // r11
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF

  v8 = a2;
  v20[0] = 0LL;
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
    v15 = a2 + a1;
    v10 = RtlImageNtHeaderEx(0, a1, a2, v20);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > *(_WORD *)(v20[0] + 6LL) )
      return (unsigned int)-1073741701;
    v16 = v20[0] + *(unsigned __int16 *)(v20[0] + 20LL);
    if ( v15 <= v16 - 16 + 40 * (unsigned __int64)v11 || v15 < v16 + 24 + 40 * (unsigned __int64)v11 )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v14 = (unsigned int)(v12 + *(_DWORD *)(v16 + 40LL * v11 - 4));
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v14 = (unsigned int)(v13 - a5);
    else
      v14 = (unsigned int)(v13 - a1);
  }
  if ( v14 + 8 < (unsigned __int64)(unsigned int)v14 )
    return (unsigned int)-1073741701;
  if ( v14 + 8 > v8 )
    return (unsigned int)-1073741701;
  v17 = *(_QWORD *)(v14 + a1);
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
