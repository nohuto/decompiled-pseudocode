/*
 * XREFs of ProcessNvmeHealthInfoLog @ 0x140002180
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400025C0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     QueryProtocolInfoCompletion @ 0x140020C50 (QueryProtocolInfoCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1400264B0 (NVMeGetLogPageCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 */

__int64 __fastcall ProcessNvmeHealthInfoLog(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 SrbExtension; // rax
  __int128 v8; // xmm2
  __int64 v9; // rax
  __int64 i; // rcx
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int8 v13; // si
  char v14; // cl
  char v15; // al
  char v16; // al
  char v17; // dl
  bool v18; // zf
  char v19; // al
  char v20; // cl
  __int64 v22; // [rsp+20h] [rbp-108h]
  __int128 v23; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+E0h] [rbp-48h]

  SrbExtension = GetSrbExtension(a2);
  v8 = *(_OWORD *)(SrbExtension + 4096);
  v9 = *(_QWORD *)(SrbExtension + 4096);
  v24 = v8;
  if ( HIDWORD(v9) != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v11 && *(_DWORD *)(v11 + 16) == DWORD1(v24) )
        goto LABEL_8;
    }
  }
  v11 = 0LL;
LABEL_8:
  v12 = *(_DWORD *)(a1 + 56);
  v13 = 0;
  v23 = 0LL;
  if ( (v12 & 0x80u) != 0 )
    *a3 |= 4u;
  v14 = *a3;
  if ( (*(_DWORD *)(a1 + 56) & 0x100) != 0 )
  {
    v14 |= 8u;
    *a3 = v14;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x200) != 0 )
  {
    v14 |= 0x10u;
    *a3 = v14;
  }
  v15 = *(_BYTE *)(a1 + 140);
  if ( v15 )
    a3[3] = v15;
  v16 = *(_BYTE *)(a1 + 141);
  if ( v16 )
    a3[4] = v16;
  if ( *(_BYTE *)(a1 + 140) || (v17 = v14, *(_BYTE *)(a1 + 141)) )
  {
    v17 = v14;
    if ( (unsigned __int8)a3[3] < (unsigned __int8)a3[4] )
    {
      v17 = v14 | 1;
      *a3 = v14 | 1;
    }
  }
  if ( v17 && v17 != *(_BYTE *)(a1 + 22) )
  {
    v18 = (*(_BYTE *)(a1 + 21) & 4) == 0;
    *(_BYTE *)(a1 + 22) = v17;
    if ( !v18 )
      StorPortExtendedFunction(87LL, a1, v11, 2LL, a4);
    if ( a4 == 9 )
    {
      if ( (*a3 & 2) != *a3 )
      {
        v13 = 1;
        *(_DWORD *)(a1 + 3960) = *(_DWORD *)(a1 + 3960) & ~*(unsigned __int8 *)(a1 + 22) | 2;
      }
      v19 = *a3;
      if ( (*a3 & 1) != 0 )
      {
        *(_QWORD *)&v23 = v23 | 1;
      }
      else if ( (v19 & 2) != 0 )
      {
        *(_QWORD *)&v23 = v23 | 2;
      }
      else if ( (v19 & 4) != 0 )
      {
        *(_QWORD *)&v23 = v23 | 4;
      }
      else if ( (v19 & 8) != 0 )
      {
        *(_QWORD *)&v23 = v23 | 8;
      }
      else if ( (v19 & 0x10) != 0 )
      {
        *(_QWORD *)&v23 = v23 | 0x10;
      }
      else
      {
        *(_QWORD *)&v23 = v23 | 0x800;
      }
      SendNVMeEventNotification(a1, &v23, a3, 512LL);
    }
  }
  if ( (unsigned __int8)a3[5] >= 0x5Fu && (*(_BYTE *)(a1 + 21) & 0x44) == 4 )
  {
    LODWORD(v22) = a4;
    StorPortExtendedFunction(85LL, a1, v11, 2LL, v22);
    *(_BYTE *)(a1 + 21) |= 0x40u;
  }
  if ( (unsigned __int8)a3[3] <= 2u )
  {
    v20 = *(_BYTE *)(a1 + 21);
    if ( (v20 & 4) != 0 && v20 >= 0 )
    {
      LODWORD(v22) = a4;
      StorPortExtendedFunction(85LL, a1, v11, 2LL, v22);
      *(_BYTE *)(a1 + 21) |= 0x80u;
    }
  }
  return v13;
}
