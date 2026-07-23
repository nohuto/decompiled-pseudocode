/*
 * XREFs of MiScanPagefileSpace @ 0x140872550
 * Callers:
 *     <none>
 * Callees:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiUnlockPage @ 0x1404133C0 (MiUnlockPage.c)
 */

void __fastcall MiScanPagefileSpace(struct _KEVENT *a1)
{
  __int16 Lock; // bx
  int v2; // r14d
  _DWORD *v4; // r15
  ULONG_PTR v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r13
  char v8; // al
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char v11; // bp
  char v12; // cl
  __int64 v13; // rax
  __int64 Blink; // rcx
  __int16 v15; // [rsp+50h] [rbp+8h]

  Lock = a1->Header.Lock;
  v15 = a1->Header.Lock;
  v2 = 0;
  v4 = (_DWORD *)MiReferencePageRuns((__int64)a1, 0);
  do
  {
    v5 = *(_QWORD *)&v4[4 * v2 + 4];
    v6 = 48 * v5 - 0x220000000000LL;
    v7 = v6 + 48LL * *(_QWORD *)&v4[4 * v2 + 6];
    while ( v6 < v7 )
    {
      if ( ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FF) == Lock )
      {
        v8 = *(_BYTE *)(v6 + 34) & 7;
        if ( v8 == 2 || ((v8 - 3) & 0xFB) == 0 )
        {
          v9 = *(_QWORD *)(v6 + 16);
          if ( (v9 & 0x400) == 0
            && (v9 & 8) != 0
            && (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
            && (unsigned __int16)*(_DWORD *)(v6 + 32)
            && (*(_BYTE *)(v6 + 34) & 0x28) == 0
            && (*(_BYTE *)(v6 + 35) & 0x10) == 0 )
          {
            v10 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            v11 = MiSafeLockPage(v5, 0xFFFFFFFFFFLL, 0x3FFFFFFFFELL);
            if ( v11 != 17 )
            {
              v12 = *(_BYTE *)(v6 + 34) & 7;
              if ( v12 == 2 || ((v12 - 3) & 0xFB) == 0 )
              {
                v13 = *(_QWORD *)(v6 + 16);
                if ( (v13 & 0x400) == 0
                  && (v13 & 8) != 0
                  && (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
                  && (unsigned __int16)*(_DWORD *)(v6 + 32)
                  && ((unsigned __int8)~(*(_BYTE *)(v6 + 35) >> 4) & ((*(_BYTE *)(v6 + 34) & 0x28) == 0)) != 0 )
                {
                  v10 = MiCaptureDirtyBitToPfn(v6);
                }
              }
              MiUnlockPage(v6, v11);
            }
            if ( v10 )
              MiReleasePageFileInfo(a1, v10, 0LL);
            Lock = v15;
          }
        }
      }
      v6 += 48LL;
      ++v5;
    }
    ++v2;
  }
  while ( v2 != *v4 );
  MiDereferencePageRuns((__int64)v4);
  Blink = (__int64)a1[10].Header.WaitListHead.Blink;
  a1[46].Header.WaitListHead.Flink = 0LL;
  PsDereferencePartition(Blink);
}
