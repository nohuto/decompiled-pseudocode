/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x18009C808
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x18009C300 (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 */

__int64 __fastcall AslpFileGetNtHeaderAttributes(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        __int64 a9)
{
  int ImageNtHeader; // eax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int16 v16; // dx
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v18[0] = 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(v18, a9);
  v14 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v15 = v18[0];
    *a2 = (unsigned __int8)*(_WORD *)(v18[0] + 70LL) + ((unsigned __int8)*(_WORD *)(v18[0] + 68LL) << 16);
    *a3 = *(_DWORD *)(v15 + 8);
    v16 = *(_WORD *)(v15 + 24);
    *a7 = v16;
    *a5 = *(_WORD *)(v15 + 4);
    *a8 = *(_WORD *)(v15 + 22);
    if ( v16 == 267 || v16 == 523 )
    {
      *a1 = *(_DWORD *)(v15 + 88);
      *a4 = *(_DWORD *)(v15 + 80);
      *a6 = *(_WORD *)(v15 + 92);
      return 0;
    }
    else
    {
      *a1 = 0;
      *a4 = 0;
      *a6 = 0;
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      "AslpFileGetNtHeaderAttributes",
      3635LL,
      "AslpFileGetImageNtHeader failed [%x]",
      ImageNtHeader);
  }
  return v14;
}
