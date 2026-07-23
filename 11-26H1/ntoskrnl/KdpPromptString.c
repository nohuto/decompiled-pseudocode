/*
 * XREFs of KdpPromptString @ 0x140C1CBD4
 * Callers:
 *     KdpPrompt @ 0x140C1BEBC (KdpPrompt.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140C1D780 (KdpCopyMemoryChunks.c)
 */

char __fastcall KdpPromptString(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned int v8; // [rsp+30h] [rbp-40h] BYREF
  __int128 v9; // [rsp+38h] [rbp-38h] BYREF
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-18h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  unsigned int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  KdpCopyMemoryChunks(v3, (unsigned int)&KdpMessageBuffer, v2, 0, 4, (__int64)&v8);
  if ( (unsigned __int64)v8 + 16 > (unsigned int)KdTransportMaxPacketSize )
    v8 = KdTransportMaxPacketSize - 16;
  v12 = KeProcessorLevel;
  v11 = 12849;
  Number = KeGetPcr()->Prcb.Number;
  v15 = *(unsigned __int16 *)(a2 + 2);
  v14 = v8;
  LOWORD(v9) = v8;
  *((_QWORD *)&v10 + 1) = &v11;
  LOWORD(v10) = 16;
  *((_QWORD *)&v9 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v10, &v9, &KdpContext);
  WORD1(v10) = 16;
  WORD1(v9) = 12288;
  do
  {
    v5 = KdReceivePacket(3LL, &v10, &v9, &v8, &KdpContext);
    if ( v5 == 2 )
      return 1;
  }
  while ( v5 );
  v6 = v8;
  if ( v8 > *(unsigned __int16 *)(a2 + 2) )
  {
    v6 = *(unsigned __int16 *)(a2 + 2);
    v8 = v6;
  }
  KdpCopyMemoryChunks(*(_QWORD *)(a2 + 8), (unsigned int)&KdpMessageBuffer, v6, 0, 5, (__int64)&v8);
  *(_WORD *)a2 = v8;
  return 0;
}
