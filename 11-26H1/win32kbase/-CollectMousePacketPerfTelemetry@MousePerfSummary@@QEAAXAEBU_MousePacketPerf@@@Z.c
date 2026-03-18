/*
 * XREFs of ?CollectMousePacketPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePacketPerf@@@Z @ 0x14009FDDC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?LogMousePacketLatencyData@MousePerfSummary@@AEAAXAEBU_MousePacketPerf@@@Z @ 0x1400A01D0 (-LogMousePacketLatencyData@MousePerfSummary@@AEAAXAEBU_MousePacketPerf@@@Z.c)
 *     rand @ 0x1401C7A64 (rand.c)
 */

void __fastcall MousePerfSummary::CollectMousePacketPerfTelemetry(
        LARGE_INTEGER *this,
        const struct _MousePacketPerf *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  DWORD LowPart; // eax
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v15; // rcx
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // rax
  DWORD v18; // ecx
  bool v19; // zf
  unsigned __int64 v20; // rcx
  LARGE_INTEGER v21; // rcx
  LARGE_INTEGER v22; // rax
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER v24; // rax
  DWORD v25; // ecx
  unsigned __int64 v26; // rcx
  LARGE_INTEGER v27; // rcx
  LARGE_INTEGER v28; // rax
  LARGE_INTEGER v29; // rax
  LARGE_INTEGER v30; // rax
  DWORD v31; // ecx
  unsigned __int64 v32; // rcx
  LARGE_INTEGER v33; // rcx
  LARGE_INTEGER v34; // rax
  LARGE_INTEGER v35; // rax
  LARGE_INTEGER v36; // rax
  DWORD v37; // ecx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  LARGE_INTEGER v40; // rdi

  this[61].LowPart = *((_DWORD *)a2 + 12);
  this[60].LowPart = *((_DWORD *)a2 + 13);
  v4 = *((_QWORD *)a2 + 5);
  if ( v4 && (v5 = *((_QWORD *)a2 + 4)) != 0 )
    v6 = (unsigned __int64)(1000000 * (v4 - v5)) / gliQpcFreq.QuadPart;
  else
    v6 = 0LL;
  this[53].QuadPart = v6;
  v7 = (_QWORD *)((char *)a2 + 16);
  v8 = *((_QWORD *)a2 + 3);
  if ( v8 && *v7 )
    v9 = (unsigned __int64)(1000000 * (v8 - *v7)) / gliQpcFreq.QuadPart;
  else
    v9 = 0LL;
  this[54].QuadPart = v9;
  v10 = *((_QWORD *)a2 + 1);
  if ( v10 && *(_QWORD *)a2 )
    v11 = (unsigned __int64)(1000000 * (v10 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
  else
    v11 = 0LL;
  this[55].QuadPart = v11;
  if ( *v7 && *(_QWORD *)a2 )
    v12 = (unsigned __int64)(1000000LL * (*v7 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
  else
    v12 = 0LL;
  this[56].QuadPart = v12;
  LowPart = this[61].LowPart;
  if ( LowPart != 2 && LowPart != 3 )
  {
    if ( v6 )
    {
      QuadPart = this[30].QuadPart;
      v15.QuadPart = v6;
      if ( QuadPart <= v6 )
        QuadPart = v6;
      this[30].QuadPart = QuadPart;
      if ( this[31].QuadPart < v6 )
        v15 = this[31];
      v16 = this[33];
      this[31] = v15;
      v17.QuadPart = v6 + v16.QuadPart;
      v18 = this[34].LowPart;
      v19 = v18 == -1;
      v20 = v18 + 1;
      this[33] = v17;
      this[34].LowPart = v20;
      if ( v19 )
        this[32].QuadPart = 0LL;
      else
        this[32].QuadPart = v17.QuadPart / v20;
    }
    v21 = this[54];
    if ( v21.QuadPart )
    {
      v22 = this[35];
      if ( v22.QuadPart <= (unsigned __int64)v21.QuadPart )
        v22 = this[54];
      this[35] = v22;
      v23 = this[36];
      if ( v23.QuadPart >= (unsigned __int64)v21.QuadPart )
        v23 = v21;
      this[36] = v23;
      v24.QuadPart = v21.QuadPart + this[38].QuadPart;
      v25 = this[39].LowPart;
      v19 = v25 == -1;
      v26 = v25 + 1;
      this[38] = v24;
      this[39].LowPart = v26;
      if ( v19 )
        this[37].QuadPart = 0LL;
      else
        this[37].QuadPart = v24.QuadPart / v26;
    }
    v27 = this[55];
    if ( v27.QuadPart )
    {
      v28 = this[40];
      if ( v28.QuadPart <= (unsigned __int64)v27.QuadPart )
        v28 = this[55];
      this[40] = v28;
      v29 = this[41];
      if ( v29.QuadPart >= (unsigned __int64)v27.QuadPart )
        v29 = v27;
      this[41] = v29;
      v30.QuadPart = v27.QuadPart + this[43].QuadPart;
      v31 = this[44].LowPart;
      v19 = v31 == -1;
      v32 = v31 + 1;
      this[43] = v30;
      this[44].LowPart = v32;
      if ( v19 )
        this[42].QuadPart = 0LL;
      else
        this[42].QuadPart = v30.QuadPart / v32;
    }
    v33 = this[56];
    if ( v33.QuadPart )
    {
      v34 = this[45];
      if ( v34.QuadPart <= (unsigned __int64)v33.QuadPart )
        v34 = this[56];
      this[45] = v34;
      v35 = this[46];
      if ( v35.QuadPart >= (unsigned __int64)v33.QuadPart )
        v35 = v33;
      this[46] = v35;
      v36.QuadPart = v33.QuadPart + this[48].QuadPart;
      v37 = this[49].LowPart;
      v19 = v37 == -1;
      v38 = v37 + 1;
      this[48] = v36;
      this[49].LowPart = v38;
      if ( v19 )
        this[47].QuadPart = 0LL;
      else
        this[47].QuadPart = v36.QuadPart / v38;
    }
  }
  if ( !this[62].QuadPart )
    this[62] = KeQueryPerformanceCounter(0LL);
  if ( !this[63].QuadPart )
    this[63] = KeQueryPerformanceCounter(0LL);
  MousePerfSummary::LogMousePacketLatencyData((MousePerfSummary *)this, a2);
  v39 = this[65].QuadPart;
  v40.QuadPart = v39 + 1;
  if ( v39 + 1 >= v39 )
  {
    this[65] = v40;
    if ( !((unsigned __int64)rand() % v40.QuadPart) )
    {
      this[70] = this[53];
      this[71] = this[54];
      this[72] = this[55];
      this[73] = this[56];
      this[77].HighPart = this[60].LowPart;
      this[77].LowPart = this[61].LowPart;
      LOBYTE(this[66].LowPart) = 1;
    }
  }
}
