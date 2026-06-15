/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180029150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  struct ATL::CStringData *result; // rax

  result = (ATL::CAtlStringMgr *)((char *)this + 16);
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  return result;
}
