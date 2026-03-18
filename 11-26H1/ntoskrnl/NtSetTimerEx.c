/*
 * XREFs of NtSetTimerEx @ 0x140436460
 * Callers:
 *     DifNtSetTimerExWrapper @ 0x14068E210 (DifNtSetTimerExWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtSetTimerEx(void *a1, int a2, _BYTE *a3, unsigned int a4)
{
  _BYTE *v5; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  void *v8; // rcx
  __int64 v9; // r12
  ULONG TolerableDelay; // r13d
  __int64 v11; // r15
  __int64 v12; // r14
  NTSTATUS v13; // ebx
  __int64 result; // rax
  struct _OBJECT_TYPE *v15; // rcx
  NTSTATUS v16; // eax
  char v17[8]; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v20[48]; // [rsp+70h] [rbp-58h] BYREF

  v5 = a3;
  memset(v20, 0, sizeof(v20));
  v17[0] = 0;
  P[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ProbeForRead(a3, a4, 4u);
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    RtlCopyFromUser(v20, v5, 0x30uLL);
    v5 = v20;
  }
  if ( *((_DWORD *)v5 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = (void *)*((_QWORD *)v5 + 3);
  if ( !v8 || (result = PoCaptureReasonContext(v8, (__int64)v17, (__int64)P), (int)result >= 0) )
  {
    v9 = *((_QWORD *)v5 + 5);
    TolerableDelay = *((_DWORD *)v5 + 9);
    *(_DWORD *)&v17[4] = *((_DWORD *)v5 + 8);
    v11 = *((_QWORD *)v5 + 2);
    v12 = *((_QWORD *)v5 + 1);
    Object = 0LL;
    v13 = ObReferenceObjectByHandleWithTag(a1, 2u, 0LL, PreviousMode, 0x53695445u, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_10:
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x53695445u);
      if ( v13 < 0 || v13 == 1073741861 )
      {
        if ( P[0] )
          PoDestroyReasonContext(P[0]);
      }
      return (unsigned int)v13;
    }
    v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v15 == ExpIRTimerObjectType )
    {
      if ( v12 || v11 || P[0] || TolerableDelay || v9 )
      {
        v13 = -1073741811;
        goto LABEL_10;
      }
      v16 = ExpSetTimerObject2((__int64)Object, (__int64 *)v5, 10000LL * *(unsigned int *)&v17[4], 0LL);
    }
    else
    {
      if ( v15 != (struct _OBJECT_TYPE *)ExTimerObjectType )
      {
        v13 = -1073741788;
        goto LABEL_10;
      }
      v16 = ExpSetTimerObject((PKTIMER)Object, v11, (__int64)P[0], v17[0], *(int *)&v17[4], TolerableDelay, v9);
    }
    v13 = v16;
    goto LABEL_10;
  }
  return result;
}
