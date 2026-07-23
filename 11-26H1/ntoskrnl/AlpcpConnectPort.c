/*
 * XREFs of AlpcpConnectPort @ 0x1408EF8A0
 * Callers:
 *     NtAlpcConnectPortEx @ 0x1408EF230 (NtAlpcConnectPortEx.c)
 *     NtAlpcConnectPort @ 0x1408EF820 (NtAlpcConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpConnectPort(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *Src,
        int a6,
        PVOID a7,
        PVOID a8,
        char *a9,
        _QWORD *a10,
        __int64 a11,
        _DWORD *a12,
        __int64 *a13)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  unsigned int v16; // r13d
  __int64 ULong64FromUser; // rax
  int ClientPort; // ebx
  _QWORD *v20; // rsi
  int v21; // [rsp+20h] [rbp-168h]
  PVOID Object; // [rsp+68h] [rbp-120h] BYREF
  HANDLE Handle[5]; // [rsp+70h] [rbp-118h] BYREF
  PVOID P; // [rsp+98h] [rbp-F0h] BYREF
  PVOID v25; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-E0h]
  __int64 v27; // [rsp+B0h] [rbp-D8h]
  __int64 v28; // [rsp+B8h] [rbp-D0h]
  __int64 *v29; // [rsp+C0h] [rbp-C8h]
  _DWORD *v30; // [rsp+C8h] [rbp-C0h]
  __int64 v31; // [rsp+D0h] [rbp-B8h]
  _QWORD *v32; // [rsp+D8h] [rbp-B0h]
  char *v33; // [rsp+E0h] [rbp-A8h]
  _QWORD *v34; // [rsp+E8h] [rbp-A0h]
  _OWORD v35[4]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v36; // [rsp+130h] [rbp-58h]

  v26 = a4;
  v27 = a3;
  v28 = a2;
  v34 = a1;
  Handle[3] = a7;
  Handle[4] = a8;
  v33 = a9;
  v32 = a10;
  v31 = a11;
  v30 = a12;
  v29 = a13;
  Object = 0LL;
  Handle[0] = 0LL;
  memset_0(v35, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = a6 & 0xFFFF0000;
  P = a8;
  v25 = a7;
  if ( !PreviousMode )
  {
    if ( Src )
    {
      v35[0] = *Src;
      v35[1] = Src[1];
      v35[2] = Src[2];
      v35[3] = Src[3];
      v36 = *((_QWORD *)Src + 8);
    }
    goto LABEL_10;
  }
  ULong64FromUser = RtlReadULong64FromUser(a1);
  RtlWriteULong64ToUser(a1, ULong64FromUser);
  if ( Src )
    RtlCopyFromUser(v35, Src, 0x48uLL);
  if ( !a8 || (ClientPort = SeCaptureSid(a8, v21, 1, (__int64)&P), ClientPort >= 0) )
  {
    if ( !a7 || (ClientPort = SeCaptureSecurityDescriptor(a7, (__int64)&v25), ClientPort >= 0) )
    {
LABEL_10:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)Handle,
                     (unsigned int)&Object,
                     v16,
                     v28,
                     v27,
                     v26,
                     (unsigned __int64)v35 & -(__int64)(Src != 0LL),
                     (__int64)v25,
                     (__int64)P,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v20 = Object;
        ClientPort = AlpcpProcessConnectionRequest((__int64)Object, v16, v33, v32, v31, v30, v29, PreviousMode);
        if ( ClientPort == -1073741759 && (v20[52] & 0x100) != 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, v20[7]);
          else
            *a1 = v20[7];
        }
        if ( !ClientPort )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, (__int64)Handle[0]);
          else
            *a1 = Handle[0];
        }
        ObfDereferenceObject(v20);
        if ( ClientPort )
          NtClose(Handle[0]);
      }
    }
  }
  if ( P && (unsigned __int8)PreviousMode <= 1u && P != a8 )
    ExFreePoolWithTag(P, 0);
  if ( v25 && v25 != a7 && PreviousMode == 1 )
    ExFreePoolWithTag(v25, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)ClientPort;
}
