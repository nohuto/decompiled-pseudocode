/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1400861BC
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x140085F84 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1400864DC (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // r8
  _QWORD **v3; // rcx
  _QWORD *i; // rax
  _QWORD *v5; // rdx
  unsigned __int16 j; // r8
  _QWORD *k; // rax
  _QWORD *v8; // rdx
  unsigned __int16 v9; // bp
  unsigned __int16 v10; // di
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // r15
  _UNKNOWN **v13; // rdx
  _QWORD *v14; // r14
  _QWORD *m; // rax
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *ii; // rax
  _QWORD *v20; // r13
  _QWORD *n; // rax
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h]
  unsigned __int16 v25; // [rsp+70h] [rbp+8h]

  v1 = *(_WORD *)(a1 + 146);
  v3 = (_QWORD **)(a1 + 2376);
  while ( v1 <= *(_WORD *)(a1 + 148) )
  {
    for ( i = *v3; ; i = (_QWORD *)*i )
    {
      v5 = i - 31;
      if ( v3 == i )
        break;
      if ( *((_WORD *)v5 + 100) == v1 )
      {
        *((_DWORD *)v5 + 342) = 1;
        *((_DWORD *)v5 + 343) = *(_DWORD *)(a1 + 96);
        *((_DWORD *)v5 + 348) = v1;
        *((_WORD *)v5 + 694) = 0;
        break;
      }
    }
    ++v1;
  }
  for ( j = *(_WORD *)(a1 + 152); ; ++j )
  {
    v9 = *(_WORD *)(a1 + 154);
    if ( j > v9 )
      break;
    for ( k = *v3; ; k = (_QWORD *)*k )
    {
      v8 = k - 31;
      if ( v3 == k )
        break;
      if ( *((_WORD *)v8 + 100) == j )
      {
        *((_DWORD *)v8 + 342) = 1;
        *((_DWORD *)v8 + 343) = *(_DWORD *)(a1 + 96);
        *((_DWORD *)v8 + 348) = j;
        *((_WORD *)v8 + 694) = 0;
        break;
      }
    }
  }
  v10 = *(_WORD *)(a1 + 152);
  v11 = *(_WORD *)(a1 + 148);
  v12 = *(_WORD *)(a1 + 146);
  v25 = v11;
  if ( v10 <= v9 )
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    while ( 2 )
    {
      if ( v12 <= v11 )
      {
        v14 = (_QWORD *)(a1 + 2376);
        for ( m = *(_QWORD **)(a1 + 2376); ; m = (_QWORD *)*m )
        {
          v16 = m - 31;
          if ( v14 == m )
            break;
          if ( *((_WORD *)v16 + 100) == v12 )
          {
            if ( m != (_QWORD *)248 )
            {
              v17 = *((_DWORD *)v16 + 51);
              if ( (v17 & 0x10) != 0 )
              {
                if ( v12 == v11 )
                {
                  *((_WORD *)v16 + 106) = v10;
                  *((_WORD *)v16 + 107) = v9;
                  while ( v10 <= v9 )
                  {
                    for ( n = *(_QWORD **)(a1 + 2376); ; n = (_QWORD *)*n )
                    {
                      v22 = n - 31;
                      if ( v14 == n )
                        break;
                      if ( *((_WORD *)v22 + 100) == v10 )
                      {
                        if ( (int)HUBCONNECTOR_RegisterPort(v22, v13) < 0 )
                          return;
                        break;
                      }
                    }
                    ++v10;
                  }
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v13) = 2;
                  WPP_RECORDER_SF_(
                    v16[179],
                    (_DWORD)v13,
                    6,
                    24,
                    (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
                }
                return;
              }
              *((_DWORD *)v16 + 348) = v10;
              if ( (v17 & 1) != 0 )
              {
                if ( (int)HUBCONNECTOR_RegisterPort(v16, &WPP_RECORDER_INITIALIZED) >= 0 )
                {
                  for ( ii = *(_QWORD **)(a1 + 2376); ; ii = (_QWORD *)*ii )
                  {
                    v20 = ii - 31;
                    if ( v14 == ii )
                    {
                      v13 = &WPP_RECORDER_INITIALIZED;
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LODWORD(v23) = v12;
                        WPP_RECORDER_SF_d(
                          v16[179],
                          2u,
                          6u,
                          0x19u,
                          (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                          v23);
                        v13 = &WPP_RECORDER_INITIALIZED;
                      }
                      goto LABEL_37;
                    }
                    if ( *((_WORD *)v20 + 100) == v10 )
                      break;
                  }
                  if ( (*((_DWORD *)v20 + 51) & 1) == 0
                    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v24) = v10;
                    LODWORD(v23) = v12;
                    WPP_RECORDER_SF_dD(
                      v16[179],
                      2u,
                      6u,
                      0x1Au,
                      (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                      v23,
                      v24);
                  }
                  if ( (int)HUBCONNECTOR_RegisterPort(v20, v18) >= 0 )
                  {
                    v13 = &WPP_RECORDER_INITIALIZED;
LABEL_37:
                    v11 = v25;
                    break;
                  }
                }
                return;
              }
            }
            break;
          }
        }
        ++v12;
        if ( ++v10 <= v9 )
          continue;
      }
      break;
    }
  }
}
