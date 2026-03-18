/*
 * XREFs of ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1400580D0
 * Callers:
 *     HmgModifyHandleType @ 0x140057BB0 (HmgModifyHandleType.c)
 *     ?IncrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z @ 0x140057CA0 (-IncrementUniqueness@GdiHandleManager@Cxx@@UEAAXPEAVOBJECT@@@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@Cxx@@AEAAXPEAVOBJECT@@_N@Z @ 0x140057EA8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@Cxx@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetEtwGdiHandleType(char a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 4:
      return 4LL;
    case 5:
      return 5LL;
    case 1:
      return 1LL;
  }
  switch ( a1 )
  {
    case 0:
      result = 0LL;
      break;
    case 2:
      result = 2LL;
      break;
    case 3:
      result = 3LL;
      break;
    case 6:
      result = 6LL;
      break;
    case 7:
      result = 7LL;
      break;
    case 8:
      result = 8LL;
      break;
    case 9:
      result = 9LL;
      break;
    case 10:
      result = 10LL;
      break;
    case 11:
      result = 11LL;
      break;
    case 12:
      result = 12LL;
      break;
    case 13:
      result = 13LL;
      break;
    case 14:
      result = 14LL;
      break;
    case 15:
      result = 15LL;
      break;
    case 16:
      result = 16LL;
      break;
    case 17:
      result = 17LL;
      break;
    case 18:
      result = 18LL;
      break;
    case 19:
      result = 19LL;
      break;
    case 20:
      result = 20LL;
      break;
    case 21:
      result = 21LL;
      break;
    case 22:
      result = 22LL;
      break;
    case 23:
      result = 23LL;
      break;
    case 24:
      result = 24LL;
      break;
    case 25:
      result = 25LL;
      break;
    case 26:
      result = 26LL;
      break;
    case 27:
      result = 27LL;
      break;
    case 28:
      result = 28LL;
      break;
    case 29:
      result = 29LL;
      break;
    case 30:
      result = 30LL;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}
