/*
 * XREFs of RaidInitializePerfOpts @ 0x14005232C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     McTemplateK0qqdqqqq_EtwWriteTransfer @ 0x14005EE44 (McTemplateK0qqdqqqq_EtwWriteTransfer.c)
 *     RaidDmaGetAdapterInfo @ 0x1400722BC (RaidDmaGetAdapterInfo.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3)
{
  int v5; // ebp
  char v6; // r13
  char v7; // r10
  char v8; // r9
  char v9; // r11
  unsigned int v10; // esi
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // r15
  unsigned int v14; // edx
  int v15; // r14d
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // r8
  _DWORD *v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  char v22; // dl
  char v23; // al
  unsigned int v24; // eax
  unsigned int v25; // ecx
  _WORD *v26; // rcx
  _QWORD *v27; // r13
  unsigned int v28; // r14d
  int v29; // r8d
  unsigned int v30; // r15d
  unsigned int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // rdx
  unsigned __int16 epi16; // r11
  unsigned __int64 v35; // rcx
  int i; // r8d
  __int64 v37; // r9
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  char v44; // [rsp+50h] [rbp-A8h]
  char v45; // [rsp+51h] [rbp-A7h]
  char v46; // [rsp+52h] [rbp-A6h]
  char v47; // [rsp+53h] [rbp-A5h]
  _QWORD *v48; // [rsp+58h] [rbp-A0h]
  int v49; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v50[148]; // [rsp+64h] [rbp-94h] BYREF
  char v52; // [rsp+110h] [rbp+18h]
  char v53; // [rsp+118h] [rbp+20h]

  v46 = 0;
  v52 = 0;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v53 = 0;
  v44 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
    }
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_13;
    }
    v12 = 23LL;
    goto LABEL_12;
  }
  v13 = a3 + 1;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      1,
      *a3,
      *v13,
      a3[2],
      a3[3],
      a3[4],
      a3[5],
      a3[6]);
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v14 = *a3;
  v15 = 3;
  v16 = a3 + 1;
  if ( *a3 && *v13 >= 0xCu )
  {
    v6 = 1;
    v16 = a3 + 1;
  }
  v17 = a3 + 1;
  if ( v14 >= 2 && *v13 >= 0x18u )
  {
    v7 = 1;
    v46 = 1;
    v15 = 7;
    v17 = v16;
  }
  v18 = v17;
  if ( v14 >= 3 && *v17 >= 0x28u )
  {
    v8 = 1;
    v52 = 1;
    v15 |= 0x18u;
    v18 = a3 + 1;
  }
  v19 = v17;
  if ( v14 >= 4 && *v17 >= 0x28u )
  {
    v47 = 1;
    v15 |= 0x20u;
    v19 = v18;
  }
  v20 = v19;
  if ( v14 >= 5 && *v19 >= 0x28u )
  {
    if ( !KeGetCurrentIrql() )
    {
      memset_0(v50, 0, 0x54uLL);
      v49 = 1;
      if ( *(_BYTE *)(a1 + 4434) )
      {
        if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 896) )
          RaidInitializeDma(v21, *(_QWORD *)(a1 + 32), a1 + 384);
        if ( (int)RaidDmaGetAdapterInfo(a1 + 896, &v49) >= 0 && (v50[12] & 2) != 0 )
        {
          *(_BYTE *)(a1 + 4435) |= 0x20u;
          v15 |= 0x40u;
        }
      }
    }
    v7 = v46;
    v20 = a3 + 1;
    v8 = v52;
    v9 = 1;
    v53 = 1;
  }
  if ( *a3 < 6 || *v20 < 0x28u )
  {
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v15 |= 0x80u;
    v44 = 1;
  }
  if ( *a3 < 7 || *v20 < 0x28u )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    v15 |= 0x100u;
    v45 = 1;
  }
  if ( !v6 && !v7 && !v8 && !v47 && !v9 && !v22 && !v23 )
  {
    if ( !a2 )
    {
LABEL_6:
      v10 = -1056964602;
      goto LABEL_117;
    }
    *a3 = 1;
    a3[1] = 12;
    goto LABEL_56;
  }
  if ( a2 )
  {
LABEL_56:
    a3[2] = v15;
    v5 = v15;
    goto LABEL_117;
  }
  v24 = a3[2];
  if ( (~v15 & v24) != 0 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_13;
    }
    v12 = 24LL;
LABEL_12:
    WPP_SF_(v11->AttachedDevice, v12, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
LABEL_13:
    v10 = -1056964607;
    goto LABEL_117;
  }
  if ( (v24 & 2) != 0 )
  {
    v5 = 2;
    *(_DWORD *)(a1 + 4728) = -a3[3];
  }
  v25 = a3[2];
  if ( (v25 & 1) == 0 )
  {
    if ( v7 && (v25 & 4) != 0 || (v25 & 0x20) != 0 )
      goto LABEL_13;
LABEL_96:
    if ( v52 && (v25 & 8) != 0 )
    {
      v5 |= 8u;
      a3[6] = *(_DWORD *)(a1 + 4720);
    }
    else
    {
      v38 = v25;
      if ( !v52 )
      {
LABEL_103:
        v39 = v38;
        if ( v47 && (v38 & 0x20) != 0 )
        {
          v5 |= 0x20u;
          *(_BYTE *)(a1 + 4435) |= 2u;
          v39 = a3[2];
        }
        v40 = v39;
        if ( v9 && (v39 & 0x40) != 0 )
        {
          v5 |= 0x40u;
          *(_BYTE *)(a1 + 4435) |= 4u;
          v40 = a3[2];
        }
        v41 = v40;
        if ( v44 && (v40 & 0x80u) != 0 )
        {
          v5 |= 0x80u;
          *(_BYTE *)(a1 + 4435) |= 8u;
          v41 = a3[2];
        }
        v42 = v41;
        if ( v45 && (v41 & 0x100) != 0 )
        {
          *(_BYTE *)(a1 + 4435) |= 0x10u;
          v42 = a3[2];
          v5 |= 0x100u;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          McTemplateK0qqdqqqq_EtwWriteTransfer(
            v42,
            (unsigned int)&EventAdapterFinalPerfConfigData,
            1,
            *a3,
            a3[1],
            v42,
            a3[3],
            a3[4],
            a3[5],
            a3[6]);
        goto LABEL_117;
      }
    }
    v38 = v25;
    if ( (v25 & 0x10) != 0 )
    {
      if ( (v5 & 1) == 0 )
        goto LABEL_13;
      v5 |= 0x10u;
      *(_BYTE *)(a1 + 4435) |= 1u;
      v38 = a3[2];
    }
    goto LABEL_103;
  }
  v26 = (_WORD *)(a1 + 4724);
  v5 |= 1u;
  *(_WORD *)(a1 + 4724) |= 1u;
  if ( *(_BYTE *)(a1 + 4433) != 1
    || (v48 = (_QWORD *)(a1 + 4744), !*(_QWORD *)(a1 + 4744))
    || (v27 = (_QWORD *)(a1 + 4424), !*(_QWORD *)(a1 + 4424)) )
  {
LABEL_87:
    v25 = a3[2];
    goto LABEL_96;
  }
  v28 = 0;
  v29 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 4416) + 4LL);
  v30 = v29 - 1;
  if ( !v7 || (v48 = (_QWORD *)(a1 + 4744), (a3[2] & 4) == 0) )
  {
LABEL_73:
    *v26 = (4 * v29) | 3;
    v32 = v30 + 1;
    *(_WORD *)(a1 + 4726) = KeQueryActiveGroupCount();
    if ( v28 < v32 )
    {
      v33 = 16LL * v28;
      do
      {
        epi16 = _mm_extract_epi16(*(__m128i *)(*v27 + v33), 4);
        v35 = *(_QWORD *)(*v27 + v33);
        if ( epi16 != 0xFFFF )
        {
          if ( v52 && (a3[2] & 0xC) == 0xC )
          {
            v5 |= 8u;
            *(_WORD *)(v33 + *((_QWORD *)a3 + 4) + 8) = epi16;
            *(_QWORD *)(v33 + *((_QWORD *)a3 + 4)) = v35;
          }
          if ( v28 < 0xFF )
          {
            for ( i = 0; v35; v35 >>= 1 )
            {
              if ( (v35 & 1) != 0 )
              {
                v37 = i + (epi16 << 6);
                if ( *(_BYTE *)(v37 + *v48) == 0xFF )
                  *(_BYTE *)(v37 + *v48) = v28;
              }
              ++i;
            }
          }
        }
        ++v28;
        v33 += 16LL;
      }
      while ( v28 < v32 );
    }
    v9 = v53;
    goto LABEL_87;
  }
  v31 = a3[5];
  v28 = a3[4];
  if ( v28 <= v31 && v31 <= v30 )
  {
    v30 = a3[5];
    v26 = (_WORD *)(a1 + 4724);
    v27 = (_QWORD *)(a1 + 4424);
    v5 |= 4u;
    LOWORD(v29) = v31 - v28 + 1;
    v48 = (_QWORD *)(a1 + 4744);
    goto LABEL_73;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
  }
  v10 = -1056964607;
LABEL_117:
  if ( v5 != a3[2] )
  {
    if ( (v5 & 2) != 0 )
      *(_DWORD *)(a1 + 4728) = 0;
    if ( (v5 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 4435) &= ~1u;
      *(_WORD *)(a1 + 4724) = 0;
    }
    if ( (v5 & 0x20) != 0 )
      *(_BYTE *)(a1 + 4435) &= ~2u;
  }
  return v10;
}
