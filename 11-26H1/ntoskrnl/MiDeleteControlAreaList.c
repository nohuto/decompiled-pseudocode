/*
 * XREFs of MiDeleteControlAreaList @ 0x14049CF38
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiDeleteZeroValueSegments @ 0x14049CF04 (MiDeleteZeroValueSegments.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiDeleteControlAreaList(__int64 a1)
{
  _QWORD **v2; // rbx
  volatile LONG *v3; // rbp
  __int64 v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  char **v8; // rsi
  _QWORD v9[8]; // [rsp+30h] [rbp-68h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v2 = (_QWORD **)(a1 + 2512);
  if ( *v2 != v2 )
  {
    v3 = (volatile LONG *)(a1 + 2112);
    while ( 1 )
    {
      v4 = 0LL;
      v5 = ExAcquireSpinLockExclusive(v3);
      do
      {
        v6 = *v2;
        if ( *v2 == v2 )
          break;
        if ( (_QWORD **)v6[1] == v2 )
        {
          v7 = (_QWORD *)*v6;
          if ( *(_QWORD **)(*v6 + 8LL) == v6 )
            continue;
        }
        __fastfail(3u);
        *v2 = v7;
        v9[v4] = v6 - 1;
        v4 = (unsigned int)(v4 + 1);
        v7[1] = v2;
      }
      while ( (_DWORD)v4 != 8 );
      if ( v5 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      else
        ExReleaseSpinLockExclusive(v3, v5);
      if ( !(_DWORD)v4 )
        break;
      v8 = (char **)v9;
      do
      {
        MiDeleteControlArea(*v8++);
        --v4;
      }
      while ( v4 );
    }
  }
}
