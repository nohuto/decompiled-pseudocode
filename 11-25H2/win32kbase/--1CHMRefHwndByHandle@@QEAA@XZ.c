/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1400379F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    HMUnlockObject(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    HMUnlockObject(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
}
