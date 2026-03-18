/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1401EBEA8
 * Callers:
 *     NtUserCreateSyntheticPointerDevice2 @ 0x1401BC380 (NtUserCreateSyntheticPointerDevice2.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x14021C5BC (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E90CC (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401EB4C0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  unsigned int v13; // edi
  char *v15; // r8
  unsigned int v16; // ecx
  __int16 v17; // si
  unsigned int v18; // edx
  unsigned int v19; // r9d
  char *v20; // r10
  __int64 v21; // rax
  __int128 v22; // xmm1
  int v24; // [rsp+40h] [rbp-C0h]
  struct _HIDP_DEVICE_DESC v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_DEVICE_DESC DeviceDescription; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+ECh] [rbp-14h]
  int v30; // [rsp+F0h] [rbp-10h]
  int v31; // [rsp+F8h] [rbp-8h]
  int v32; // [rsp+FCh] [rbp-4h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  int v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]
  char v38; // [rsp+180h] [rbp+80h] BYREF
  int v39; // [rsp+1A8h] [rbp+A8h]
  int v40; // [rsp+1ACh] [rbp+ACh]
  int v41; // [rsp+1B0h] [rbp+B0h]
  int v42; // [rsp+1B8h] [rbp+B8h]
  int v43; // [rsp+1BCh] [rbp+BCh]
  int v44; // [rsp+1C8h] [rbp+C8h]
  int v45; // [rsp+1CCh] [rbp+CCh]
  int v46; // [rsp+1D0h] [rbp+D0h]
  int v47; // [rsp+1D8h] [rbp+D8h]
  int v48; // [rsp+1DCh] [rbp+DCh]

  v13 = 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  if ( a10 )
    *a10 = 0LL;
  memmove(v27, &unk_140272340, 0xA0uLL);
  switch ( a1 )
  {
    case 2:
      v15 = (char *)&unk_140272100;
      v16 = 7;
      v17 = 4;
      v18 = 10;
      v19 = 12;
      break;
    case 3:
      v15 = (char *)&unk_1402723E0;
      v17 = 2;
      v16 = 7;
      v19 = 12;
      v18 = 1;
      break;
    case 5:
      v16 = 10;
      v15 = (char *)&unk_1402721E0;
      v17 = 5;
      v18 = 5;
      v19 = 15;
      break;
    default:
      return 3221225485LL;
  }
  v20 = &v38;
  do
  {
    if ( v13 >= v16 )
      break;
    v21 = v13++;
    v21 *= 32LL;
    v22 = *(_OWORD *)&v15[v21 + 16];
    *(_OWORD *)v20 = *(_OWORD *)&v15[v21];
    *((_OWORD *)v20 + 1) = v22;
    v20 += 32;
  }
  while ( v13 + 5 < v19 );
  if ( a7 == 2 )
  {
    v28 = 0;
    v29 = a8 - 1;
    v31 = 0;
    v32 = a8 - 1;
    v30 = 851985;
    v33 = 0;
    v34 = a9 - 1;
    v36 = 0;
    v37 = a9 - 1;
    v35 = 851985;
    if ( a1 == 2 || a1 == 5 )
    {
      v39 = 0;
      v40 = a8 - 1;
      v42 = 0;
      v43 = a8 - 1;
      v41 = 851985;
      v44 = 0;
      v45 = a9 - 1;
      v47 = 0;
      v48 = a9 - 1;
      v46 = 851985;
    }
  }
  if ( (unsigned int)BuildReportDescriptor(0xDu, v17, (struct tagUSAGE_PROPERTIES *)v27, v19, v18, &DeviceDescription) )
  {
    v25 = DeviceDescription;
    return RIMIDECreatePseudoHIDDevice(0xDu, v17, a2, a4, a3, &v25, a7, a5, v24, 0LL, a10);
  }
  return 3221225485LL;
}
