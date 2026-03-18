/*
 * XREFs of ParseModeCap @ 0x140080904
 * Callers:
 *     GetMonitorCapabilityFromInf @ 0x14008124C (GetMonitorCapabilityFromInf.c)
 * Callees:
 *     xwtol @ 0x14008166C (xwtol.c)
 *     wcschr @ 0x1401A30D0 (wcschr.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ParseModeCap(wchar_t *Str, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // r15d
  unsigned int v6; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // rax
  int v18; // eax
  wchar_t *v19; // rax
  wchar_t *v20; // r15
  wchar_t *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  wchar_t *v25; // r9
  int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // [rsp+20h] [rbp-20h]
  int v32; // [rsp+24h] [rbp-1Ch]
  unsigned int v33; // [rsp+28h] [rbp-18h]
  int v34; // [rsp+2Ch] [rbp-14h]

  v3 = 0;
  v4 = -1;
  v31 = 0;
  v32 = -1;
  v6 = -1;
  v34 = -1;
  v33 = 0;
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
        v19 = wcschr(Str, 0x2Cu);
        v20 = v19;
        if ( v19 )
          *v19 = 0;
        v21 = wcschr(Str, 0x2Du);
        v24 = v9;
        v25 = v21;
        if ( v21 )
        {
          *v21 = 0;
          v26 = xwtol(Str, v22, v23, v21);
          Str = v25 + 1;
        }
        else
        {
          v26 = 0;
        }
        *(&v31 + v24) = v26;
        v27 = v9 + 1;
        *(&v31 + v27) = xwtol(Str, v22, v23, v25);
        Str = v20 + 1;
        v9 = v27 + 1;
      }
      while ( v20 );
      v6 = v34;
      v8 = v33;
      v4 = v32;
      v3 = v31;
    }
    if ( a2[3] > v8 )
      v8 = a2[3];
    v28 = a2[2];
    a2[3] = v8;
    if ( v28 < v6 )
      v6 = v28;
    v29 = a2[4];
    a2[2] = v6;
    if ( v29 <= 1000 * v3 )
      v29 = 1000 * v3;
    a2[4] = v29;
    v30 = a2[5];
    if ( v30 >= 1000 * v4 )
      v30 = 1000 * v4;
    a2[5] = v30;
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
      v15 = xwtol(Str, v12, v13, v14);
      Str = (wchar_t *)(v16 + 2);
      v17 = v9++;
      *(&v31 + v17) = v15;
    }
    while ( v16 );
    if ( !v31 )
      return 0LL;
    v18 = v32;
    if ( v32 == -1 )
      return 0LL;
    *a2 = v31;
    a2[2] = v33;
    a2[1] = v18;
  }
  return 1LL;
}
