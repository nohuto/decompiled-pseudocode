/*
 * XREFs of ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F788C
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x14013BA20 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1401448FC (-Initialize@CInputConfig@@SAJXZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014D0A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?Initialize@CFrameIdGenerator@@SAJXZ @ 0x14018C774 (-Initialize@CFrameIdGenerator@@SAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEResourceLock::Initialize(CEResourceLock *this)
{
  struct _ERESOURCE *Pool2; // rax

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  *(_QWORD *)this = Pool2;
  if ( Pool2 )
  {
    ExInitializeResourceLite(Pool2);
    LOBYTE(Pool2) = 1;
  }
  return (char)Pool2;
}
