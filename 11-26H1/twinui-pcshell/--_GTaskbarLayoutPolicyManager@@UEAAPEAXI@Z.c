/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x1803199F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801C6CFC (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::`scalar deleting destructor'(
        TaskbarLayoutPolicyManager *this,
        char a2)
{
  TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
