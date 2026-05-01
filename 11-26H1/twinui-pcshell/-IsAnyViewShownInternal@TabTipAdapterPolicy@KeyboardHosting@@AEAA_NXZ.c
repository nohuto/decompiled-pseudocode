/*
 * XREFs of ?IsAnyViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1801C5884
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800BD300 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x1801C5860 (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShownInternal(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 **Ptr; // rdx
  __int64 *i; // rax
  bool v5; // zf
  bool v6; // bl

  v1 = this + 100;
  AcquireSRWLockShared(this + 100);
  Ptr = (__int64 **)this[93].Ptr;
  for ( i = *Ptr; ; i = (__int64 *)*i )
  {
    v5 = Ptr == (__int64 **)i;
    if ( Ptr == (__int64 **)i )
      break;
    if ( *((_BYTE *)i + 20) )
    {
      v5 = Ptr == (__int64 **)i;
      break;
    }
  }
  v6 = !v5;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  return v6;
}
