/*
 * XREFs of ??_GReacquireResourceGroupWorkItem@@UEAAPEAXI@Z @ 0x1800F1370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x1800F0C30 (--1ResourceHandleInfo@@QEAA@XZ.c)
 */

ReacquireResourceGroupWorkItem *__fastcall ReacquireResourceGroupWorkItem::`scalar deleting destructor'(
        ReacquireResourceGroupWorkItem *this,
        char a2)
{
  *(_QWORD *)this = &ReacquireSaResourceWorkItem::`vftable';
  ResourceHandleInfo::~ResourceHandleInfo((ReacquireResourceGroupWorkItem *)((char *)this + 32));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
