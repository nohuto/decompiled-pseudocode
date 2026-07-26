/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400CF53C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140146FA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1400523A0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400D0054 (ndisIfCreateCompartmentBlock.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase2(void)
{
  void *v0; // rdi
  int v1; // edx
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 Pool2; // rax
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int8 v12; // al
  unsigned __int16 v13; // cx
  __int128 v14; // xmm0
  KIRQL v15; // si
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 i; // [rsp+40h] [rbp-C8h]
  struct _NDIS_IF_COMPARTMENT_BLOCK *v19; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v20[12]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[14]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v22[206]; // [rsp+128h] [rbp+20h] BYREF

  memset(v20, 0, 0x48uLL);
  v19 = 0LL;
  v0 = 0LL;
  memset(v22, 0, 0x668uLL);
  LODWORD(v17) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      53,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids);
  }
  memset(v21, 0, sizeof(v21));
  v21[4] = 0x100000000LL;
  v21[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v21[3]) = 7;
  v21[5] = 0LL;
  LODWORD(v21[6]) = 4;
  v21[7] = 0LL;
  LODWORD(v21[8]) = 1640;
  LODWORD(v21[13]) = 0;
  v2 = NsiEnumerateObjectsAllParametersEx(v21);
  if ( v2 >= 0 )
  {
    v3 = v21[13];
    if ( LODWORD(v21[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v3 = v21[13];
          v0 = 0LL;
        }
        v4 = (4 * v3 + 7) & 0xFFFFFFF8;
        if ( 4 * (unsigned __int64)v3 > 0xFFFFFFFF || v4 + 1640 * v3 < v4 )
        {
          v2 = -1073741670;
          goto LABEL_32;
        }
        v5 = v4;
        Pool2 = ExAllocatePool2(64LL, v4 + 1640LL * v3, 1718174798LL);
        v0 = (void *)Pool2;
        if ( !Pool2 )
        {
          v2 = -1073741670;
          goto LABEL_34;
        }
        v21[5] = Pool2;
        LODWORD(v21[6]) = 4;
        v21[7] = v5 + Pool2;
        LODWORD(v21[8]) = 1640;
        v7 = NsiEnumerateObjectsAllParametersEx(v21);
        if ( v7 != 261 )
          break;
        v3 = v21[13];
      }
      v2 = v7;
      if ( v7 < 0 )
        goto LABEL_33;
      v8 = 0;
      v9 = v21[7];
      v10 = v21[5];
      for ( i = v21[7]; v8 < LODWORD(v21[13]); ++v8 )
      {
        v11 = v9 + 1640LL * v8;
        if ( *(_BYTE *)v11 == 0xAD )
        {
          v12 = *(_BYTE *)(v11 + 1);
          if ( v12 )
          {
            v13 = *(_WORD *)(v11 + 2);
            if ( v13 >= 0x448u )
            {
              if ( v12 < 3u || v13 < 0x664u )
              {
                *(_DWORD *)v11 = 107479981;
                memset((void *)(v11 + 1096), 0, 0x204uLL);
                *(_QWORD *)(v11 + 1612) = 1LL;
                if ( *(_DWORD *)(v10 + 4LL * v8) == 1 )
                {
                  *(_WORD *)(v11 + 1096) = 38;
                  *(_OWORD *)(v11 + 1098) = *(_OWORD *)L"Default Compartment";
                  *(_OWORD *)(v11 + 1114) = *(_OWORD *)L"Compartment";
                  *(_DWORD *)(v11 + 1130) = *(_DWORD *)L"ent";
                  *(_WORD *)(v11 + 1134) = aDefaultCompart[18];
                  v14 = *(_OWORD *)(v11 + 1080);
                  *(_DWORD *)(v11 + 1616) = 4;
                  *(_OWORD *)(v11 + 1620) = v14;
                }
                v20[5] = v10 + 4LL * v8;
                v20[2] = &NPI_MS_NDIS_MODULEID;
                v20[1] = 0LL;
                v20[3] = 7LL;
                v20[6] = 4LL;
                v20[8] = 1640LL;
                v20[0] = 0LL;
                v20[4] = 0LL;
                v20[7] = v11;
                NsiSetAllParametersEx(v20);
              }
              v2 = ndisIfCreateCompartmentBlock(*(unsigned int *)(v10 + 4LL * v8), 0LL, v11, &v19);
              if ( v2 >= 0 )
              {
                v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
                if ( dword_14011CE6C <= (unsigned int)(*(_DWORD *)(v10 + 4LL * v8) + 1) )
                  dword_14011CE6C = *(_DWORD *)(v10 + 4LL * v8) + 1;
                COMPARTMENTBLOCK_DECREMENT_REF(v19);
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v15);
              }
            }
            v9 = i;
          }
        }
      }
LABEL_32:
      if ( !v0 )
        goto LABEL_34;
LABEL_33:
      ExFreePoolWithTag(v0, 0);
    }
    else
    {
      LODWORD(v20[3]) = 7;
      v20[5] = &v17;
      *(_DWORD *)((char *)&v22[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v22[135] = xmmword_1400FFE88;
      HIWORD(v22[141]) = aDefaultCompart[18];
      v20[7] = v22;
      v20[2] = &NPI_MS_NDIS_MODULEID;
      v20[4] = 0x100000002LL;
      LODWORD(v20[6]) = 4;
      LODWORD(v22[0]) = 107479981;
      LOWORD(v22[137]) = 38;
      *(_OWORD *)((char *)&v22[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v22[201]) = 1;
      *(_OWORD *)((char *)&v22[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v22[202]) = 4;
      LODWORD(v20[8]) = 1640;
      v2 = NsiSetAllParametersEx(v20);
    }
  }
LABEL_34:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x36u,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v2,
      v17);
  return (unsigned int)v2;
}
