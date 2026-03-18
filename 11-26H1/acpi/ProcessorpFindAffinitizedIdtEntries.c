/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400BD160 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x140044414 (WPP_RECORDER_SF_DDqDss.c)
 *     WPP_RECORDER_SF_qDss @ 0x140071D98 (WPP_RECORDER_SF_qDss.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     IcCheckIrqConflict @ 0x1400D065C (IcCheckIrqConflict.c)
 *     IcIsInterruptTypeSecondary @ 0x1400D3968 (IcIsInterruptTypeSecondary.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9,
        _BYTE *a10)
{
  __int64 *v10; // r15
  int v11; // r14d
  char v12; // r12
  char IsInterruptTypeSecondary; // al
  char v14; // cl
  NTSTATUS result; // eax
  bool v16; // cf
  int v17; // eax
  unsigned __int8 v18; // dl
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // r8
  unsigned int i; // eax
  __int64 v23; // r10
  unsigned int v24; // r8d
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // r15
  unsigned __int8 v29; // r12
  unsigned int v30; // r14d
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v32; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  unsigned int v34; // r15d
  unsigned int v35; // r13d
  char v36; // al
  int v37; // esi
  const char *v38; // rax
  const char *v39; // rdx
  const char *v40; // rax
  const char *v41; // rdx
  int AttributeAvailableMask; // [rsp+28h] [rbp-A9h]
  unsigned __int8 Available; // [rsp+68h] [rbp-69h] BYREF
  char v44; // [rsp+69h] [rbp-68h]
  char v45[2]; // [rsp+6Ah] [rbp-67h] BYREF
  struct _PROCESSOR_NUMBER v46; // [rsp+6Ch] [rbp-65h]
  int v47; // [rsp+70h] [rbp-61h]
  int v48; // [rsp+74h] [rbp-5Dh]
  int v49; // [rsp+78h] [rbp-59h]
  unsigned int v50; // [rsp+7Ch] [rbp-55h]
  __int64 *v51; // [rsp+80h] [rbp-51h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v53; // [rsp+90h] [rbp-41h]
  unsigned int v54; // [rsp+94h] [rbp-3Dh]
  int v55; // [rsp+98h] [rbp-39h]
  unsigned int v56; // [rsp+9Ch] [rbp-35h]
  __int128 Context; // [rsp+A0h] [rbp-31h] BYREF
  _DWORD v58[3]; // [rsp+B0h] [rbp-21h]
  int v59; // [rsp+BCh] [rbp-15h]
  __int64 v60; // [rsp+C0h] [rbp-11h]
  __int64 v61; // [rsp+C8h] [rbp-9h]

  v44 = a4;
  v10 = a2;
  v51 = a2;
  v60 = a1;
  v46 = 0;
  Context = 0LL;
  if ( a10 )
    *a10 = 0;
  v11 = -a5;
  v55 = -a5;
  if ( a5 != (a5 & -a5) || a5 > 0x10 )
  {
    if ( a10 )
      *a10 = 1;
    return -1073741581;
  }
  v12 = a6;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  v14 = IsInterruptTypeSecondary;
  if ( IsInterruptTypeSecondary && a5 > 1 )
  {
    if ( a10 )
      *a10 = 1;
    return -1073741581;
  }
  v16 = IsInterruptTypeSecondary != 0;
  v17 = v59;
  v18 = 0;
  v58[0] = 2;
  v19 = v16 ? 0x100 : 0;
  v58[1] = 1;
  v54 = v16 ? 0x100 : 0;
  v58[2] = 3;
  if ( v14 )
    v17 = 0;
  Available = 0;
  v16 = v14 != 0;
  v59 = v17;
  v20 = 0;
  v21 = (unsigned int)v16 + 3;
  v56 = v16 + 3;
LABEL_15:
  v47 = v20;
  if ( v20 > 1 )
  {
    v37 = -1073741275;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = "edge";
      if ( (a7 & 1) == 0 )
        v40 = "level";
      v41 = "share";
      if ( !v44 )
        v41 = "noshare";
      WPP_RECORDER_SF_qDss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v41,
        v21,
        v19,
        AttributeAvailableMask,
        *v10,
        v12,
        v41,
        v40);
    }
  }
  else
  {
    for ( i = 0; ; i = v50 + 1 )
    {
      v50 = i;
      if ( i >= (unsigned int)v21 )
      {
        v20 = v47 + 1;
        goto LABEL_15;
      }
      v23 = i;
      v24 = 0;
      v61 = i;
      v49 = 0;
LABEL_19:
      if ( v24 < 0x10 )
        break;
      v21 = v56;
    }
    v25 = 16;
    v26 = (unsigned __int8)v11 & (unsigned __int8)(a5 + ProcessorVectorColumnBias - 1 + v24) & 0xF;
    v53 = v26;
    while ( 1 )
    {
      v48 = v25;
      if ( !v25 )
      {
        LOBYTE(v11) = v55;
        v24 = a5 + v49;
        v49 += a5;
        goto LABEL_19;
      }
      v27 = ((_BYTE)v25 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
      if ( ProcessorIdtRowPriority[v27] == v58[v23] )
        break;
LABEL_49:
      v26 = v53;
      v25 = v48 - 1;
      v19 = v54;
      v23 = v61;
    }
    v28 = *v10;
    v29 = 0;
    v30 = v19 + (v26 | (16 * v27));
    while ( v28 )
    {
      if ( _bittest64(&v28, v29) )
      {
        *(_WORD *)&v46.Number = v29;
        v46.Group = *((_WORD *)v51 + 4);
        ProcNumber = v46;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        if ( ProcessorIndexFromNumber == -1 )
          return -1073741811;
        if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
          return -1073741811;
        v32 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
        if ( !v32 )
          return -1073741811;
        if ( v47 == 1 )
        {
          Callback = ProcessorpRangeConflictCallback;
          *(_QWORD *)&Context = v60;
          DWORD2(Context) = a6;
          WORD6(Context) = (a7 & 1) != 0;
          BYTE14(Context) = v44;
        }
        else
        {
          Callback = 0LL;
          Context = 0LL;
        }
        if ( a8 == 1 )
          ++v32;
        result = RtlIsRangeAvailable(v32, v30, v30 + a5 - 1LL, 0, 0, &Context, Callback, &Available);
        if ( result < 0 )
          return result;
        v18 = Available;
        if ( !Available )
        {
          v12 = a6;
          goto LABEL_48;
        }
      }
      v28 &= ~(1LL << v29++);
    }
    v12 = a6;
    if ( !v18 )
    {
LABEL_48:
      v10 = v51;
      goto LABEL_49;
    }
    v45[0] = 0;
    if ( a6 >= 0xFFF00000 )
    {
      LOBYTE(v35) = a5 + v30;
    }
    else
    {
      v34 = v30;
      v35 = v30 + a5;
      while ( v34 < v35 )
      {
        if ( (int)IcCheckIrqConflict(a6, v34, a7, v45) < 0 )
        {
          v36 = 1;
          goto LABEL_45;
        }
        ++v34;
      }
      v36 = v45[0];
LABEL_45:
      if ( v36 )
      {
        v18 = Available;
        goto LABEL_48;
      }
    }
    v37 = 0;
    if ( a9 )
      *a9 = v30;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v38 = "edge";
      if ( (a7 & 1) == 0 )
        v38 = "level";
      v39 = "share";
      if ( !v44 )
        v39 = "noshare";
      WPP_RECORDER_SF_DDqDss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v39,
        v26,
        v19,
        AttributeAvailableMask,
        v30,
        v35 - 1,
        *v51,
        a6,
        v39,
        v38);
    }
  }
  return v37;
}
