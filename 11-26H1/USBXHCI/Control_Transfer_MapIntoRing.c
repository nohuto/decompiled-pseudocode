/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x14000F2D0
 * Callers:
 *     Control_Transfer_Map @ 0x14000EFE0 (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1400324B0 (Control_EvtDmaCallback.c)
 * Callees:
 *     XilUsbDevice_WriteDoorbell @ 0x14000ED60 (XilUsbDevice_WriteDoorbell.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDqq @ 0x140021AF0 (WPP_RECORDER_SF_DDqq.c)
 *     TR_CalculateTDSize @ 0x140026E80 (TR_CalculateTDSize.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x140027E60 (TR_AddTRBRangeToSecureTransferRing.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1400393D0 (WPP_RECORDER_SF_DDDqD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140044C80 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

int *__fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // r13
  int v3; // r15d
  int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int16 v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned int v16; // r12d
  int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // r8d
  bool v20; // cf
  int v21; // r8d
  bool v22; // zf
  int v23; // edx
  int *v24; // rdx
  int *v25; // rdi
  __int64 v26; // r15
  int v27; // edx
  int v28; // r8d
  int v29; // r8d
  unsigned int v30; // r8d
  int v31; // edx
  __int64 v32; // rax
  int v33; // edx
  int *result; // rax
  int v35; // edx
  int v36; // r8d
  int v37; // ebx
  int v38; // edx
  int v39; // ebx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // edi
  _DWORD *v45; // rax
  unsigned int v46; // edi
  __int64 v47; // rcx
  BOOL v48; // eax
  int v49; // eax
  int v50; // edi
  KIRQL v51; // dl
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rcx
  signed __int32 v58[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+28h] [rbp-51h]
  __int64 v61; // [rsp+38h] [rbp-41h]
  __int64 v62; // [rsp+40h] [rbp-39h]
  unsigned int v63; // [rsp+50h] [rbp-29h]
  unsigned int v64; // [rsp+54h] [rbp-25h]
  __int64 v65; // [rsp+58h] [rbp-21h]
  __int64 v66; // [rsp+60h] [rbp-19h]
  __int64 v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int128 v69; // [rsp+78h] [rbp-1h] BYREF
  char v70; // [rsp+E0h] [rbp+67h]
  int v71; // [rsp+E8h] [rbp+6Fh]
  unsigned int v72; // [rsp+F0h] [rbp+77h]
  int v73; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 360);
  v73 = 0;
  v3 = *(_DWORD *)(v1 + 104);
  v67 = *(_QWORD *)(v1 + 48);
  v4 = *(_DWORD *)(v67 + 32) & 1;
  v71 = v4;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 720LL) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && !*(_WORD *)(v5 + 100)
      && *(_BYTE *)(v5 + 39)
      && ((v6 = *(_DWORD *)(v5 + 128), v6 == 5) || v6 == 1) )
    {
      v7 = *(_WORD *)(v5 + 105);
    }
    else
    {
      v7 = *(_WORD *)(v5 + 100) & 0x7FF;
    }
    v8 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && !*(_WORD *)(v8 + 100)
      && *(_BYTE *)(v8 + 39)
      && ((v9 = *(_DWORD *)(v8 + 128), v9 == 5) || v9 == 1) )
    {
      v10 = *(_WORD *)(v8 + 105);
    }
    else
    {
      v10 = *(_WORD *)(v8 + 100) & 0x7FF;
    }
    v4 = v71;
    v64 = (v3 + (unsigned int)v7 - 1) / v10;
  }
  else
  {
    v64 = 0;
  }
  v11 = *(unsigned int *)(a1 + 192);
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 40);
  v14 = 0LL;
  v15 = *(_QWORD *)(a1 + 184) + 16 * v11;
  v16 = 0;
  v72 = 0;
  v17 = 1;
  v18 = *(_QWORD *)(v13 + 736);
  v19 = *(_DWORD *)(a1 + 192);
  v66 = 0LL;
  v63 = 0;
  v68 = v11;
  v65 = v15;
  v70 = 0;
  if ( (v18 & 8) != 0 && (unsigned int)(v11 + 21) > *(_DWORD *)(a1 + 196) )
  {
    v20 = *(_DWORD *)(a1 + 200) != 0;
    v69 = 0LL;
    v21 = 6145 - v20;
    v22 = (*(_QWORD *)(v13 + 736) & 0x800LL) == 0;
    HIDWORD(v69) = v21;
    if ( !v22 )
      v21 |= 0x10u;
    v23 = DWORD2(v69) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
    *(_QWORD *)v15 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
    *(_DWORD *)(v15 + 8) = v23;
    *(_DWORD *)(v15 + 12) = v21 | 2;
    v19 = 0;
    v22 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v22;
  }
  v24 = (int *)(a1 + 200);
  v25 = (int *)(a1 + 200);
  while ( 1 )
  {
    v26 = *(_QWORD *)(a1 + 184) + 16LL * v19;
    if ( v19 + 1 > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = v24;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v25 = (int *)(a1 + 200);
          v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
          WPP_RECORDER_SF_DDDqD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v27,
            v19,
            34,
            v59,
            v27,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
            v19,
            v26,
            *(_DWORD *)(a1 + 200));
          v15 = v65;
        }
      }
      v28 = *v25;
      *((_QWORD *)&v69 + 1) = 0LL;
      if ( v26 == v15 )
        v29 = 6145 - (v28 != 0);
      else
        v29 = v28 & 1 | 0x1800;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) == 0 )
      {
        if ( v26 == v15 )
        {
          v30 = v29 & 0xFFFFFFEF;
LABEL_38:
          v32 = *(_QWORD *)(a1 + 176);
          DWORD2(v69) = DWORD2(v69) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
          v31 = DWORD2(v69);
          *(_QWORD *)&v69 = *(_QWORD *)(v32 + 24);
          *(_QWORD *)v26 = v69;
          *(_DWORD *)(v26 + 8) = v31;
          *(_DWORD *)(v26 + 12) = v30 | 2;
          v19 = 0;
          v22 = *v25 == 0;
          *(_DWORD *)(a1 + 192) = 0;
          *v25 = v22;
          v25 = (int *)(a1 + 200);
          goto LABEL_94;
        }
        if ( v17 != 5 && (unsigned int)(v17 - 6) >= 2 )
        {
          v30 = v29 & 0xFFFFFFEF;
          goto LABEL_38;
        }
      }
      v30 = v29 | 0x10;
      goto LABEL_38;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v33 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v33,
        v19,
        35,
        v59,
        v33,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
        v19,
        v26,
        *(_DWORD *)(a1 + 200));
      v15 = v65;
      v14 = v66;
      v12 = v72;
    }
    v69 = 0LL;
    if ( v17 == 7 )
    {
LABEL_90:
      ++v73;
      v37 = 7200;
      *(_QWORD *)&v69 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v17 == 7 )
      {
        v17 = 9;
        *(_QWORD *)&v69 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
        goto LABEL_82;
      }
      goto LABEL_86;
    }
    result = 0LL;
    v35 = 0;
    v36 = 0;
    if ( v17 == 1 )
    {
      DWORD2(v69) = 8;
      *(_QWORD *)&v69 = *(_QWORD *)(v67 + 128);
      if ( *(_DWORD *)(v1 + 104) )
      {
        v37 = 133184;
        v17 = 2;
        if ( v71 )
          v37 = 198720;
        goto LABEL_82;
      }
      v37 = 2112;
LABEL_86:
      v17 = 3;
      goto LABEL_82;
    }
    if ( v17 == 2 )
      goto LABEL_52;
    if ( v17 != 3 )
    {
      if ( v17 != 5 )
      {
        if ( v17 == 6 )
          goto LABEL_90;
        v37 = HIDWORD(v69);
LABEL_78:
        if ( v17 != 6 )
        {
          v35 = v36;
          if ( v17 != 7 )
            goto LABEL_81;
        }
        goto LABEL_80;
      }
LABEL_52:
      if ( v17 == 2 )
        v39 = (v4 << 16) | 0xC00;
      else
        v39 = 1024;
      v40 = *(_DWORD *)(v1 + 64);
      HIDWORD(v69) = v39;
      if ( v40 == 2 )
      {
        if ( !v71 )
          memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
        v46 = *(_DWORD *)(v1 + 104);
        *(_QWORD *)&v69 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
      }
      else
      {
        if ( !v40 )
          return result;
        v41 = v40 - 1;
        if ( v41 )
        {
          if ( v41 != 2 )
          {
            v44 = DWORD2(v69);
            goto LABEL_77;
          }
          if ( !v16 )
          {
            v42 = *(_QWORD *)(v1 + 96);
            v14 = *(_QWORD *)(v42 + 24LL * v12 + 16);
            v16 = *(_DWORD *)(v42 + 24LL * v12 + 24);
            v66 = v14;
          }
          v43 = 0x10000;
          if ( v17 == 2 )
          {
            if ( v16 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x40) != 0 )
            {
              v43 = 512;
              if ( v71 )
                v70 = 1;
LABEL_66:
              v17 = 5;
              *(_QWORD *)&v69 = v14;
              v44 = v43 | DWORD2(v69) & 0xFFFE0000;
              v16 -= v43;
              v66 = v43 + v14;
              goto LABEL_77;
            }
          }
          else if ( v70 )
          {
            v39 |= 0x10000u;
          }
          if ( v16 > 0x10000 )
            goto LABEL_66;
          v45 = *(_DWORD **)(v1 + 96);
          *(_QWORD *)&v69 = v14;
          v44 = v16 & 0x1FFFF | DWORD2(v69) & 0xFFFE0000;
          v72 = v12 + 1;
          v16 = 0;
          v17 = (v12 + 1 == *v45) + 5;
LABEL_77:
          v63 += v44 & 0x1FFFF;
          LOBYTE(v15) = v17 == 6;
          v37 = v39 | 0x10;
          DWORD2(v69) = v44 & 0xFFC1FFFF | ((TR_CalculateTDSize(a1, v64, v63, v15) & 0x1F) << 17);
          v35 = v37;
          v36 = v37;
          goto LABEL_78;
        }
        v46 = *(_DWORD *)(v1 + 104);
        memmove(&v69, *(const void **)(v1 + 80), v46);
        v39 = HIDWORD(v69) | 0x40;
      }
      v17 = 6;
      v44 = DWORD2(v69) & 0xFFFE0000 | v46 & 0x1FFFF;
      goto LABEL_77;
    }
    v38 = 69632;
    v17 = 7;
    if ( v4 )
      v38 = 4096;
    v35 = v38 | 0x10;
