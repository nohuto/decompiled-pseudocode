/*
 * XREFs of KiPrepareUpdateCoresHeteroMask @ 0x1407BC310
 * Callers:
 *     KiConfigureHeteroMultiCoreProcessors @ 0x140B3ACB0 (KiConfigureHeteroMultiCoreProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiPrepareUpdateCoresHeteroMask(
        char a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        struct _KAFFINITY_EX *a8,
        struct _KAFFINITY_EX *a9,
        struct _KAFFINITY_EX *a10,
        unsigned __int16 *a11,
        struct _KAFFINITY_EX *a12,
        struct _KAFFINITY_EX *a13)
{
  __int64 v13; // rsi
  int v14; // r8d
  unsigned __int8 v15; // r12
  unsigned __int8 v16; // bl
  unsigned __int8 v17; // di
  unsigned __int8 v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // esi
  __int64 v23; // rax
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // al
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  unsigned __int16 v31; // cx
  struct _KAFFINITY_EX *v32; // r15
  int v33; // eax
  int v34; // r14d
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // al
  struct _KAFFINITY_EX *v37; // r15
  unsigned int v38; // edi
  __int64 v39; // r14
  unsigned __int8 v40; // cl
  unsigned __int8 v41; // al
  bool v42; // cf
  unsigned __int8 v43; // cl
  struct _KAFFINITY_EX *v44; // r14
  struct _KAFFINITY_EX *v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rdi
  struct _KAFFINITY_EX *v48; // r8
  struct _KAFFINITY_EX *v49; // rcx
  struct _KAFFINITY_EX *v50; // rcx
  struct _KAFFINITY_EX *v51; // r8
  int v52; // eax
  int v53; // ebx
  unsigned __int8 v54; // cl
  unsigned __int8 v55; // al
  struct _KAFFINITY_EX *v56; // rsi
  unsigned int v57; // r14d
  __int64 v58; // rbx
  struct _KAFFINITY_EX *v59; // r8
  struct _KAFFINITY_EX *v60; // rcx
  struct _KAFFINITY_EX *v61; // rcx
  struct _KAFFINITY_EX *v62; // rcx
  int v64; // [rsp+24h] [rbp-DCh]
  __int64 v65; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v66; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-C0h]
  int v68; // [rsp+48h] [rbp-B8h]
  int v69; // [rsp+4Ch] [rbp-B4h]
  struct _KAFFINITY_EX *v70; // [rsp+50h] [rbp-B0h]
  struct _KAFFINITY_EX *v71; // [rsp+58h] [rbp-A8h]
  struct _KAFFINITY_EX *v72; // [rsp+60h] [rbp-A0h]
  struct _KAFFINITY_EX *v73; // [rsp+68h] [rbp-98h]
  struct _KAFFINITY_EX *v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX *v76; // [rsp+80h] [rbp-80h]
  struct _KAFFINITY_EX v77; // [rsp+90h] [rbp-70h] BYREF

  v13 = a2;
  v70 = a9;
  v71 = a8;
  v74 = a10;
  v72 = (struct _KAFFINITY_EX *)a11;
  v73 = a12;
  v76 = a13;
  v69 = a3;
  v75 = a2;
  v67 = 0LL;
  v68 = a4;
  v66 = 0LL;
  memset_0(&v77.8, 0, sizeof(v77.8));
  *(_QWORD *)&v77.Count = 2097153LL;
  memset_0(&v77.8, 0, sizeof(v77.8));
  v14 = *(_DWORD *)(a6 + 4);
  v15 = -1;
  v64 = v14;
  v16 = 0;
  LODWORD(v65) = 0;
  v17 = 0;
  v18 = -1;
  v19 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = a5 + v21 * v14;
      v65 = v23;
      if ( a1 )
      {
        if ( *(_BYTE *)(a6 + 4 * v23 + 51) )
          goto LABEL_21;
      }
      else
      {
        if ( *(_BYTE *)(a6 + 4 * v23 + 50) )
          goto LABEL_21;
        v22 = v20;
      }
      KeAddProcessorAffinityEx(&v77.Count, v19);
      v24 = *(_BYTE *)(v22 + *(_QWORD *)(a6 + 16));
      v25 = v69 + 2LL * v68;
      if ( v24 >= *((_BYTE *)&stru_140FC11F0.StackBase + v25) && v24 <= *((_BYTE *)&stru_140FC11F0.CycleTime + v25) )
      {
        if ( a1 )
        {
          KeAddProcessorAffinityEx(&v70->Count, v19);
          v14 = v64;
          v26 = *(_BYTE *)(a6 + 4 * v65 + 49);
          v27 = v18;
          if ( v18 >= v26 )
            v27 = *(_BYTE *)(a6 + 4 * v65 + 49);
          v18 = v27;
          if ( v17 <= v26 )
            v17 = *(_BYTE *)(a6 + 4 * v65 + 49);
          goto LABEL_21;
        }
        KeAddProcessorAffinityEx(&v71->Count, v19);
        v28 = *(_BYTE *)(a6 + 4 * v65 + 48);
        v29 = v15;
        if ( v15 >= v28 )
          v29 = *(_BYTE *)(a6 + 4 * v65 + 48);
        v15 = v29;
        v30 = v16;
        if ( v16 <= v28 )
          v30 = *(_BYTE *)(a6 + 4 * v65 + 48);
        v16 = v30;
      }
      v14 = v64;
LABEL_21:
      v20 = ++v19;
      v22 = v19;
      v21 = v19;
      if ( v19 >= (unsigned int)KeNumberProcessors_0 )
      {
        v13 = v75;
        LODWORD(v65) = v19;
        break;
      }
    }
  }
  v31 = 0;
  if ( a1 )
  {
    v44 = v70;
    while ( v31 < v70->Count )
    {
      if ( v70->Bitmap[v31] )
      {
        v53 = v64;
        goto LABEL_73;
      }
      ++v31;
    }
    RtlpCopyAffinityEx(v70, v70->Size, &v77);
    *((_QWORD *)&v66 + 1) = v77.Bitmap[0];
    *(_QWORD *)&v66 = &v77;
    v52 = KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66);
    v53 = v64;
    while ( !v52 )
    {
      v54 = v17;
      v17 = *(_BYTE *)(a6 + 4LL * (a5 + v64 * (_DWORD)v65) + 49);
      v55 = v18;
      if ( v18 >= v17 )
        v55 = *(_BYTE *)(a6 + 4LL * (a5 + v64 * (_DWORD)v65) + 49);
      v18 = v55;
      if ( v54 > v17 )
        v17 = v54;
      v52 = KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66);
    }
LABEL_73:
    *((_QWORD *)&v66 + 1) = v44->Bitmap[0];
    LOWORD(v67) = 0;
    *(_QWORD *)&v66 = v44;
    if ( (unsigned int)KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66) )
    {
LABEL_52:
      v45 = v73;
    }
    else
    {
      v56 = v74;
      v45 = v73;
      do
      {
        v57 = v65;
        v58 = 4LL * (a5 + v53 * (_DWORD)v65);
        if ( v18 == v17 || *(_BYTE *)(v58 + a6 + 49) > v18 )
          KeAddProcessorAffinityEx(&v45->Count, v65);
        if ( *(_BYTE *)(v58 + a6 + 49) == v17 )
          KeAddProcessorAffinityEx(&v76->Count, v57);
        if ( !a7 && *(_BYTE *)(v58 + a6 + 49) == v18 )
        {
          KeAddProcessorAffinityEx(&v56->Count, v57);
          KeAddProcessorAffinityEx(&v72->Count, v57);
        }
        v53 = v64;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66) );
      v13 = v75;
      v44 = v70;
    }
    v32 = v71;
  }
  else
  {
    v32 = v71;
    while ( v31 < v71->Count )
    {
      if ( v71->Bitmap[v31] )
      {
        v34 = v64;
        goto LABEL_37;
      }
      ++v31;
    }
    RtlpCopyAffinityEx(v71, v71->Size, &v77);
    *((_QWORD *)&v66 + 1) = v77.Bitmap[0];
    *(_QWORD *)&v66 = &v77;
    v33 = KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66);
    v34 = v64;
    while ( !v33 )
    {
      v35 = v16;
      v16 = *(_BYTE *)(a6 + 4LL * (a5 + v64 * (_DWORD)v65) + 48);
      v36 = v15;
      if ( v15 >= v16 )
        v36 = *(_BYTE *)(a6 + 4LL * (a5 + v64 * (_DWORD)v65) + 48);
      v15 = v36;
      if ( v35 > v16 )
        v16 = v35;
      v33 = KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66);
    }
LABEL_37:
    *((_QWORD *)&v66 + 1) = v32->Bitmap[0];
    LOWORD(v67) = 0;
    *(_QWORD *)&v66 = v32;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66) )
    {
      v37 = v74;
      while ( 1 )
      {
        v38 = v65;
        v39 = a5 + (_DWORD)v65 * v34;
        if ( a7 )
        {
          v40 = v15 + 1;
          if ( (unsigned int)v15 + 1 <= *(unsigned __int8 *)(*(_QWORD *)(a6 + 24) + 2LL * a5) )
            v40 = *(_BYTE *)(*(_QWORD *)(a6 + 24) + 2LL * a5);
          v41 = v40;
          v42 = v40 < v16;
          v43 = v16;
          if ( v42 )
            v43 = v41;
          if ( v15 == v16 || *(_BYTE *)(a6 + 4 * v39 + 48) >= v43 )
            KeAddProcessorAffinityEx(&v37->Count, v65);
          if ( *(_BYTE *)(a6 + 4 * v39 + 48) != v16 )
            goto LABEL_50;
        }
        else
        {
          KeAddProcessorAffinityEx(&v37->Count, v65);
        }
        KeAddProcessorAffinityEx(&v72->Count, v38);
LABEL_50:
        v34 = v64;
        if ( (unsigned int)KeEnumerateNextProcessor(&v65, (unsigned __int16 **)&v66) )
        {
          v13 = v75;
          v44 = v70;
          goto LABEL_52;
        }
      }
    }
    v44 = v70;
    v45 = v73;
  }
  v46 = v68;
  v47 = v69;
  switch ( KiDynamicHeteroCpuPolicy[2 * v68 + v69] )
  {
    case 1:
      v59 = v45;
      goto LABEL_89;
    case 2:
      v59 = v44;
LABEL_89:
      v60 = *(struct _KAFFINITY_EX **)(v13 + 8 * (v69 + 2LL * v68) + 48);
      RtlpCopyAffinityEx(v60, v60->Size, v59);
      v61 = *(struct _KAFFINITY_EX **)(v13 + 8 * (v47 + 2 * v46) + 160);
      RtlpCopyAffinityEx(v61, v61->Size, v45);
      v51 = v76;
      goto LABEL_90;
    case 3:
      v48 = v74;
      break;
    case 4:
      v48 = v32;
      break;
    default:
      return;
  }
  v49 = *(struct _KAFFINITY_EX **)(v13 + 8 * (v69 + 2LL * v68) + 48);
  RtlpCopyAffinityEx(v49, v49->Size, v48);
  v50 = *(struct _KAFFINITY_EX **)(v13 + 8 * (v47 + 2 * v46) + 160);
  RtlpCopyAffinityEx(v50, v50->Size, v74);
  v51 = v72;
LABEL_90:
  v62 = *(struct _KAFFINITY_EX **)(v13 + 8 * (v47 + 2 * v46) + 272);
  RtlpCopyAffinityEx(v62, v62->Size, v51);
}
