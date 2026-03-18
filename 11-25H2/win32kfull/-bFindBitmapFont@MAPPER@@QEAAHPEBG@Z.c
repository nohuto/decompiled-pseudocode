/*
 * XREFs of ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x14010F718
 * Callers:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400B8B00 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400B7044 (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x14010F8A8 (-iHash@@YAIPEBGI@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010F900 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall MAPPER::bFindBitmapFont(MAPPER *this, const unsigned __int16 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r11
  struct _HASHBUCKET *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r11
  struct _HASHBUCKET *i; // rcx
  _QWORD *j; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  const unsigned __int16 *v17; // rax
  int v18; // ecx
  struct FONTSUB *v19; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)this + 61) & 0x10000000) == 0 )
  {
    v6 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
    v20[0] = *(_QWORD *)(v6 + 20416);
    v7 = *(_QWORD *)v20[0];
    v20[1] = *(_QWORD *)v20[0];
    if ( v20[0] )
    {
      if ( v7 )
      {
        v9 = 0LL;
        if ( a2 )
        {
          v10 = iHash(a2, *(_DWORD *)(v7 + 8));
          for ( i = *(struct _HASHBUCKET **)(v11 + 8LL * v10 + 40); i; i = *(struct _HASHBUCKET **)i )
          {
            v17 = a2;
            v5 = i - (struct _HASHBUCKET *)a2;
            while ( 1 )
            {
              v6 = *v17;
              if ( (_WORD)v6 != *(const unsigned __int16 *)((char *)v17 + v5 + 60) )
                break;
              if ( !(_WORD)v6 )
              {
                if ( (*((_DWORD *)i + 8) & 2) == 0 )
                  goto LABEL_9;
                v9 = i;
                break;
              }
              ++v17;
            }
          }
          i = v9;
          if ( v9 )
            goto LABEL_9;
        }
        v19 = pfsubAlternateFacename(a2, v5, v6);
        if ( v19 )
        {
          if ( (*((_BYTE *)v19 + 195) & 1) != 0 )
          {
            i = FHOBJ::pbktSearch((FHOBJ *)v20, (const unsigned __int16 *)v19 + 65, 0LL, 0LL, 0);
            if ( i )
            {
LABEL_9:
              for ( j = (_QWORD *)*((_QWORD *)i + 1); j; j = (_QWORD *)*j )
              {
                v14 = *(_QWORD *)(j[1] + 32LL);
                if ( (*(_DWORD *)(v14 + 48) & 2) != 0 )
                {
                  v15 = (*((_DWORD *)this + 61) & 2) != 0
                      ? *(__int16 *)(v14 + 56)
                      : *(__int16 *)(v14 + 60) + *(__int16 *)(v14 + 62);
                  v16 = *((_DWORD *)this + 41);
                  if ( v16 == v15 || v16 == 2 && v15 == 3 )
                  {
                    v18 = *((_DWORD *)this + 42);
                    if ( !v18 || v18 == *(__int16 *)(v14 + 76) )
                      return 1LL;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
