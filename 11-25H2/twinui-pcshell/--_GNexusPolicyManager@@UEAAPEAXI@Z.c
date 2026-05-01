/*
 * XREFs of ??_GNexusPolicyManager@@UEAAPEAXI@Z @ 0x180342A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1NexusPolicyManager@@UEAA@XZ @ 0x18035A314 (--1NexusPolicyManager@@UEAA@XZ.c)
 */

NexusPolicyManager *__fastcall NexusPolicyManager::`scalar deleting destructor'(NexusPolicyManager *this, char a2)
{
  NexusPolicyManager::~NexusPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
