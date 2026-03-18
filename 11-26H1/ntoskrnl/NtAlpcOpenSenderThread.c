/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1408E5160
 * Callers:
 *     DifNtAlpcOpenSenderThreadWrapper @ 0x14066D150 (DifNtAlpcOpenSenderThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1408E68E0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1409BEA70 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v10; // ebx
  int v11; // r9d
  __int64 ULong64FromUser; // rax
  PVOID v13; // rdi
  ULONG_PTR v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int Object; // [rsp+20h] [rbp-98h]
  int HandleInformation; // [rsp+28h] [rbp-90h]
  PVOID v20; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-68h] BYREF
  __int128 v23; // [rsp+58h] [rbp-60h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  __int64 v25; // [rsp+78h] [rbp-40h]
  __int128 v26; // [rsp+80h] [rbp-38h] BYREF
  __int128 v27; // [rsp+90h] [rbp-28h]
  __int128 v28; // [rsp+A0h] [rbp-18h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v28 = 0LL;
  DWORD2(v28) = 0;
  v21 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = 0LL;
  v10 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &v20, 0LL);
  if ( v10 >= 0 )
  {
    if ( PreviousMode )
    {
      ULong64FromUser = RtlReadULong64FromUser(a1);
      RtlWriteULong64ToUser(a1, ULong64FromUser);
      AlpcpProbeAndCaptureMessageHeader(a3, &v23);
      RtlCopyFromUser(&v26, Src, 0x30uLL);
    }
    else
    {
      v23 = *a3;
      v24 = a3[1];
      v25 = *((_QWORD *)a3 + 4);
      v26 = *Src;
      v27 = Src[1];
      v28 = Src[2];
    }
    v13 = v20;
    v10 = AlpcpLookupMessage((_DWORD)v20, DWORD2(v24), v25, v11, (__int64)&BugCheckParameter2);
    if ( v10 < 0 )
    {
      ObfDereferenceObject(v13);
    }
    else
    {
      v14 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v13);
        v10 = -1073740029;
      }
      else
      {
        v15 = *(_QWORD **)(BugCheckParameter2 + 32);
        if ( !v15 )
          goto LABEL_16;
        v16 = v15[161] - *((_QWORD *)&v23 + 1);
        if ( !v16 )
          v16 = v15[162] - v24;
        if ( v16 )
        {
LABEL_16:
          AlpcpUnlockMessage(BugCheckParameter2);
          ObfDereferenceObject(v13);
          v10 = -1073741790;
        }
        else
        {
          PsReferenceSiloContext(*(void **)(BugCheckParameter2 + 32));
          AlpcpUnlockMessage(v14);
          LOBYTE(HandleInformation) = PreviousMode;
          LOBYTE(Object) = 0;
          v10 = PsOpenThread(&v21, a5, &v26, (char *)&v23 + 8, Object, HandleInformation);
          ObfDereferenceObject(v15);
          ObfDereferenceObject(v13);
          if ( v10 >= 0 )
          {
            if ( PreviousMode )
              RtlWriteULong64ToUser(a1, v21);
            else
              *a1 = v21;
          }
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
