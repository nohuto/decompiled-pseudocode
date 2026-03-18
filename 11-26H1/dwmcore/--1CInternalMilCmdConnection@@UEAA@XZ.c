/*
 * XREFs of ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180228EAC
 * Callers:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180228EE0 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CChannelTable@@UEAA@XZ @ 0x18022C78C (--1CChannelTable@@UEAA@XZ.c)
 */

void __fastcall CInternalMilCmdConnection::~CInternalMilCmdConnection(CInternalMilCmdConnection *this)
{
  CChannelTable::~CChannelTable((CInternalMilCmdConnection *)((char *)this + 48));
  CConnection::~CConnection(this);
}
