/*
 * XREFs of EtwpStackWalkApc @ 0x14020A2E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpStackWalkApc(__int16 **a1, __int64 a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r10
  __int16 *v7; // rdi
  char v8; // cl
  __int64 result; // rax
  __int64 v10; // [rsp+90h] [rbp-2D8h] BYREF
  _BYTE v11[40]; // [rsp+A0h] [rbp-2C8h] BYREF
  GUID v12; // [rsp+C8h] [rbp-2A0h]
  __int64 v13; // [rsp+F0h] [rbp-278h]
  int v14; // [rsp+120h] [rbp-248h]
  char v15; // [rsp+124h] [rbp-244h]
  __int16 v16; // [rsp+126h] [rbp-242h]
  int v17; // [rsp+128h] [rbp-240h]
  __m128i si128; // [rsp+130h] [rbp-238h]
  __int64 v19; // [rsp+328h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
  v8 = *a3;
  HIDWORD(v10) = *a4;
  LODWORD(v10) = *a5;
  result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
  if ( (result & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_4;
  }
  else
  {
    if ( !v8 )
    {
      EtwpTraceStackWalk(v7, 4096LL, CurrentThread, &v10);
LABEL_4:
      result = ((unsigned __int16)v7[409] & 7u) + 24;
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), result);
      return result;
    }
    memset_0(v11, 0, 0x2A8uLL);
    v13 = v10;
    v12 = EventTracingProvGuid;
    v19 = *((_QWORD *)v7 + 170);
    v16 = *v7;
    v14 = 1;
    v17 = 68;
    v15 = -1;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    return EtwpEventWriteFull(
             (unsigned int)v11,
             1,
             0,
             0,
             (__int64)ETW_EVENT_USER_STACK_TRACE,
             0,
             0,
             0LL,
             0LL,
             0,
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  }
  return result;
}
