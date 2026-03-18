/*
 * XREFs of OutputDuplPresent @ 0x14029EA64
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1403D2980 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x140054270 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x14029E57C (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140405140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct _KTHREAD **a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  D3DKMT_HANDLE hContext; // edx
  __int64 v6; // rcx
  struct DXGDEVICE **v7; // rdi
  volatile signed __int64 *v8; // rcx
  ULONG BroadcastContextCount; // esi
  __int64 v10; // rsi
  _QWORD *Pool2; // rax
  ULONG v12; // r15d
  __int64 v13; // r9
  unsigned int v14; // ebx
  DXGCONTEXTBYHANDLE *v16; // rcx
  D3DKMT_HANDLE hIndirectContext; // edx
  __int64 v18; // rcx
  struct DXGCONTEXT *v19; // rdi
  D3DKMT_HANDLE v20; // ebx
  __int64 CurrentProcess; // rax
  D3DKMT_HANDLE v22; // ebx
  __int64 v23; // rax
  struct DXGADAPTER **v24; // rax
  int v25; // edi
  __int64 v26; // rsi
  D3DKMT_HANDLE v27; // eax
  int v28; // r9d
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // [rsp+28h] [rbp-A1h]
  DXGADAPTER *v33; // [rsp+50h] [rbp-79h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-71h] BYREF
  PVOID P; // [rsp+60h] [rbp-69h]
  _BYTE v36[32]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-41h]
  _BYTE v38[16]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v39[16]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v40[24]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD v41[6]; // [rsp+C8h] [rbp-1h] BYREF
  char v42; // [rsp+F8h] [rbp+2Fh]
  struct DXGCONTEXT *v43; // [rsp+130h] [rbp+67h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v33 = 0LL;
  if ( (*(_BYTE *)&Value & 8) != 0 )
  {
    hIndirectContext = a1->hIndirectContext;
    v43 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38, hIndirectContext, a2, &v43, 0, 1);
    v19 = v43;
    if ( !v43 )
    {
      v20 = a1->hIndirectContext;
      CurrentProcess = PsGetCurrentProcess(v18);
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v20);
      v16 = (DXGCONTEXTBYHANDLE *)v38;
      WdLogGlobalForLineNumber = 2716;
      goto LABEL_20;
    }
    v24 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
    v25 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v19 + 2), a1->VidPnSourceId, v24, &v34);
    if ( v25 < 0 )
    {
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
      goto LABEL_56;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
  }
  hContext = a1->hContext;
  v43 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, hContext, a2, &v43, 0, 1);
  v7 = (struct DXGDEVICE **)v43;
  if ( !v43 )
  {
    v22 = a1->hContext;
    v23 = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(3LL, -1073741811LL, v23, v22);
    WdLogGlobalForLineNumber = 2737;
    goto LABEL_19;
  }
  if ( !v33 )
  {
    v8 = *(volatile signed __int64 **)(*((_QWORD *)v43 + 2) + 1896LL);
    v33 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v34 = -1LL;
    }
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v7[2]);
  BroadcastContextCount = a1->BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 2757;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
LABEL_19:
    v16 = (DXGCONTEXTBYHANDLE *)v39;
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v16);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return 3221225485LL;
  }
  v10 = BroadcastContextCount + 1;
  P = 0LL;
  v37 = 0;
  if ( (unsigned int)v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
    {
LABEL_32:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2764;
LABEL_52:
      if ( P != v36 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v37 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
      v25 = -1073741801;
      goto LABEL_56;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v36;
    P = v36;
    if ( (_DWORD)v10 )
    {
      memset(v36, 0, 8LL * (unsigned int)v10);
      Pool2 = P;
    }
  }
  v37 = v10;
  if ( !Pool2 )
    goto LABEL_32;
  *Pool2 = v7;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v40, a2);
  v12 = 0;
  while ( v12 < a1->BroadcastContextCount )
  {
    v26 = v12;
    v27 = (a1->BroadcastContext[v12] >> 6) & 0xFFFFFF;
    if ( v27 >= *((_DWORD *)a2 + 74) )
      goto LABEL_40;
    v28 = *((_DWORD *)a2[35] + 4 * v27 + 2);
    if ( ((a1->BroadcastContext[v12] >> 25) & 0x60) != (*((_BYTE *)a2[35] + 16 * v27 + 8) & 0x60)
      || (v28 & 0x2000) != 0
      || (v28 & 0x1F) == 0 )
    {
      goto LABEL_40;
    }
    v29 = a2[35];
    if ( (*((_BYTE *)v29 + 16 * v27 + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
      v30 = 0LL;
      goto LABEL_41;
    }
    v30 = *((_QWORD *)v29 + 2 * v27);
LABEL_41:
    *((_QWORD *)P + ++v12) = v30;
    v31 = *((_QWORD *)P + v12);
    if ( !v31 || *(struct DXGDEVICE **)(v31 + 16) != v7[2] )
    {
      WdLogSingleEntry4(2LL, v7, a1->BroadcastContext[v26], v26, -1073741811LL);
      v32 = a1->BroadcastContext[v26];
      WdLogGlobalForLineNumber = 2798;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v7,
        v32,
        v26,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
      goto LABEL_46;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v41,
    P,
    v37,
    v13,
    1);
  if ( !v42 )
  {
    v14 = OutputDuplPresentInternal(v33, (struct DXGCONTEXT *)v7, a1, (struct DXGCONTEXT **)P);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v41);
    if ( P != v36 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v37 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return v14;
  }
  if ( !v41[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2813;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v41);
    goto LABEL_52;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 2818;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v41);
LABEL_46:
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v37 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
  v25 = -1073741811;
LABEL_56:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v33, 0LL);
  return (unsigned int)v25;
}
