/*
 * XREFs of PrExtApplyPatch @ 0x14052FDA8
 * Callers:
 *     HalpMcUpdateMicrocode @ 0x140510840 (HalpMcUpdateMicrocode.c)
 *     HalpLoadSfsUpdateEx @ 0x14059AB30 (HalpLoadSfsUpdateEx.c)
 * Callees:
 *     SfsFwpApplyPatch @ 0x1406DCDD8 (SfsFwpApplyPatch.c)
 *     SfsGetFwVersions @ 0x1406DD060 (SfsGetFwVersions.c)
 *     MicrocodeUpdate @ 0x1406DD970 (MicrocodeUpdate.c)
 */

__int64 __fastcall PrExtApplyPatch(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx

  v3 = (unsigned int)(a3 - 1);
  if ( (_DWORD)a3 == 1 )
    return (unsigned int)MicrocodeUpdate(a1, a2, a3, v3);
  v3 = (unsigned int)(a3 - 2);
  if ( (_DWORD)a3 == 2 )
    return (unsigned int)MicrocodeUpdate(a1, a2, a3, v3);
  v3 = (unsigned int)(a3 - 13);
  if ( (_DWORD)a3 == 13 )
  {
    return (unsigned int)MicrocodeUpdate(a1, a2, a3, v3);
  }
  else if ( (_DWORD)a3 == 14 )
  {
    v4 = SfsFwpApplyPatch();
    SfsGetFwVersions();
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
