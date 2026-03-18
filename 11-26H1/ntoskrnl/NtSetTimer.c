/*
 * XREFs of NtSetTimer @ 0x140436D00
 * Callers:
 *     DifNtSetTimerWrapper @ 0x14068E520 (DifNtSetTimerWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1408F9EF0 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtSetTimer(HANDLE Handle, __int64 *a2, __int64 a3, __int64 a4, char a5, unsigned int a6, __int64 a7)
{
  __int64 *v7; // r12
  HANDLE v8; // rbx
  char v9; // r15
  PVOID v10; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  char v12; // al
  int v13; // ebx
  PVOID v14; // rdi
  __int64 result; // rax
  struct _OBJECT_TYPE *v16; // rax
  char v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+54h] [rbp-44h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-38h] BYREF

  v7 = a2;
  v8 = Handle;
  v20[0] = 0LL;
  v9 = 0;
  v17 = 0;
  v10 = 0LL;
  Object = 0LL;
  LOBYTE(Handle) = 0;
  v18 = (int)Handle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v20[0] = RtlReadULong64FromUser(a2);
    v7 = v20;
    v20[1] = v20;
    v12 = a5;
    LOBYTE(Handle) = v18;
  }
  else
  {
    v12 = a5;
    if ( a5 )
    {
      LOBYTE(Handle) = BYTE1(stru_140F10828.WriteOperationCount) != 0;
      v18 = BYTE1(stru_140F10828.WriteOperationCount) != 0;
    }
  }
  if ( (a6 & 0x80000000) != 0 )
    return 3221225716LL;
  if ( v12 && !(_BYTE)Handle )
  {
    result = PoCaptureReasonContext(0LL, (__int64)&v17, (__int64)&Object);
    if ( (int)result < 0 )
      return result;
    v9 = v17;
    v10 = Object;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandleWithTag(v8, 2u, 0LL, PreviousMode, 0x53695445u, &Object, 0LL);
  v14 = Object;
  if ( v13 >= 0 )
  {
    v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v16 == ExpIRTimerObjectType )
    {
      if ( a3 || a4 || v10 || a7 )
        v13 = -1073741811;
      else
        v13 = ExpSetTimerObject2((__int64)Object, v7, 10000LL * a6, 0LL);
    }
    else if ( v16 == (struct _OBJECT_TYPE *)ExTimerObjectType )
    {
      v13 = ExpSetTimerObject((PKTIMER)Object, a4, (__int64)v10, v9, a6, 0, a7);
    }
    else
    {
      v13 = -1073741788;
    }
  }
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x53695445u);
  if ( (v13 < 0 || v13 == 1073741861) && v10 )
    PoDestroyReasonContext(v10);
  if ( v13 >= 0 )
  {
    if ( (_BYTE)v18 )
      return 1073741861;
  }
  return (unsigned int)v13;
}
