/*
 * XREFs of ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1400CA61C
 * Callers:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400FEA0C (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140153230 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

__int64 __fastcall MAPPER::bFindBitmapFont(MAPPER *this, const unsigned __int16 *a2, __int64 a3)
{
  __int64 v5; // rbx
  struct _HASHBUCKET *i; // rbx
  struct _HASHBUCKET *v8; // r11
  _QWORD *k; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  const unsigned __int16 *j; // rax
  int v14; // ecx
  struct FONTSUB *v15; // rax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)this + 61) & 0x10000000) != 0 )
    return 0LL;
  v16[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20392LL);
  v5 = *(_QWORD *)v16[0];
  v16[1] = *(_QWORD *)v16[0];
  if ( !v16[0] || !v5 )
    return 0LL;
  if ( !a2 )
  {
    i = 0LL;
    goto LABEL_33;
  }
  for ( i = *(struct _HASHBUCKET **)(v5 + 8LL * iHash(a2, *(_DWORD *)(v5 + 8)) + 40); i; i = *(struct _HASHBUCKET **)i )
  {
    for ( j = a2; *j == *(const unsigned __int16 *)((char *)j + i - (struct _HASHBUCKET *)a2 + 60); ++j )
    {
      if ( !*j )
      {
        if ( (*((_DWORD *)i + 8) & 2) == 0 )
          goto LABEL_9;
        v8 = i;
        break;
      }
    }
  }
  i = v8;
  if ( !v8 )
  {
LABEL_33:
    v15 = pfsubAlternateFacename(a2);
    if ( !v15 )
      return 0LL;
    if ( (*((_BYTE *)v15 + 195) & 1) != 0 )
      i = FHOBJ::pbktSearch((FHOBJ *)v16, (const unsigned __int16 *)v15 + 65, 0LL, 0LL, 0);
    if ( !i )
      return 0LL;
  }
LABEL_9:
  for ( k = (_QWORD *)*((_QWORD *)i + 1); k; k = (_QWORD *)*k )
  {
    v10 = *(_QWORD *)(k[1] + 32LL);
    if ( (*(_DWORD *)(v10 + 48) & 2) != 0 )
    {
      v11 = (*((_DWORD *)this + 61) & 2) != 0 ? *(__int16 *)(v10 + 56) : *(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62);
      v12 = *((_DWORD *)this + 41);
      if ( v12 == v11 || v12 == 2 && v11 == 3 )
      {
        v14 = *((_DWORD *)this + 42);
        if ( !v14 || v14 == *(__int16 *)(v10 + 76) )
          return 1LL;
      }
    }
  }
  return 0LL;
}
