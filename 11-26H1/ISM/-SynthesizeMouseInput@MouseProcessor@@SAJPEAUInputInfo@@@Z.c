/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18019C5F0
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800BA83C (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18019BCF0 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  bool v1; // cf
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+2Ch] [rbp-24h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  __int16 v9; // [rsp+38h] [rbp-18h]
  __int16 v10; // [rsp+3Ah] [rbp-16h]
  __int16 v11; // [rsp+3Ch] [rbp-14h]
  __int16 v12; // [rsp+3Eh] [rbp-12h]
  int v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+44h] [rbp-Ch]
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v5 = *((unsigned int *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v8 = *((_QWORD *)a1 + 2);
  v9 = *((_WORD *)a1 + 45);
  v10 = *((_WORD *)a1 + 46);
  v11 = *((_WORD *)a1 + 47);
  v13 = *((_DWORD *)a1 + 25);
  v14 = *((_DWORD *)a1 + 26);
  v1 = *((_BYTE *)a1 + 122) != 0;
  v15 = 0LL;
  v7 = 0;
  v12 = 0;
  v2 = (v1 ? 27 : 11) | 0x20;
  if ( !*((_BYTE *)a1 + 120) )
    v2 = v1 ? 27 : 11;
  v3 = v2;
  LODWORD(v3) = v2 | 0x80;
  if ( !*((_BYTE *)a1 + 124) )
    v3 = v2;
  LODWORD(v15) = *((_DWORD *)a1 + 19) != 0;
  return (unsigned int)NtMITSynthesizeMouseInput(&v5, v3, &v15) == 0 ? 0x80070057 : 0;
}
