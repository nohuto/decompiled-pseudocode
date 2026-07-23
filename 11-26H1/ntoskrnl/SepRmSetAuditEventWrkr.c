/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x140B41050
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  $241382875694CED3D471BC5892DE3337 *v5; // rdx
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
    v5 = &SepRmCapTableLock.152;
    v6 = &ExpPlatformBinaryLock.ApcState.ApcListHead[1];
    v7 = 9LL;
    do
    {
      Flink_low = LOWORD(v6->Flink);
      v9 = 0;
      LODWORD(v5->ApcState.ApcListHead[0].Flink) = 0;
      v10 = 0;
      if ( !(_WORD)Flink_low )
        goto LABEL_14;
      v11 = Flink_low;
      do
      {
        *((_WORD *)&SepRmCapTableLock.SListFaultAddress + v3) = 0;
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 1) != 0 )
        {
          *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v3) = 1;
          ++v9;
        }
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 2) != 0 )
        {
          *((_BYTE *)&SepRmCapTableLock.SListFaultAddress + 2 * v3 + 1) = 1;
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
      LODWORD(v5->ApcState.ApcListHead[0].Flink) = v4;
      v6 = (_LIST_ENTRY *)((char *)v6 + 2);
      v5 = ($241382875694CED3D471BC5892DE3337 *)((char *)v5 + 4);
      --v7;
    }
    while ( v7 );
    SepRmAuditingEnabled = 1;
  }
  return v4;
}
