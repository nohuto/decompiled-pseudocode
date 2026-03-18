/*
 * XREFs of ??_GCAdapter@@IEAAPEAXI@Z @ 0x1400A1AC8
 * Callers:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x140036BC4 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 *     ?Release@CAdapter@@UEAAJXZ @ 0x14004B000 (-Release@CAdapter@@UEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x1400A19BC (--1CAdapter@@IEAA@XZ.c)
 */

CAdapter *__fastcall CAdapter::`scalar deleting destructor'(CAdapter *this)
{
  CAdapter::~CAdapter(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
