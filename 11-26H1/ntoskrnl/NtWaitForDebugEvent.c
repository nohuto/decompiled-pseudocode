/*
 * XREFs of NtWaitForDebugEvent @ 0x140AE94E0
 * Callers:
 *     DifNtWaitForDebugEventWrapper @ 0x140690FF0 (DifNtWaitForDebugEventWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     DbgkpOpenHandles @ 0x140AE97C4 (DbgkpOpenHandles.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x140AE9888 (DbgkpConvertKernelToUserStateChange.c)
 */

NTSTATUS __fastcall NtWaitForDebugEvent(HANDLE Handle, BOOLEAN a2, LARGE_INTEGER *a3, void *a4)
{
  __int64 v7; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  void *v11; // r13
  char *v12; // rsi
  NTSTATUS v13; // eax
  int v14; // edi
  char v15; // r15
  __int64 **v16; // r8
  __int64 *i; // rcx
  __int64 *v18; // rdi
  __int64 *j; // rdx
  bool v20; // sf
  _QWORD v22[2]; // [rsp+38h] [rbp-140h] BYREF
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  PVOID v24; // [rsp+50h] [rbp-128h]
  void *v25; // [rsp+58h] [rbp-120h]
  _QWORD *v26; // [rsp+60h] [rbp-118h]
  __int64 v27; // [rsp+68h] [rbp-110h]
  _BYTE Src[4]; // [rsp+70h] [rbp-108h] BYREF
  int v29; // [rsp+74h] [rbp-104h]

  v25 = a4;
  v22[0] = 0LL;
  v7 = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset_0(Src, 0, 0xB8uLL);
  if ( a3 )
  {
    if ( PreviousMode )
      ULong64FromUser = RtlReadULong64FromUser(a3);
    else
      ULong64FromUser = a3->QuadPart;
    v22[0] = ULong64FromUser;
    a3 = (LARGE_INTEGER *)v22;
    v26 = v22;
    v7 = MEMORY[0xFFFFF78000000014];
    v27 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
    ProbeForWrite(a4, 0xB8uLL, 1u);
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = 0LL;
    v24 = 0LL;
    v12 = (char *)Object;
    while ( 1 )
    {
      v13 = KeWaitForSingleObject(v12, Executive, PreviousMode, a2, a3);
      v14 = v13;
      if ( v13 <= -1 || v13 == 192 || (unsigned int)(v13 - 257) <= 1 )
        break;
      v15 = 0;
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v14 = -1073740972;
      }
      else
      {
        v16 = (__int64 **)(v12 + 80);
        for ( i = (__int64 *)*((_QWORD *)v12 + 10); i != (__int64 *)v16; i = (__int64 *)*i )
        {
          v18 = i;
          if ( (*((_DWORD *)i + 19) & 5) == 0 )
          {
            v15 = 1;
            for ( j = *v16; j != i; j = (__int64 *)*j )
            {
              if ( i[5] == j[5] )
              {
                *((_DWORD *)i + 19) |= 4u;
                i[10] = 0LL;
                v15 = 0;
                break;
              }
            }
            if ( v15 )
            {
              v11 = (void *)i[7];
              v24 = (PVOID)i[8];
              ObfReferenceObjectWithTag(v24, 0x4F676244u);
              ObfReferenceObjectWithTag(v11, 0x4F676244u);
              DbgkpConvertKernelToUserStateChange(Src, v18);
              *((_DWORD *)v18 + 19) |= 1u;
              goto LABEL_21;
            }
          }
        }
        KeResetEvent((PRKEVENT)v12);
LABEL_21:
        v14 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( v14 < 0 )
        break;
      if ( v15 )
      {
        DbgkpOpenHandles(Src, v11, v24);
        ObfDereferenceObjectWithTag(v24, 0x4F676244u);
        ObfDereferenceObjectWithTag(v11, 0x4F676244u);
        break;
      }
      if ( v22[0] < 0LL )
      {
        v20 = MEMORY[0xFFFFF78000000014] - v7 + v22[0] < 0;
        v22[0] += MEMORY[0xFFFFF78000000014] - v7;
        v7 = MEMORY[0xFFFFF78000000014];
        if ( !v20 )
        {
          v14 = 258;
          break;
        }
      }
    }
    ObfDereferenceObject(v12);
    if ( PreviousMode )
      RtlCopyToUser(v25, Src, 0xB8uLL);
    else
      RtlCopyVolatileMemory(v25, Src, 0xB8uLL);
    return v14;
  }
  return result;
}
