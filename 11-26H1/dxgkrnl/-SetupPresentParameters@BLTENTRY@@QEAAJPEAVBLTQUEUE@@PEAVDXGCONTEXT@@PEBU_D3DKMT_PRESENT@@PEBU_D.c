/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140446E68
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403C5B84 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1403D3C54 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1403EE454 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x140446808 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        LARGE_INTEGER *this,
        struct BLTQUEUE *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  struct _EX_RUNDOWN_REF **v10; // r15
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  struct _EX_RUNDOWN_REF *v12; // rsi
  const wchar_t *v13; // r9
  unsigned __int8 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // ebx
  struct _EX_RUNDOWN_REF **v19; // rcx
  char *v20; // r15
  const struct tagRECT *v21; // rsi
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  const struct tagRECT *v24; // rax
  struct _EX_RUNDOWN_REF *HandleInformation; // [rsp+28h] [rbp-160h]
  _QWORD v26[13]; // [rsp+58h] [rbp-130h] BYREF
  HANDLE v27[2]; // [rsp+C0h] [rbp-C8h]
  _OWORD v28[3]; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned int v29[34]; // [rsp+100h] [rbp-88h] BYREF
  PVOID Object; // [rsp+198h] [rbp+10h] BYREF
  struct DXGCONTEXT *v31; // [rsp+1A0h] [rbp+18h]
  PVOID v32; // [rsp+1A8h] [rbp+20h] BYREF

  v31 = a3;
  this[3].QuadPart = (LONGLONG)a2;
  this[5].QuadPart = 0LL;
  this[6].QuadPart = 0LL;
  v10 = (struct _EX_RUNDOWN_REF **)&this[4];
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                *(_QWORD *)(*((_QWORD *)a3 + 2) + 40LL),
                                                (DXGALLOCATIONREFERENCE *)&Object,
                                                *(D3DKMT_HANDLE *)((char *)&a4->hDestination
                                                                 + (-(__int64)((a4->Flags.Value & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL)));
  DXGALLOCATIONREFERENCE::MoveAssign(v10, AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&Object);
  v12 = *v10;
  if ( !*v10 )
  {
    WdLogSingleEntry3(2LL, a3, a4->hSource, -1073741811LL);
    WdLogGlobalForLineNumber = 111;
    HandleInformation = (struct _EX_RUNDOWN_REF *)a4->hSource;
    v13 = L"Context 0x%I64x: Invalid hAllocation specified: 0x%I64x, returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)v13,
      (__int64)a3,
      (__int64)HandleInformation,
      -1073741811LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v15 = a7;
  if ( !a7 )
  {
    v16 = *((_QWORD *)a3 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v12[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) )
    {
      WdLogSingleEntry3(2LL, v16, *v10, -1073741811LL);
      WdLogGlobalForLineNumber = 120;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *((_QWORD *)a3 + 2),
        (__int64)*v10,
        -1073741811LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(v12[6].Count + 4) & 4) == 0 && !a7 )
  {
    WdLogSingleEntry3(2LL, a3, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 130;
    HandleInformation = *v10;
    v13 = L"Context 0x%I64x: Source allocation: 0x%I64x for Present is not DOD primary, returning 0x%I64x";
    goto LABEL_3;
  }
  this[65].QuadPart = 0LL;
  if ( v15 )
  {
    this[65].LowPart = 1;
LABEL_13:
    this[8].LowPart = a4->Flags.Value;
    this[7].LowPart = a4->FlipInterval;
    this[7].HighPart = a4->PresentCount;
    *(_OWORD *)&this[66].LowPart = 0LL;
    *(_OWORD *)&this[68].LowPart = 0LL;
    this[67] = KeQueryPerformanceCounter(0LL);
    v17 = MEMORY[0xFFFFF78000000320];
    this[66].QuadPart = v17 * KeQueryTimeIncrement();
    return 0LL;
  }
  if ( *((_BYTE *)a3 + 434) )
  {
    v18 = PRESENTDODARG::SetPresentDodArg(
            (PRESENTDODARG *)&this[9],
            a3,
            *(_DWORD *)(this[3].QuadPart + 256),
            (struct DXGALLOCATION *)v12,
            0,
            0,
            0LL,
            a4,
            a5,
            a6);
    if ( v18 >= 0 )
    {
      this[65].LowPart |= 1u;
      goto LABEL_13;
    }
    v19 = v10;
    goto LABEL_17;
  }
  memset(v29, 0, 0x50uLL);
  DxgkpGetDodPrimaryInfo(
    *((struct DXGDEVICE **)a3 + 2),
    (struct DXGALLOCATION *)v12,
    (struct _D3DKMT_KMDOD_ESCAPE *)v29);
  if ( !v29[8] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 180;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Primary pitch invalid", 180LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v20 = (char *)*((_QWORD *)a3 + 7);
  v21 = 0LL;
  memset(v26, 0, 0x50uLL);
  RtlCopyFromUser(v26, v20, 0x50uLL);
  *(_OWORD *)&v26[11] = *(_OWORD *)v26;
  *(_OWORD *)v27 = *(_OWORD *)&v26[2];
  v28[0] = *(_OWORD *)&v26[4];
  v28[1] = *(_OWORD *)&v26[6];
  v28[2] = *(_OWORD *)&v26[8];
  if ( _mm_cvtsi128_si32(*(__m128i *)v26) == -791674878 && v26[2] && v26[3] )
  {
    Object = 0LL;
    v22 = ObReferenceObjectByHandle((HANDLE)v26[2], 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    this[5].QuadPart = (LONGLONG)Object;
    if ( v22 >= 0 )
    {
      v32 = 0LL;
      v23 = ObReferenceObjectByHandle(v27[1], 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v32, 0LL);
      this[6].QuadPart = (LONGLONG)v32;
      if ( v23 >= 0 )
      {
        if ( *(char **)&v28[0] == v20 + 32 )
        {
          v24 = (const struct tagRECT *)((char *)v28 + 12);
          if ( (SDWORD2(v28[0]) & 0x80000000) == 0 )
            v24 = 0LL;
          v21 = v24;
        }
        v18 = PRESENTDODARG::SetPresentDodArg(
                (PRESENTDODARG *)&this[9],
                a3,
                *(_DWORD *)(this[3].QuadPart + 256),
                (struct DXGALLOCATION *)this[4].QuadPart,
                v29[8],
                v29[10],
                v21,
                a4,
                a5,
                a6);
        if ( v18 >= 0 )
          goto LABEL_13;
        v19 = (struct _EX_RUNDOWN_REF **)&this[4];
LABEL_17:
        DXGALLOCATIONREFERENCE::AssignNull(v19);
        return (unsigned int)v18;
      }
      return 3221225485LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 194;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid Dod escape", 194LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
