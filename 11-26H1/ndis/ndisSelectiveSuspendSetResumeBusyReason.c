/*
 * XREFs of ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430
 * Callers:
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140005B00 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140045020 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSelectiveSuspendSetResumeBusyReason(_DWORD *a1, char a2, unsigned int a3, int a4)
{
  unsigned int v6; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  int v9; // edi
  _DWORD *v10; // r12
  _DWORD *v11; // rcx
  __int16 v12; // r13
  __int64 v13; // rbp
  unsigned int v14; // r15d
  char v15; // si
  unsigned int v16; // r14d
  unsigned __int16 v17; // dx
  int v18; // r10d
  unsigned int v19; // r8d
  int v20; // ebp
  int v21; // eax
  unsigned __int16 v22; // dx
  int v23; // r10d
  unsigned int v24; // r8d
  int v25; // ebp
  int v26; // eax
  unsigned __int16 v27; // dx
  int v28; // r10d
  unsigned int v29; // r8d
  int v30; // ebp
  int v31; // eax
  unsigned __int16 v32; // dx
  int v33; // r10d
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx

  if ( a3 )
  {
    if ( a2 )
    {
      a1[157] = a3;
      a1[158] = a4;
    }
    else
    {
      a1[159] = a3;
      a1[160] = a4;
    }
    if ( a3 != 7 && (unsigned int)(a4 + 50265855) > 1 )
    {
      if ( a3 <= 0xF )
      {
        v6 = a3;
      }
      else
      {
        if ( a3 - 33 > 0x20 )
          return;
        v6 = a3 - 17;
      }
      if ( v6 <= 0x30 )
      {
        v7 = &a1[4 * v6];
        v7[185] = a3;
        if ( a2 )
          ++*((_WORD *)v7 + 368);
        else
          ++*((_WORD *)v7 + 369);
        if ( a4 )
        {
          v8 = -1;
          v9 = 2;
          v10 = a1 + 380;
          v11 = a1 + 384;
          HIBYTE(v12) = 0;
          LODWORD(v13) = 0;
          v14 = -1;
          v15 = 0;
          v16 = -1;
          do
          {
            v17 = *((_WORD *)v11 - 6);
            if ( v17 )
              *((_WORD *)v11 - 6) = --v17;
            v18 = *((unsigned __int16 *)v11 - 7);
            v19 = v18 + v17;
            v20 = v19 + v13;
            if ( !v15 )
            {
              v21 = *(v11 - 2);
              if ( v21 == a4 )
              {
                *((_WORD *)v11 - 6) = v17 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v11 - 8);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v11 - 7) = v18 + 1;
                }
              }
              else if ( v21 )
              {
                if ( v19 < v8 && !*((_WORD *)v11 - 8) )
                {
                  v8 = v18 + v17;
                  v16 = v9 - 2;
                }
              }
              else
              {
                v14 = v9 - 2;
              }
            }
            v22 = *(_WORD *)v11;
            if ( *(_WORD *)v11 )
              *(_WORD *)v11 = --v22;
            v23 = *((unsigned __int16 *)v11 - 1);
            v24 = v23 + v22;
            v25 = v24 + v20;
            if ( !v15 )
            {
              v26 = v11[1];
              if ( v26 == a4 )
              {
                *(_WORD *)v11 = v22 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v11 - 2);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v11 - 1) = v23 + 1;
                }
              }
              else if ( v26 )
              {
                if ( v24 < v8 && !*((_WORD *)v11 - 2) )
                {
                  v8 = v23 + v22;
                  v16 = v9 - 1;
                }
              }
              else
              {
                v14 = v9 - 1;
              }
            }
            v27 = *((_WORD *)v11 + 6);
            if ( v27 )
              *((_WORD *)v11 + 6) = --v27;
            v28 = *((unsigned __int16 *)v11 + 5);
            v29 = v28 + v27;
            v30 = v29 + v25;
            if ( !v15 )
            {
              v31 = v11[4];
              if ( v31 == a4 )
              {
                *((_WORD *)v11 + 6) = v27 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v11 + 4);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v11 + 5) = v28 + 1;
                }
              }
              else if ( v31 )
              {
                if ( v29 < v8 && !*((_WORD *)v11 + 4) )
                {
                  v8 = v28 + v27;
                  v16 = v9;
                }
              }
              else
              {
                v14 = v9;
              }
            }
            v32 = *((_WORD *)v11 + 12);
            if ( v32 )
              *((_WORD *)v11 + 12) = --v32;
            v33 = *((unsigned __int16 *)v11 + 11);
            v34 = v33 + v32;
            v13 = v34 + v30;
            if ( !v15 )
            {
              v35 = v11[7];
              if ( v35 == a4 )
              {
                *((_WORD *)v11 + 12) = v32 + 1;
                if ( a2 )
                {
                  ++*((_WORD *)v11 + 10);
                  v15 = 1;
                }
                else
                {
                  v15 = 1;
                  *((_WORD *)v11 + 11) = v33 + 1;
                }
              }
              else if ( v35 )
              {
                if ( v34 < v8 && !*((_WORD *)v11 + 10) )
                {
                  v8 = v33 + v32;
                  v16 = v9 + 1;
                }
              }
              else
              {
                v14 = v9 + 1;
              }
            }
            v9 += 4;
            v11 += 12;
          }
          while ( (unsigned int)(v9 - 2) < 8 );
          if ( !v15 )
          {
            if ( v14 == -1 )
            {
              if ( v16 == -1 )
                return;
              v14 = v16;
              LOWORD(v10[3 * v16 + 1]) = (unsigned __int64)(v13 + 4) >> 3;
            }
            else
            {
              LOWORD(v10[3 * v14 + 1]) = 255;
            }
            v36 = 3LL * v14;
            v10[v36 + 2] = a4;
            LOWORD(v10[v36]) = a2 != 0;
            LOBYTE(v12) = a2 == 0;
            HIWORD(v10[v36]) = v12;
          }
        }
      }
    }
  }
}
