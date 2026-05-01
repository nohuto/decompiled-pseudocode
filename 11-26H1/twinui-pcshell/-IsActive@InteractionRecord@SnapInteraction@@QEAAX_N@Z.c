/*
 * XREFs of ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801A97E8
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180035520 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AA5C4 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AA770 (-StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::InteractionRecord::IsActive(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  v5 = v4;
  if ( a2 == BYTE1(this[1].Ptr) )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  }
  else
  {
    BYTE1(this[1].Ptr) = a2;
    if ( LOBYTE(this[1].Ptr) )
    {
      if ( a2 )
        SnapInteraction::InteractionRecord::StartInteraction(this);
      else
        SnapInteraction::InteractionRecord::EndInteraction(this);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
