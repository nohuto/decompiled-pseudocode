/*
 * XREFs of ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x14008BB90
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14008A4E0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x14008B838 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x14008CBA0 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x14024A518 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::BufferCache::AllocUninitialized(unsigned __int16 a1, void **a2)
{
  int v3; // esi
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int16 *v6; // rcx
  unsigned __int16 *v7; // r8
  unsigned __int16 *v8; // rbx
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v13; // esi
  int v14; // eax
  unsigned __int16 *v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = a1;
  v4 = ((__int64 (*)(void))W32GetUserCoreMessagingSessionState)();
  v5 = 0;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int16 **)(v4 + 16);
  v9 = v8;
  if ( !v8 )
    goto LABEL_13;
  do
  {
    v10 = *v9;
    if ( (unsigned __int16)v10 >= (unsigned __int16)v3 && (unsigned __int16)v10 < *v8 )
    {
      v8 = v9;
      v6 = v7;
    }
    v7 = v9;
    v9 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
  }
  while ( v9 );
  if ( v8 && *v8 >= (unsigned __int16)v3 )
  {
    v11 = *((_QWORD *)v8 + 1);
    if ( v6 )
      *((_QWORD *)v6 + 1) = v11;
    else
      *(_QWORD *)(W32GetUserCoreMessagingSessionState(0LL, v10, v7) + 16) = v11;
  }
  else
  {
LABEL_13:
    v13 = v3 + 512;
    if ( v13 >= 0xFFFF )
      LOWORD(v13) = -1;
    v15 = 0LL;
    v14 = CoreMessagingK::Runtime::AllocUninitialized((unsigned __int16)v13 + 16LL, 1128418627LL, &v15);
    if ( v14 < 0 )
      return (unsigned int)v14;
    v8 = v15;
    *v15 = v13;
  }
  *((_QWORD *)v8 + 1) = 0LL;
  *a2 = v8 + 8;
  return v5;
}
