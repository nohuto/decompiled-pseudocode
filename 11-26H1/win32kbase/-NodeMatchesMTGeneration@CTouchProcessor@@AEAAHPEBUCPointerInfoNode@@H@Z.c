/*
 * XREFs of ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x14013C590
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::NodeMatchesMTGeneration(
        CTouchProcessor *this,
        const struct CPointerInfoNode *a2,
        int a3)
{
  int v3; // r9d
  unsigned int v4; // ecx
  BOOL v5; // edx

  v3 = *((_DWORD *)a2 + 1);
  v4 = 1;
  v5 = (v3 & 0x100) != 0 && (*(_DWORD *)a2 & 0x800) == 0;
  if ( v5 != (a3 != 0) || a3 && ((v3 & 0x200) == 0 || (v3 & 0x400) != 0) )
    return 0;
  return v4;
}
