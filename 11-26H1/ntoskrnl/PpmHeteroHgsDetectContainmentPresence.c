/*
 * XREFs of PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14025D3AC (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14045E970 (KeGetTopologySiblingAffinityForProcessor.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x14060AC14 (PpmHeteroHgsCpuSupportedForContainment.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmHeteroHgsDetectContainmentPresence(struct _KAFFINITY_EX *a1, char a2)
{
  struct _KAFFINITY_EX *v2; // r12
  struct _KAFFINITY_EX *v3; // r13
  unsigned int v4; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // bl
  unsigned __int16 Count; // r9
  struct _KAFFINITY_EX *p_PackageProcessorSet; // r8
  unsigned __int16 i; // dx
  unsigned __int8 v10; // di
  unsigned __int8 v11; // si
  int v12; // eax
  unsigned __int8 v13; // bl
  __int64 Prcb; // rax
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // dl
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r9
  struct _KAFFINITY_EX *v19; // r10
  unsigned __int16 j; // dx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 Pool2; // rax
  __int64 v24; // rbx
  int v25; // esi
  struct _KAFFINITY_EX *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int16 v29; // dx
  unsigned __int16 k; // cx
  unsigned __int16 v31; // r8
  struct _KAFFINITY_EX *v32; // r9
  unsigned __int16 m; // dx
  struct _KAFFINITY_EX *v34; // rdi
  __int64 v35; // r15
  char v36; // r13
  unsigned __int16 n; // cx
  char v38; // bl
  unsigned __int8 v39; // si
  unsigned __int8 v40; // r14
  unsigned __int8 v41; // bl
  unsigned __int8 v42; // cl
  unsigned __int8 v43; // al
  unsigned __int16 v44; // r8
  struct _KAFFINITY_EX *v45; // r9
  unsigned __int16 v46; // dx
  unsigned __int16 v47; // r10
  unsigned __int64 v48; // rcx
  int v49; // esi
  char v50; // bl
  unsigned int v51; // edi
  char v52; // cl
  char v53; // [rsp+28h] [rbp-E0h]
  unsigned int v54; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v55; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-C8h]
  __int64 v57; // [rsp+48h] [rbp-C0h]
  struct _KAFFINITY_EX *v58; // [rsp+50h] [rbp-B8h]
  struct _KAFFINITY_EX *v59; // [rsp+58h] [rbp-B0h]
  struct _KAFFINITY_EX v60; // [rsp+68h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v61; // [rsp+178h] [rbp+70h] BYREF
  struct _KAFFINITY_EX v62; // [rsp+288h] [rbp+180h] BYREF

  v53 = a2;
  v2 = a1;
  v58 = a1;
  v56 = 0LL;
  v55 = 0LL;
  memset_0(&v60, 0, sizeof(v60));
  memset_0(&v61, 0, sizeof(v61));
  v54 = 0;
  memset_0(&v62, 0, sizeof(v62));
  v3 = 0LL;
  if ( PpmHeteroHgsThreadEnabled )
  {
    v4 = KeNumberProcessors_0;
    LODWORD(v57) = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
    {
      if ( (PpmHeteroSimulationStateConfig & 4) == 0 )
      {
        if ( !PpmHeteroHgsCpuSupportedForContainment() )
          return;
        CurrentPrcb = KeGetCurrentPrcb();
        *(_QWORD *)&v60.Count = 2097153LL;
        v6 = 0;
        memset_0(&v60.8, 0, sizeof(v60.8));
        KeGetTopologySiblingAffinityForProcessor((__int64)CurrentPrcb, 5, &v60.Count);
        Count = v60.Count;
        if ( v60.Count >= CurrentPrcb->PackageProcessorSet.Count )
        {
          p_PackageProcessorSet = &v60;
          Count = CurrentPrcb->PackageProcessorSet.Count;
        }
        else
        {
          p_PackageProcessorSet = &CurrentPrcb->PackageProcessorSet;
        }
        for ( i = 0; ; ++i )
        {
          if ( i >= Count )
          {
            while ( i < p_PackageProcessorSet->Count )
            {
              if ( p_PackageProcessorSet->Bitmap[i] )
                goto LABEL_15;
              ++i;
            }
            return;
          }
          if ( v60.Bitmap[i] != CurrentPrcb->PackageProcessorSet.Bitmap[i] )
            break;
        }
LABEL_15:
        *((_QWORD *)&v55 + 1) = v60.Bitmap[0];
        v10 = 0;
        *(_QWORD *)&v55 = &v60;
        v11 = -1;
        v12 = KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55);
        while ( !v12 )
        {
          v13 = v10;
          Prcb = KeGetPrcb(v54);
          v15 = v11;
          CurrentPrcb = (struct _KPRCB *)Prcb;
          v16 = *(_BYTE *)(Prcb + 35352);
          v10 = v16;
          if ( v13 > v16 )
            v10 = v13;
          if ( v11 >= v16 )
            v15 = *(_BYTE *)(Prcb + 35352);
          v11 = v15;
          v12 = KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55);
          v6 = 0;
        }
        if ( v10 != v11 || PpmHeteroWpsContainmentEnumOverride && v10 )
          v6 = 1;
        if ( v53 )
        {
          v17 = v60.Count;
          if ( v2->Count >= v60.Count )
          {
            v18 = v60.Count;
            v19 = v2;
            v17 = v2->Count;
          }
          else
          {
            v18 = v2->Count;
            v19 = &v60;
          }
          for ( j = 0; j < v18; ++j )
          {
            v21 = v2->Bitmap[j];
            if ( (v21 & v60.Bitmap[j]) != v21 )
            {
LABEL_38:
              v6 = 1;
              goto LABEL_40;
            }
          }
          if ( v19 != &v60 )
          {
            while ( j < v17 )
            {
              if ( v2->Bitmap[j] )
                goto LABEL_38;
              ++j;
            }
          }
          v6 = 0;
        }
LABEL_40:
        *((_QWORD *)&v55 + 1) = v60.Bitmap[0];
        *(_QWORD *)&v55 = &v60;
        LOWORD(v56) = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) )
        {
          CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v54);
          CurrentPrcb->PowerState.ContainmentGroupType = v6;
        }
        *(_QWORD *)&v62.Count = 2097153LL;
        memset_0(&v62.8, 0, sizeof(v62.8));
        if ( !RtlSubtractAffinityEx(&CurrentPrcb->PackageProcessorSet, &v60, (__int64)&v62) )
          goto LABEL_105;
        v22 = (unsigned int)RtlCountSetBitsAffinityEx(&v62.Count);
        Pool2 = ExAllocatePool2(0x40uLL);
        v59 = (struct _KAFFINITY_EX *)Pool2;
        v3 = (struct _KAFFINITY_EX *)Pool2;
        if ( !Pool2 )
          return;
        if ( (_DWORD)v22 )
        {
          v24 = Pool2 + 4;
          do
          {
            *(_QWORD *)(v24 - 4) = 2097153LL;
            memset_0((void *)(v24 + 4), 0, 0x100uLL);
            v24 += 264LL;
            --v22;
          }
          while ( v22 );
        }
        *((_QWORD *)&v55 + 1) = v62.Bitmap[0];
        LOWORD(v56) = 0;
        *(_QWORD *)&v55 = &v62;
        v25 = 0;
        if ( (unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) )
          goto LABEL_69;
        v26 = v3;
        do
        {
          v27 = KeGetPrcb(v54);
          *(_QWORD *)&v61.Count = 2097153LL;
          v28 = v27;
          memset_0(&v61.8, 0, sizeof(v61.8));
          KeGetTopologySiblingAffinityForProcessor(v28, 5, &v61.Count);
          v29 = v26->Count;
          for ( k = 0; ; ++k )
          {
            if ( k >= v29 )
            {
LABEL_65:
              RtlpCopyAffinityEx(v26, v26->Size, &v61);
              goto LABEL_66;
            }
            if ( v26->Bitmap[k] )
              break;
          }
          v31 = v61.Count;
          if ( v29 >= v61.Count )
          {
            v32 = v26;
          }
          else
          {
            v32 = &v61;
            v31 = v26->Count;
          }
          for ( m = 0; m < v31; ++m )
          {
            if ( v26->Bitmap[m] != v61.Bitmap[m] )
            {
LABEL_64:
              v26 = &v3[++v25];
              goto LABEL_65;
            }
          }
          while ( m < v32->Count )
          {
            if ( v32->Bitmap[m] )
              goto LABEL_64;
            ++m;
          }
LABEL_66:
          RtlSubtractAffinityEx(&v62, &v61, (__int64)&v62);
        }
        while ( !(unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) );
        v2 = v58;
        if ( !v25 || PpmHeteroWpsContainmentEnumOverride )
        {
LABEL_69:
          v34 = v3;
          v35 = (unsigned int)(v25 + 1);
          v36 = v53;
          do
          {
            for ( n = 0; n < v34->Count; ++n )
            {
              if ( v34->Bitmap[n] )
              {
                v38 = 0;
                *((_QWORD *)&v55 + 1) = v34->Bitmap[0];
                v39 = 0;
                LOWORD(v56) = 0;
                *(_QWORD *)&v55 = v34;
                v40 = -1;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) )
                {
                  do
                  {
                    v41 = v39;
                    v42 = *(_BYTE *)(KeGetPrcb(v54) + 35352);
                    v43 = v40;
                    v39 = v42;
                    if ( v41 > v42 )
                      v39 = v41;
                    if ( v40 >= v42 )
                      v43 = v42;
                    v40 = v43;
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) );
                  v36 = v53;
                  v38 = 0;
                }
                if ( v39 != v40 || PpmHeteroWpsContainmentEnumOverride && v39 )
                  v38 = 1;
                if ( v36 )
                {
                  v44 = v2->Count;
                  v45 = v2;
                  v46 = 0;
                  v47 = v34->Count;
                  if ( v2->Count < v34->Count )
                    v45 = v34;
                  else
                    v47 = v2->Count;
                  if ( v44 >= v34->Count )
                    v44 = v34->Count;
                  while ( v46 < v44 )
                  {
                    v48 = v2->Bitmap[v46];
                    if ( (v48 & v34->Bitmap[v46]) != v48 )
                    {
LABEL_98:
                      v38 = 1;
                      goto LABEL_100;
                    }
                    ++v46;
                  }
                  if ( v45 != v34 )
                  {
                    while ( v46 < v47 )
                    {
                      if ( v2->Bitmap[v46] )
                        goto LABEL_98;
                      ++v46;
                    }
                  }
                  v38 = 0;
                }
LABEL_100:
                *((_QWORD *)&v55 + 1) = v34->Bitmap[0];
                LOWORD(v56) = 0;
                *(_QWORD *)&v55 = v34;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v54, (unsigned __int16 **)&v55) )
                  *(_BYTE *)(KeGetPrcb(v54) + 35448) = v38;
                break;
              }
            }
            ++v34;
            --v35;
          }
          while ( v35 );
          v3 = v59;
          v4 = v57;
          goto LABEL_105;
        }
        goto LABEL_114;
      }
LABEL_105:
      v49 = 0;
      v50 = 0;
      v51 = 0;
      if ( v4 )
      {
        do
        {
          v52 = *(_BYTE *)(KeGetPrcb(v51) + 35448);
          if ( v52 != 2 && v52 != 3 && (v49 & (1 << v52)) != 1 << v52 )
          {
            ++v50;
            v49 |= 1 << v52;
          }
          ++v51;
        }
        while ( v51 < v4 );
        if ( v50 == 2 )
          PpmHeteroHgsContainmentState = PpmHeteroHgsContainmentState & 0xFFFFFFFC | 2;
      }
      if ( v3 )
LABEL_114:
        ExFreePoolWithTag(v3, 0x704D5050u);
    }
  }
}
