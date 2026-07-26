/*
 * XREFs of ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1401408E0
 * Callers:
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x14013C890 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPDInitializePDBuffers(
        struct _PD_BUFFER **a1,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int16 a7)
{
  unsigned int i; // r11d
  __int64 v10; // r9
  unsigned __int8 *v11; // rcx

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v10 = a7 + (unsigned __int64)(i * (a6 + a7 + 128));
      v11 = &a4[v10];
      *(_DWORD *)&a4[v10 + 48] = a6;
      if ( a6 )
      {
        *((_WORD *)v11 + 27) = 1;
        *((__m128i *)v11 + 2) = _mm_add_epi64(
                                  _mm_unpacklo_epi64(
                                    (__m128i)(unsigned __int64)v11,
                                    (__m128i)(unsigned __int64)(v10 + a3.QuadPart)),
                                  (__m128i)_xmm);
      }
      *((_WORD *)v11 + 26) = a7;
      if ( a7 )
        *((_QWORD *)v11 + 3) = &v11[-a7];
      *a1++ = (struct _PD_BUFFER *)v11;
    }
  }
}
