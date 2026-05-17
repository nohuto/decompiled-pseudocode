/*
 * XREFs of RtlpHpEnvThreadSuspend @ 0x18010C3F0
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     NtChangeThreadState @ 0x180160250 (NtChangeThreadState.c)
 *     ZwCreateThreadStateChange @ 0x180160870 (ZwCreateThreadStateChange.c)
 *     ZwOpenThread @ 0x180161670 (ZwOpenThread.c)
 */

__int64 __fastcall RtlpHpEnvThreadSuspend(unsigned int a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // edi
  int v8; // ebx
  void *v9; // rcx
  void *v10; // r10
  void *v12; // [rsp+30h] [rbp-49h] BYREF
  void *v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-31h] BYREF
  int v16; // [rsp+50h] [rbp-29h]
  int v17; // [rsp+54h] [rbp-25h]
  _QWORD v18[2]; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v20[4]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+E0h] [rbp+67h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v18[0] = 0LL;
  v18[1] = a1;
  memset(&v20[1], 0, 24);
  v20[0] = 48LL;
  v7 = 0;
  v21 = 0LL;
  v8 = ZwOpenThread(&v12, 2106LL, v20, v18);
  if ( v8 < 0 )
    goto LABEL_11;
  v8 = ZwCreateThreadStateChange(&v13, 983041LL, 0LL, v12, 0);
  if ( v8 < 0 )
    goto LABEL_11;
  v19[0] = 1LL;
  v19[1] = -20000000LL;
  v8 = NtChangeThreadState(v13, v12, 0LL, v19, 16, 1);
  if ( v8
    || (v7 = 1,
        v14 = 0LL,
        v15 = &v14,
        v17 = 8,
        v16 = 592,
        v8 = ZwQueryInformationThread(v12, 58LL, &v15, 16LL, 0LL),
        v8 < 0) )
  {
LABEL_11:
    v9 = v12;
  }
  else
  {
    v9 = v12;
    if ( v14 != a2 )
    {
      v22 = 0;
      ZwQueryInformationThread(v12, 33LL, &v22, 4LL, 0LL);
      v9 = 0LL;
      *a3 = v12;
      v10 = 0LL;
      v8 = 0;
      a3[1] = v13;
      *a4 = BYTE2(v22);
      v12 = 0LL;
      v13 = 0LL;
      goto LABEL_7;
    }
    v8 = -2147483631;
  }
  v10 = v13;
LABEL_7:
  if ( v10 )
  {
    if ( v7 )
    {
      NtChangeThreadState(v10, v9, 1LL, 0LL, 0, 0);
      v10 = v13;
    }
    NtClose(v10);
    v9 = v12;
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v8;
}
