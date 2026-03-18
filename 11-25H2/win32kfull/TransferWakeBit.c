/*
 * XREFs of TransferWakeBit @ 0x140120600
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     EditionUpdateRawMouseMode @ 0x140121E10 (EditionUpdateRawMouseMode.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rsi

  v3 = CalcWakeMask((unsigned int)a2, a2, 0LL) & 0x1C07;
  result = INTERLOCKEDINT::operator int(*(_QWORD *)(a1 + 488) + 8LL);
  if ( ((unsigned int)result & v3) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 472);
    if ( (v3 & 1) != 0 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      *(_QWORD *)(v5 + 104) = a1;
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 96) = a1;
      EditionUpdateRawMouseMode(*(_QWORD *)(a1 + 472));
    }
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v6 + 488) + 8LL), ~v3);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 488) + 8LL), v3);
    result = *(_QWORD *)(a1 + 488);
    _InterlockedOr((volatile signed __int32 *)(result + 4), v3);
  }
  return result;
}
