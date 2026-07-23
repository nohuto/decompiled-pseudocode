/*
 * XREFs of CmpCopyCompressedName @ 0x1408C82E0
 * Callers:
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmAddLogForAction @ 0x1408B3454 (CmAddLogForAction.c)
 *     CmpMarkIndexDirty @ 0x1408C3D30 (CmpMarkIndexDirty.c)
 *     CmpInitializeValueNameString @ 0x1408C5BB4 (CmpInitializeValueNameString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C7DFC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAddSubKeyToList @ 0x1408C7F40 (CmpAddSubKeyToList.c)
 *     CmpPopulateKeyNodeInformation @ 0x1408C81B4 (CmpPopulateKeyNodeInformation.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408DEAD0 (CmpConstructNameFromKeyNodes.c)
 *     CmpInitializeKeyNameString @ 0x140B0BD84 (CmpInitializeKeyNameString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CF20A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140CF5B38 (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // r11d
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // r8

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  result = 0LL;
  if ( a4 )
  {
    if ( a4 < 4 )
      goto LABEL_13;
    v7 = a4 - 1;
    if ( a1 <= a3 + v7 && a1 + 2 * v7 >= a3 )
      goto LABEL_13;
    if ( a4 < 0x20 )
      goto LABEL_17;
    v8 = a4 & 0x1F;
    v9 = 16;
    do
    {
      *(__m128i *)(a1 + 2 * result) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(a3 + result)), (__m128i)0LL);
      result = (unsigned int)(result + 32);
      *(__m128i *)(a1 + 2LL * (v9 - 8)) = _mm_unpacklo_epi8(
                                            _mm_loadl_epi64((const __m128i *)(v9 - 8 + a3)),
                                            (__m128i)0LL);
      *(__m128i *)(a1 + 2LL * v9) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v9 + a3)), (__m128i)0LL);
      v10 = v9 + 8;
      v9 += 32;
      *(__m128i *)(a1 + 2 * v10) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v10 + a3)), (__m128i)0LL);
    }
    while ( (unsigned int)result < a4 - v8 );
    if ( v8 >= 4 )
    {
LABEL_17:
      do
      {
        *(_QWORD *)(a1 + 2 * result) = _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a3 + result)), (__m128i)0LL).m128i_u64[0];
        result = (unsigned int)(result + 4);
      }
      while ( (unsigned int)result < (a4 & 0xFFFFFFFC) );
    }
    if ( (unsigned int)result < a4 )
    {
LABEL_13:
      v11 = (unsigned __int8 *)(result + a3);
      v12 = a4 - (unsigned int)result;
      v13 = (_WORD *)(a1 + 2 * result);
      do
      {
        result = *v11++;
        *v13++ = result;
        --v12;
      }
      while ( v12 );
    }
  }
  return result;
}
