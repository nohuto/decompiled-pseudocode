/*
 * XREFs of HvpAnalyzeSingleLogFile @ 0x140ADDA48
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 * Callees:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x140ADDB38 (HvpIncrementalLogFileEnumeratorAdvance.c)
 */

__int64 __fastcall HvpAnalyzeSingleLogFile(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v4; // r9d
  int v5; // edi
  int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-30h]
  unsigned __int64 v12; // [rsp+30h] [rbp-20h]
  _DWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  __int64 v15; // [rsp+48h] [rbp-8h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF

  v4 = a2[1];
  DWORD2(v11) = v4;
  DWORD1(v11) = *(_DWORD *)a1;
  if ( a2[7] != 6 )
  {
    HIDWORD(v12) = a2[10];
    LODWORD(v11) = 3;
    HIDWORD(v11) = a2[1];
    LODWORD(v12) = 0;
LABEL_13:
    result = 0LL;
    *(_OWORD *)a3 = v11;
    *(_QWORD *)(a3 + 16) = v12;
    return result;
  }
  v5 = 0;
  v14 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = 0;
  v15 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  LODWORD(v11) = 1;
  v16 = 0LL;
  v13[0] = 512;
  v13[1] = v4;
  while ( 1 )
  {
    result = HvpIncrementalLogFileEnumeratorAdvance(v13, &v16);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    ++v5;
    v7 = v13[0];
    v10 = *(_DWORD *)(v16 + 16);
    v6 = *(_DWORD *)(v16 + 12);
    if ( v10 <= v8 )
      v10 = v8;
    v8 = v10;
  }
  if ( v5 )
  {
    HIDWORD(v11) = v6;
    v12 = __PAIR64__(v8, v7);
    goto LABEL_13;
  }
  return 2147483682LL;
}
