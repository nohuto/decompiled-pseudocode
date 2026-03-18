/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009530
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1400090D0 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10 (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(struct _VIDSCH_SYNC_OBJECT *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  char v4; // dl
  char v5; // r12
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  int v9; // r9d
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // ecx
  char *v15; // rdi
  char *v16; // rax
  char **v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  void (__fastcall *v25)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  char *v26; // rax
  char **v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  char *v31; // rcx
  char **v32; // rdx
  int v33; // ecx
  int v34; // eax
  unsigned int *v35; // rax
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rax
  _DWORD *v45; // rax
  int v46; // ecx
  int v47; // r8d

  v4 = 0;
  v5 = 0;
  v6 = *((_QWORD *)a2 + 12);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8LL);
  v8 = *(_QWORD *)(v7 + 40);
  if ( *((_DWORD *)a1 + 9) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    v25 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 3414;
    v25(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n",
      3414LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v9 = *((_DWORD *)a1 + 12);
  if ( !v9 )
  {
    v21 = (_QWORD *)((char *)a1 + 72);
    if ( *((_QWORD *)a1 + 9) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3432;
      return 3221225473LL;
    }
    if ( !*((_QWORD *)a1 + 8) )
    {
      v22 = *((_QWORD *)a2 + 11);
      if ( !v22 )
        v22 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 8) = v22;
      v21 = (_QWORD *)((char *)a1 + 72);
      v4 = 1;
    }
    v23 = *((_QWORD *)a2 + 11);
    if ( !v23 )
      v23 = *((_QWORD *)a2 + 12);
    *v21 = v23;
    goto LABEL_35;
  }
  if ( v9 == 1 )
  {
    v33 = *((_DWORD *)a1 + 18);
    if ( !v33 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3464;
      return 3221225473LL;
    }
    v34 = *((_DWORD *)a1 + 16);
    if ( v34 )
    {
      v4 = 1;
      *((_DWORD *)a1 + 16) = v34 - 1;
    }
    *((_DWORD *)a1 + 18) = v33 - 1;
LABEL_35:
    if ( !v4 )
      goto LABEL_17;
    goto LABEL_36;
  }
  if ( v9 != 2 )
  {
    if ( v9 == 4 || v9 == 5 )
    {
      v10 = *((_QWORD *)a2 + 41);
      if ( !*((_BYTE *)a1 + 29) )
      {
        v11 = (unsigned __int64 *)*((_QWORD *)a1 + 9);
        if ( *((_BYTE *)a1 + 30) )
        {
          if ( *v11 < v10 )
            goto LABEL_10;
        }
        else if ( *(_DWORD *)v11 - (int)v10 < 0 )
        {
LABEL_10:
          if ( *((_QWORD *)a1 + 11) )
          {
            ++*(_DWORD *)(v8 + 884);
            *((_DWORD *)a2 + 70) |= 8u;
            goto LABEL_17;
          }
LABEL_11:
          if ( *((_BYTE *)a1 + 31) || (v28 = (2 * *((_DWORD *)a1 + 13)) >> 1, v28 == 3) || v28 == 4 )
          {
            if ( *((_BYTE *)a1 + 28) )
            {
              v13 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 40LL);
            }
            else
            {
              v12 = *((_DWORD *)a1 + 12);
              if ( v12 == 2 )
                v13 = *((_QWORD *)a1 + 9);
              else
                v13 = v12 == 6 ? *((_QWORD *)a1 + 25) : *((_QWORD *)a1 + 12);
            }
            if ( *((_QWORD *)a2 + 41) <= v13 )
              goto LABEL_17;
          }
LABEL_46:
          ++*((_DWORD *)a1 + 10);
          v5 = 1;
          ++*(_DWORD *)(v6 + 156);
          ++*(_DWORD *)(v7 + 1852);
          ++*(_DWORD *)(v8 + 880);
          *((_DWORD *)a2 + 70) |= 4u;
          goto LABEL_17;
        }
      }
LABEL_36:
      *((_DWORD *)a2 + 70) |= 1u;
      return 0LL;
    }
    if ( v9 != 6 )
      goto LABEL_17;
    if ( *((_BYTE *)a1 + 29)
      || *(_QWORD *)(*((unsigned int *)a1 + 20) + *(_QWORD *)(*((_QWORD *)a1 + 8) + 192LL)) >= *((_QWORD *)a2 + 41) )
    {
      goto LABEL_36;
    }
    v18 = *((_QWORD *)a2 + 41);
    if ( !*((_BYTE *)a1 + 28) )
    {
      v19 = *(_QWORD *)(*((unsigned int *)a1 + 36) + *(_QWORD *)(*((_QWORD *)a1 + 16) + 192LL));
      if ( *((_DWORD *)a1 + 12) == 6 )
      {
        v20 = *(_QWORD *)(*((unsigned int *)a1 + 20) + *(_QWORD *)(*((_QWORD *)a1 + 8) + 192LL));
      }
      else
      {
        v35 = (unsigned int *)*((_QWORD *)a1 + 9);
        if ( *((_BYTE *)a1 + 30) )
          v20 = *(_QWORD *)v35;
        else
          v20 = *v35;
      }
      if ( v18 <= v19 || v20 >= v19 )
      {
        if ( *((_BYTE *)a1 + 28) )
        {
          v36 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 40LL);
        }
        else
        {
          v37 = *((_DWORD *)a1 + 12);
          if ( v37 == 2 )
          {
            v36 = *((_QWORD *)a1 + 9);
          }
          else if ( v37 == 6 )
          {
            v36 = *((_QWORD *)a1 + 25);
          }
          else
          {
            v36 = *((_QWORD *)a1 + 12);
          }
        }
        if ( v18 > v36 )
        {
          v40 = *((_QWORD *)a1 + 1);
          v41 = *((unsigned int *)a1 + 36);
          v42 = *(_QWORD *)(*((_QWORD *)a1 + 16) + 192LL);
          if ( *(_BYTE *)(v40 + 7082) )
            *(_QWORD *)(v41 + v42) = v18;
          else
            VidSchiUpdateNativeFenceMonitoredValue(v40, *((_QWORD *)a1 + 24), *((_QWORD *)a2 + 41), v41 + v42);
        }
        else
        {
          if ( *((_BYTE *)a1 + 28) )
          {
            v38 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 40LL);
          }
          else
          {
            v39 = *((_DWORD *)a1 + 12);
            if ( v39 == 2 )
            {
              v38 = *((_QWORD *)a1 + 9);
            }
            else if ( v39 == 6 )
            {
              v38 = *((_QWORD *)a1 + 25);
            }
            else
            {
              v38 = *((_QWORD *)a1 + 12);
            }
          }
          WdLogSingleEntry3(3LL, a1, *((_QWORD *)a2 + 41), v38);
          WdLogGlobalForLineNumber = 6150;
        }
      }
      else
      {
        WdLogSingleEntry4(3LL, a1, *((_QWORD *)a2 + 41), v19, v20);
        WdLogGlobalForLineNumber = 6140;
      }
    }
    v43 = *((_QWORD *)a2 + 41);
    if ( *((_BYTE *)a1 + 29) )
      goto LABEL_36;
    if ( *((_DWORD *)a1 + 12) == 6 )
    {
      v44 = *(_QWORD *)(*((unsigned int *)a1 + 20) + *(_QWORD *)(*((_QWORD *)a1 + 8) + 192LL));
    }
    else
    {
      v45 = (_DWORD *)*((_QWORD *)a1 + 9);
      if ( !*((_BYTE *)a1 + 30) )
      {
        if ( *v45 - (int)v43 < 0 )
          goto LABEL_11;
        goto LABEL_36;
      }
      v44 = *(_QWORD *)v45;
    }
    if ( v44 < v43 )
      goto LABEL_11;
    goto LABEL_36;
  }
  if ( *((_BYTE *)a1 + 28) )
    v29 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 40LL);
  else
    v29 = *((_QWORD *)a1 + 9);
  if ( v29 >= *((_QWORD *)a2 + 41) )
  {
    if ( *((_BYTE *)a1 + 28) )
      v30 = *(_QWORD *)(*((_QWORD *)a1 + 43) + 32LL);
    else
      v30 = *((_QWORD *)a1 + 10);
    if ( v30 < *((_QWORD *)a2 + 41) )
    {
LABEL_17:
      v14 = *((_DWORD *)a1 + 12);
      if ( v14 != 4 && v14 != 5 )
      {
        v26 = (char *)a2 + 296;
        if ( v14 == 6 )
        {
          v27 = *(char ***)(v8 + 896);
          if ( *v27 == (char *)(v8 + 888) )
          {
            *(_QWORD *)v26 = v8 + 888;
            v15 = (char *)a2 + 312;
            *((_QWORD *)v26 + 1) = v27;
            *v27 = v26;
            *(_QWORD *)(v8 + 896) = v26;
            v16 = (char *)a1 + 208;
            goto LABEL_19;
          }
        }
        else
        {
          if ( v5 )
            v31 = (char *)a1 + 224;
          else
            v31 = (char *)a1 + 208;
          v32 = (char **)*((_QWORD *)v31 + 1);
          if ( *v32 == v31 )
          {
            *(_QWORD *)v26 = v31;
            *((_QWORD *)a2 + 38) = v32;
            *v32 = v26;
            *((_QWORD *)v31 + 1) = v26;
LABEL_67:
            _InterlockedIncrement((volatile signed __int32 *)a1 + 9);
            return 0LL;
          }
        }
LABEL_20:
        __fastfail(3u);
      }
      v15 = (char *)a2 + 296;
      v16 = (char *)(v8 + 888);
LABEL_19:
      v17 = (char **)*((_QWORD *)v16 + 1);
      if ( *v17 != v16 )
        goto LABEL_20;
      *(_QWORD *)v15 = v16;
      *((_QWORD *)v15 + 1) = v17;
      *v17 = v15;
      *((_QWORD *)v16 + 1) = v15;
      goto LABEL_67;
    }
    goto LABEL_36;
  }
  if ( *((_BYTE *)a1 + 25) )
    goto LABEL_46;
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3499;
  DxgkLogInternalTriageEvent(
    v46,
    0x40000,
    v47,
    (unsigned int)L"Trying to wait the fence without signal having been submitted.\n",
    3499LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
