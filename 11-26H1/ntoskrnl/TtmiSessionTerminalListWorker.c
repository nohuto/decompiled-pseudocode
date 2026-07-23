/*
 * XREFs of TtmiSessionTerminalListWorker @ 0x1407F1C68
 * Callers:
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmiEvacuateDevices @ 0x1407EAD10 (TtmiEvacuateDevices.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x1407EC1F0 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1407EC64C (TtmiUpdateActiveTerminalCount.c)
 *     TtmiWriteEventToAllQueues @ 0x1407EC734 (TtmiWriteEventToAllQueues.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1407ECA28 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogTerminalCleanup @ 0x1407F08D4 (TtmiLogTerminalCleanup.c)
 *     TtmiLogTerminalDisplayStateChangedEvent @ 0x1407F0B04 (TtmiLogTerminalDisplayStateChangedEvent.c)
 *     TtmpUpdateTerminalState @ 0x1407F2640 (TtmpUpdateTerminalState.c)
 */

void __fastcall TtmiSessionTerminalListWorker(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  char v5; // r15
  char v8; // r10
  unsigned int *v9; // r14
  _DWORD *v10; // rsi
  int v11; // eax
  unsigned int v12; // r8d
  void ***v13; // rax
  bool v14; // zf
  char v15; // dl
  char v16; // al
  _QWORD *v17; // rcx
  void **v18; // rax
  unsigned int v19; // eax
  __int64 *i; // rcx
  int v21; // edx
  int v22; // r8d
  void ***v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+3Ch] [rbp-C4h]
  int v27; // [rsp+40h] [rbp-C0h]
  char v28; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v29; // [rsp+2A8h] [rbp+1A8h] BYREF
  _BYTE *v30; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v31; // [rsp+2B8h] [rbp+1B8h]

  v30 = a3;
  v3 = a1 + 40;
  v29 = 0;
  v4 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  v28 = 0;
  *a2 = 0;
  *a3 = 0;
  if ( v4 != (_QWORD *)(a1 + 40) )
  {
    v8 = 1;
    do
    {
      v9 = (unsigned int *)v4 + 9;
      v10 = v4;
      v11 = *((_DWORD *)v4 + 9);
      if ( ((unsigned __int8)v11 & (unsigned __int8)v8) != 0 )
      {
        v12 = *((_DWORD *)v4 + 7);
        v13 = (void ***)(v4 + 1);
        v4 = (_QWORD *)v4[1];
        v23 = v13;
        v31 = v12;
        TtmiLogTerminalCleanup();
        if ( (*v9 & 0x10) != 0 )
        {
          v14 = TtmiUpdateActiveTerminalCount((_DWORD *)a1, 0, 26) == 0;
          v16 = v15 + 1;
          if ( !v14 )
            *a2 = v16;
        }
        else
        {
          v16 = 1;
        }
        if ( v10[8] )
          v5 = v16;
        if ( TtmiEvacuateDevices(a1, (__int64)v10) )
          *v30 = 1;
        v17 = *(_QWORD **)v10;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 || (v18 = *v23, **v23 != v10) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
        *((_QWORD *)v10 + 2) = 0LL;
        TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
        *(_BYTE *)(((unsigned __int64)v31 >> 3) + *(_QWORD *)(a1 + 64)) &= ~(1 << (v31 & 7));
        v19 = *v9 & 0xFFFFFFFE;
        *((_QWORD *)v10 + 2) = 0LL;
        v10[6] = 1417180244;
        *v9 = v19 | 2;
        ObfDereferenceObject(v10);
        v8 = 1;
      }
      else if ( (v11 & 4) != 0 )
      {
        *v9 = v11 & 0xFFFFFFFB;
        TtmpUpdateTerminalState(a1, v4, &v29, &v28);
        if ( v28 )
        {
          for ( i = *(__int64 **)(a1 + 96); i != (__int64 *)(a1 + 96); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 149) == *((_DWORD *)v4 + 7) )
              *((_DWORD *)i + 150) |= 0x40u;
          }
          memset_0(&v24, 0, 0x220uLL);
          v21 = *((_DWORD *)v4 + 69);
          v22 = *((_DWORD *)v4 + 70);
          v25 = *((_DWORD *)v4 + 7);
          v26 = v21;
          v27 = v22;
          v24 = 2;
          TtmiLogTerminalDisplayStateChangedEvent(v25, v21, v22);
          TtmiWriteEventToAllQueues(a1, (__int64)&v24);
          v8 = 1;
          *v30 = 1;
        }
        else
        {
          v8 = 1;
        }
        if ( v29 && TtmiUpdateActiveTerminalCount((_DWORD *)a1, (*((_DWORD *)v4 + 9) & 0x10) != 0, *((_DWORD *)v4 + 11)) )
          *a2 = v8;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != (_QWORD *)v3 );
    if ( v5 )
      TtmiPurgeSessionPowerRequestEntries(a1);
  }
}
