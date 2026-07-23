/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x180098450
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpEventAddUnicodeString @ 0x180098A80 (LdrpEventAddUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A4170 (RtlGetCurrentDirectory_U.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x18012047C (LdrpMakeUnicodeStringFromPathElement.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  __m128i v4; // xmm6
  void *ProcessHeap; // rcx
  _WORD *Heap_0; // rax
  void *v7; // rbx
  int v8; // edi
  __int64 v9; // r13
  char *v10; // rcx
  int UnicodeStringFromPathElement; // eax
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r12d
  int v17; // esi
  unsigned __int64 v18; // xmm0_8
  void *v19; // rcx
  _WORD *v20; // r9
  __int64 v21; // rdx
  int v22; // ecx
  _WORD *v23; // r8
  int v24; // r10d
  __int16 v25; // ax
  _WORD *v26; // rax
  int v27; // eax
  unsigned int v28; // esi
  unsigned int v29; // ebx
  unsigned int v30; // edx
  _WORD *v31; // r10
  unsigned __int64 v32; // r9
  int v33; // r11d
  unsigned __int64 v34; // rdx
  _WORD *v35; // r8
  __int64 v36; // r15
  __int16 v37; // ax
  _WORD *v38; // rax
  int v39; // eax
  unsigned int v40; // r15d
  unsigned __int64 v41; // rax
  unsigned int v42; // ebx
  int v43; // edx
  _WORD *v44; // r11
  unsigned __int64 v45; // r9
  int v46; // r10d
  signed __int64 v47; // r14
  unsigned __int64 v48; // rdx
  _WORD *v49; // r8
  __int16 v50; // ax
  _WORD *v51; // rax
  int v52; // eax
  unsigned int v53; // r8d
  unsigned int v54; // esi
  unsigned __int64 v55; // rax
  unsigned int v56; // ebx
  int v57; // r8d
  _WORD *v58; // rdx
  unsigned __int64 v59; // r9
  signed __int64 v60; // r11
  unsigned __int64 v61; // r8
  int v62; // r10d
  __int16 v63; // ax
  _WORD *v64; // rax
  int v65; // eax
  unsigned int v66; // ebx
  int v68; // [rsp+28h] [rbp-E0h] BYREF
  int v69; // [rsp+2Ch] [rbp-DCh]
  int v70; // [rsp+30h] [rbp-D8h]
  __int128 v71; // [rsp+38h] [rbp-D0h] BYREF
  PVOID BaseAddress_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v73[2]; // [rsp+58h] [rbp-B0h] BYREF
  __m128i DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Fields; // [rsp+78h] [rbp-90h]
  WCHAR Buffer[1600]; // [rsp+88h] [rbp-80h] BYREF

  v68 = 0;
  v4 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v71 = 0LL;
  *(_OWORD *)v73 = 0LL;
  *(_OWORD *)BaseAddress_8 = 0LL;
  Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, 0x248uLL);
  v7 = Heap_0;
  if ( Heap_0 )
  {
    Heap_0[3] = 5332;
    *((_DWORD *)Heap_0 + 8) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)Heap_0 + 9) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *((_DWORD *)Heap_0 + 10) = a1;
    *((_DWORD *)Heap_0 + 11) = *(_DWORD *)(a2 + 36);
    LdrpEventAddUnicodeString(a2, Heap_0 + 24, 532LL, &v68);
    v8 = v68;
    v9 = 2147353476LL;
    v10 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    NtTraceEvent((HANDLE)(unsigned __int8)*v10, 0x402u, v8 + 16, v7);
    LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( (a1 & 0x100) != 0 )
    {
      DestinationString_8 = 0LL;
      LODWORD(Heap_0) = RtlGetCurrentDirectory_U(0xC78u, Buffer);
      if ( (_DWORD)Heap_0 )
      {
        if ( RtlCreateUnicodeString((PUNICODE_STRING)&DestinationString_8, Buffer) )
          v4 = DestinationString_8;
        UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v71);
        v12 = *(_QWORD *)(a2 + 16);
        v68 = UnicodeStringFromPathElement;
        v13 = UnicodeStringFromPathElement;
        v14 = LdrpMakeUnicodeStringFromPathElement(v12, 0LL, v73);
        v15 = *(_QWORD *)(a2 + 16);
        v69 = v14;
        v16 = v14;
        v70 = LdrpMakeUnicodeStringFromPathElement(v15, 5LL, BaseAddress_8);
        v17 = v70;
        Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0xCA0uLL);
        Fields = Heap_0;
        v18 = _mm_srli_si128(v4, 8).m128i_u64[0];
        v19 = (void *)v18;
        DestinationString_8.m128i_i64[0] = v18;
        if ( Heap_0 )
        {
          *((_DWORD *)Heap_0 + 8) = a1;
          v20 = Heap_0 + 18;
          Heap_0[3] = 5333;
          if ( (unsigned __int16)_mm_cvtsi128_si32(v4) )
          {
            v21 = 1596LL;
            v22 = 2;
            v23 = Heap_0 + 18;
            v24 = 0;
            do
            {
              if ( v21 == -2147482050 )
                break;
              v25 = *(_WORD *)((char *)v23 + v18 - (_QWORD)v20);
              if ( !v25 )
                break;
              *v23 = v25;
              ++v24;
              ++v23;
              --v21;
            }
            while ( v21 );
            v26 = v23 - 1;
            if ( v21 )
              v26 = v23;
            *v26 = 0;
            v27 = v24 - 1;
            if ( v21 )
              v27 = v24;
            v28 = 2 * v27 + 2;
          }
          else
          {
            v22 = 2;
            *v20 = 0;
            v28 = 2;
          }
          v29 = 3192 - v28;
          v30 = 0;
          v31 = &v20[(unsigned __int64)v28 >> 1];
          if ( (_WORD)v71 )
          {
            v32 = (unsigned __int64)v29 >> 1;
            if ( v32 )
            {
              v33 = 0;
              v34 = (unsigned __int64)v29 >> 1;
              v35 = v31;
              v36 = *((_QWORD *)&v71 + 1) - (_QWORD)v31;
              do
              {
                if ( !(v34 + 2147483646 - v32) )
                  break;
                v37 = *(_WORD *)((char *)v35 + v36);
                if ( !v37 )
                  break;
                *v35 = v37;
                ++v33;
                ++v35;
                --v34;
              }
              while ( v34 );
              v38 = v35 - 1;
              v9 = 2147353476LL;
              if ( v34 )
                v38 = v35;
              *v38 = 0;
              v39 = v33 - 1;
              if ( v34 )
                v39 = v33;
              v30 = v32 - v39;
            }
            v30 = v29 + 2 * (1 - v30);
          }
          else if ( v29 >= 2 )
          {
            v30 = 2;
            *v31 = 0;
          }
          v40 = v30 + v28;
          v41 = (unsigned __int64)v30 >> 1;
          v42 = v29 - v30;
          v43 = 0;
          v44 = &v31[v41];
          if ( LOWORD(v73[0]) )
          {
            v45 = (unsigned __int64)v42 >> 1;
            if ( v45 )
            {
              v46 = 0;
              v47 = (char *)v73[1] - (char *)v44;
              v48 = (unsigned __int64)v42 >> 1;
              v49 = v44;
              do
              {
                if ( !(v48 + 2147483646 - v45) )
                  break;
                v50 = *(_WORD *)((char *)v49 + v47);
                if ( !v50 )
                  break;
                *v49 = v50;
                ++v46;
                ++v49;
                --v48;
              }
              while ( v48 );
              v51 = v49 - 1;
              v9 = 2147353476LL;
              if ( v48 )
                v51 = v49;
              *v51 = 0;
              v52 = v46 - 1;
              if ( v48 )
                v52 = v46;
              v43 = v45 - v52;
            }
            v53 = v42 + 2 * (1 - v43);
          }
          else if ( v42 < 2 )
          {
            v53 = 0;
          }
          else
          {
            v53 = 2;
            *v44 = 0;
          }
          v54 = v40 + v53;
          v55 = (unsigned __int64)v53 >> 1;
          v56 = v42 - v53;
          v57 = 0;
          v58 = &v44[v55];
          if ( LOWORD(BaseAddress_8[0]) )
          {
            v59 = (unsigned __int64)v56 >> 1;
            if ( v59 )
            {
              v60 = (char *)BaseAddress_8[1] - (char *)v58;
              v61 = (unsigned __int64)v56 >> 1;
              v62 = 0;
              do
              {
                if ( !(v61 + 2147483646 - v59) )
                  break;
                v63 = *(_WORD *)((char *)v58 + v60);
                if ( !v63 )
                  break;
                *v58 = v63;
                ++v62;
                ++v58;
                --v61;
              }
              while ( v61 );
              v64 = v58 - 1;
              if ( v61 )
                v64 = v58;
              *v64 = 0;
              v65 = v62 - 1;
              if ( v61 )
                v65 = v62;
              v57 = v59 - v65;
            }
            v22 = v56 + 2 * (1 - v57);
          }
          else if ( v56 < 2 )
          {
            v22 = 0;
          }
          else
          {
            *v58 = 0;
          }
          v66 = v54 + v22;
          if ( RtlGetCurrentServiceSessionId() )
            v9 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, v66 + 4, Fields);
          LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Fields);
          v19 = (void *)DestinationString_8.m128i_i64[0];
          v13 = v68;
          v16 = v69;
          v17 = v70;
        }
        if ( v19 )
          LODWORD(Heap_0) = RtlpSysVolFree(v19);
        if ( v13 >= 0 && *((_QWORD *)&v71 + 1) )
          LODWORD(Heap_0) = RtlpSysVolFree(*((PVOID *)&v71 + 1));
        if ( v17 >= 0 && BaseAddress_8[1] )
          LODWORD(Heap_0) = RtlpSysVolFree(BaseAddress_8[1]);
        if ( v16 >= 0 && v73[1] )
          LODWORD(Heap_0) = RtlpSysVolFree(v73[1]);
      }
    }
  }
  return (int)Heap_0;
}
