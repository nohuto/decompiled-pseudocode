/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x14020A954
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401E2960 (NtUserCreateSyntheticPointerDevice2.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021FF8C (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RIMIDECreatePseudoHIDDevice @ 0x1402083FC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x140209F58 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        __int64 *a9)
{
  unsigned int v12; // edi
  char *v14; // r8
  unsigned int v15; // ecx
  unsigned __int16 v16; // si
  unsigned int v17; // edx
  unsigned int v18; // r9d
  char *v19; // r10
  __int64 v20; // rax
  __int128 v21; // xmm1
  struct _HIDP_DEVICE_DESC v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_DEVICE_DESC DeviceDescription; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v26; // [rsp+D8h] [rbp-28h]
  int v27; // [rsp+DCh] [rbp-24h]
  int v28; // [rsp+E0h] [rbp-20h]
  int v29; // [rsp+E8h] [rbp-18h]
  int v30; // [rsp+ECh] [rbp-14h]
  int v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+FCh] [rbp-4h]
  int v33; // [rsp+100h] [rbp+0h]
  int v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+10Ch] [rbp+Ch]
  char v36; // [rsp+170h] [rbp+70h] BYREF
  int v37; // [rsp+198h] [rbp+98h]
  int v38; // [rsp+19Ch] [rbp+9Ch]
  int v39; // [rsp+1A0h] [rbp+A0h]
  int v40; // [rsp+1A8h] [rbp+A8h]
  int v41; // [rsp+1ACh] [rbp+ACh]
  int v42; // [rsp+1B8h] [rbp+B8h]
  int v43; // [rsp+1BCh] [rbp+BCh]
  int v44; // [rsp+1C0h] [rbp+C0h]
  int v45; // [rsp+1C8h] [rbp+C8h]
  int v46; // [rsp+1CCh] [rbp+CCh]

  v12 = 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  if ( a9 )
    *a9 = 0LL;
  memmove(v25, &unk_14027B100, 0xA0uLL);
  switch ( a1 )
  {
    case 2:
      v14 = (char *)&unk_14027AF40;
      v15 = 7;
      v16 = 4;
      v17 = 10;
      v18 = 12;
      break;
    case 3:
      v15 = 7;
      v16 = 2;
      v18 = 12;
      v17 = 1;
      v14 = (char *)&unk_14027B020;
      break;
    case 5:
      v15 = 10;
      v14 = (char *)&unk_14027ADD0;
      v16 = 5;
      v17 = 5;
      v18 = 15;
      break;
    default:
      return 3221225485LL;
  }
  v19 = &v36;
  do
  {
    if ( v12 >= v15 )
      break;
    v20 = v12++;
    v20 *= 32LL;
    v21 = *(_OWORD *)&v14[v20 + 16];
    *(_OWORD *)v19 = *(_OWORD *)&v14[v20];
    *((_OWORD *)v19 + 1) = v21;
    v19 += 32;
  }
  while ( v12 + 5 < v18 );
  if ( a6 == 2 )
  {
    v26 = 0;
    v27 = a7 - 1;
    v29 = 0;
    v30 = a7 - 1;
    v28 = 851985;
    v31 = 0;
    v32 = a8 - 1;
    v34 = 0;
    v35 = a8 - 1;
    v33 = 851985;
    if ( a1 == 2 || a1 == 5 )
    {
      v37 = 0;
      v38 = a7 - 1;
      v40 = 0;
      v41 = a7 - 1;
      v39 = 851985;
      v42 = 0;
      v43 = a8 - 1;
      v45 = 0;
      v46 = a8 - 1;
      v44 = 851985;
    }
  }
  if ( (unsigned int)BuildReportDescriptor(0xDu, v16, (struct tagUSAGE_PROPERTIES *)v25, v18, v17, &DeviceDescription) )
  {
    v23 = DeviceDescription;
    return RIMIDECreatePseudoHIDDevice(0xDu, v16, a2, a4, a3, &v23, a6, a5, 0LL, a9);
  }
  return 3221225485LL;
}
