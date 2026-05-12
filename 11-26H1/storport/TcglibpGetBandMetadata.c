/*
 * XREFs of TcglibpGetBandMetadata @ 0x140132C28
 * Callers:
 *     TcglibGetBandMetadata @ 0x140130FE4 (TcglibGetBandMetadata.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpGetBandMetadata(int **a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // esi
  __int64 result; // rax
  int *v12; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v7 = 0;
  result = 0LL;
  v13[1] = 0LL;
  v15 = 0;
  while ( a5 )
  {
    v13[0] = v7;
    v12 = *a1;
    v13[2] = a6;
    v14 = a5;
    TcglibEalLogCommand(v12, "GetBandMetadata", 0, 22, v7, a5);
    result = TcglibpCallMethod(
               (_DWORD)a1,
               a2,
               0,
               22,
               (__int64)GenGetBandMetadataParams,
               (__int64)v13,
               0LL,
               0LL,
               (__int64)ParseBandMetadata,
               (__int64)v13);
    if ( (int)result < 0 )
      break;
    a6 += v14;
    v7 += v14;
    a5 -= v14;
  }
  return result;
}
