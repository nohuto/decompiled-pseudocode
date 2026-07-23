/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x140C1AA2C
 * Callers:
 *     KdpSymbol @ 0x140C1C018 (KdpSymbol.c)
 * Callees:
 *     KdpSetCommonState @ 0x140503B74 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x140C1D4E8 (KdpSetContextState.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(unsigned __int16 *a1, __int64 *a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  char v19; // [rsp+90h] [rbp-70h]

  v11 = 0LL;
  v12 = 0LL;
  memset_0(v13, 0, 0xF0uLL);
  do
  {
    KdpSetCommonState(12337, a4, (__int64)v13);
    KdpSetContextState(v13, a4);
    v15 = *a2;
    v16 = *((unsigned int *)a2 + 2);
    v17 = *((_DWORD *)a2 + 4);
    v18 = *((_DWORD *)a2 + 5);
    v19 = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), (unsigned int)KdpPathBuffer, *a1, 0, 4, (__int64)&v14);
      v9 = &v11;
      *((_QWORD *)&v11 + 1) = KdpPathBuffer;
      LOWORD(v11) = ++v14;
      KdpPathBuffer[(unsigned __int16)v14 - 1] = 0;
    }
    else
    {
      v14 = 0;
      v9 = 0LL;
    }
    LOWORD(v12) = 240;
    *((_QWORD *)&v12 + 1) = v13;
    result = KdpSendWaitContinue(v8, &v12, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
