/*
 * XREFs of ParseModeCap @ 0x140415F80
 * Callers:
 *     ParseFreqRangeValue @ 0x14027F3C0 (ParseFreqRangeValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     xwcschr @ 0x140426A30 (xwcschr.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x14042A730 (-xwtol@@YAKPEBG@Z.c)
 */

char __fastcall ParseModeCap(_WORD *a1, char a2, _DWORD *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r11
  int v7; // edi
  int v9; // eax
  int v10; // ecx
  int v13; // r8d
  unsigned int v14; // r9d
  _WORD *v15; // rax
  __int64 v16; // r10
  _WORD *v17; // rbx
  _WORD *v18; // rax
  const unsigned __int16 *v19; // r10
  unsigned int v20; // r9d
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  unsigned int v27; // ebx
  _WORD *v28; // rax
  const unsigned __int16 *v29; // r10
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // rax
  int v33; // ecx
  int v35; // [rsp+20h] [rbp-20h]
  int v36; // [rsp+24h] [rbp-1Ch]
  int v37; // [rsp+28h] [rbp-18h]
  int v38; // [rsp+2Ch] [rbp-14h]

  v6 = a6;
  v7 = -1;
  v35 = 0;
  v36 = -1;
  v9 = 0;
  v37 = 0;
  v10 = -1;
  v38 = -1;
  v13 = 0;
  if ( a2 )
  {
    v14 = 0;
    if ( a1 )
    {
      do
      {
        if ( v14 >= 4 )
          break;
        v15 = (_WORD *)xwcschr(a1, 44LL);
        v17 = v15;
        if ( v15 )
          *v15 = 0;
        v18 = (_WORD *)xwcschr(v16, 45LL);
        v21 = v20;
        if ( v18 )
        {
          *v18 = 0;
          v22 = xwtol(v19);
          v19 = (const unsigned __int16 *)(v23 + 2);
        }
        else
        {
          v22 = 0;
        }
        *(&v35 + v21) = v22;
        v24 = xwtol(v19);
        a1 = v17 + 1;
        v26 = (unsigned int)(v25 + 1);
        v14 = v25 + 2;
        *(&v35 + v26) = v24;
      }
      while ( v17 );
      v10 = v38;
      v9 = v37;
      v7 = v36;
      v13 = v35;
    }
    if ( a3 )
      *a3 = v9;
    if ( a4 )
      *a4 = v10;
    if ( a5 )
      *a5 = 1000 * v13;
    if ( v6 )
      *v6 = 1000 * v7;
    return 1;
  }
  v27 = 0;
  if ( a1 )
  {
    do
    {
      if ( v27 >= 4 )
        break;
      v28 = (_WORD *)xwcschr(a1, 44LL);
      if ( v28 )
        *v28 = 0;
      v30 = xwtol(v29);
      a1 = (_WORD *)(v31 + 2);
      v32 = v27++;
      *(&v35 + v32) = v30;
    }
    while ( v31 );
    if ( v35 )
    {
      v33 = v36;
      if ( v36 != -1 )
      {
        if ( a3 )
          *a3 = v35;
        if ( a4 )
          *a4 = v33;
        if ( a5 )
          *a5 = v37;
        if ( v6 )
          *v6 = 0;
        return 1;
      }
    }
  }
  return 0;
}
