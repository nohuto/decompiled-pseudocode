/*
 * XREFs of RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14000D450 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     WPP_SF_qdddD @ 0x1400703B4 (WPP_SF_qdddD.c)
 *     WPP_SF_qdddDDs @ 0x14007043C (WPP_SF_qdddDDs.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueSynchronousRequest(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // esi
  unsigned __int8 v8; // r12
  IRP *v9; // rbp
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // r13
  __int128 v12; // xmm5
  __int128 v13; // xmm4
  __int128 v14; // xmm3
  __int128 v15; // xmm2
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  struct _MDL *v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v24; // eax
  struct _DEVICE_OBJECT *v25; // rdi
  _IO_STACK_LOCATION *v26; // rax
  NTSTATUS Status; // edi
  unsigned __int8 v28; // al
  int v29; // edx
  unsigned int v30; // ecx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rax
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int64 v55; // rax
  unsigned int v56; // r10d
  unsigned int v57; // r9d
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // ecx
  char *v62; // rcx
  unsigned int v63; // r11d
  unsigned int i; // r10d
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  int v67; // r9d
  __int64 v68; // r8
  int v69; // ecx
  int v70; // r9d
  char v71; // al
  const char *v72; // r10
  _BYTE *v73; // [rsp+50h] [rbp-1E8h]
  __int64 v74; // [rsp+58h] [rbp-1E0h]
  __int64 v75; // [rsp+60h] [rbp-1D8h]
  struct _KEVENT Event; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v77; // [rsp+80h] [rbp-1B8h]
  __int128 v78; // [rsp+90h] [rbp-1A8h]
  __int128 v79; // [rsp+A0h] [rbp-198h]
  __int128 v80; // [rsp+B0h] [rbp-188h]
  __int128 v81; // [rsp+C0h] [rbp-178h]
  _OWORD v82[5]; // [rsp+D0h] [rbp-168h] BYREF
  __int64 v83; // [rsp+120h] [rbp-118h]
  __int128 v84; // [rsp+130h] [rbp-108h]
  __int128 v85; // [rsp+140h] [rbp-F8h]
  __int128 v86; // [rsp+150h] [rbp-E8h]
  __int128 v87; // [rsp+160h] [rbp-D8h]
  __int128 v88; // [rsp+170h] [rbp-C8h]
  __int128 v89; // [rsp+180h] [rbp-B8h]
  __int128 v90; // [rsp+190h] [rbp-A8h]
  __int128 v91; // [rsp+1A0h] [rbp-98h]
  __int128 v92; // [rsp+1B0h] [rbp-88h]
  __int128 v93; // [rsp+1C0h] [rbp-78h]
  __int128 v94; // [rsp+1D0h] [rbp-68h]
  __int64 v95; // [rsp+1E0h] [rbp-58h]
  char v97; // [rsp+248h] [rbp+10h]
  char v98; // [rsp+250h] [rbp+18h]
  char v99; // [rsp+258h] [rbp+20h]
  unsigned __int8 v101; // [rsp+260h] [rbp+28h]

  v73 = 0LL;
  v101 = 0;
  v97 = 0;
  v98 = 0;
  v7 = 2;
  memset_0(v82, 0, 0x58uLL);
  v8 = 0;
  v9 = *(IRP **)a3;
  v10 = 0;
  v11 = 0;
  v75 = *(_QWORD *)(a2 + 8);
  v99 = 0;
  if ( *(_BYTE *)(a4 + 2) != 40 )
  {
    v12 = *(_OWORD *)a4;
    v10 = *(_BYTE *)(a4 + 5);
    v13 = *(_OWORD *)(a4 + 16);
    v8 = *(_BYTE *)(a4 + 6);
    v14 = *(_OWORD *)(a4 + 32);
    v11 = *(_BYTE *)(a4 + 7);
    v15 = *(_OWORD *)(a4 + 48);
    v99 = *(_BYTE *)(a4 + 72);
    v16 = *(_OWORD *)(a4 + 64);
    v17 = *(_QWORD *)(a4 + 80);
    goto LABEL_3;
  }
  v44 = *(_QWORD *)(a4 + 176);
  v45 = *(_OWORD *)(a4 + 16);
  v84 = *(_OWORD *)a4;
  v46 = *(_OWORD *)(a4 + 32);
  v85 = v45;
  v47 = *(_OWORD *)(a4 + 48);
  v86 = v46;
  v48 = *(_OWORD *)(a4 + 64);
  v87 = v47;
  v49 = *(_OWORD *)(a4 + 80);
  v88 = v48;
  v50 = *(_OWORD *)(a4 + 96);
  v89 = v49;
  v51 = *(_OWORD *)(a4 + 112);
  v90 = v50;
  v52 = *(_OWORD *)(a4 + 128);
  v91 = v51;
  v53 = *(_OWORD *)(a4 + 144);
  v92 = v52;
  v54 = *(_OWORD *)(a4 + 160);
  v93 = v53;
  v94 = v54;
  v95 = v44;
  v55 = *(unsigned int *)(a4 + 52);
  if ( *(_WORD *)(v55 + a4) == 1 )
  {
    v10 = *(_BYTE *)(v55 + a4 + 8);
    v8 = *(_BYTE *)(v55 + a4 + 9);
    v11 = *(_BYTE *)(v55 + a4 + 10);
  }
  if ( *(_DWORD *)(a4 + 20) )
    goto LABEL_44;
  v56 = *(_DWORD *)(a4 + 56);
  v57 = 0;
  if ( !v56 )
    goto LABEL_44;
  while ( 1 )
  {
    v58 = *(unsigned int *)(a4 + 4LL * v57 + 120);
    if ( (unsigned int)v58 < 0x80 )
      goto LABEL_39;
    v59 = *(unsigned int *)(a4 + 16);
    if ( (unsigned int)v58 >= (unsigned int)v59 )
      goto LABEL_39;
    v60 = (unsigned int)v58;
    v61 = *(_DWORD *)(v58 + a4);
    if ( v61 == 64 )
    {
      if ( v60 + 40 <= v59 )
      {
        if ( !*(_BYTE *)(v60 + a4 + 10) )
          goto LABEL_44;
LABEL_41:
        v62 = (char *)(v60 + a4 + 24);
        goto LABEL_42;
      }
      goto LABEL_39;
    }
    v69 = v61 - 65;
    if ( v69 )
      break;
    if ( v60 + 56 <= v59 )
    {
      if ( !*(_BYTE *)(v60 + a4 + 10) )
        goto LABEL_44;
      goto LABEL_41;
    }
LABEL_39:
    if ( ++v57 >= v56 )
      goto LABEL_44;
  }
  if ( v69 != 1 || v60 + 40 > v59 )
    goto LABEL_39;
  v62 = (char *)(v60 + a4 + 32);
  if ( !*(_DWORD *)(v60 + a4 + 12) )
    v62 = 0LL;
LABEL_42:
  if ( v62 )
    v99 = *v62;
LABEL_44:
  v17 = v83;
  v16 = v82[4];
  v15 = v82[3];
  v14 = v82[2];
  v13 = v82[1];
  v12 = v82[0];
LABEL_3:
  v74 = v17;
  v77 = v16;
  v78 = v15;
  v79 = v14;
  v80 = v13;
  v81 = v12;
  while ( 2 )
  {
    if ( *(_BYTE *)(a4 + 2) == 40 )
    {
      v33 = v85;
      *(_OWORD *)a4 = v84;
      v34 = v86;
      *(_OWORD *)(a4 + 16) = v33;
      v35 = v87;
      *(_OWORD *)(a4 + 32) = v34;
      v36 = v88;
      *(_OWORD *)(a4 + 48) = v35;
      v37 = v89;
      *(_OWORD *)(a4 + 64) = v36;
      v38 = v90;
      *(_OWORD *)(a4 + 80) = v37;
      v39 = v91;
      *(_OWORD *)(a4 + 96) = v38;
      v40 = v92;
      *(_OWORD *)(a4 + 112) = v39;
      v41 = v93;
      *(_OWORD *)(a4 + 128) = v40;
      v42 = v94;
      v43 = v95;
      *(_OWORD *)(a4 + 144) = v41;
      *(_OWORD *)(a4 + 160) = v42;
      *(_QWORD *)(a4 + 176) = v43;
    }
    else
    {
      *(_OWORD *)a4 = v12;
      *(_OWORD *)(a4 + 16) = v13;
      *(_OWORD *)(a4 + 32) = v14;
      *(_OWORD *)(a4 + 48) = v15;
      *(_OWORD *)(a4 + 64) = v16;
      *(_QWORD *)(a4 + 80) = v17;
    }
    v18 = 60LL;
    v19 = *(struct _MDL **)(a3 + 8);
    if ( *(_BYTE *)(a4 + 2) != 40 )
      v18 = 16LL;
    v20 = *(unsigned int *)(v18 + a4);
    v21 = 64LL;
    if ( *(_BYTE *)(a4 + 2) != 40 )
      v21 = 24LL;
    v22 = *(_QWORD *)(v21 + a4);
    v19->Next = 0LL;
    v19->MdlFlags = 0;
    v19->ByteCount = v20;
    v19->StartVa = (void *)(v22 & 0xFFFFFFFFFFFFF000uLL);
    v19->ByteOffset = v22 & 0xFFF;
    v19->Size = 8 * (((v20 + (unsigned __int64)(v22 & 0xFFF) + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool(v19);
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    v9->MdlAddress = v19;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = -4081;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a4;
    v24 = *(_DWORD *)(v75 + 1392);
    if ( *(_BYTE *)(a4 + 2) == 40 )
      *(_DWORD *)(a4 + 40) = v24;
    else
      *(_DWORD *)(a4 + 20) = v24;
    v25 = *(struct _DEVICE_OBJECT **)(v75 + 8);
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v26 = v9->Tail.Overlay.CurrentStackLocation;
    v26[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
    v26[-1].Context = &Event;
    v26[-1].Control = -32;
    Status = IofCallDriver(v25, v9);
    if ( Status == 259 )
    {
      Status = 0;
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      goto LABEL_14;
    }
    if ( Status >= 0 )
    {
      Status = 0;
LABEL_14:
      if ( *(_BYTE *)(a4 + 2) == 40 )
      {
        if ( *(_DWORD *)(a4 + 20) )
        {
          v73 = 0LL;
          v101 = 0;
        }
        else
        {
          v63 = *(_DWORD *)(a4 + 56);
          for ( i = 0; i < v63; ++i )
          {
            v65 = *(unsigned int *)(a4 + 4LL * i + 120);
            if ( (unsigned int)v65 >= 0x80 )
            {
              v66 = *(unsigned int *)(a4 + 16);
              if ( (unsigned int)v65 < (unsigned int)v66 )
              {
                v67 = *(_DWORD *)(v65 + a4);
                v68 = v65 + a4;
                if ( v67 == 64 )
                {
                  if ( v65 + 40 <= v66 )
                  {
                    v73 = *(_BYTE **)(v68 + 16);
                    v28 = *(_BYTE *)(v68 + 9);
                    goto LABEL_16;
                  }
                }
                else
                {
                  v70 = v67 - 65;
                  if ( v70 )
                  {
                    if ( v70 == 1 && v65 + 40 <= v66 )
                    {
                      v73 = *(_BYTE **)(v68 + 24);
                      v101 = *(_BYTE *)(v68 + 9);
                      break;
                    }
                  }
                  else if ( v65 + 56 <= v66 )
                  {
                    v73 = *(_BYTE **)(v68 + 16);
                    v101 = *(_BYTE *)(v68 + 9);
                    break;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v73 = *(_BYTE **)(a4 + 32);
        v28 = *(_BYTE *)(a4 + 11);
LABEL_16:
        v101 = v28;
      }
      v29 = *(unsigned __int8 *)(a4 + 3);
      if ( (v29 & 0x80u) != 0 && v73 )
      {
        if ( v101 )
        {
          v71 = *v73 & 0x7F;
          if ( v71 == 114 || v71 == 115 )
          {
            v97 = 0;
            if ( v73 + 8 <= &v73[v101] )
            {
              v97 = 1;
              v98 = v73[1] & 0xF;
            }
          }
          else
          {
            v97 = 0;
            if ( v73 + 8 <= &v73[v101] )
            {
              v97 = 1;
              v98 = v73[2] & 0xF;
            }
          }
        }
        else
        {
          v97 = 0;
        }
      }
      v30 = v29 & 0xFFFFFF3F;
      if ( (v29 & 0xFFFFFF3F) == 0xA || v30 - 7 <= 1 || v30 - 32 <= 1 || v97 && v98 == 5 )
      {
        Status = -1073741810;
      }
      else if ( (_BYTE)v29 == 18 )
      {
        *(_BYTE *)(a4 + 3) = 1;
      }
      else
      {
        Status = v9->IoStatus.Status;
        if ( Status < 0
          && Status != -1073741808
          && Status != -1073741810
          && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v72 = "retried";
          if ( !v7 )
            v72 = "not retried";
          WPP_SF_qdddDDs(WPP_GLOBAL_Control->AttachedDevice, v11, v8, *a1, v10, v8, v11, v99, v29, (__int64)v72);
        }
      }
      if ( !v7-- )
        return (unsigned int)Status;
      if ( Status >= 0 )
        return (unsigned int)Status;
      v17 = v74;
      v16 = v77;
      v15 = v78;
      v14 = v79;
      v13 = v80;
      v12 = v81;
      if ( Status == -1073741810 )
        return (unsigned int)Status;
      continue;
    }
    break;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qdddD(WPP_GLOBAL_Control->AttachedDevice, v8, v10, *a1, v10, v8, v11, Status);
  }
  return (unsigned int)Status;
}
