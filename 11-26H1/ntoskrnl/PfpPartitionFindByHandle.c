/*
 * XREFs of PfpPartitionFindByHandle @ 0x140A5D140
 * Callers:
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionFromParent @ 0x14049C820 (PfpPartitionFromParent.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x1404AB540 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpTraceLogPartitionId @ 0x140602E30 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall PfpPartitionFindByHandle(__int64 *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  int v15; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+40h] [rbp-19h] BYREF
  int *v17; // [rsp+60h] [rbp+7h]
  __int64 v18; // [rsp+68h] [rbp+Fh]
  __int64 *v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+78h] [rbp+1Fh]

  v5 = a3;
  v14 = 0LL;
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)byte_140049C09, 0LL, 0LL, 2u, v16);
  LOBYTE(a3) = a4;
  v8 = PsReferencePartitionByHandle(v5, 1LL, a3, 1951426128LL, &v14);
  v9 = v14;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = PfpPartitionFromParent(v14);
    v12 = v11;
    if ( v11 )
    {
      PfpPartitionRundownProtectionAcquire(v11);
      *a1 = v12;
      *a2 = v9;
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741275;
    }
  }
  if ( (unsigned int)dword_140E07398 > 4 && (byte_140E073A8 & 1) != 0 && (qword_140E073B0 & 1) == qword_140E073B0 )
  {
    v15 = PfpTraceLogPartitionId(v9);
    v18 = 4LL;
    v17 = &v15;
    LODWORD(v14) = v10;
    v19 = &v14;
    v20 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)&byte_140049B3F, 0LL, 0LL, 4u, v16);
  }
  if ( v9 )
    PfpPartitionDereferenceParent(v9);
  return v10;
}
