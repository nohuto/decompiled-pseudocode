/*
 * XREFs of GreSetBrushGlobal @ 0x14003470C
 * Callers:
 *     SetSysColor @ 0x14003405C (SetSysColor.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140033CE0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x14003437C (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall GreSetBrushGlobal(HBRUSH a1)
{
  __int64 v1; // rcx
  __int64 SessionState; // rax
  unsigned int *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v3, a1);
  if ( v3[0] )
  {
    v3[0][10] |= 0x40200u;
    if ( v3[0] )
    {
      XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)v3);
      SessionState = W32GetSessionState(v1);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v3[0]);
    }
  }
  PopThreadGuardedObject(v4);
}
