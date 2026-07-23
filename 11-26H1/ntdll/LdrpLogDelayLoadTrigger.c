/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x1800C6830
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800C2F70 (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     sprintf_s @ 0x1801339D0 (sprintf_s.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     strlen @ 0x180164EE0 (strlen.c)
 */

int __fastcall LdrpLogDelayLoadTrigger(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  const char *v15; // rcx
  size_t v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  char *v20; // r15
  size_t v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // r12d
  unsigned __int16 *v24; // r14
  unsigned int v25; // r13d
  unsigned int v26; // ebp
  struct _PEB *Heap_0; // rax
  unsigned int v28; // ecx
  unsigned int v29; // esi
  _WORD *v30; // rdi
  __int64 v31; // r10
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  __int64 v34; // r10
  _WORD *v35; // rdx
  int v36; // r8d
  __int16 v37; // ax
  _WORD *v38; // rax
  int v39; // eax
  unsigned int v40; // ebp
  _WORD *v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // r10
  int v44; // r8d
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  _WORD *v47; // rdx
  __int16 v48; // cx
  _WORD *v49; // rcx
  int v50; // ecx
  char *v51; // rdi
  unsigned int v52; // ebp
  unsigned int v53; // ecx
  unsigned int v54; // r9d
  unsigned int v55; // edx
  __int64 v56; // rax
  unsigned int v57; // r8d
  unsigned int v58; // r11d
  __int64 v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  __m128i v62; // xmm0
  __m128i v63; // xmm0
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __m128i v67; // xmm0
  __int64 v68; // rax
  __int64 v69; // r10
  char *v70; // rcx
  char *v71; // r8
  __int16 v72; // ax
  char *v73; // rdi
  unsigned int v74; // edx
  __int64 v75; // rax
  unsigned int v76; // r8d
  __int64 v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rax
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __int64 v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rax
  __m128i v85; // xmm0
  char *v86; // r8
  __int64 v87; // rax
  _DWORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  unsigned int v92; // [rsp+20h] [rbp-88h]
  unsigned __int64 v93; // [rsp+28h] [rbp-80h]
  struct _PEB *Fields; // [rsp+30h] [rbp-78h]
  char Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v12 = 2147353477LL;
    if ( (*(_BYTE *)v12 & 0x10) != 0 )
      goto LABEL_7;
  }
  LODWORD(Heap_0) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)Heap_0 )
  {
    Heap_0 = NtCurrentPeb();
    v90 = (__int64)Heap_0->SharedData + 554;
  }
  else
  {
    v90 = 2147353476LL;
  }
  if ( *(_BYTE *)v90 )
  {
    Heap_0 = NtCurrentPeb();
    if ( (Heap_0->TracingFlags & 4) != 0 )
    {
      LODWORD(Heap_0) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)Heap_0 )
      {
        Heap_0 = NtCurrentPeb();
        v10 = (__int64)Heap_0->SharedData + 555;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_7:
        v13 = a2[1];
        v14 = *(_QWORD *)(a1 + 48) + v13 == 0;
        v15 = (const char *)(*(_QWORD *)(a1 + 48) + v13);
        v93 = (unsigned __int64)v15;
        if ( v14 )
        {
          LOWORD(v16) = 0;
        }
        else
        {
          v16 = strlen(v15);
          if ( v16 >= 0xFFFF )
            LOWORD(v16) = -2;
        }
        v17 = *(_QWORD *)(a1 + 48);
        v18 = *(_QWORD *)(v17 + a2[4] + 8 * ((a4 - a2[3] - v17) >> 3));
        if ( v18 < 0 )
        {
          v19 = (unsigned __int16)v18;
        }
        else
        {
          v19 = 0;
          v20 = (char *)(v18 + v17 + 2);
          if ( v20 )
            goto LABEL_13;
        }
        sprintf_s(Buffer, 0xCuLL, "#%u", v19);
        v20 = Buffer;
LABEL_13:
        LOWORD(v21) = 0;
        if ( v20 )
        {
          v21 = strlen(v20);
          if ( v21 >= 0xFFFF )
            LOWORD(v21) = -2;
        }
        v22 = a1 + 72;
        v23 = (unsigned __int16)v21;
        v24 = (unsigned __int16 *)(a3 + 72);
        v25 = (unsigned __int16)v16;
        v26 = *(unsigned __int16 *)(a1 + 72) + *v24 + 6 + 2 * ((unsigned __int16)v21 + (unsigned __int16)v16 + 1);
        v92 = v26 + 36;
        Heap_0 = (struct _PEB *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v26 + 36);
        Fields = Heap_0;
        if ( Heap_0 )
        {
          *(_WORD *)&Heap_0->Padding0[2] = 5334;
          v28 = 0;
          LODWORD(Heap_0->ProcessParameters) = 3;
          v29 = 2;
          v30 = (_WORD *)&Heap_0->ProcessParameters + 2;
          if ( v22 && *(_WORD *)v22 )
          {
            v31 = *(_QWORD *)(v22 + 8);
            v32 = (unsigned __int64)v26 >> 1;
            if ( v32 )
            {
              v33 = (unsigned __int64)v26 >> 1;
              v34 = v31 - (_QWORD)v30;
              v35 = (_WORD *)&Heap_0->ProcessParameters + 2;
              v36 = 0;
              do
              {
                if ( !(2147483646 - v32 + v33) )
                  break;
                v37 = *(_WORD *)((char *)v35 + v34);
                if ( !v37 )
                  break;
                *v35 = v37;
                ++v36;
                ++v35;
                --v33;
              }
              while ( v33 );
              v38 = v35 - 1;
              if ( v33 )
                v38 = v35;
              *v38 = 0;
              v39 = v36 - 1;
              if ( v33 )
                v39 = v36;
              v28 = v32 - v39;
            }
            v28 = v26 + 2 * (1 - v28);
          }
          else if ( v26 >= 2 )
          {
            v28 = 2;
            *v30 = 0;
          }
          v40 = v26 - v28;
          v41 = (_WORD *)((char *)v30 + v28);
          v42 = 0;
          if ( v24 && *v24 )
          {
            v43 = (unsigned __int64)v40 >> 1;
            if ( v43 )
            {
              v44 = 0;
              v45 = *((_QWORD *)v24 + 1) - (_QWORD)v41;
              v46 = (unsigned __int64)v40 >> 1;
              v47 = v41;
              do
              {
                if ( !(2147483646 - v43 + v46) )
                  break;
                v48 = *(_WORD *)((char *)v47 + v45);
                if ( !v48 )
                  break;
                *v47 = v48;
                ++v44;
                ++v47;
                --v46;
              }
              while ( v46 );
              v49 = v47 - 1;
              if ( v46 )
                v49 = v47;
              *v49 = 0;
              v50 = v44 - 1;
              if ( v46 )
                v50 = v44;
              v42 = v43 - v50;
            }
            v29 = v40 + 2 * (1 - v42);
          }
          else if ( v40 < 2 )
          {
            v29 = 0;
          }
          else
          {
            *v41 = 0;
          }
          v51 = (char *)v41 + v29;
          v52 = v40 - v29;
          v53 = 0;
          v54 = 16;
          if ( 2 * (v25 + 1) <= v52 )
          {
            v55 = 0;
            if ( v25 )
            {
              if ( v25 < 4 )
                goto LABEL_54;
              v56 = v25 - 1;
              if ( (unsigned __int64)v51 <= v93 + v56 && (unsigned __int64)&v51[2 * v56] >= v93 )
                goto LABEL_54;
              if ( v25 < 0x20 )
                goto LABEL_101;
              v57 = v25 & 0x1F;
              v58 = 16;
              do
              {
                v59 = v55;
                v55 += 32;
                v60 = _mm_loadl_epi64((const __m128i *)(v59 + v93));
                *(__m128i *)&v51[2 * v59] = _mm_srai_epi16(_mm_unpacklo_epi8(v60, v60), 8u);
                v61 = v58 - 8;
                v62 = _mm_loadl_epi64((const __m128i *)(v61 + v93));
                *(__m128i *)&v51[2 * v61] = _mm_srai_epi16(_mm_unpacklo_epi8(v62, v62), 8u);
                v63 = _mm_loadl_epi64((const __m128i *)(v58 + v93));
                *(__m128i *)&v51[2 * v58] = _mm_srai_epi16(_mm_unpacklo_epi8(v63, v63), 8u);
                v64 = v58 + 8;
                v58 += 32;
                v65 = _mm_loadl_epi64((const __m128i *)(v64 + v93));
                *(__m128i *)&v51[2 * v64] = _mm_srai_epi16(_mm_unpacklo_epi8(v65, v65), 8u);
              }
              while ( v55 < v25 - v57 );
              if ( v57 >= 4 )
              {
LABEL_101:
                do
                {
                  v66 = v55;
                  v55 += 4;
                  v67 = _mm_cvtsi32_si128(*(_DWORD *)(v66 + v93));
                  *(_QWORD *)&v51[2 * v66] = _mm_srai_epi16(_mm_unpacklo_epi8(v67, v67), 8u).m128i_u64[0];
                }
                while ( v55 < v25 - (v25 & 3) );
              }
              if ( v55 < v25 )
              {
LABEL_54:
                v68 = v55;
                v69 = v25 - v55;
                v55 = v25;
                v70 = &v51[2 * v68];
                v71 = (char *)(v68 + v93);
                do
                {
                  v72 = *v71++;
                  *(_WORD *)v70 = v72;
                  v70 += 2;
                  --v69;
                }
                while ( v69 );
              }
            }
            v53 = 2 * (v25 + 1);
            *(_WORD *)&v51[2 * v55] = 0;
          }
          v73 = &v51[v53];
          if ( 2 * v23 + 2 <= v52 - v53 )
          {
            v74 = 0;
            if ( v23 )
            {
              if ( v23 < 4 )
                goto LABEL_68;
              v75 = v23 - 1;
              if ( v73 <= &v20[v75] && &v73[2 * v75] >= v20 )
                goto LABEL_68;
              if ( v23 < 0x20 )
                goto LABEL_102;
              v76 = v23 & 0x1F;
              do
              {
                v77 = v74;
                v74 += 32;
                v78 = _mm_loadl_epi64((const __m128i *)&v20[v77]);
                *(__m128i *)&v73[2 * v77] = _mm_srai_epi16(_mm_unpacklo_epi8(v78, v78), 8u);
                v79 = v54 - 8;
                v80 = _mm_loadl_epi64((const __m128i *)&v20[v79]);
                *(__m128i *)&v73[2 * v79] = _mm_srai_epi16(_mm_unpacklo_epi8(v80, v80), 8u);
                v81 = _mm_loadl_epi64((const __m128i *)&v20[v54]);
                *(__m128i *)&v73[2 * v54] = _mm_srai_epi16(_mm_unpacklo_epi8(v81, v81), 8u);
                v82 = v54 + 8;
                v54 += 32;
                v83 = _mm_loadl_epi64((const __m128i *)&v20[v82]);
                *(__m128i *)&v73[2 * v82] = _mm_srai_epi16(_mm_unpacklo_epi8(v83, v83), 8u);
              }
              while ( v74 < v23 - v76 );
              if ( v76 >= 4 )
              {
LABEL_102:
                do
                {
                  v84 = v74;
                  v74 += 4;
                  v85 = _mm_cvtsi32_si128(*(_DWORD *)&v20[v84]);
                  *(_QWORD *)&v73[2 * v84] = _mm_srai_epi16(_mm_unpacklo_epi8(v85, v85), 8u).m128i_u64[0];
                }
                while ( v74 < v23 - (v23 & 3) );
              }
              if ( v74 < v23 )
              {
LABEL_68:
                v86 = &v73[2 * v74];
                do
                {
                  v87 = v74;
                  v86 += 2;
                  ++v74;
                  *((_WORD *)v86 - 1) = v20[v87];
                }
                while ( v74 < v23 );
              }
            }
            *(_WORD *)&v73[2 * v74] = 0;
          }
          v88 = NtCurrentPeb()->SharedData;
          if ( v88 && *v88 )
            v89 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v89 = 2147353476LL;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v89, 0x402u, v92 - 32, Fields);
          LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Fields);
        }
      }
    }
  }
  return (int)Heap_0;
}
