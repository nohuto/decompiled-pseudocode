/*
 * XREFs of ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180093FF8
 * Callers:
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180026998 (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180154080 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x180228420 (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180094B5C (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(const struct CInteraction *a1)
{
  int *v2; // r14
  int *v3; // r15
  int *v4; // r12
  int *v5; // r13
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  const struct _tlgProvider_t *v11; // rax
  const struct _tlgProvider_t *v12; // r10
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+74h] [rbp-94h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-88h] BYREF
  const struct CInteraction *v37; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  const struct CInteraction **v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  _DWORD *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  int *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  int *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  int *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  int *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  int *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  int *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  int *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  int *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  int *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  int *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  int *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  int *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  int *v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  int *v77; // [rsp+1D8h] [rbp+D0h]
  __int64 v78; // [rsp+1E0h] [rbp+D8h]
  int *v79; // [rsp+1E8h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+E8h]
  int *v81; // [rsp+1F8h] [rbp+F0h]
  __int64 v82; // [rsp+200h] [rbp+F8h]

  if ( *((_DWORD *)a1 + 118) )
    v2 = (int *)*((_QWORD *)a1 + 56);
  else
    v2 = 0LL;
  if ( *((_DWORD *)a1 + 158) )
    v3 = (int *)*((_QWORD *)a1 + 76);
  else
    v3 = 0LL;
  if ( *((_DWORD *)a1 + 198) )
    v4 = (int *)*((_QWORD *)a1 + 96);
  else
    v4 = 0LL;
  if ( *((_DWORD *)a1 + 238) )
    v5 = (int *)*((_QWORD *)a1 + 116);
  else
    v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 3LL;
  do
  {
    if ( *((_BYTE *)a1 + v8 + 1632) )
    {
      v10 = *(_DWORD *)((char *)a1 + v8 + 1640);
      v6 |= v10 & *(_DWORD *)((_BYTE *)a1 + v8 + 1636);
      v7 |= v10;
    }
    v8 += 12LL;
    --v9;
  }
  while ( v9 );
  v11 = InputTraceLogging::Provider();
  v12 = v11;
  if ( *(_DWORD *)v11 > 4u
    && (*((_DWORD *)v11 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v11 + 3) & 0x800LL) == *((_QWORD *)v11 + 3) )
  {
    v13 = *((_DWORD *)a1 + 250);
    v26 = v7;
    v27 = v6;
    v28 = v13;
    if ( v5 )
    {
      v18 = v5[1];
      v19 = *v5;
      v14 = v5[2];
    }
    else
    {
      v18 = 0;
      v14 = 0;
      v19 = 0;
    }
    v29 = v14;
    v30 = *((_DWORD *)a1 + 238);
    if ( v4 )
    {
      v20 = v4[1];
      v21 = *v4;
      v15 = v4[2];
    }
    else
    {
      v20 = 0;
      v15 = 0;
      v21 = 0;
    }
    v31 = v15;
    v32 = *((_DWORD *)a1 + 198);
    if ( v3 )
    {
      v22 = v3[1];
      v23 = *v3;
      v16 = v3[2];
    }
    else
    {
      v22 = 0;
      v16 = 0;
      v23 = 0;
    }
    v33 = v16;
    v34 = *((_DWORD *)a1 + 158);
    if ( v2 )
    {
      v24 = v2[1];
      v25 = *v2;
      v17 = v2[2];
    }
    else
    {
      v24 = 0;
      v17 = 0;
      v25 = 0;
    }
    v35 = v17;
    v36[0] = *((_DWORD *)a1 + 118);
    v81 = &v26;
    v79 = &v27;
    v77 = &v28;
    v75 = &v18;
    v73 = &v19;
    v71 = &v29;
    v69 = &v30;
    v67 = &v20;
    v65 = &v21;
    v63 = &v31;
    v61 = &v32;
    v59 = &v22;
    v57 = &v23;
    v55 = &v33;
    v53 = &v34;
    v51 = &v24;
    v49 = &v25;
    v47 = &v35;
    v45 = v36;
    v43 = &v37;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *((_QWORD *)v12 + 1);
    v37 = a1;
    v82 = 4LL;
    v80 = 4LL;
    v78 = 4LL;
    v76 = 4LL;
    v74 = 4LL;
    v72 = 4LL;
    v70 = 4LL;
    v68 = 4LL;
    v66 = 4LL;
    v64 = 4LL;
    v62 = 4LL;
    v60 = 4LL;
    v58 = 4LL;
    v56 = 4LL;
    v54 = 4LL;
    v52 = 4LL;
    v50 = 4LL;
    v48 = 4LL;
    v46 = 4LL;
    v44 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2048LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v40 = &unk_1803B095D;
    UserData.Reserved = 2;
    v41 = 334;
    v42 = 1;
    v36[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v12 + 4), &EventDescriptor, 0LL, 0LL, 0x16u, &UserData);
  }
}
