/*
 * XREFs of ?FillMdmStatus@DISPLAY_MUX_PAIRING@@QEBAXPEAU_DISPLAYCONFIG_DISPLAYMUX_MUX_INFO@@@Z @ 0x14008C084
 * Callers:
 *     ?FillMdmStatus@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_STATUS@@@Z @ 0x140015204 (-FillMdmStatus@DISPLAY_MUX_MGR@@QEAAXPEAU_DISPLAYCONFIG_DISPLAYMUX_STATUS@@@Z.c)
 *     ?DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ @ 0x1400153F4 (-DoesSystemSupportStaticMdmNow@DISPLAY_MUX_MGR@@QEBAEXZ.c)
 *     ?LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J_N@Z @ 0x14008D120 (-LogMuxPairingStateTelemetry@DISPLAY_MUX_PAIRING@@AEBAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_MUX_PAIRING::FillMdmStatus(
        DISPLAY_MUX_PAIRING *this,
        struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *a2)
{
  _DWORD *v2; // rax
  int v3; // r10d
  int v4; // r9d
  struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // r11
  __int128 v9; // xmm1
  __int64 v10; // r11
  __int128 v11; // xmm1
  _DWORD *v12; // rax
  struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // r11
  __int128 v16; // xmm1
  __int64 v17; // r11
  __int128 v18; // xmm1
  __int64 v19; // rax
  int v20; // ecx

  v2 = (_DWORD *)*((_QWORD *)this + 2);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 == 1 )
    {
      v6 = a2;
      v7 = v2 + 1;
      v8 = 2LL;
      do
      {
        *(_OWORD *)v6 = *v7;
        *((_OWORD *)v6 + 1) = v7[1];
        *((_OWORD *)v6 + 2) = v7[2];
        *((_OWORD *)v6 + 3) = v7[3];
        *((_OWORD *)v6 + 4) = v7[4];
        *((_OWORD *)v6 + 5) = v7[5];
        *((_OWORD *)v6 + 6) = v7[6];
        v6 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)v6 + 128);
        v9 = v7[7];
        v7 += 8;
        *((_OWORD *)v6 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      v6 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)a2 + 356);
      v7 = v2 + 1;
      v10 = 2LL;
      do
      {
        *(_OWORD *)v6 = *v7;
        *((_OWORD *)v6 + 1) = v7[1];
        *((_OWORD *)v6 + 2) = v7[2];
        *((_OWORD *)v6 + 3) = v7[3];
        *((_OWORD *)v6 + 4) = v7[4];
        *((_OWORD *)v6 + 5) = v7[5];
        *((_OWORD *)v6 + 6) = v7[6];
        v6 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)v6 + 128);
        v11 = v7[7];
        v7 += 8;
        *((_OWORD *)v6 - 1) = v11;
        --v10;
      }
      while ( v10 );
    }
    *(_OWORD *)v6 = *v7;
    *((_OWORD *)v6 + 1) = v7[1];
    *((_OWORD *)v6 + 2) = v7[2];
    *((_OWORD *)v6 + 3) = v7[3];
    *((_OWORD *)v6 + 4) = v7[4];
    *((_OWORD *)v6 + 5) = v7[5];
    *((_DWORD *)v6 + 24) = *((_DWORD *)v7 + 24);
  }
LABEL_10:
  v12 = (_DWORD *)*((_QWORD *)this + 3);
  if ( v12 )
  {
    v4 = *v12;
    if ( *v12 == 1 )
    {
      v13 = a2;
      v14 = v12 + 1;
      v15 = 2LL;
      do
      {
        *(_OWORD *)v13 = *v14;
        *((_OWORD *)v13 + 1) = v14[1];
        *((_OWORD *)v13 + 2) = v14[2];
        *((_OWORD *)v13 + 3) = v14[3];
        *((_OWORD *)v13 + 4) = v14[4];
        *((_OWORD *)v13 + 5) = v14[5];
        *((_OWORD *)v13 + 6) = v14[6];
        v13 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)v13 + 128);
        v16 = v14[7];
        v14 += 8;
        *((_OWORD *)v13 - 1) = v16;
        --v15;
      }
      while ( v15 );
LABEL_18:
      *(_OWORD *)v13 = *v14;
      *((_OWORD *)v13 + 1) = v14[1];
      *((_OWORD *)v13 + 2) = v14[2];
      *((_OWORD *)v13 + 3) = v14[3];
      *((_OWORD *)v13 + 4) = v14[4];
      *((_OWORD *)v13 + 5) = v14[5];
      *((_DWORD *)v13 + 24) = *((_DWORD *)v14 + 24);
      goto LABEL_19;
    }
    if ( v4 == 2 )
    {
      v13 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)a2 + 356);
      v14 = v12 + 1;
      v17 = 2LL;
      do
      {
        *(_OWORD *)v13 = *v14;
        *((_OWORD *)v13 + 1) = v14[1];
        *((_OWORD *)v13 + 2) = v14[2];
        *((_OWORD *)v13 + 3) = v14[3];
        *((_OWORD *)v13 + 4) = v14[4];
        *((_OWORD *)v13 + 5) = v14[5];
        *((_OWORD *)v13 + 6) = v14[6];
        v13 = (struct _DISPLAYCONFIG_DISPLAYMUX_MUX_INFO *)((char *)v13 + 128);
        v18 = v14[7];
        v14 += 8;
        *((_OWORD *)v13 - 1) = v18;
        --v17;
      }
      while ( v17 );
      goto LABEL_18;
    }
  }
LABEL_19:
  v19 = *((_QWORD *)this + 1);
  if ( v19 )
  {
    if ( (*((_QWORD *)a2 + 89) = *(_QWORD *)(v19 + 64), v20 = *(_DWORD *)(*((_QWORD *)this + 1) + 72LL), v20 == 1)
      && v3 == 1
      || v20 == 2 && v4 == 1 )
    {
      *((_DWORD *)a2 + 181) = 1;
    }
  }
  *((_DWORD *)a2 + 180) = *(_DWORD *)this;
}
