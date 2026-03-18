/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1400D17BC
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1400D1DE0 (-LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1400D2284 (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 *     ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x1400D271C (-SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x14011438C (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  int v2; // eax
  MousePerfSummary *v4; // rcx
  const struct _MousePerf *v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // ecx
  bool v19; // zf
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // ecx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  int v55; // ecx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  int v61; // ecx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  int v67; // ecx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  int v73; // ecx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  int v79; // ecx
  unsigned __int64 v80; // rcx

  v2 = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 122) = v2;
  v4 = (const struct _MousePerf *)((char *)a2 + 8);
  v5 = a2;
  if ( v2 == 1 )
  {
    v34 = *((_QWORD *)a2 + 2);
    if ( v34 )
    {
      v36 = MousePerfSummary::CalculateLatencyInMicroseconds(v4, *(_QWORD *)a2, v34);
    }
    else
    {
      if ( !*(_QWORD *)v4 || (v35 = *(_QWORD *)a2) == 0 )
      {
        v37 = 0LL;
LABEL_47:
        *((_QWORD *)this + 50) = v37;
        if ( *(_QWORD *)v4 && (v38 = *((_QWORD *)v5 + 2)) != 0 )
          v39 = (unsigned __int64)(1000000 * (*(_QWORD *)v4 - v38)) / gliQpcFreq.QuadPart;
        else
          v39 = 0LL;
        *((_QWORD *)this + 57) = v39;
        v40 = *((_QWORD *)v5 + 3);
        if ( v40 && *(_QWORD *)v4 )
          v41 = (unsigned __int64)(1000000 * (v40 - *(_QWORD *)v4)) / gliQpcFreq.QuadPart;
        else
          v41 = 0LL;
        *((_QWORD *)this + 51) = v41;
        v42 = *((_QWORD *)v5 + 4);
        if ( v42 && (v43 = *((_QWORD *)v5 + 3)) != 0 )
          v44 = (unsigned __int64)(1000000 * (v42 - v43)) / gliQpcFreq.QuadPart;
        else
          v44 = 0LL;
        *((_QWORD *)this + 58) = v44;
        v45 = *((_QWORD *)v5 + 7);
        if ( v45 && (v46 = *((_QWORD *)v5 + 4)) != 0 )
          v47 = (unsigned __int64)(1000000 * (v45 - v46)) / gliQpcFreq.QuadPart;
        else
          v47 = 0LL;
        *((_QWORD *)this + 59) = v47;
        v48 = *((_QWORD *)v5 + 8);
        if ( v48 && (v49 = *((_QWORD *)v5 + 7)) != 0 )
          v50 = (unsigned __int64)(1000000 * (v48 - v49)) / gliQpcFreq.QuadPart;
        else
          v50 = 0LL;
        *((_QWORD *)this + 52) = v50;
        if ( v37 )
        {
          v51 = *(_QWORD *)this;
          v52 = v37;
          if ( *(_QWORD *)this <= v37 )
            v51 = v37;
          *(_QWORD *)this = v51;
          if ( *((_QWORD *)this + 1) < v37 )
            v52 = *((_QWORD *)this + 1);
          v53 = *((_QWORD *)this + 3);
          *((_QWORD *)this + 1) = v52;
          v54 = v37 + v53;
          v55 = *((_DWORD *)this + 8);
          v19 = v55 == -1;
          v56 = (unsigned int)(v55 + 1);
          *((_QWORD *)this + 3) = v54;
          *((_DWORD *)this + 8) = v56;
          if ( v19 )
            *((_QWORD *)this + 2) = 0LL;
          else
            *((_QWORD *)this + 2) = v54 / v56;
        }
        v57 = *((_QWORD *)this + 57);
        if ( v57 )
        {
          v58 = *((_QWORD *)this + 5);
          if ( v58 <= v57 )
            v58 = *((_QWORD *)this + 57);
          *((_QWORD *)this + 5) = v58;
          v59 = *((_QWORD *)this + 6);
          if ( v59 >= v57 )
            v59 = v57;
          *((_QWORD *)this + 6) = v59;
          v60 = v57 + *((_QWORD *)this + 8);
          v61 = *((_DWORD *)this + 18);
          v19 = v61 == -1;
          v62 = (unsigned int)(v61 + 1);
          *((_QWORD *)this + 8) = v60;
          *((_DWORD *)this + 18) = v62;
          if ( v19 )
            *((_QWORD *)this + 7) = 0LL;
          else
            *((_QWORD *)this + 7) = v60 / v62;
        }
        v63 = *((_QWORD *)this + 51);
        if ( v63 )
        {
          v64 = *((_QWORD *)this + 10);
          if ( v64 <= v63 )
            v64 = *((_QWORD *)this + 51);
          *((_QWORD *)this + 10) = v64;
          v65 = *((_QWORD *)this + 11);
          if ( v65 >= v63 )
            v65 = v63;
          *((_QWORD *)this + 11) = v65;
          v66 = v63 + *((_QWORD *)this + 13);
          v67 = *((_DWORD *)this + 28);
          v19 = v67 == -1;
          v68 = (unsigned int)(v67 + 1);
          *((_QWORD *)this + 13) = v66;
          *((_DWORD *)this + 28) = v68;
          if ( v19 )
            *((_QWORD *)this + 12) = 0LL;
          else
            *((_QWORD *)this + 12) = v66 / v68;
        }
        v69 = *((_QWORD *)this + 58);
        if ( v69 )
        {
          v70 = *((_QWORD *)this + 15);
          if ( v70 <= v69 )
            v70 = *((_QWORD *)this + 58);
          *((_QWORD *)this + 15) = v70;
          v71 = *((_QWORD *)this + 16);
          if ( v71 >= v69 )
            v71 = v69;
          *((_QWORD *)this + 16) = v71;
          v72 = v69 + *((_QWORD *)this + 18);
          v73 = *((_DWORD *)this + 38);
          v19 = v73 == -1;
          v74 = (unsigned int)(v73 + 1);
          *((_QWORD *)this + 18) = v72;
          *((_DWORD *)this + 38) = v74;
          if ( v19 )
            *((_QWORD *)this + 17) = 0LL;
          else
            *((_QWORD *)this + 17) = v72 / v74;
        }
        v75 = *((_QWORD *)this + 59);
        if ( v75 )
        {
          v76 = *((_QWORD *)this + 20);
          if ( v76 <= v75 )
            v76 = *((_QWORD *)this + 59);
          *((_QWORD *)this + 20) = v76;
          v77 = *((_QWORD *)this + 21);
          if ( v77 >= v75 )
            v77 = v75;
          *((_QWORD *)this + 21) = v77;
          v78 = v75 + *((_QWORD *)this + 23);
          v79 = *((_DWORD *)this + 48);
          v19 = v79 == -1;
          v80 = (unsigned int)(v79 + 1);
          *((_QWORD *)this + 23) = v78;
          *((_DWORD *)this + 48) = v80;
          if ( v19 )
            *((_QWORD *)this + 22) = 0LL;
          else
            *((_QWORD *)this + 22) = v78 / v80;
        }
        goto LABEL_26;
      }
      v36 = (unsigned __int64)(1000000 * (*(_QWORD *)v4 - v35)) / gliQpcFreq.QuadPart;
    }
    v37 = v36;
    goto LABEL_47;
  }
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  if ( *(_QWORD *)v4 && (v6 = *(_QWORD *)a2) != 0 )
    v7 = (unsigned __int64)(1000000 * (*(_QWORD *)v4 - v6)) / gliQpcFreq.QuadPart;
  else
    v7 = 0LL;
  *((_QWORD *)this + 50) = v7;
  v8 = *((_QWORD *)v5 + 7);
  if ( v8 && *(_QWORD *)v4 )
    v9 = (unsigned __int64)(1000000 * (v8 - *(_QWORD *)v4)) / gliQpcFreq.QuadPart;
  else
    v9 = 0LL;
  *((_QWORD *)this + 51) = v9;
  v10 = *((_QWORD *)v5 + 8);
  if ( v10 && (v11 = *((_QWORD *)v5 + 7)) != 0 )
    v12 = (unsigned __int64)(1000000 * (v10 - v11)) / gliQpcFreq.QuadPart;
  else
    v12 = 0LL;
  *((_QWORD *)this + 52) = v12;
  if ( *((_DWORD *)this + 122) )
    goto LABEL_33;
  if ( v7 )
  {
    v13 = v7;
    if ( *(_QWORD *)this > v7 )
      v13 = *(_QWORD *)this;
    v14 = *((_QWORD *)this + 1);
    *(_QWORD *)this = v13;
    v15 = v7;
    if ( v14 < v7 )
      v15 = v14;
    v16 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 1) = v15;
    v17 = v7 + v16;
    v18 = *((_DWORD *)this + 8);
    v19 = v18 == -1;
    v20 = (unsigned int)(v18 + 1);
    *((_QWORD *)this + 3) = v17;
    *((_DWORD *)this + 8) = v20;
    if ( v19 )
      *((_QWORD *)this + 2) = 0LL;
    else
      *((_QWORD *)this + 2) = v17 / v20;
  }
  v21 = *((_QWORD *)this + 51);
  if ( v21 )
  {
    v22 = *((_QWORD *)this + 10);
    if ( v22 <= v21 )
      v22 = *((_QWORD *)this + 51);
    *((_QWORD *)this + 10) = v22;
    v23 = *((_QWORD *)this + 11);
    if ( v23 >= v21 )
      v23 = v21;
    *((_QWORD *)this + 11) = v23;
    v24 = v21 + *((_QWORD *)this + 13);
    v25 = *((_DWORD *)this + 28);
    v19 = v25 == -1;
    v26 = (unsigned int)(v25 + 1);
    *((_QWORD *)this + 13) = v24;
    *((_DWORD *)this + 28) = v26;
    if ( v19 )
      *((_QWORD *)this + 12) = 0LL;
    else
      *((_QWORD *)this + 12) = v24 / v26;
  }
LABEL_26:
  v27 = *((_QWORD *)this + 52);
  if ( v27 )
  {
    v28 = *((_QWORD *)this + 25);
    if ( v28 <= v27 )
      v28 = *((_QWORD *)this + 52);
    *((_QWORD *)this + 25) = v28;
    v29 = *((_QWORD *)this + 26);
    if ( v29 >= v27 )
      v29 = v27;
    *((_QWORD *)this + 26) = v29;
    v30 = v27 + *((_QWORD *)this + 28);
    v31 = *((_DWORD *)this + 58);
    v19 = v31 == -1;
    v32 = (unsigned int)(v31 + 1);
    *((_DWORD *)this + 58) = v32;
    *((_QWORD *)this + 28) = v30;
    if ( v19 )
      *((_QWORD *)this + 27) = 0LL;
    else
      *((_QWORD *)this + 27) = v30 / v32;
  }
LABEL_33:
  MousePerfSummary::LogMouseLatencyEvents(this, v5);
  if ( *((_BYTE *)this + 528) == 1 )
  {
    *((_QWORD *)this + 67) = *((_QWORD *)this + 50);
    *((_QWORD *)this + 68) = *((_QWORD *)this + 51);
    *((_QWORD *)this + 69) = *((_QWORD *)this + 52);
    *((_QWORD *)this + 74) = *((_QWORD *)this + 57);
    *((_QWORD *)this + 75) = *((_QWORD *)this + 58);
    *((_QWORD *)this + 76) = *((_QWORD *)this + 59);
    *((_BYTE *)this + 528) = 0;
  }
  v33 = *((_DWORD *)this + 122);
  if ( v33 != 2 && v33 != 3 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}
