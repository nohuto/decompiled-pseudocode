/*
 * XREFs of PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C
 * Callers:
 *     PpmHeteroHgsUpdateContainmentConfiguration @ 0x14051704C (PpmHeteroHgsUpdateContainmentConfiguration.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x14025DE90 (KeGetTopologySiblingAffinityForProcessor.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline @ 0x14060D2B8 (Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmHeteroHgsCpuSupportedForContainment @ 0x14060D87C (PpmHeteroHgsCpuSupportedForContainment.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmHeteroHgsDetectContainmentPresence(struct _KAFFINITY_EX *a1, char a2)
{
  struct _KAFFINITY_EX *v3; // r13
  unsigned int v4; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  char v6; // bl
  unsigned __int16 Count; // r8
  struct _KAFFINITY_EX *p_PackageProcessorSet; // r9
  unsigned __int16 v9; // dx
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
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 Pool2; // rax
  __int64 v24; // rbx
  int v25; // esi
  struct _KAFFINITY_EX *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // r8
  struct _KAFFINITY_EX *v32; // r9
  unsigned __int16 v33; // dx
  __int64 v34; // rdx
  struct _KAFFINITY_EX *v35; // rdi
  __int64 v36; // r15
  char v37; // r13
  unsigned __int16 v38; // cx
  char v39; // bl
  unsigned __int8 v40; // si
  unsigned __int8 v41; // r14
  unsigned __int8 v42; // bl
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // al
  unsigned __int16 v45; // r8
  struct _KAFFINITY_EX *v46; // r10
  unsigned __int16 v47; // dx
  unsigned __int16 v48; // r9
  unsigned __int64 v49; // rcx
  int v50; // esi
  char v51; // bl
  unsigned int v52; // edi
  char v53; // cl
  char v54; // [rsp+28h] [rbp-E0h]
  unsigned int v55; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v56; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C8h]
  unsigned int v58; // [rsp+48h] [rbp-C0h]
  struct _KAFFINITY_EX *v59; // [rsp+58h] [rbp-B0h]
  struct _KAFFINITY_EX v60; // [rsp+68h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v61; // [rsp+178h] [rbp+70h] BYREF
  struct _KAFFINITY_EX v62; // [rsp+288h] [rbp+180h] BYREF

  v54 = a2;
  v57 = 0LL;
  v56 = 0LL;
  memset_0(&v60, 0, sizeof(v60));
  memset_0(&v61, 0, sizeof(v61));
  v55 = 0;
  memset_0(&v62, 0, sizeof(v62));
  v3 = 0LL;
  if ( !PpmHeteroHgsThreadEnabled )
    return;
  v4 = KeNumberProcessors_0;
  v58 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 0x800 )
    return;
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
    v9 = 0;
    if ( !Count )
    {
LABEL_14:
      while ( v9 < p_PackageProcessorSet->Count )
      {
        if ( p_PackageProcessorSet->Bitmap[v9] )
          goto LABEL_16;
        ++v9;
      }
      return;
    }
    while ( v60.Bitmap[v9] == CurrentPrcb->PackageProcessorSet.Bitmap[v9] )
    {
      if ( ++v9 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    *((_QWORD *)&v56 + 1) = v60.Bitmap[0];
    v10 = 0;
    *(_QWORD *)&v56 = &v60;
    v11 = -1;
    v12 = KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56);
    while ( !v12 )
    {
      v13 = v10;
      Prcb = KeGetPrcb(v55);
      v15 = v11;
      CurrentPrcb = (struct _KPRCB *)Prcb;
      v16 = *(_BYTE *)(Prcb + 35352);
      v10 = v16;
      if ( v13 > v16 )
        v10 = v13;
      if ( v11 >= v16 )
        v15 = *(_BYTE *)(Prcb + 35352);
      v11 = v15;
      v12 = KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56);
      v6 = 0;
    }
    if ( v10 != v11 || PpmHeteroWpsContainmentEnumOverride && v10 )
      v6 = 1;
    if ( v54 )
    {
      v17 = v60.Count;
      if ( a1->Count >= v60.Count )
      {
        v18 = v60.Count;
        v19 = a1;
        v17 = a1->Count;
      }
      else
      {
        v18 = a1->Count;
        v19 = &v60;
      }
      v20 = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          v21 = a1->Bitmap[v20];
          if ( (v21 & v60.Bitmap[v20]) != v21 )
            break;
          if ( ++v20 >= v18 )
            goto LABEL_34;
        }
LABEL_41:
        v6 = 1;
      }
      else
      {
LABEL_34:
        if ( v19 != &v60 )
        {
          while ( v20 < v17 )
          {
            if ( a1->Bitmap[v20] )
              goto LABEL_41;
            ++v20;
          }
        }
        v6 = 0;
      }
    }
    *((_QWORD *)&v56 + 1) = v60.Bitmap[0];
    *(_QWORD *)&v56 = &v60;
    LOWORD(v57) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) )
    {
      CurrentPrcb = (struct _KPRCB *)KeGetPrcb(v55);
      CurrentPrcb->PowerState.ContainmentGroupType = v6;
    }
    *(_QWORD *)&v62.Count = 2097153LL;
    memset_0(&v62.8, 0, sizeof(v62.8));
    if ( RtlSubtractAffinityEx(&CurrentPrcb->PackageProcessorSet, &v60, (__int64)&v62) )
    {
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
      *((_QWORD *)&v56 + 1) = v62.Bitmap[0];
      LOWORD(v57) = 0;
      *(_QWORD *)&v56 = &v62;
      v25 = 0;
      if ( (unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) )
        goto LABEL_73;
      v26 = v3;
      do
      {
        v27 = KeGetPrcb(v55);
        *(_QWORD *)&v61.Count = 2097153LL;
        v28 = v27;
        memset_0(&v61.8, 0, sizeof(v61.8));
        KeGetTopologySiblingAffinityForProcessor(v28, 5, &v61.Count);
        v29 = v26->Count;
        v30 = 0;
        if ( v26->Count )
        {
          while ( !v26->Bitmap[v30] )
          {
            if ( ++v30 >= v29 )
              goto LABEL_54;
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
          v33 = 0;
          if ( v31 )
          {
            while ( v26->Bitmap[v33] == v61.Bitmap[v33] )
            {
              if ( ++v33 >= v31 )
                goto LABEL_64;
            }
LABEL_72:
            v26 = &v3[++v25];
            RtlpCopyAffinityEx(v26, v26->Size, &v61);
          }
          else
          {
LABEL_64:
            while ( v33 < v32->Count )
            {
              if ( v32->Bitmap[v33] )
                goto LABEL_72;
              ++v33;
            }
          }
        }
        else
        {
LABEL_54:
          RtlpCopyAffinityEx(v26, v26->Size, &v61);
        }
        RtlSubtractAffinityEx(&v62, &v61, (__int64)&v62);
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) );
      v4 = v58;
      if ( !v25 || PpmHeteroWpsContainmentEnumOverride )
      {
LABEL_73:
        v35 = v3;
        v36 = (unsigned int)(v25 + 1);
        v37 = v54;
        do
        {
          v38 = 0;
          if ( v35->Count )
          {
            while ( !v35->Bitmap[v38] )
            {
              if ( ++v38 >= v35->Count )
                goto LABEL_108;
            }
            v39 = 0;
            *((_QWORD *)&v56 + 1) = v35->Bitmap[0];
            v40 = 0;
            LOWORD(v57) = 0;
            *(_QWORD *)&v56 = v35;
            v41 = -1;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) )
            {
              do
              {
                v42 = v40;
                v43 = *(_BYTE *)(KeGetPrcb(v55) + 35352);
                v44 = v41;
                v40 = v43;
                if ( v42 > v43 )
                  v40 = v42;
                if ( v41 >= v43 )
                  v44 = v43;
                v41 = v44;
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) );
              v37 = v54;
              v39 = 0;
            }
            if ( v40 != v41 || PpmHeteroWpsContainmentEnumOverride && v40 )
              v39 = 1;
            if ( v37 )
            {
              v45 = a1->Count;
              v46 = a1;
              v47 = 0;
              v48 = v35->Count;
              if ( a1->Count < v35->Count )
                v46 = v35;
              else
                v48 = a1->Count;
              if ( v45 >= v35->Count )
                v45 = v35->Count;
              if ( v45 )
              {
                while ( 1 )
                {
                  v49 = a1->Bitmap[v47];
                  if ( (v49 & v35->Bitmap[v47]) != v49 )
                    break;
                  if ( ++v47 >= v45 )
                    goto LABEL_97;
                }
LABEL_107:
                v39 = 1;
              }
              else
              {
LABEL_97:
                if ( v46 != v35 )
                {
                  while ( v47 < v48 )
                  {
                    if ( a1->Bitmap[v47] )
                      goto LABEL_107;
                    ++v47;
                  }
                }
                v39 = 0;
              }
            }
            *((_QWORD *)&v56 + 1) = v35->Bitmap[0];
            LOWORD(v57) = 0;
            *(_QWORD *)&v56 = v35;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v55, (unsigned __int16 **)&v56) )
              *(_BYTE *)(KeGetPrcb(v55) + 35448) = v39;
          }
LABEL_108:
          ++v35;
          --v36;
        }
        while ( v36 );
        v3 = v59;
        v4 = v58;
      }
      else if ( !(unsigned int)Feature_ExtendedWpsTables__private_IsEnabledDeviceUsageNoInline()
             || !PpmHeteroWpsDetectContainmentFromMask
             || !(unsigned __int8)guard_dispatch_icall_no_overrides((unsigned int)(v25 + 2), v34) )
      {
LABEL_119:
        ExFreePoolWithTag(v3, 0x704D5050u);
        return;
      }
    }
  }
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( v4 )
  {
    do
    {
      v53 = *(_BYTE *)(KeGetPrcb(v52) + 35448);
      if ( v53 != 2 && v53 != 3 && (v50 & (1 << v53)) != 1 << v53 )
      {
        ++v51;
        v50 |= 1 << v53;
      }
      ++v52;
    }
    while ( v52 < v4 );
    if ( v51 == 2 )
      PpmHeteroHgsContainmentState = PpmHeteroHgsContainmentState & 0xFFFFFFFC | 2;
  }
  if ( v3 )
    goto LABEL_119;
}
