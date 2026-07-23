/*
 * XREFs of MiCreateUserPhysicalView @ 0x14087EEBC
 * Callers:
 *     MiReserveUserMemoryPrepare @ 0x140A010AC (MiReserveUserMemoryPrepare.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiReferenceAweHandle @ 0x14050D4B4 (MiReferenceAweHandle.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14087EDDC (MiCreateProcessDefaultAweInfo.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 */

NTSTATUS __fastcall MiCreateUserPhysicalView(_KPROCESS *a1, __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  char v6; // r9
  PVOID v7; // r14
  void *v8; // r10
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  KPROCESSOR_MODE PreviousMode; // r8
  ACCESS_MASK v14; // edx
  NTSTATUS result; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int64 v18; // rdi
  int VadEvent; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  _WORD *AweInfoPartition; // rax
  __int64 v24; // r8
  unsigned __int64 *v25; // rsi
  int v26; // eax
  unsigned int v27; // eax
  char v28; // [rsp+30h] [rbp-61h]
  __int64 v29; // [rsp+38h] [rbp-59h] BYREF
  PVOID v30; // [rsp+40h] [rbp-51h] BYREF
  PVOID Object; // [rsp+48h] [rbp-49h] BYREF
  __int64 v32; // [rsp+50h] [rbp-41h] BYREF
  __int64 v33; // [rsp+58h] [rbp-39h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-31h]
  void *v35; // [rsp+68h] [rbp-29h]
  _WORD *v36; // [rsp+70h] [rbp-21h]
  _OWORD v37[3]; // [rsp+78h] [rbp-19h] BYREF

  v33 = a2;
  BugCheckParameter1 = (ULONG_PTR)a1;
  v6 = a3;
  v36 = a5;
  v32 = 0LL;
  v7 = 0LL;
  v8 = (void *)a4[13];
  v9 = 0LL;
  v10 = a4[14];
  v11 = 0LL;
  v35 = v8;
  v28 = 0;
  Object = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  memset(v37, 0, sizeof(v37));
  if ( !v8 )
  {
    if ( (v10 & 0x1A) != 0 )
      return -1073741811;
    if ( a3 == 4 )
    {
      v18 = 1LL;
      v17 = 1LL;
      goto LABEL_39;
    }
    return -1073741755;
  }
  v12 = (a3 & 4 | 8u) >> 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v14 = v12 | 8;
  if ( (v6 & 2) == 0 )
    v14 = v12;
  result = MiReferenceAweHandle(v8, v14, PreviousMode, &Object, &v30);
  if ( result >= 0 )
  {
    v7 = v30;
    if ( !v30 )
    {
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x68506D4Du);
      return -1073741816;
    }
    v11 = MiSectionControlArea((__int64)v30);
    v9 = *(_QWORD *)(v11 + 8);
    v29 = v9;
    v16 = MiPageChainCount(v9);
    v17 = v16;
    if ( (v10 & 2) != 0 )
    {
      v18 = 16LL;
    }
    else if ( (v10 & 8) != 0 )
    {
      v18 = 512LL;
    }
    else
    {
      if ( (v10 & 0x10) == 0 )
      {
        v18 = v16;
LABEL_28:
        v20 = v18 << 12;
        if ( a4[2] < v18 << 12 )
          a4[2] = v20;
        v21 = a4[3];
        if ( (v21 & (v20 - 1)) != 0 || a4[1] - *a4 + 1LL == v21 && (*a4 & (v20 - 1)) != 0 )
          goto LABEL_20;
        a1 = (_KPROCESS *)BugCheckParameter1;
LABEL_39:
        if ( a1 != KeGetCurrentThread()->ApcState.Process )
        {
          KiStackAttachProcess(a1, 0, (__int64)v37);
          v28 = 1;
        }
        if ( !v35 )
        {
          VadEvent = MiCreateProcessDefaultAweInfo(&v29);
          if ( VadEvent < 0 )
            goto LABEL_21;
          v9 = v29;
        }
        VadEvent = MiCreateVadEvent(a4[11], (__int64)MiDeleteVadEventAwe, (__int64)&v32);
        if ( VadEvent >= 0 )
        {
          v22 = v32;
          *(_QWORD *)(v32 + 64) = v33;
          *(_QWORD *)(v22 + 72) = v9;
          AweInfoPartition = (_WORD *)MiGetAweInfoPartition(v9);
          v25 = (unsigned __int64 *)(v24 + 80);
          *v36 = *AweInfoPartition;
          if ( v7 )
          {
            MiCheckPurgeAndUpMapCount(v11);
            *v25 = v11;
            ObfDereferenceObjectWithTag(v7, 0x68506D4Du);
          }
          if ( v18 != v17 )
          {
            v26 = *(_DWORD *)v25;
            if ( v18 == 16 )
            {
              v27 = v26 & 0xFFFFFFFC | 1;
            }
            else if ( v18 == 0x40000 )
            {
              v27 = v26 | 3;
            }
            else
            {
              v27 = v26 & 0xFFFFFFFC | 2;
            }
            *(_DWORD *)v25 = v27;
          }
          goto LABEL_23;
        }
LABEL_21:
        if ( v7 )
          ObfDereferenceObjectWithTag(v7, 0x68506D4Du);
LABEL_23:
        if ( v28 )
          KiUnstackDetachProcess((__int64)v37, 0);
        return VadEvent;
      }
      v18 = 0x40000LL;
    }
    if ( v18 <= v16 || v18 % v16 || ((v18 - 1) & v18) != 0 || v18 != 512 || v16 != 16 )
    {
LABEL_20:
      VadEvent = -1073741811;
      goto LABEL_21;
    }
    goto LABEL_28;
  }
  return result;
}
