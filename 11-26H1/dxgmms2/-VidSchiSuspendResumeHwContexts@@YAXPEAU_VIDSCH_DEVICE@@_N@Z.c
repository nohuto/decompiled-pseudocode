/*
 * XREFs of ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     VidSchiSuspendResumeHwContext @ 0x14000619C (VidSchiSuspendResumeHwContext.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x140041FB4 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400EA5D8 (VidSchRegisterCompletionEvent.c)
 *     VidSchUnregisterCompletionEvent @ 0x140117D08 (VidSchUnregisterCompletionEvent.c)
 */

void __fastcall VidSchiSuspendResumeHwContexts(struct _VIDSCH_DEVICE *a1, char a2)
{
  __int64 v2; // rdi
  int v5; // eax
  char v6; // r14
  __int64 *v8; // rax
  char *v9; // rsi
  __int64 v10; // rax
  char **v11; // rcx
  char **v12; // rdx
  int v13; // eax
  char *v14; // [rsp+28h] [rbp-A9h] BYREF
  char **v15; // [rsp+30h] [rbp-A1h]
  __int64 v16; // [rsp+38h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-91h] BYREF
  __int16 v18; // [rsp+58h] [rbp-79h]
  _QWORD v19[20]; // [rsp+68h] [rbp-69h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( !*((_BYTE *)a1 + 212)
    && !_InterlockedCompareExchange((volatile signed __int32 *)a1 + 52, 0, 0)
    && !*(_DWORD *)(v2 + 3260) )
  {
    v5 = *((_DWORD *)a1 + 416);
    v6 = 0;
    if ( a2 ? v5 <= 1 : v5 <= 0 )
    {
      v18 = 0;
      v15 = &v14;
      v16 = v2 + 2016;
      v14 = (char *)&v14;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2016), &LockHandle);
      LOBYTE(v18) = 1;
      v8 = (__int64 *)*((_QWORD *)a1 + 12);
      if ( v8 != (__int64 *)((char *)a1 + 96) )
      {
        v11 = v15;
        do
        {
          if ( !*((_DWORD *)v8 + 13) )
          {
            v12 = v11;
            if ( *v11 != (char *)&v14 )
LABEL_19:
              __fastfail(3u);
            v11 = (char **)(v8 - 2);
            *(v8 - 1) = (__int64)v12;
            *(v8 - 2) = (__int64)&v14;
            *v12 = (char *)(v8 - 2);
            v15 = (char **)(v8 - 2);
          }
          v8 = (__int64 *)*v8;
        }
        while ( v8 != (__int64 *)((char *)a1 + 96) );
      }
      AcquireSpinLock::Release((AcquireSpinLock *)&v16);
      while ( 1 )
      {
        v9 = v14;
        if ( *((char ***)v14 + 1) != &v14 )
          goto LABEL_19;
        v10 = *(_QWORD *)v14;
        if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
          goto LABEL_19;
        v14 = *(char **)v14;
        *(_QWORD *)(v10 + 8) = &v14;
        if ( v9 == (char *)&v14 )
          break;
        v13 = VidSchiSuspendResumeHwContext(v9 - 248, a2);
        *(_QWORD *)v9 = 0LL;
        if ( v13 == 259 )
          v6 = 1;
        *((_QWORD *)v9 + 1) = 0LL;
      }
      if ( v6 )
      {
        memset(v19, 0, sizeof(v19));
        LODWORD(v19[2]) = 6;
        v19[3] = a1;
        VidSchRegisterCompletionEvent(v2, v19);
        while ( !VidSchiIsDeviceSuspended(a1) && (int)VidSchWaitForCompletionEvent(v2, v19, 83LL) >= 0 )
          ;
        VidSchUnregisterCompletionEvent(v2, v19);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)&v16);
    }
  }
}
