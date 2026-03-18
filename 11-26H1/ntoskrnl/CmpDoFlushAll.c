/*
 * XREFs of CmpDoFlushAll @ 0x1404A2354
 * Callers:
 *     CmReconcileAndValidateAllHives @ 0x140856C28 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140AECE60 (CmpForceFlushWorker.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpGetLastHive @ 0x1408B13C8 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1408B30D0 (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpQuitNextHive @ 0x140AFF4BC (CmpQuitNextHive.c)
 */

void __fastcall CmpDoFlushAll(unsigned int a1)
{
  struct _EX_RUNDOWN_REF *LastHive; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    LastHive = (struct _EX_RUNDOWN_REF *)CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = v5 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v5 = NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 205) )
        {
          if ( (v5[20].Count & 2) == 0 )
            CmpFlushHive(v5, a1);
          ExReleaseRundownProtection_0(v5 + 205);
        }
        if ( v5 == LastHive )
          break;
      }
      CmpQuitNextHive(v5);
      CmpDereferenceHive(LastHive);
    }
  }
}
