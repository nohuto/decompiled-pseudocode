/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1400A1150
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x14003CC50 (-Release@CTokenManager@@UEAAJXZ.c)
 *     CreateTokenManagerSessionGlobal @ 0x14005D114 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1400A1040 (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this, unsigned int a2)
{
  CTokenManager::~CTokenManager(this, a2);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
