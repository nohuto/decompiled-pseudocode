/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x1409184C0
 * Callers:
 *     PspCheckJobAccessState @ 0x14077BB78 (PspCheckJobAccessState.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140916DD4 (EtwpCheckCurrentUserProcessAccess.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
