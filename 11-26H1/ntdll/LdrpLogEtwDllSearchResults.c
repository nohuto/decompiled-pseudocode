/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x180099320
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpEventAddUnicodeString @ 0x180099950 (LdrpEventAddUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A5040 (RtlGetCurrentDirectory_U.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1801206CC (LdrpMakeUnicodeStringFromPathElement.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  __m128i v4; // xmm6
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // r13
  char *v9; // rcx
  int UnicodeStringFromPathElement; // eax
  __int64 v11; // rcx
  int v12; // r15d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // esi
  unsigned __int64 v17; // xmm0_8
  __int64 v18; // rcx
  _WORD *v19; // r9
  __int64 v20; // rdx
  int v21; // ecx
  _WORD *v22; // r8
  int v23; // r10d
  __int16 v24; // ax
  _WORD *v25; // rax
  int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // ebx
  unsigned int v29; // edx
  _WORD *v30; // r10
  unsigned __int64 v31; // r9
  int v32; // r11d
  unsigned __int64 v33; // rdx
  _WORD *v34; // r8
  __int64 v35; // r15
  __int16 v36; // ax
  _WORD *v37; // rax
  int v38; // eax
  unsigned int v39; // r15d
  unsigned __int64 v40; // rax
  unsigned int v41; // ebx
  int v42; // edx
  _WORD *v43; // r11
  unsigned __int64 v44; // r9
  int v45; // r10d
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  _WORD *v48; // r8
  __int16 v49; // ax
  _WORD *v50; // rax
  int v51; // eax
  unsigned int v52; // r8d
  unsigned int v53; // esi
  unsigned __int64 v54; // rax
  unsigned int v55; // ebx
  int v56; // r8d
  _WORD *v57; // rdx
  unsigned __int64 v58; // r9
  __int64 v59; // r11
  unsigned __int64 v60; // r8
  int v61; // r10d
  __int16 v62; // ax
  _WORD *v63; // rax
  int v64; // eax
  unsigned int v65; // ebx
  int v66; // [rsp+28h] [rbp-E0h] BYREF
  int v67; // [rsp+2Ch] [rbp-DCh]
  int v68; // [rsp+30h] [rbp-D8h]
  __int128 v69; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v70; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v71; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+78h] [rbp-90h]
  wchar_t v74[1600]; // [rsp+88h] [rbp-80h] BYREF

  v66 = 0;
  v4 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  result = RtlAllocateHeap_0();
  v6 = result;
  if ( result )
  {
    *(_WORD *)(result + 6) = 5332;
    *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(result + 36) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *(_DWORD *)(result + 40) = a1;
    *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 36);
    LdrpEventAddUnicodeString(a2, result + 48, 532LL, &v66);
    v7 = v66;
    v8 = 2147353476LL;
    v9 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    NtTraceEvent((unsigned __int8)*v9, 1026LL, (unsigned int)(v7 + 16), v6);
    result = RtlFreeHeap_0();
    if ( (a1 & 0x100) != 0 )
    {
      v72 = 0LL;
      result = RtlGetCurrentDirectory_U(3192LL, v74);
      if ( (_DWORD)result )
      {
        if ( RtlCreateUnicodeString((__int64)&v72, v74) )
          v4 = (__m128i)v72;
        UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v69);
        v11 = *(_QWORD *)(a2 + 16);
        v66 = UnicodeStringFromPathElement;
        v12 = UnicodeStringFromPathElement;
        v13 = LdrpMakeUnicodeStringFromPathElement(v11, 0LL, &v71);
        v14 = *(_QWORD *)(a2 + 16);
        v67 = v13;
        v15 = v13;
        v68 = LdrpMakeUnicodeStringFromPathElement(v14, 5LL, &v70);
        v16 = v68;
        result = RtlAllocateHeap_0();
        v73 = result;
        v17 = _mm_srli_si128(v4, 8).m128i_u64[0];
        v18 = v17;
        *(_QWORD *)&v72 = v17;
        if ( result )
        {
          *(_DWORD *)(result + 32) = a1;
          v19 = (_WORD *)(result + 36);
          *(_WORD *)(result + 6) = 5333;
          if ( (unsigned __int16)_mm_cvtsi128_si32(v4) )
          {
            v20 = 1596LL;
            v21 = 2;
            v22 = (_WORD *)(result + 36);
            v23 = 0;
            do
            {
              if ( v20 == -2147482050 )
                break;
              v24 = *(_WORD *)((char *)v22 + v17 - (_QWORD)v19);
              if ( !v24 )
                break;
              *v22 = v24;
              ++v23;
              ++v22;
              --v20;
            }
            while ( v20 );
            v25 = v22 - 1;
            if ( v20 )
              v25 = v22;
            *v25 = 0;
            v26 = v23 - 1;
            if ( v20 )
              v26 = v23;
            v27 = 2 * v26 + 2;
          }
          else
          {
            v21 = 2;
            *v19 = 0;
            v27 = 2;
          }
          v28 = 3192 - v27;
          v29 = 0;
          v30 = &v19[(unsigned __int64)v27 >> 1];
          if ( (_WORD)v69 )
          {
            v31 = (unsigned __int64)v28 >> 1;
            if ( v31 )
            {
              v32 = 0;
              v33 = (unsigned __int64)v28 >> 1;
              v34 = v30;
              v35 = *((_QWORD *)&v69 + 1) - (_QWORD)v30;
              do
              {
                if ( !(v33 + 2147483646 - v31) )
                  break;
                v36 = *(_WORD *)((char *)v34 + v35);
                if ( !v36 )
                  break;
                *v34 = v36;
                ++v32;
                ++v34;
                --v33;
              }
              while ( v33 );
              v37 = v34 - 1;
              v8 = 2147353476LL;
              if ( v33 )
                v37 = v34;
              *v37 = 0;
              v38 = v32 - 1;
              if ( v33 )
                v38 = v32;
              v29 = v31 - v38;
            }
            v29 = v28 + 2 * (1 - v29);
          }
          else if ( v28 >= 2 )
          {
            v29 = 2;
            *v30 = 0;
          }
          v39 = v29 + v27;
          v40 = (unsigned __int64)v29 >> 1;
          v41 = v28 - v29;
          v42 = 0;
          v43 = &v30[v40];
          if ( (_WORD)v71 )
          {
            v44 = (unsigned __int64)v41 >> 1;
            if ( v44 )
            {
              v45 = 0;
              v46 = *((_QWORD *)&v71 + 1) - (_QWORD)v43;
              v47 = (unsigned __int64)v41 >> 1;
              v48 = v43;
              do
              {
                if ( !(v47 + 2147483646 - v44) )
                  break;
                v49 = *(_WORD *)((char *)v48 + v46);
                if ( !v49 )
                  break;
                *v48 = v49;
                ++v45;
                ++v48;
                --v47;
              }
              while ( v47 );
              v50 = v48 - 1;
              v8 = 2147353476LL;
              if ( v47 )
                v50 = v48;
              *v50 = 0;
              v51 = v45 - 1;
              if ( v47 )
                v51 = v45;
              v42 = v44 - v51;
            }
            v52 = v41 + 2 * (1 - v42);
          }
          else if ( v41 < 2 )
          {
            v52 = 0;
          }
          else
          {
            v52 = 2;
            *v43 = 0;
          }
          v53 = v39 + v52;
          v54 = (unsigned __int64)v52 >> 1;
          v55 = v41 - v52;
          v56 = 0;
          v57 = &v43[v54];
          if ( (_WORD)v70 )
          {
            v58 = (unsigned __int64)v55 >> 1;
            if ( v58 )
            {
              v59 = *((_QWORD *)&v70 + 1) - (_QWORD)v57;
              v60 = (unsigned __int64)v55 >> 1;
              v61 = 0;
              do
              {
                if ( !(v60 + 2147483646 - v58) )
                  break;
                v62 = *(_WORD *)((char *)v57 + v59);
                if ( !v62 )
                  break;
                *v57 = v62;
                ++v61;
                ++v57;
                --v60;
              }
              while ( v60 );
              v63 = v57 - 1;
              if ( v60 )
                v63 = v57;
              *v63 = 0;
              v64 = v61 - 1;
              if ( v60 )
                v64 = v61;
              v56 = v58 - v64;
            }
            v21 = v55 + 2 * (1 - v56);
          }
          else if ( v55 < 2 )
          {
            v21 = 0;
          }
          else
          {
            *v57 = 0;
          }
          v65 = v53 + v21;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v8, 1026LL, v65 + 4, v73);
          result = RtlFreeHeap_0();
          v18 = v72;
          v12 = v66;
          v15 = v67;
          v16 = v68;
        }
        if ( v18 )
          result = RtlpSysVolFree(v18);
        if ( v12 >= 0 && *((_QWORD *)&v69 + 1) )
          result = RtlpSysVolFree(*((__int64 *)&v69 + 1));
        if ( v16 >= 0 && *((_QWORD *)&v70 + 1) )
          result = RtlpSysVolFree(*((__int64 *)&v70 + 1));
        if ( v15 >= 0 )
        {
          if ( *((_QWORD *)&v71 + 1) )
            return RtlpSysVolFree(*((__int64 *)&v71 + 1));
        }
      }
    }
  }
  return result;
}
