/*
 * XREFs of GetCachedSMP @ 0x140100774
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x140100614 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     FindCachedSMP @ 0x14010098C (FindCachedSMP.c)
 *     CreateStandardMonoPattern @ 0x1401010EC (CreateStandardMonoPattern.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GetCachedSMP(__int64 a1, __int16 *a2, __int64 a3)
{
  __int16 *v3; // rbx
  __int64 v4; // rbp
  __int64 SessionState; // rax
  char v6; // dl
  __int64 v7; // r13
  char v8; // al
  __int64 CachedSMP; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  __int128 v12; // xmm0
  unsigned int v13; // r8d
  unsigned __int64 v14; // r10
  unsigned int v15; // ecx
  char *v16; // rsi
  char *v17; // r14
  unsigned int v18; // edi
  __int16 v20; // r15
  unsigned __int64 v21; // r9
  int v22; // eax
  __int16 v23; // bp
  char *v24; // rsi
  size_t v25; // r12
  __int64 v26; // r13
  __int64 v27; // rbx
  unsigned int i; // edx
  char *v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  char *Src; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  v6 = *((_BYTE *)v3 + 4);
  v7 = *(_QWORD *)(SessionState + 112);
  v30 = v7;
  if ( !v6 )
  {
    *((_BYTE *)v3 + 4) = 8;
    v6 = 8;
  }
  v8 = *((_BYTE *)v3 + 5);
  if ( !v8 )
  {
    *((_BYTE *)v3 + 5) = 15;
    v8 = 15;
  }
  if ( *((unsigned __int8 *)v3 + 3) >= 0x12u )
    return (unsigned int)CreateStandardMonoPattern(v4, v3);
  if ( v8 != 15 )
    return (unsigned int)CreateStandardMonoPattern(v4, v3);
  if ( v6 != 8 )
    return (unsigned int)CreateStandardMonoPattern(v4, v3);
  CachedSMP = FindCachedSMP(v4, *((unsigned __int8 *)v3 + 3));
  if ( !CachedSMP )
    return (unsigned int)CreateStandardMonoPattern(v4, v3);
  v10 = *(_QWORD *)(CachedSMP + 8);
  v11 = CachedSMP + 16;
  v12 = *(_OWORD *)CachedSMP;
  v13 = *((unsigned __int8 *)v3 + 2);
  v14 = HIDWORD(v10);
  Src = (char *)(CachedSMP + 16);
  v3[4] = WORD1(v10);
  v3[5] = WORD2(v10);
  if ( WORD1(v10) )
  {
    v15 = ((unsigned int)WORD1(v10) + 7) >> 3;
    if ( v13 > 1 && v15 % v13 )
      LOWORD(v15) = v13 + v15 - v15 % v13;
  }
  else
  {
    LOWORD(v15) = 0;
  }
  v16 = (char *)*((_QWORD *)v3 + 2);
  v17 = v16;
  v18 = WORD2(v10) * (unsigned __int16)v15;
  v3[3] = v15;
  v29 = v16;
  if ( v16 )
  {
    v20 = *v3;
    v21 = HIWORD(v10);
    v22 = v21;
    if ( (*v3 & 1) == 0 )
    {
      v22 = -(int)v21;
      Src = (char *)((int)(v21 * ((unsigned __int16)v14 - 1)) + v11);
    }
    if ( (_WORD)v14 )
    {
      v23 = WORD6(v12);
      v24 = Src;
      v25 = (unsigned int)v21;
      v26 = (unsigned __int16)v15;
      v27 = v22;
      do
      {
        --v23;
        memmove(v17, v24, v25);
        v17 += v26;
        v24 += v27;
      }
      while ( v23 );
      v3 = a2;
      v16 = v29;
      v4 = a1;
      v7 = v30;
    }
    if ( (v20 & 2) != 0 )
    {
      for ( i = v18; i; --i )
      {
        *v16 = ~*v16;
        ++v16;
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v7 + 16));
  if ( !v18 )
    return (unsigned int)CreateStandardMonoPattern(v4, v3);
  return v18;
}
