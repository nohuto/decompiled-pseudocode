/*
 * XREFs of NtCreateThreadEx @ 0x140A008A0
 * Callers:
 *     DifNtCreateThreadExWrapper @ 0x140673C80 (DifNtCreateThreadExWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateUserContext @ 0x1409FF750 (PspCreateUserContext.c)
 *     PspDeleteCreateProcessContext @ 0x140A00524 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x140A0175C (PspCreateThread.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateThreadEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void *Src)
{
  __int64 v13; // r12
  PVOID v14; // r15
  void *v15; // rdi
  __int64 result; // rax
  int Thread; // ebx
  PVOID v18; // rsi
  unsigned int v19; // r15d
  int v20; // r13d
  __int64 Pool2; // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 ULong64FromUser; // rax
  PVOID Object; // [rsp+70h] [rbp-288h] BYREF
  __int64 v26; // [rsp+78h] [rbp-280h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-278h]
  __int64 v28; // [rsp+88h] [rbp-270h]
  __int64 v29; // [rsp+90h] [rbp-268h]
  ULONG_PTR v30; // [rsp+98h] [rbp-260h]
  __int64 v31; // [rsp+A0h] [rbp-258h]
  _BYTE v32[24]; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-230h]

  v30 = a4;
  v31 = a3;
  v27 = a2;
  v28 = a5;
  v29 = a6;
  Object = 0LL;
  LODWORD(v26) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  memset_0(v32, 0, 0x1F8uLL);
  if ( !Src || (result = PspBuildCreateProcessContext(Src), (int)result >= 0) )
  {
    Thread = ObpReferenceObjectByHandleWithTag(
               a4,
               2LL,
               PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( Thread >= 0 )
    {
      v18 = Object;
      if ( (*((_BYTE *)Object + 368) & 1) != 0 )
      {
        v23 = v28;
      }
      else
      {
        v19 = (*((_DWORD *)Object + 469) & 0x4000) != 0 ? 0x800 : 0;
        v20 = (*((_DWORD *)Object + 469) & 0x4000) != 0 ? 1048651 : 1048587;
        RtlGetExtendedContextLength2(v20, &v26, v19);
        Pool2 = ExAllocatePool2(0x40uLL);
        v15 = (void *)Pool2;
        if ( !Pool2 )
        {
          Thread = -1073741670;
          goto LABEL_11;
        }
        v13 = Pool2 + 72;
        Object = (PVOID)(Pool2 + 112);
        *(_BYTE *)(Pool2 + 72) = 0;
        *(_QWORD *)(Pool2 + 88) = a9;
        *(_QWORD *)(Pool2 + 96) = a10;
        *(_QWORD *)(Pool2 + 80) = a8;
        v22 = stru_140FC01F0.TracingPrivate[0];
        RtlInitializeExtendedContext2(Pool2 + 112, v20, &v26, v19);
        v23 = v28;
        v14 = Object;
        PspCreateUserContext((__int64)Object, 1, v22, v28, v29);
      }
      ObfDereferenceObjectWithTag(v18, 0x72437350u);
      Thread = PspCreateThread(a1, v27, v31, v30, 0LL, v32, v33, v14, v15, a7, v23, v29, v13);
    }
LABEL_11:
    PspDeleteCreateProcessContext((__int64)v32);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    return (unsigned int)Thread;
  }
  return result;
}
