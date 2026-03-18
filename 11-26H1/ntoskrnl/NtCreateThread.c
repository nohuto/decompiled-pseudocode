/*
 * XREFs of NtCreateThread @ 0x1407EFC80
 * Callers:
 *     DifNtCreateThreadWrapper @ 0x140674030 (DifNtCreateThreadWrapper.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403D3D90 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     PspCreateThread @ 0x140A0175C (PspCreateThread.c)
 */

__int64 __fastcall NtCreateThread(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        volatile void *Address,
        _BYTE *a6,
        __int128 *a7,
        char a8)
{
  _BYTE *v9; // rbx
  __int64 result; // rax
  char PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  _KPROCESS *Process; // rcx
  __int16 v17; // ax
  bool v18; // zf
  char v19; // al
  __int128 v23; // [rsp+B0h] [rbp-588h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-578h]
  __int64 v25; // [rsp+D0h] [rbp-568h]
  __int128 v26; // [rsp+D8h] [rbp-560h]
  __int64 v27; // [rsp+E8h] [rbp-550h]
  char v28; // [rsp+100h] [rbp-538h] BYREF
  __int128 v29; // [rsp+101h] [rbp-537h]
  __int64 v30; // [rsp+111h] [rbp-527h]
  _BYTE v31[152]; // [rsp+120h] [rbp-518h] BYREF
  unsigned __int64 v32; // [rsp+1B8h] [rbp-480h]

  v9 = a6;
  memset_0(&v23, 0, 0x48uLL);
  v29 = 0LL;
  v30 = 0LL;
  if ( !a6 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
    if ( Address )
      ProbeForWrite(Address, 0x10uLL, 4u);
    ProbeForRead(a6, 1uLL, 0x10u);
    v13 = v31;
    v14 = 9LL;
    do
    {
      *v13 = *(_OWORD *)v9;
      v13[1] = *((_OWORD *)v9 + 1);
      v13[2] = *((_OWORD *)v9 + 2);
      v13[3] = *((_OWORD *)v9 + 3);
      v13[4] = *((_OWORD *)v9 + 4);
      v13[5] = *((_OWORD *)v9 + 5);
      v13[6] = *((_OWORD *)v9 + 6);
      v13 += 8;
      *(v13 - 1) = *((_OWORD *)v9 + 7);
      v9 += 128;
      --v14;
    }
    while ( v14 );
    *v13 = *(_OWORD *)v9;
    v13[1] = *((_OWORD *)v9 + 1);
    v13[2] = *((_OWORD *)v9 + 2);
    v13[3] = *((_OWORD *)v9 + 3);
    v13[4] = *((_OWORD *)v9 + 4);
    v9 = v31;
    v32 = (v32 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
    ProbeForRead(a7, 1uLL, 4u);
  }
  result = RtlpSanitizeContextFlags((unsigned int *)v9 + 12, PreviousMode);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)v9 + 12) &= 0x10001Fu;
    *a1 = 0LL;
    v15 = *a7;
    v23 = *a7;
    if ( v23 == 0 )
    {
      v23 = v15;
      v24 = a7[1];
      v25 = *((_QWORD *)a7 + 4);
      if ( v25 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process[1].ReadyTime )
        {
          v17 = WORD2(Process[3].PerProcessorCycleTimes);
          if ( v17 == 332 || (v18 = v17 == 452, v19 = 0, v18) )
            v19 = 1;
          if ( v19 )
          {
            v27 = v25;
            v26 = v24;
            v25 = 0LL;
            v24 = 0LL;
          }
        }
        v28 = 1;
        return PspCreateThread(a1, a2, a3, a4, 0LL, 0LL, Address, v9, &v23, a8 == 1, 0LL, 0LL, &v28);
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
