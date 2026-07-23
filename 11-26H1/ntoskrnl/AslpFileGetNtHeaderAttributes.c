/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x140893B3C
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x1408935BC (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
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
  int ImageNtHeader; // ebx
  unsigned __int16 *v14; // rbx
  __int16 UShortFromUser; // ax
  size_t v16; // r8
  unsigned __int16 v17; // ax
  void *Src; // [rsp+38h] [rbp-180h] BYREF
  _WORD *v20; // [rsp+40h] [rbp-178h]
  _WORD *v21; // [rsp+48h] [rbp-170h]
  _WORD *v22; // [rsp+50h] [rbp-168h]
  _BYTE v23[272]; // [rsp+60h] [rbp-158h] BYREF

  v21 = a5;
  v20 = a7;
  v22 = a8;
  Src = 0LL;
  memset_0(v23, 0, 0x108uLL);
  ImageNtHeader = AslpFileGetImageNtHeader(&Src, a9);
  if ( ImageNtHeader >= 0 )
  {
    v14 = (unsigned __int16 *)Src;
    if ( MmIsUserAddress((unsigned __int64)Src) )
    {
      UShortFromUser = RtlReadUShortFromUser(v14 + 12);
      v16 = 240LL;
      if ( UShortFromUser != 523 )
        v16 = 224LL;
      RtlCopyFromUser(v23, v14, v16);
      v14 = (unsigned __int16 *)v23;
      Src = v23;
    }
    *a2 = (unsigned __int8)v14[35] + ((unsigned __int8)v14[34] << 16);
    *a3 = *((_DWORD *)v14 + 2);
    *v20 = v14[12];
    *v21 = v14[2];
    *v22 = v14[11];
    v17 = v14[12];
    if ( v17 == 267 || v17 == 523 )
    {
      *a1 = *((_DWORD *)v14 + 22);
      *a4 = *((_DWORD *)v14 + 20);
      *a6 = v14[46];
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
      1,
      (unsigned int)"AslpFileGetNtHeaderAttributes",
      3635,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]");
  }
  return (unsigned int)ImageNtHeader;
}
