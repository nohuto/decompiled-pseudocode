/*
 * XREFs of PopWin32kActivatorWorker @ 0x140AA9B60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 */

__int64 __fastcall PopWin32kActivatorWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  _BYTE *v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  wchar_t *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+98h] [rbp+18h] BYREF

  v23 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)qword_140F12AE0, a2, a3, a4);
LABEL_2:
  v4 = 0LL;
  v5 = &unk_140F12B78;
  v6 = &unk_140F12AF8;
  do
  {
    if ( *v6 && !*v5 )
    {
LABEL_15:
      PopReleaseRwLock((struct _KTHREAD *)qword_140F12AE0);
      v22 = 0LL;
      v14 = PopWin32kRequestQueueTypeStrings[v4];
      v19 = 0x12C00000001uLL;
      v20 = (unsigned __int64)v14;
      v21 = 0LL;
      if ( (int)Pdcv2ActivationClientActivate(
                  qword_140F12AF0,
                  &v19,
                  v4,
                  1LL,
                  L"RequestQueue",
                  0,
                  &qword_140F12AE0[v4 + 23],
                  &v23) < 0 )
        qword_140F12AE0[v4 + 23] = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)qword_140F12AE0, v15, v16, v17);
      *((_BYTE *)&qword_140F12AE0[19] + v4) = 1;
      goto LABEL_2;
    }
    v4 = (unsigned int)(v4 + 1);
    ++v6;
    ++v5;
  }
  while ( (unsigned int)v4 < 0x20 );
  v4 = (unsigned int)v4;
  if ( (_DWORD)v4 != 32 )
    goto LABEL_15;
  v7 = 0LL;
  v8 = &unk_140F12B78;
  v9 = &unk_140F12AF8;
  while ( 1 )
  {
    if ( !*v9 && *v8 )
    {
LABEL_11:
      v10 = (unsigned int)v7;
      if ( qword_140F12AE0[v7 + 23] )
      {
        PopReleaseRwLock((struct _KTHREAD *)qword_140F12AE0);
        Pdcv2ActivationClientDeactivate(qword_140F12AE0[v10 + 23]);
        qword_140F12AE0[v10 + 23] = 0LL;
        PopAcquireRwLockExclusive((unsigned __int64 *)qword_140F12AE0, v11, v12, v13);
      }
      *((_BYTE *)&qword_140F12AE0[19] + v10) = 0;
      goto LABEL_2;
    }
    v7 = (unsigned int)(v7 + 1);
    ++v9;
    ++v8;
    if ( (_DWORD)v7 == 32 )
      break;
    if ( (unsigned int)v7 >= 0x20 )
      goto LABEL_11;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F12C98);
  return PopReleaseRwLock((struct _KTHREAD *)qword_140F12AE0);
}
