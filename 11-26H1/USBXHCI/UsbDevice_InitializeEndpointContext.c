/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x14001D7AC
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14001D4A4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x140036438 (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x140035EF8 (Endpoint_GetMaxPrimaryStreams.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // ax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  bool v13; // cc
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // di
  int v17; // ecx
  bool v18; // zf
  int v19; // eax
  char v20; // di
  unsigned __int8 v21; // al
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // edx
  int v27; // ecx
  char v28; // di
  unsigned __int8 *v29; // rcx
  unsigned __int8 v30; // al
  int v31; // esi
  int v32; // eax
  char v33; // di
  unsigned int v34; // edx
  _BYTE *v35; // rdx
  int v36; // ecx
  __int64 v37; // rdx
  unsigned int MaxPrimaryStreams; // eax
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r10d
  int result; // eax
  unsigned int v44; // r10d
  char v45; // r9

  v6 = 0;
  a3[1] ^= ((unsigned __int8)a3[1] ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 128))) & 0x38;
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2)
    && !*(_WORD *)(a2 + 100)
    && *(_BYTE *)(a2 + 39)
    && ((v8 = *(_DWORD *)(a2 + 128), v8 == 5) || v8 == 1) )
  {
    v9 = *(_WORD *)(a2 + 105);
  }
  else
  {
    v9 = *(_WORD *)(a2 + 100) & 0x7FF;
  }
  *((_WORD *)a3 + 3) = v9;
  v10 = *(_BYTE *)(a2 + 99) & 3;
  if ( v10 == 1 )
  {
    v11 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)a2 + 736LL) & 0x10000000000000LL) == 0
         || v10 != 3
         || *(char *)(a2 + 98) >= 0
         || (v12 = *(_QWORD *)(a2 + 16), *(_WORD *)(v12 + 132) != 1529)
         || *(_WORD *)(v12 + 134) != 4353
         || (v13 = *(_DWORD *)(v12 + 36) <= 1u, v11 = 0, v13) )
  {
    v11 = 6;
  }
  v14 = v11 | a3[1] & 0xFFFFFFF9;
  a3[1] = v14;
  v15 = *(_DWORD *)(a1 + 20);
  v16 = *(_BYTE *)(a2 + 102);
  switch ( v15 )
  {
    case 0:
      if ( (((v14 & 0x38) - 24) & 0xFFFFFFDF) == 0 )
        goto LABEL_19;
      goto LABEL_36;
    case 1:
      v17 = v14 & 0x38;
      if ( ((v17 - 24) & 0xFFFFFFDF) == 0 )
      {
        if ( v16 >= 2u )
        {
          if ( v16 >= 4u )
          {
            if ( v16 >= 8u )
            {
LABEL_19:
              if ( v16 >= 0x10u )
                *((_BYTE *)a3 + 2) = 8 - (v16 < 0x20u);
              else
                *((_BYTE *)a3 + 2) = 6;
              goto LABEL_34;
            }
            *((_BYTE *)a3 + 2) = 5;
            if ( *(_DWORD *)(a1 + 40) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x20000LL) == 0 )
              goto LABEL_34;
          }
          *((_BYTE *)a3 + 2) = 4;
        }
        else
        {
          *((_BYTE *)a3 + 2) = 3;
        }
LABEL_34:
        *((_BYTE *)a3 + 3) = 0;
        goto LABEL_35;
      }
      if ( ((v17 - 8) & 0xFFFFFFDF) == 0 )
      {
        *((_WORD *)a3 + 1) = 3;
LABEL_35:
        v6 = *((unsigned __int16 *)a3 + 3);
        *((_WORD *)a3 + 9) = v6;
      }
