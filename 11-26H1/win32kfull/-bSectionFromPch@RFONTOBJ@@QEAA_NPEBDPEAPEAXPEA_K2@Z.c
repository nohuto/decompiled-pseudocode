/*
 * XREFs of ?bSectionFromPch@RFONTOBJ@@QEAA_NPEBDPEAPEAXPEA_K2@Z @ 0x140327DDC
 * Callers:
 *     ?bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z @ 0x140292838 (-bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RFONTOBJ::bSectionFromPch(
        RFONTOBJ *this,
        const char *a2,
        void **a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  void *v6; // rsi
  __int64 v10; // rcx
  __int64 *v11; // r8
  unsigned int v12; // edi
  unsigned int i; // r9d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r11
  void *v17; // rcx
  bool result; // al

  v5 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)this + 128LL);
    if ( v10 )
    {
      v11 = *(__int64 **)(v10 + 208);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v10 + 36);
        for ( i = 0; i < v12; ++i )
        {
          v14 = *v11;
          if ( *v11 )
          {
            if ( !i )
            {
              v6 = *(void **)(v14 + 32);
              v5 = *(_QWORD *)(v14 + 104);
            }
            v15 = *(_QWORD *)(v14 + 104);
            if ( (v15 || (v15 = v5) != 0 || (v15 = *(_QWORD *)(v14 + 16)) != 0) && v15 <= (unsigned __int64)a2 )
            {
              v16 = *(unsigned int *)(v14 + 24);
              if ( (unsigned __int64)a2 < v16 + v15 )
              {
                v17 = *(void **)(v14 + 32);
                result = 1;
                if ( !v17 )
                  v17 = v6;
                *a3 = v17;
                *a4 = (unsigned __int64)&a2[-v15];
                *a5 = v16;
                return result;
              }
            }
          }
          ++v11;
        }
      }
    }
  }
  return 0;
}
