/*
 * XREFs of ??_EPenWorkspaceDiscoverBrokerFactory@@UEAAPEAXI@Z @ 0x1803E7D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenWorkspaceDiscoverBrokerFactory@@UEAA@XZ @ 0x1803E7AF8 (--1PenWorkspaceDiscoverBrokerFactory@@UEAA@XZ.c)
 */

PenWorkspaceDiscoverBrokerFactory *__fastcall PenWorkspaceDiscoverBrokerFactory::`vector deleting destructor'(
        PenWorkspaceDiscoverBrokerFactory *this,
        char a2)
{
  PenWorkspaceDiscoverBrokerFactory::~PenWorkspaceDiscoverBrokerFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
