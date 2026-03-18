/*
 * XREFs of ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x14008BA40
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14008A4E0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x14008B838 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14024A560 (-CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400DA344 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@2@0@Z @ 0x14014A5A4 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@2@0@Z.c)
 */

void __fastcall CoreMessagingK::BufferCache::Free(char *a1)
{
  __int64 UserCoreMessagingSessionState; // rax
  __int64 v3; // rdi
  struct CoreMessagingK::BufferHeader *v4; // r8
  char *v5; // rbx
  struct CoreMessagingK::BufferHeader *v6; // rdx
  struct CoreMessagingK::BufferHeader *v7; // r11
  int v8; // r10d
  struct CoreMessagingK::BufferHeader *v9; // rsi
  struct CoreMessagingK::BufferHeader *v10; // r9

  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState();
  v3 = UserCoreMessagingSessionState;
  if ( a1 )
  {
    v4 = *(struct CoreMessagingK::BufferHeader **)(UserCoreMessagingSessionState + 16);
    v5 = a1 - 16;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0;
    v9 = v4;
    v10 = v4;
    if ( !v4 )
      goto LABEL_8;
    do
    {
      ++v8;
      if ( *(_WORD *)v10 < *(_WORD *)v9 )
        v9 = v10;
      else
        v7 = v6;
      v6 = v7;
      v7 = v10;
      v10 = (struct CoreMessagingK::BufferHeader *)*((_QWORD *)v10 + 1);
    }
    while ( v10 );
    if ( v8 == 2 )
    {
      if ( *(_WORD *)v9 >= *(_WORD *)v5 )
      {
        CoreMessagingK::Runtime::Free(v5, 1128418627LL);
      }
      else
      {
        CoreMessagingK::BufferCache::Remove(v9, v6);
        CoreMessagingK::Runtime::Free(v9, 1128418627LL);
        *((_QWORD *)v5 + 1) = *(_QWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 16) = v5;
      }
    }
    else
    {
LABEL_8:
      *((_QWORD *)v5 + 1) = v4;
      *(_QWORD *)(UserCoreMessagingSessionState + 16) = v5;
    }
  }
}
