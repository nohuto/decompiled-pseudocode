/*
 * XREFs of ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x180130A58
 * Callers:
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18007B158 (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 * Callees:
 *     ??0BamoConnection@ISMBamos_AutoBamos@@QEAA@XZ @ 0x180095B68 (--0BamoConnection@ISMBamos_AutoBamos@@QEAA@XZ.c)
 */

InputSystemInternalClientConnection *__fastcall InputSystemInternalClientConnection::InputSystemInternalClientConnection(
        InputSystemInternalClientConnection *this)
{
  ISMBamos_AutoBamos::BamoConnection::BamoConnection(this);
  *(_QWORD *)this = &InputSystemInternalClientConnection::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return this;
}
