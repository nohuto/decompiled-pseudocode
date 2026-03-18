/*
 * XREFs of vLinkEudcPFEsWorker @ 0x140201E80
 * Callers:
 *     vLinkEudcPFEs @ 0x140201DCC (vLinkEudcPFEs.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1400B5770 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B7AE0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?pwszFamilyNameAlias@PFEOBJ@@QEAAPEAGPEAH@Z @ 0x1401A5878 (-pwszFamilyNameAlias@PFEOBJ@@QEAAPEAGPEAH@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vLinkEudcPFEsWorker(__int64 a1, struct PFF *a2)
{
  struct PFF *result; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx
  BOOL v6; // eax
  struct _FLENTRY *BaseFontEntry; // rcx
  struct PFF *v8; // rdi
  wchar_t *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  for ( result = SkipInvalidPff(a2); ; result = SkipInvalidPff(*((struct PFF **)v8 + 1)) )
  {
    v8 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = 0;
      if ( *((_DWORD *)result + 54) )
      {
        do
        {
          v5 = *((_QWORD *)v8 + v4 + 28);
          v16 = v5;
          if ( v5 )
          {
            if ( a1 )
            {
              v6 = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v16, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
              BaseFontEntry = (struct _FLENTRY *)a1;
              if ( !v6 )
                goto LABEL_17;
            }
            else
            {
              v15 = 0;
              v9 = PFEOBJ::pwszFamilyNameAlias((PFEOBJ *)&v16, &v15);
              BaseFontEntry = FindBaseFontEntry(v9, v10, v11);
              if ( !BaseFontEntry )
              {
                if ( !v15 )
                  goto LABEL_17;
                v14 = -1LL;
                do
                  ++v14;
                while ( v9[v14] );
                BaseFontEntry = FindBaseFontEntry(&v9[v14 + 1], v12, v13);
                if ( !BaseFontEntry )
                {
LABEL_17:
                  *(_QWORD *)(v5 + 120) = 0LL;
                  goto LABEL_8;
                }
              }
            }
            *(_QWORD *)(v5 + 120) = BaseFontEntry;
          }
LABEL_8:
          ++v4;
        }
        while ( v4 < *((_DWORD *)v8 + 54) );
      }
    }
  }
  return result;
}
