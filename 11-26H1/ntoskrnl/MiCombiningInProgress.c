/*
 * XREFs of MiCombiningInProgress @ 0x1407094C0
 * Callers:
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // r15
  bool v7; // si
  KIRQL v8; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  v3 = *a1;
  v7 = 0;
  v8 = ExAcquireSpinLockExclusive(&dword_140E2EBC0);
  if ( a3 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_140E2EBC4;
    if ( !dword_140E2EBD8 )
    {
      dword_140E2EBD8 = 1;
      qword_140E2EBD0 = _InterlockedIncrement64(&PsNextSecurityDomain);
    }
    CurrentThread = KeGetCurrentThread();
    memset_0(a2, 0, 0x50uLL);
    v10 = (_QWORD *)(v3 + 17664);
    a2[5] = CurrentThread;
    v11 = *(_QWORD *)(v3 + 17664);
    if ( *(_QWORD *)(v11 + 8) != v3 + 17664 )
      __fastfail(3u);
    *a2 = v11;
    a2[1] = v10;
    *(_QWORD *)(v11 + 8) = a2;
    *v10 = a2;
    v12 = (_QWORD *)qword_140E2EBC8;
    if ( qword_140E2EBC8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v12[3] )
        {
          v13 = (_QWORD *)v12[1];
          if ( !v13 )
          {
            v7 = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v12;
          if ( !*v12 )
            break;
        }
        v12 = v13;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2EBC8, (unsigned __int64)v12, v7, a2 + 2);
  }
  else
  {
    v14 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v15 = (_QWORD *)a2[1], (_QWORD *)*v15 != a2) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2EBC8, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    if ( dword_140E2EBC4 == 1 )
      MiFlushEntireTbDueToAttributeChange();
    --dword_140E2EBC4;
  }
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EBC0);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EBC0, v8);
}
