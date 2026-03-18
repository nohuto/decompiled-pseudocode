/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x14003C62C
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x140010F00 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x14003CDFC (VidSchTimeoutSyncObject.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

char __fastcall VidSchiUnblockUnorderedWaiter(HwQueueStagingList *this, __int64 a2, char a3)
{
  unsigned __int64 *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // r8
  bool v13; // cf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = (unsigned __int64 *)&retaddr;
  v4 = (_QWORD *)(a2 + 224);
  v6 = *(_QWORD **)(a2 + 224);
  while ( v6 != v4 )
  {
    v9 = v6 - 37;
    v6 = (_QWORD *)*v6;
    if ( a3 )
      goto LABEL_18;
    if ( *(_DWORD *)(a2 + 48) == 2 )
    {
      if ( *(_BYTE *)(a2 + 28) )
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL);
      else
        v10 = *(_QWORD *)(a2 + 72);
      v11 = v9 + 41;
      if ( v9[41] > v10 )
        goto LABEL_10;
LABEL_18:
      LOBYTE(v3) = VidSchiUnblockUnorderedWaitQueuePacket(this);
    }
    else
    {
      v11 = v9 + 41;
LABEL_10:
      LODWORD(v3) = *(_DWORD *)(a2 + 48);
      if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 5 )
      {
        v12 = *v11;
        if ( *(_BYTE *)(a2 + 29) )
        {
LABEL_17:
          LODWORD(v3) = *((_DWORD *)v9 + 70);
          if ( ((unsigned __int8)v3 & 4) != 0 )
            goto LABEL_18;
        }
        else
        {
          v3 = *(unsigned __int64 **)(a2 + 72);
          if ( *(_BYTE *)(a2 + 30) )
          {
            v13 = *v3 < v12;
            LOBYTE(v3) = *v3 >= v12;
            if ( !v13 )
              goto LABEL_17;
          }
          else if ( *(_DWORD *)v3 - (int)v12 >= 0 )
          {
            goto LABEL_17;
          }
        }
      }
    }
  }
  return (char)v3;
}
