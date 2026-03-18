/*
 * XREFs of Etw_ControllerRundown @ 0x140002800
 * Callers:
 *     Etw_EnableCallback @ 0x140002020 (Etw_EnableCallback.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1400444D0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     Etw_DeviceListRundown @ 0x140002B50 (Etw_DeviceListRundown.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x140003468 (McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_ControllerRundown(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  char v7; // r8
  int v8; // ecx
  char v9; // r9
  int v10; // edx
  __int64 v11; // rbx
  char v13; // [rsp+130h] [rbp-98h]
  __int64 v14; // [rsp+140h] [rbp-88h]
  __int64 v15; // [rsp+150h] [rbp-78h]
  int v16; // [rsp+160h] [rbp-68h]
  int v17; // [rsp+164h] [rbp-64h]
  int v18; // [rsp+168h] [rbp-60h]
  int v19; // [rsp+16Ch] [rbp-5Ch]
  int v20; // [rsp+170h] [rbp-58h]
  _DWORD *v21; // [rsp+178h] [rbp-50h]
  int v23; // [rsp+1D8h] [rbp+10h]
  int v24; // [rsp+1E0h] [rbp+18h]
  int v25; // [rsp+1E8h] [rbp+20h]

  v2 = *(_DWORD **)(a2 + 88);
  LOBYTE(v3) = -1;
  v21 = v2;
  if ( v2 )
  {
    v20 = v2[21];
    v19 = v2[22];
    v18 = v2[25];
    v17 = v2[26];
    v16 = v2[27];
    v23 = v2[29];
  }
  else
  {
    LOBYTE(v20) = -1;
    LOBYTE(v19) = -1;
    LOBYTE(v18) = -1;
    LOBYTE(v17) = -1;
    LOBYTE(v16) = -1;
    LOBYTE(v23) = -1;
  }
  v5 = *(_QWORD *)(a2 + 96);
  if ( v5 )
    v25 = *(_DWORD *)(v5 + 20);
  else
    LOBYTE(v25) = -1;
  v6 = *(_QWORD *)(a2 + 128);
  if ( v6 )
  {
    v3 = *(_DWORD *)(v6 + 20);
    v24 = *(_DWORD *)(v6 + 16);
  }
  else
  {
    LOBYTE(v24) = -1;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
  {
    v7 = *(_BYTE *)(a2 + 1001);
    v15 = a2 + 180;
    v8 = a2 + 872;
    v14 = a2 + 872;
    v13 = *(_DWORD *)(a2 + 1080);
    v9 = *(_BYTE *)(a2 + 1000);
    v10 = *(unsigned __int8 *)(a2 + 1064);
    v11 = a1;
    McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer(
      v8,
      v10,
      a1,
      *(_QWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 644),
      *(_BYTE *)(a2 + 720),
      *(_BYTE *)(a2 + 721),
      *(_DWORD *)(a2 + 660),
      *(_WORD *)(a2 + 664),
      *(_WORD *)(a2 + 668),
      *(_WORD *)(a2 + 648),
      *(_WORD *)(a2 + 652),
      *(_BYTE *)(a2 + 656),
      a2 + 704,
      a2 + 709,
      a2 + 714,
      *(_QWORD *)(a2 + 728),
      *(_DWORD *)(a2 + 864),
      *(_DWORD *)(a2 + 792),
      *(_DWORD *)(a2 + 176),
      v9,
      v7,
      *(_DWORD *)(a2 + 1008),
      *(_DWORD *)(a2 + 1012),
      v21[20],
      *(_DWORD *)(a2 + 1036),
      v10,
      *(_QWORD *)(a2 + 736),
      *(_QWORD *)(a2 + 744),
      v20,
      v19,
      v18,
      v17,
      v16,
      v25,
      v3,
      v24,
      v23,
      v13,
      96,
      v14,
      64,
      v15);
  }
  else
  {
    v11 = a1;
  }
  return Etw_DeviceListRundown(v11, a2);
}
