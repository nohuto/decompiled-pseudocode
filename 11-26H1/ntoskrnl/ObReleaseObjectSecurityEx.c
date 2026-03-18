/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x14093C920
 * Callers:
 *     PspCheckJobAccessState @ 0x140778CD8 (PspCheckJobAccessState.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093B234 (EtwpCheckCurrentUserProcessAccess.c)
 *     ObpCheckTraverseAccess @ 0x14093C7C8 (ObpCheckTraverseAccess.c)
 *     MiAllowImageMap @ 0x140B1FE0C (MiAllowImageMap.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(__int64 a1, char a2, __int64 a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  if ( a1 )
  {
    if ( a2 )
    {
      ExFreePoolWithTag((PVOID)a1, 0);
    }
    else
    {
      _m_prefetchw((const void *)(a3 - 8));
      v3 = *(_QWORD *)(a3 - 8);
      while ( (a1 ^ (unsigned __int64)v3) < 0xF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 8), v3 + 1, v3);
        if ( v4 == v3 )
          return;
      }
      ObDereferenceSecurityDescriptor(a1, 1u, a3, (struct _KLOCK_ENTRIES *)a1);
    }
  }
}
