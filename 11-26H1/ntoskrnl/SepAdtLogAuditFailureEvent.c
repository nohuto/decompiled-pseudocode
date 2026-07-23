/*
 * XREFs of SepAdtLogAuditFailureEvent @ 0x140818C54
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SepAdtLogAuditFailureEvent(unsigned int a1, char a2)
{
  __int64 v3; // rdi
  unsigned __int32 v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  _DWORD Src[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+30h] [rbp-D0h]
  int v11; // [rsp+34h] [rbp-CCh]
  _DWORD v12[258]; // [rsp+38h] [rbp-C8h]

  v3 = a1;
  memset_0(Src, 0, 0x418uLL);
  if ( !*((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 4)
    || a2
    || RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue >= 0x32 )
  {
    v10 = 524390;
    *((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 4) = 1;
    Src[0] = 1;
    Src[1] = 521;
    v11 = 2;
    v4 = _InterlockedExchange((volatile __int32 *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue, 0);
    v5 = *(__int64 *)((char *)&RtlpBootStatHandleLock.116 + 4);
    if ( a2 )
    {
      v11 = 18;
LABEL_7:
      v12[8 * v9] = 4;
      v12[8 * v9 + 1] = 4 * *(unsigned __int8 *)(v5 + 1) + 8;
      *(_QWORD *)&v12[8 * v9++ + 6] = v5;
      v12[8 * v9] = 1;
      v12[8 * v9 + 1] = 32;
      *(_QWORD *)&v12[8 * v9++ + 6] = &SeSubsystemName;
      v12[8 * v9] = 10;
      v12[8 * v9 + 1] = 4;
      *(_QWORD *)&v12[8 * v9++ + 2] = v3;
      v12[8 * v9] = 3;
      v6 = *((unsigned __int8 *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 5);
      v12[8 * v9 + 1] = 1;
      *(_QWORD *)&v12[8 * v9++ + 2] = v6;
      v12[8 * v9] = 3;
      v12[8 * v9 + 1] = 4;
      *(_QWORD *)&v12[8 * v9++ + 2] = v4;
      SepAdtLogAuditRecord(Src);
      return 0LL;
    }
    if ( v4 )
      goto LABEL_7;
  }
  return 0LL;
}