LABEL_36:
      *(_DWORD *)(a2 + 160) = *((unsigned __int16 *)a3 + 3);
      break;
    case 2:
      v18 = (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v14, v7) == 0;
      v19 = (a3[1] & 0x38) - 8;
      if ( v18 )
      {
        if ( (v19 & 0xFFFFFFCF) != 0 )
        {
          v29 = (unsigned __int8 *)a3 + 5;
        }
        else
        {
          if ( v16 >= 2u )
          {
            if ( v16 >= 6u )
              v28 = 5;
            else
              v28 = v16 - 1;
          }
          else
          {
            v28 = 0;
          }
          *((_BYTE *)a3 + 2) = v28;
          v29 = (unsigned __int8 *)a3 + 5;
          v30 = (*(_WORD *)(a2 + 100) >> 11) & 3;
          *((_BYTE *)a3 + 3) = 0;
          v31 = v30;
          v32 = *((unsigned __int16 *)a3 + 3);
          *((_BYTE *)a3 + 5) = v31;
          v6 = v32 * (v31 + 1);
          *((_WORD *)a3 + 9) = v6;
        }
        v27 = *((unsigned __int16 *)a3 + 3) * (*v29 + 1);
      }
      else
      {
        if ( (v19 & 0xFFFFFFCF) == 0 )
        {
          if ( v16 >= 2u )
          {
            if ( v16 >= 6u )
              v20 = 5;
            else
              v20 = v16 - 1;
          }
          else
          {
            v20 = 0;
          }
          *((_BYTE *)a3 + 2) = v20;
          v21 = (*(_WORD *)(a2 + 100) >> 11) & 3;
          v22 = v21;
          *((_BYTE *)a3 + 5) = v21;
          if ( !*(_WORD *)(a2 + 100) && *(_BYTE *)(a2 + 39) && ((v23 = *(_DWORD *)(a2 + 128), v23 == 5) || v23 == 1) )
          {
            v24 = *(_QWORD *)(a1 + 8);
            v25 = *a3;
            *((_BYTE *)a3 + 5) = 2;
            if ( (*(_DWORD *)(*(_QWORD *)(v24 + 88) + 108LL) & 0x10) != 0 )
              v26 = v25 & 0xFFFFFCFF;
            else
              v26 = v25 & 0xFFFFFCFF | 0x100;
            *a3 = v26;
            v6 = *(_DWORD *)(a2 + 107);
          }
          else
          {
            v6 = *((unsigned __int16 *)a3 + 3) * (v22 + 1);
          }
          *((_WORD *)a3 + 9) = v6;
          *((_BYTE *)a3 + 3) = 0;
        }
        v27 = v6;
      }
      *(_DWORD *)(a2 + 160) = v27;
      break;
    case 3:
      if ( (((v14 & 0x38) - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v16 >= 2u )
          v33 = v16 >= 6u ? 5 : v16 - 1;
        else
          v33 = 0;
        *((_BYTE *)a3 + 2) = v33;
        v34 = *(unsigned __int8 *)(a2 + 114);
        if ( v34 < 0x80 )
        {
          v6 = *(unsigned __int16 *)(a2 + 115);
          *a3 ^= ((unsigned __int16)*a3 ^ (unsigned __int16)((_WORD)v34 << 8)) & 0x300;
        }
        else
        {
          v6 = *(_DWORD *)(a2 + 121);
          *a3 &= 0xFFFFFCFF;
        }
        *((_WORD *)a3 + 9) = v6;
        *((_BYTE *)a3 + 3) = BYTE2(v6);
        if ( (v14 & 0x38) == 0x28 )
          goto LABEL_79;
      }
      if ( (v14 & 0x38) == 8 )
      {
LABEL_79:
        v36 = v6;
        v35 = (char *)a3 + 5;
      }
      else
      {
        v35 = (char *)a3 + 5;
        v36 = *((unsigned __int16 *)a3 + 3) * (*((unsigned __int8 *)a3 + 5) + 1);
      }
      *(_DWORD *)(a2 + 160) = v36;
      *v35 = *(_BYTE *)(a2 + 113);
      break;
  }
  if ( *((_BYTE *)a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x10000LL) != 0 )
    *((_BYTE *)a3 + 2) = 7;
  *(_DWORD *)(a2 + 156) = *((unsigned __int8 *)a3 + 5);
  v37 = *a3;
  *((_WORD *)a3 + 8) = v6 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2, v37);
  *a3 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)((_WORD)MaxPrimaryStreams << 10)) & 0x7C00;
  *((_QWORD *)a3 + 1) = Endpoint_GetDequeuePointer(v40, 0LL, v41, MaxPrimaryStreams);
  result = v42 | 0x8000;
  v44 = v42 & 0xFFFF7FFF;
  if ( (v45 & 0x1F) != 0 )
    v44 = result;
  *a3 = v44;
  return result;
}
