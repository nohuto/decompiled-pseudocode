/*
 * XREFs of LdrpAddRedirectedFunction @ 0x18015DEAC
 * Callers:
 *     LdrpBuildImportRedirection @ 0x18015E1F0 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     RtlRbInsertNodeEx @ 0x18006C700 (RtlRbInsertNodeEx.c)
 *     LdrpHashUnicodeString @ 0x1800825C0 (LdrpHashUnicodeString.c)
 *     LdrpHashAsciizString @ 0x1800849D8 (LdrpHashAsciizString.c)
 *     LdrpCompareRedirectedFunction @ 0x180084A0C (LdrpCompareRedirectedFunction.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800992B0 (LdrpGetBaseNameFromFullName.c)
 *     RtlInitAnsiStringEx @ 0x1800CBE40 (RtlInitAnsiStringEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1, int a2)
{
  const char *v4; // rdx
  int inited; // edi
  __int64 v6; // r8
  __m128i v7; // xmm6
  int v8; // eax
  unsigned __int64 v9; // rbx
  int v10; // esi
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 Heap_0; // rax
  unsigned __int64 v14; // r14
  size_t v15; // r8
  __int64 v16; // rbx
  bool v17; // r8
  int v18; // esi
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v23; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v25; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v26[128]; // [rsp+78h] [rbp-90h] BYREF
  int v27; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v28; // [rsp+180h] [rbp+78h]
  _WORD v29[128]; // [rsp+188h] [rbp+80h] BYREF

  v22 = 0uLL;
  memset_thunk_772440563353939046(&v25, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v27, 0, 0x110uLL);
  v4 = *(const char **)a1;
  v25.m128i_i64[1] = (__int64)v26;
  v25.m128i_i32[0] = 0x1000000;
  v28 = v29;
  v26[0] = 0;
  v27 = 0x1000000;
  v29[0] = 0;
  DestinationString_8 = 0LL;
  inited = RtlInitAnsiStringEx(&DestinationString_8, v4);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v27, &DestinationString_8, v6);
    if ( inited >= 0 )
    {
      v21 = 0;
      inited = LdrpPreprocessDllName((unsigned __int16 *)&v27, (unsigned __int16 *)&v25, 0LL, &v21);
      if ( inited >= 0 )
      {
        v7 = v25;
        v23 = v25;
        if ( (v21 & 0x20) == 0 )
        {
          LdrpGetBaseNameFromFullName((__int64)&v23, (__int64)&v23);
          v7 = v23;
        }
        *((_QWORD *)&v22 + 1) = *(_QWORD *)(a1 + 8);
        LODWORD(v22) = LdrpHashAsciizString(*((char **)&v22 + 1));
        v8 = LdrpHashUnicodeString((unsigned __int16 *)&v23);
        v9 = LdrpRedirectionTree;
        DWORD1(v22) = v8;
        if ( (qword_1801CB5C0 & 1) != 0 )
        {
          if ( LdrpRedirectionTree )
            v9 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          else
            v9 = 0LL;
        }
        v10 = qword_1801CB5C0 & 1;
        if ( v9 )
        {
          do
          {
            v11 = LdrpCompareRedirectedFunction((__int64)&v22, v9);
            if ( v11 >= 0 )
            {
              if ( v11 <= 0 )
                break;
              v12 = *(_QWORD *)(v9 + 8);
            }
            else
            {
              v12 = *(_QWORD *)v9;
            }
            if ( v10 && v12 )
              v9 ^= v12;
            else
              v9 = v12;
          }
          while ( v9 );
          if ( v9 && !LdrpRedirectionByFunctionCalloutFunc )
          {
            inited = -1073739509;
            goto LABEL_43;
          }
          v7 = v23;
        }
        Heap_0 = RtlAllocateHeap_0();
        v14 = Heap_0;
        if ( Heap_0 )
        {
          *(_OWORD *)(Heap_0 + 24) = v22;
          *(__m128i *)(Heap_0 + 40) = v7;
          v15 = *(unsigned __int16 *)(Heap_0 + 40);
          *(_QWORD *)(Heap_0 + 56) = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(Heap_0 + 64) = a2;
          *(_QWORD *)(Heap_0 + 48) = Heap_0 + 72;
          v15 += 2LL;
          *(_WORD *)(Heap_0 + 42) = v15;
          memmove((void *)(Heap_0 + 72), (const void *)_mm_srli_si128(v7, 8).m128i_i64[0], v15);
          v16 = LdrpRedirectionTree;
          if ( (qword_1801CB5C0 & 1) != 0 && LdrpRedirectionTree )
            v16 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          v17 = 0;
          v18 = qword_1801CB5C0 & 1;
          if ( v16 )
          {
            while ( 1 )
            {
              if ( (int)LdrpCompareRedirectedFunction(v14 + 24, v16) < 0 )
              {
                v19 = *(_QWORD *)v16;
                if ( v18 )
                {
                  if ( !v19 )
                    goto LABEL_41;
                  v19 ^= v16;
                }
                if ( !v19 )
                {
LABEL_41:
                  v17 = 0;
                  break;
                }
              }
              else
              {
                v19 = *(_QWORD *)(v16 + 8);
                if ( v18 )
                {
                  if ( !v19 )
                    goto LABEL_35;
                  v19 ^= v16;
                }
                if ( !v19 )
                {
LABEL_35:
                  v17 = 1;
                  break;
                }
              }
              v16 = v19;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64 *)&LdrpRedirectionTree, v16, v17, v14);
        }
        else
        {
          inited = -1073741801;
        }
      }
    }
  }
LABEL_43:
  if ( v26 != (_WORD *)v25.m128i_i64[1] )
    RtlpSysVolFree(v25.m128i_i64[1]);
  v25.m128i_i64[1] = (__int64)v26;
  v25.m128i_i32[0] = 0x1000000;
  v26[0] = 0;
  if ( v29 != v28 )
    RtlpSysVolFree((__int64)v28);
  return (unsigned int)inited;
}
