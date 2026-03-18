/*
 * XREFs of SepSidFromProcessProtection @ 0x14025F1A0
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x14025F118 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( *a1 == 98 )
    return SepRmCapTableLock.Padding[2];
  switch ( *a1 )
  {
    case 0x12:
      result = SepRmCapTableLock.Padding[0];
      break;
    case 0x31:
      result = SepRmCapTableLock.Padding[1];
      break;
    case 0x51:
      result = SeProcTrustLiteWinSid;
      break;
    case 0x52:
      result = SepRmCapTableLock.Padding[3];
      break;
    case 0x61:
      result = SeProcTrustLiteWinTcbSid;
      break;
    case 0x72:
      return SepRmCapTableLock.Padding[2];
    case 0x81:
      result = SepRmCapTableLock.Padding[4];
      break;
    default:
      return result;
  }
  return result;
}
