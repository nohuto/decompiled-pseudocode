/*
 * XREFs of ?GrepGetUFI@@YAHAEAVDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAX@Z @ 0x1401FEB48
 * Callers:
 *     NtGdiGetUFI @ 0x1402812D0 (NtGdiGetUFI.c)
 *     NtGdiGetEmbUFI @ 0x14032AB90 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ComputeFileviewCheckSum @ 0x140140440 (ComputeFileviewCheckSum.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GrepGetUFI(
        struct DCOBJ *a1,
        struct _UNIVERSAL_FONT_ID *a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        void **a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // ebx
  void **v9; // rbp
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax

  v7 = a6;
  v8 = 0;
  v9 = a7;
  *a6 = 0;
  if ( v9 )
    *v9 = 0LL;
  a6 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&a6, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>((__int64)a6);
  v13 = a6;
  if ( a6 )
  {
    v14 = *((_QWORD *)a6 + 15);
    v15 = *(_QWORD *)(v14 + 84);
    *(_QWORD *)a2 = v15;
    v16 = (__int64 *)*((_QWORD *)v13 + 15);
    if ( v16 )
    {
      v17 = *v16;
      if ( *v16 )
      {
        if ( *(_QWORD *)(v17 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v14, v15) + 96) + 20384LL) )
        {
          *v7 |= 1u;
          if ( v9 )
            *v9 = (void *)*(unsigned int *)(*v16 + 148);
        }
        if ( (*(_DWORD *)(v17 + 52) & 0x10) != 0 )
          *v7 |= 4u;
        if ( *(_QWORD *)(v17 + 40) )
        {
          *v7 |= 2u;
          if ( a3 )
            memmove(a3, *(const void **)(v17 + 40), *(unsigned int *)(v17 + 48));
          if ( a4 )
            *a4 = *(_DWORD *)(v17 + 48);
          if ( a5 )
          {
            *a5 = *(_DWORD *)(v17 + 144);
            *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v17 + 40), *(unsigned int *)(v17 + 48));
          }
        }
        else
        {
          if ( a3 )
          {
            v18 = 72LL;
            do
            {
              *(_BYTE *)a3 = 0;
              a3 = (struct tagDESIGNVECTOR *)((char *)a3 + 1);
              --v18;
            }
            while ( v18 );
          }
          if ( a4 )
            *a4 = 0;
          if ( a5 )
            *a5 = 0;
        }
        v8 = 1;
      }
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
  return v8;
}
