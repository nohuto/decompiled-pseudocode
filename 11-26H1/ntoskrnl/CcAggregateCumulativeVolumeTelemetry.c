/*
 * XREFs of CcAggregateCumulativeVolumeTelemetry @ 0x1404957F4
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAggregateCumulativeVolumeTelemetry(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __m128i v3; // xmm0
  unsigned __int64 v4; // rax
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm1
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r10
  __m128i v19; // xmm1
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1288));
  *(_QWORD *)(a1 + 1248) += *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 1256);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  if ( v4 <= v1 )
    v4 = v1;
  v6 = _mm_add_epi64(v5, v3);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 1312));
  *(_QWORD *)(a1 + 1256) = v4;
  v8 = 10LL;
  *(_QWORD *)(a1 + 1264) += *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 1272) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 1304);
  *(__m128i *)(a1 + 1288) = v6;
  v10 = *(_QWORD *)(a1 + 72);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  if ( v9 <= v10 )
    v9 = v10;
  v12 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 1304) = v9;
  v13 = *(_QWORD *)(a1 + 1328);
  *(__m128i *)(a1 + 1312) = _mm_add_epi64(v11, v7);
  if ( v13 <= v12 )
    v13 = v12;
  v14 = (_QWORD *)(a1 + 1336);
  *(_QWORD *)(a1 + 1328) = v13;
  do
  {
    *v14 += *(v14 - 154);
    ++v14;
    --v8;
  }
  while ( v8 );
  v15 = *(_QWORD *)(a1 + 1448);
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 1848));
  v17 = *(_QWORD *)(a1 + 192);
  v18 = *(_QWORD *)(a1 + 1424);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 616));
  if ( v15 <= *(_QWORD *)(a1 + 216) )
    v15 = *(_QWORD *)(a1 + 216);
  v20 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 1448) = v15;
  v21 = *(_QWORD *)(a1 + 1456);
  v22 = v18 + v17;
  *(__m128i *)(a1 + 1848) = _mm_add_epi64(v19, v16);
  if ( v21 <= v20 )
    v21 = v20;
  v23 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 1456) = v21;
  *(_QWORD *)(a1 + 1864) += *(_QWORD *)(a1 + 632);
  v24 = *(_QWORD *)(a1 + 1440);
  if ( v22 )
  {
    v24 = (v17 * v23 + v18 * v24) / v22;
  }
  else if ( v24 <= v23 )
  {
    v24 = v23;
  }
  *(_QWORD *)(a1 + 1440) = v24;
  v25 = 12LL;
  v26 = *(_QWORD *)(a1 + 640);
  *(_QWORD *)(a1 + 1416) += *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 1432) += *(_QWORD *)(a1 + 200);
  v27 = *(_QWORD *)(a1 + 1872);
  *(_QWORD *)(a1 + 1424) = v22;
  if ( v27 <= v26 )
    v27 = v26;
  v28 = *(_QWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 1872) = v27;
  v29 = *(_QWORD *)(a1 + 1880);
  if ( v29 <= v28 )
    v29 = v28;
  *(_QWORD *)(a1 + 1880) = v29;
  *(_QWORD *)(a1 + 2272) += *(_QWORD *)(a1 + 1040);
  v30 = *(_QWORD *)(a1 + 2280);
  if ( v30 <= *(_QWORD *)(a1 + 1048) )
    v30 = *(_QWORD *)(a1 + 1048);
  v31 = (_QWORD *)(a1 + 1464);
  *(_QWORD *)(a1 + 2280) = v30;
  do
  {
    *v31 += *(v31 - 154);
    v31[12] += *(v31 - 142);
    v31[24] += *(v31 - 130);
    v31[36] += *(v31 - 118);
    v31[53] += *(v31 - 101);
    v31[65] += *(v31 - 89);
    v31[77] += *(v31 - 77);
    v31[89] += *(v31 - 65);
    v31[103] += *(v31 - 51);
    result = *(v31 - 39);
    v31[115] += result;
    ++v31;
    --v25;
  }
  while ( v25 );
  return result;
}
