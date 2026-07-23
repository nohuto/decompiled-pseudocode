/*
 * XREFs of HalpExtRegisterResourceDescriptor @ 0x140589800
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpExtBuildResourceIdString @ 0x14058964C (HalpExtBuildResourceIdString.c)
 *     HalpRegisterDmaChannel @ 0x14058F438 (HalpRegisterDmaChannel.c)
 *     HalpRegisterDmaController @ 0x14058F548 (HalpRegisterDmaController.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpExtRegisterResourceDescriptor(unsigned int a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  ULONG_PTR *v8; // r14
  ULONG_PTR i; // rbx
  __int64 v10; // rcx
  ULONG_PTR v11; // rcx
  ULONG_PTR *v12; // rax
  ULONG_PTR *v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  int v16; // ecx
  size_t SizeInWords; // [rsp+38h] [rbp-100h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-E8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-D8h] BYREF

  DestinationString = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 >= *(_DWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[48] )
    return 3221225485LL;
  v7 = (unsigned __int64)a1 << 6;
  if ( !*((_BYTE *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr + v7) )
    return 3221225485LL;
  v8 = (ULONG_PTR *)((char *)HalpDeviceBlockUnblockPushLock.WaitBlock[0].SparePtr + v7 + 32);
  for ( i = *v8; (ULONG_PTR *)i != v8; i = *(_QWORD *)i )
  {
    v10 = *(_QWORD *)(i + 24);
    if ( *(_DWORD *)(v10 + 4) == *(_DWORD *)(a2 + 4)
      && *(_WORD *)(v10 + 12) == *(_WORD *)(a2 + 12)
      && *(_DWORD *)(v10 + 8) == *(_DWORD *)(a2 + 8)
      && *(_WORD *)(v10 + 14) == *(_WORD *)(a2 + 14)
      && *(_WORD *)(v10 + 16) == *(_WORD *)(a2 + 16)
      && *(_WORD *)(v10 + 18) == *(_WORD *)(a2 + 18)
      && *(_DWORD *)(i + 36) == *(_DWORD *)(a3 + 8) )
    {
      if ( *(int *)(i + 16) >= 0 )
        KeBugCheckEx(0x5Cu, 0x300uLL, i, a2, *(unsigned int *)(a3 + 8));
      v11 = *(_QWORD *)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) == i )
      {
        v12 = *(ULONG_PTR **)(i + 8);
        if ( *v12 == i )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          goto LABEL_21;
        }
      }
LABEL_22:
      __fastfail(3u);
    }
  }
  i = HalpMmAllocateMemoryInternal(40, 1u);
  if ( !i )
    return 3221225495LL;
LABEL_21:
  *(_QWORD *)(i + 24) = a2;
  *(_WORD *)(i + 32) = *(_WORD *)(a3 + 4);
  *(_WORD *)(i + 34) = *(_WORD *)(a3 + 6);
  *(_DWORD *)(i + 36) = *(_DWORD *)(a3 + 8);
  v13 = (ULONG_PTR *)v8[1];
  if ( (ULONG_PTR *)*v13 != v8 )
    goto LABEL_22;
  *(_QWORD *)i = v8;
  *(_QWORD *)(i + 8) = v13;
  *v13 = i;
  v8[1] = i;
  RtlInitUnicodeString(&DestinationString, L"Unknown Resource");
  v15 = *(_QWORD *)(i + 24);
  LODWORD(SizeInWords) = 75;
  if ( (int)HalpExtBuildResourceIdString(
              *(_DWORD *)(v15 + 4),
              *(_DWORD *)(v15 + 8),
              *(_WORD *)(v15 + 12),
              *(_WORD *)(v15 + 14),
              *(_WORD *)(v15 + 16),
              *(_WORD *)(v15 + 18),
              *(_DWORD *)(i + 36),
              SizeInWords,
              SourceString) >= 0 )
    RtlInitUnicodeString(&DestinationString, SourceString);
  v16 = *(_DWORD *)(a3 + 4);
  if ( v16 == 3 )
  {
    result = HalpRegisterDmaChannel(a4);
  }
  else if ( v16 == 65539 )
  {
    result = HalpRegisterDmaController(a4, &DestinationString);
  }
  else
  {
    result = 3221225474LL;
  }
  *(_DWORD *)(i + 16) = result;
  return result;
}
