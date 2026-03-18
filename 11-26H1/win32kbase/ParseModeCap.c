/*
 * XREFs of ParseModeCap @ 0x14002B480
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14002AD24 (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     xwtol @ 0x14002B140 (xwtol.c)
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ParseModeCap(wchar_t *Str, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // r15d
  unsigned int v6; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  wchar_t *v11; // rax
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // eax
  wchar_t *v16; // rax
  wchar_t *v17; // r15
  wchar_t *v18; // rax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // [rsp+20h] [rbp-20h]
  int v27; // [rsp+24h] [rbp-1Ch]
  unsigned int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]

  v3 = 0;
  v4 = -1;
  v26 = 0;
  v27 = -1;
  v6 = -1;
  v29 = -1;
  v28 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( Str )
    {
      do
      {
        if ( v9 >= 4 )
          break;
        v16 = wcschr(Str, 0x2Cu);
        v17 = v16;
        if ( v16 )
          *v16 = 0;
        v18 = wcschr(Str, 0x2Du);
        v19 = v9;
        if ( v18 )
        {
          *v18 = 0;
          v20 = xwtol(Str);
          Str = (wchar_t *)(v21 + 2);
        }
        else
        {
          v20 = 0;
        }
        *(&v26 + v19) = v20;
        v22 = v9 + 1;
        *(&v26 + v22) = xwtol(Str);
        Str = v17 + 1;
        v9 = v22 + 1;
      }
      while ( v17 );
      v6 = v29;
      v8 = v28;
      v4 = v27;
      v3 = v26;
    }
    if ( a2[3] > v8 )
      v8 = a2[3];
    v23 = a2[2];
    a2[3] = v8;
    if ( v23 < v6 )
      v6 = v23;
    v24 = a2[4];
    a2[2] = v6;
    if ( v24 <= 1000 * v3 )
      v24 = 1000 * v3;
    a2[4] = v24;
    v25 = a2[5];
    if ( v25 >= 1000 * v4 )
      v25 = 1000 * v4;
    a2[5] = v25;
  }
  else
  {
    if ( !Str )
      return 0LL;
    do
    {
      if ( v9 >= 4 )
        break;
      v11 = wcschr(Str, 0x2Cu);
      if ( v11 )
        *v11 = 0;
      v12 = xwtol(Str);
      Str = (wchar_t *)(v13 + 2);
      v14 = v9++;
      *(&v26 + v14) = v12;
    }
    while ( v13 );
    if ( !v26 )
      return 0LL;
    v15 = v27;
    if ( v27 == -1 )
      return 0LL;
    *a2 = v26;
    a2[2] = v28;
    a2[1] = v15;
  }
  return 1LL;
}
