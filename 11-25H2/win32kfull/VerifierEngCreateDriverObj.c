/*
 * XREFs of VerifierEngCreateDriverObj @ 0x1403321A0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x1403306C0 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure((int)pvObj, (__int64)pFreeObjProc) )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
