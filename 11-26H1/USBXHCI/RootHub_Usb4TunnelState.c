/*
 * XREFs of RootHub_Usb4TunnelState @ 0x14004B534
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDD @ 0x14003761C (WPP_RECORDER_SF_dDD.c)
 */

__int64 __fastcall RootHub_Usb4TunnelState(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  int Ulong; // eax
  char v9; // di
  bool v10; // zf
  int v11; // eax
  char v12; // di
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+30h] [rbp-18h]

  v3 = (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(120 * v3 + *(_QWORD *)(a1 + 48) + 13) != 3 )
    return 4LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 744);
  v7 = *(_QWORD *)(v5 + 88);
  if ( (v6 & 0x400000) != 0 )
  {
    Ulong = XilRegister_ReadUlong(
              v7,
              (unsigned int *)(*(_QWORD *)(v7 + 24) + (unsigned int)(32 * (a2 - *(_DWORD *)(v7 + 140)) + 35524)));
    v9 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = Ulong;
      v18 = a2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0x110u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v18,
        v20);
    }
    v10 = (v9 & 0x10) == 0;
LABEL_10:
    if ( v10 )
      return 3LL;
    else
      return 2LL;
  }
  if ( (v6 & 0x800000) != 0 )
  {
    v11 = XilRegister_ReadUlong(v7, (unsigned int *)(*(_QWORD *)(v7 + 24) + 52512LL));
    v12 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v11;
      v19 = a2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0x111u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v19,
        v21);
    }
    v10 = (v12 & 1) == 0;
    goto LABEL_10;
  }
  if ( !*(_BYTE *)(a1 + 58) )
    return 4LL;
  v15 = ((unsigned int)XilRegister_ReadUlong(v7, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v3)) >> 2) & 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDD(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v14, v16, 0x112u, v17);
  return 3 - (unsigned int)(v15 != 0);
}
