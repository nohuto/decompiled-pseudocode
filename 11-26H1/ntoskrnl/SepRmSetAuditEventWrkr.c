/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x140B3F020
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  void **p_StackBase; // rdx
  _LIST_ENTRY *v6; // rsi
  __int64 v7; // r14
  unsigned int Flink_low; // edi
  __int16 v9; // r8
  __int16 v10; // cx
  __int64 v11; // rbp
  int v12; // r8d
  int v13; // r9d

  v3 = 0;
  *(_DWORD *)(a2 + 40) = 0;
  LOBYTE(v4) = PsIsCurrentThreadInServerSilo();
  if ( !(_BYTE)v4 )
  {
    p_StackBase = &SepRmCapTableLock.StackBase;
    v6 = &ExpPlatformBinaryLock.ApcState.ApcListHead[1];
    v7 = 9LL;
    do
    {
      Flink_low = LOWORD(v6->Flink);
      v9 = 0;
      *(_DWORD *)p_StackBase = 0;
      v10 = 0;
      if ( !(_WORD)Flink_low )
        goto LABEL_14;
      v11 = Flink_low;
      do
      {
        *((_WORD *)&SepRmCapTableLock.MiscFlags + v3 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 1) != 0 )
        {
          *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v3 + 4) = 1;
          ++v9;
        }
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 2) != 0 )
        {
          *((_BYTE *)&SepRmCapTableLock.MiscFlags + 2 * v3 + 5) = 1;
          ++v10;
        }
        ++v3;
        --v11;
      }
      while ( v11 );
      if ( v9 )
      {
        if ( v9 == (_WORD)Flink_low )
        {
          v4 = 65;
          v12 = 17;
          v13 = 33;
        }
        else
        {
          v4 = 66;
          v12 = 18;
          v13 = 34;
        }
      }
      else
      {
LABEL_14:
        v4 = 68;
        v12 = 20;
        v13 = 36;
      }
      if ( v10 )
      {
        v4 = v13;
        if ( v10 == (_WORD)Flink_low )
          v4 = v12;
      }
      *(_DWORD *)p_StackBase = v4;
      v6 = (_LIST_ENTRY *)((char *)v6 + 2);
      p_StackBase = (void **)((char *)p_StackBase + 4);
      --v7;
    }
    while ( v7 );
    HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) = 1;
  }
  return v4;
}
