/*
 * XREFs of RhpCaptureSnapshots_0 @ 0x180097C44
 * Callers:
 *     ReportHangInternal @ 0x1800978D0 (ReportHangInternal.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x18009801C (RtlQueryResourcePolicy.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

NTSTATUS __fastcall RhpCaptureSnapshots_0(_QWORD *a1, _OWORD *a2, __m128i *a3, __int64 a4, int *a5)
{
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __m128i si128; // xmm1
  int *v11; // rbx
  void *v12; // rdx
  int v13; // eax
  void *v14; // rcx
  int v15; // ebx
  void *ProcessHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+78h] [rbp+38h] BYREF

  ProcessHandle = 0LL;
  v19 = 0;
  result = (unsigned int)memset_0(a1, 0, 0x80uLL);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v11 = a5;
  *a2 = 0LL;
  *a3 = si128;
  a3[1] = si128;
  a3[2] = si128;
  a3[3] = si128;
  if ( *v11 )
  {
    result = RtlQueryResourcePolicy(0LL, v9, &v19);
    if ( result < 0 || v19 > 10 )
    {
      ClientId.UniqueProcess = (HANDLE)*v11;
      ClientId.UniqueThread = 0LL;
      result = NtOpenProcess(&ProcessHandle, 0x4D0u, (POBJECT_ATTRIBUTES)&stru_1800C4DE0, &ClientId);
      a3->m128i_i32[0] = result;
      if ( result >= 0 )
      {
        v12 = ProcessHandle;
        *a1 = 0LL;
        v17 = 0LL;
        v13 = PssNtCaptureSnapshot(&v17, v12, 3690994175LL, 1048607LL);
        v14 = ProcessHandle;
        v15 = v13;
        a3->m128i_i32[0] = v13;
        result = NtClose(v14);
        if ( v15 >= 0 )
        {
          result = v17;
          *a1 = v17;
          *(_BYTE *)a2 = 8;
        }
      }
    }
    else
    {
      a3->m128i_i32[0] = -1073741801;
    }
  }
  return result;
}