LABEL_80:
    v37 = v35 | 2;
LABEL_81:
    v15 = v65;
LABEL_82:
    v25 = (int *)(a1 + 200);
    HIDWORD(v69) = v26 == v15
                 ? v37 & 0xFFFFFFFE | (*(_DWORD *)(a1 + 200) == 0)
                 : v37 & 0xFFFFFFFE | *(_DWORD *)(a1 + 200) & 1;
    DWORD2(v69) = DWORD2(v69) & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
    *(_OWORD *)v26 = v69;
    v19 = ++*(_DWORD *)(a1 + 192);
LABEL_94:
    if ( v17 == 9 )
      break;
    v4 = v71;
    v24 = (int *)(a1 + 200);
    v14 = v66;
    v12 = v72;
  }
  *(_DWORD *)(v1 + 160) = v19;
  v47 = *(unsigned int *)(a1 + 192);
  v48 = *v25 == 0;
  v69 = 0LL;
  HIDWORD(v69) = v48;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v47) = v69;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v73;
  v49 = 2;
  v50 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 368) |= 1u;
  v51 = *(_BYTE *)(a1 + 104);
  if ( v50 != 3 )
    v49 = 0;
  *(_DWORD *)(a1 + 108) = v49;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v51);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = *(_QWORD *)(a1 + 48);
    v54 = *(_QWORD *)(a1 + 56);
    v62 = v1;
    v55 = *(unsigned __int8 *)(v53 + 143);
    v61 = *(_QWORD *)(v1 + 24);
    LODWORD(v53) = *(_DWORD *)(v54 + 152);
    v56 = *(_QWORD *)(v54 + 80);
    LOBYTE(v60) = v55;
    LOBYTE(v55) = 4;
    WPP_RECORDER_SF_DDqq(
      v56,
      v55,
      v52,
      36,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v60,
      v53,
      v61,
      v1);
  }
  *(_BYTE *)(v65 + 12) ^= 1u;
  _InterlockedOr(v58, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0, *(_QWORD *)(v1 + 152), v68, *(_DWORD *)(a1 + 192), v1 + 168);
  result = XilUsbDevice_WriteDoorbell(
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL),
             *(unsigned int *)(a1 + 64),
             *(_BYTE *)(a1 + 288) == 0);
  if ( v50 != 3 )
  {
    v57 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v57 + 37) )
      return (int *)ESM_AddEvent((PVOID)(v57 + 304));
    result = *(int **)(v57 + 144);
    if ( _InterlockedIncrement(result + 5) == result[2] )
      return (int *)ESM_AddEvent((PVOID)(v57 + 304));
  }
  return result;
}
