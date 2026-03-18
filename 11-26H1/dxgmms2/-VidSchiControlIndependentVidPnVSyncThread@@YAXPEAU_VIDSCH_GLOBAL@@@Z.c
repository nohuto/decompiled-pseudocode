/*
 * XREFs of ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140039B8C
 * Callers:
 *     VidSchiControlVSyncThread @ 0x140039A20 (VidSchiControlVSyncThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     VidSchiControlVSync @ 0x1400FDFF0 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlIndependentVidPnVSyncThread(KSPIN_LOCK *a1)
{
  struct _ERESOURCE *v1; // r14
  unsigned int v3; // esi
  unsigned int v4; // edi
  __int64 MostSignificantBit; // rdx
  KSPIN_LOCK v6; // r9
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdi
  char v14; // cl
  signed __int32 v15; // eax
  KSPIN_LOCK v16; // r8
  __int64 v17; // rcx
  unsigned int j; // ecx
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v21[16]; // [rsp+40h] [rbp-68h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 170);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 170), 1u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 252, &LockHandle);
  v3 = *((_DWORD *)a1 + 639);
  v4 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(v3);
      if ( *((_BYTE *)a1 + 67) )
        break;
      if ( *((_DWORD *)a1 + MostSignificantBit + 656) >= *((_DWORD *)a1 + 673) )
      {
        *((_DWORD *)a1 + MostSignificantBit + 656) = -1;
LABEL_11:
        v10 = v4++;
        v21[v10] = MostSignificantBit;
      }
LABEL_12:
      v3 &= ~(1 << MostSignificantBit);
      if ( !v3 )
        goto LABEL_13;
    }
    v6 = a1[MostSignificantBit + 431];
    for ( i = 0; i < *((_DWORD *)a1 + 40); ++i )
    {
      v8 = 304LL * i;
      v9 = *(_QWORD *)(v8 + v6 + 392);
      if ( v9 && *(_QWORD *)(v8 + v6 + 424) <= v9 )
        goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_13:
  a1[319] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    v11 = v21;
    v12 = v4;
    do
    {
      v13 = *v11;
      v14 = *((_BYTE *)a1 + v13 + 2096);
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + v13 + 640, 0, 0);
      if ( v14 )
      {
        if ( !v15 && !*((_DWORD *)a1 + 5 * v13 + 546) )
        {
          v16 = a1[2];
          v17 = (*(_DWORD *)(v16 + 3016) & 0x10) != 0 ? (unsigned int)v13 : 0;
          if ( ((unsigned int)v17 >= 0x10 || !*(_DWORD *)(v16 + 4 * v17 + 3192))
            && !*((_DWORD *)a1 + v13 + 201)
            && !*((_DWORD *)a1 + 219)
            && !*((_DWORD *)a1 + 5 * v13 + 547) )
          {
            VidSchiControlVSync(a1, 0LL, 3LL, (unsigned int)v13);
            if ( *((_BYTE *)a1 + 2500) )
            {
              if ( (_DWORD)v13 == -3 )
              {
                for ( j = 0; j < *((_DWORD *)a1 + 12); *((_BYTE *)a1 + v19 + 2501) = 1 )
                  v19 = j++;
              }
              else
              {
                *((_BYTE *)a1 + v13 + 2501) = 1;
              }
            }
            else
            {
              *((_BYTE *)a1 + 2501) = 1;
            }
          }
        }
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  ExReleaseResourceLite(v1);
}
