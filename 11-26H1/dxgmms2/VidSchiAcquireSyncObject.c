/*
 * XREFs of VidSchiAcquireSyncObject @ 0x14002DD6C
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x14002D9C0 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10 (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // r14
  char v7; // r15
  int v8; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 **v20; // rax
  __int64 v21; // rcx
  const wchar_t *v22; // r9
  void (__fastcall *v23)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 **v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r9
  unsigned int *v36; // rax
  unsigned __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 **v43; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  _DWORD *v48; // rax
  unsigned __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8

  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    v21 = 25851LL;
    v22 = L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n";
    goto LABEL_32;
  }
  v8 = *(_DWORD *)(a2 + 48);
  switch ( v8 )
  {
    case 0:
      v30 = (_QWORD *)(a2 + 72);
      if ( *(_QWORD *)(a2 + 72) )
      {
        WdLogSingleEntry0(1LL);
        v21 = 25869LL;
        v22 = L"Trying to acquire mutex without corresponding signal having been submitted.\n";
        break;
      }
      if ( !*(_QWORD *)(a2 + 64) )
      {
        v31 = *(_QWORD *)(a3 + 88);
        if ( !v31 )
          v31 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)(a2 + 64) = v31;
        v30 = (_QWORD *)(a2 + 72);
        v6 = 1;
      }
      v32 = *(_QWORD *)(a3 + 88);
      if ( !v32 )
        v32 = *(_QWORD *)(a3 + 96);
      *v30 = v32;
LABEL_24:
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_25;
    case 1:
      v14 = *(_DWORD *)(a2 + 72);
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        v21 = 25901LL;
        v22 = L"Trying to acquire semaphore without corresponding signal having been submitted.\n";
        break;
      }
      v15 = *(_DWORD *)(a2 + 64);
      if ( v15 )
      {
        v6 = 1;
        *(_DWORD *)(a2 + 64) = v15 - 1;
      }
      *(_DWORD *)(a2 + 72) = v14 - 1;
      goto LABEL_24;
    case 2:
      if ( *(_BYTE *)(a2 + 28) )
        v25 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL);
      else
        v25 = *(_QWORD *)(a2 + 72);
      if ( v25 >= *(_QWORD *)(a3 + 328) )
      {
        if ( *(_BYTE *)(a2 + 28) )
          v26 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 32LL);
        else
          v26 = *(_QWORD *)(a2 + 80);
        if ( v26 < *(_QWORD *)(a3 + 328) )
        {
LABEL_19:
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
LABEL_28:
          v17 = *(_DWORD *)(a2 + 48);
          if ( v17 == 4 || v17 == 5 )
          {
            v18 = (__int64 *)(a3 + 296);
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 888LL;
            v20 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 896LL);
            if ( *v20 == (__int64 *)v19 )
            {
              *v18 = v19;
              v18[1] = (__int64)v20;
              *v20 = v18;
              *(_QWORD *)(v19 + 8) = v18;
              goto LABEL_61;
            }
          }
          else
          {
            v27 = (__int64 *)(a3 + 296);
            if ( v17 == 6 )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 888LL;
              v43 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 896LL);
              if ( *v43 == (__int64 *)v42 )
              {
                *(_QWORD *)(a3 + 304) = v43;
                v44 = (_QWORD *)(a3 + 312);
                *v27 = v42;
                *v43 = v27;
                *(_QWORD *)(v42 + 8) = v27;
                v45 = *(_QWORD **)(a2 + 216);
                if ( *v45 == a2 + 208 )
                {
                  *v44 = a2 + 208;
                  v44[1] = v45;
                  *v45 = v44;
                  *(_QWORD *)(a2 + 216) = v44;
                  goto LABEL_61;
                }
              }
            }
            else
            {
              if ( v7 )
                v28 = a2 + 224;
              else
                v28 = a2 + 208;
              v29 = *(__int64 ***)(v28 + 8);
              if ( *v29 == (__int64 *)v28 )
              {
                *v27 = v28;
                *(_QWORD *)(a3 + 304) = v29;
                *v29 = v27;
                *(_QWORD *)(v28 + 8) = v27;
LABEL_61:
                _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
                return 0LL;
              }
            }
          }
          __fastfail(3u);
        }
        goto LABEL_25;
      }
      if ( *(_BYTE *)(a2 + 25) )
      {
        ++*(_DWORD *)(a2 + 40);
        ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 804LL);
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1852LL);
        v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 40LL);
        ++*(_DWORD *)(v46 + 880);
        *(_DWORD *)(a3 + 280) |= 4u;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
        v7 = 1;
        goto LABEL_28;
      }
      WdLogSingleEntry0(1LL);
      v21 = 25937LL;
      v22 = L"Trying to wait the fence without signal having been submitted.\n";
      break;
    case 3:
      WdLogSingleEntry0(1LL);
      v21 = 26059LL;
      v22 = L"Trying to wait on CpuNotification.\n";
      break;
    case 4:
    case 5:
      v9 = *(_QWORD *)(a3 + 328);
      if ( !*(_BYTE *)(a2 + 29) )
      {
        v10 = *(unsigned __int64 **)(a2 + 72);
        if ( *(_BYTE *)(a2 + 30) )
        {
          if ( *v10 < v9 )
            goto LABEL_11;
        }
        else if ( *(_DWORD *)v10 - (int)v9 < 0 )
        {
LABEL_11:
          if ( *(_QWORD *)(a2 + 88) )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 40LL);
            ++*(_DWORD *)(v24 + 884);
            *(_DWORD *)(a3 + 280) |= 8u;
          }
          else if ( !*(_BYTE *)(a2 + 31)
                 || (*(_BYTE *)(a2 + 28)
                   ? (v12 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL))
                   : (v11 = *(_DWORD *)(a2 + 48), v11 == 2)
                   ? (v12 = *(_QWORD *)(a2 + 72))
                   : v11 == 6
                   ? (v12 = *(_QWORD *)(a2 + 200))
                   : (v12 = *(_QWORD *)(a2 + 96)),
                     *(_QWORD *)(a3 + 328) > v12) )
          {
            ++*(_DWORD *)(a2 + 40);
            v7 = 1;
            ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 804LL);
            ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1852LL);
            v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 40LL);
            ++*(_DWORD *)(v13 + 880);
            *(_DWORD *)(a3 + 280) |= 4u;
          }
          goto LABEL_19;
        }
      }
LABEL_25:
      *(_DWORD *)(a3 + 280) |= 1u;
      return 0LL;
    case 6:
      v33 = *(_QWORD *)(a3 + 328);
      if ( *(_BYTE *)(a2 + 29)
        || *(_QWORD *)(*(unsigned int *)(a2 + 80) + *(_QWORD *)(*(_QWORD *)(a2 + 64) + 192LL)) >= v33 )
      {
        goto LABEL_25;
      }
      v34 = *(_QWORD *)(a3 + 328);
      if ( !*(_BYTE *)(a2 + 28) )
      {
        v35 = *(_QWORD *)(*(unsigned int *)(a2 + 144) + *(_QWORD *)(*(_QWORD *)(a2 + 128) + 192LL));
        if ( *(_DWORD *)(a2 + 48) == 6 )
        {
          v37 = *(_QWORD *)(*(unsigned int *)(a2 + 80) + *(_QWORD *)(*(_QWORD *)(a2 + 64) + 192LL));
        }
        else
        {
          v36 = *(unsigned int **)(a2 + 72);
          if ( *(_BYTE *)(a2 + 30) )
            v37 = *(_QWORD *)v36;
          else
            v37 = *v36;
        }
        if ( v34 <= v35 || v37 >= v35 )
        {
          if ( *(_BYTE *)(a2 + 28) )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL);
          }
          else
          {
            v38 = *(_DWORD *)(a2 + 48);
            if ( v38 == 2 )
            {
              v39 = *(_QWORD *)(a2 + 72);
            }
            else if ( v38 == 6 )
            {
              v39 = *(_QWORD *)(a2 + 200);
            }
            else
            {
              v39 = *(_QWORD *)(a2 + 96);
            }
          }
          if ( v34 > v39 )
          {
            v54 = *(_QWORD *)(a2 + 8);
            v55 = *(unsigned int *)(a2 + 144);
            v56 = *(_QWORD *)(*(_QWORD *)(a2 + 128) + 192LL);
            if ( *(_BYTE *)(v54 + 7082) )
              *(_QWORD *)(v55 + v56) = v34;
            else
              VidSchiUpdateNativeFenceMonitoredValue(v54, *(_QWORD *)(a2 + 192), *(_QWORD *)(a3 + 328), v55 + v56);
          }
          else
          {
            if ( *(_BYTE *)(a2 + 28) )
            {
              v41 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL);
            }
            else
            {
              v40 = *(_DWORD *)(a2 + 48);
              if ( v40 == 2 )
              {
                v41 = *(_QWORD *)(a2 + 72);
              }
              else if ( v40 == 6 )
              {
                v41 = *(_QWORD *)(a2 + 200);
              }
              else
              {
                v41 = *(_QWORD *)(a2 + 96);
              }
            }
            WdLogSingleEntry3(3LL, a2, *(_QWORD *)(a3 + 328), v41);
            WdLogGlobalForLineNumber = 6150;
          }
        }
        else
        {
          WdLogSingleEntry4(3LL, a2, *(_QWORD *)(a3 + 328), v35, v37);
          WdLogGlobalForLineNumber = 6140;
        }
      }
      v47 = *(_QWORD *)(a3 + 328);
      if ( *(_BYTE *)(a2 + 29) )
        goto LABEL_107;
      if ( *(_DWORD *)(a2 + 48) == 6 )
      {
        v49 = *(_QWORD *)(*(unsigned int *)(a2 + 80) + *(_QWORD *)(*(_QWORD *)(a2 + 64) + 192LL));
      }
      else
      {
        v48 = *(_DWORD **)(a2 + 72);
        if ( !*(_BYTE *)(a2 + 30) )
        {
          if ( *v48 - (int)v47 < 0 )
          {
LABEL_98:
            if ( !*(_BYTE *)(a2 + 31) && (v50 = (2 * *(_DWORD *)(a2 + 52)) >> 1, v50 != 3) && v50 != 4
              || (*(_BYTE *)(a2 + 28)
                ? (v52 = *(_QWORD *)(*(_QWORD *)(a2 + 344) + 40LL))
                : (v51 = *(_DWORD *)(a2 + 48), v51 == 2)
                ? (v52 = *(_QWORD *)(a2 + 72))
                : v51 == 6
                ? (v52 = *(_QWORD *)(a2 + 200))
                : (v52 = *(_QWORD *)(a2 + 96)),
                  *(_QWORD *)(a3 + 328) > v52) )
            {
              ++*(_DWORD *)(a2 + 40);
              v7 = 1;
              ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 804LL);
              ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1852LL);
              v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 40LL);
              ++*(_DWORD *)(v53 + 880);
              *(_DWORD *)(a3 + 280) |= 4u;
            }
            goto LABEL_106;
          }
LABEL_107:
          v6 = 1;
LABEL_106:
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 808));
          goto LABEL_24;
        }
        v49 = *(_QWORD *)v48;
      }
      if ( v49 < v47 )
        goto LABEL_98;
      goto LABEL_107;
    default:
      goto LABEL_28;
  }
LABEL_32:
  v23 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
  WdLogGlobalForLineNumber = v21;
  v23(0LL, 0x40000LL, 0xFFFFFFFFLL, v22, v21, 0LL, 0LL, 0LL, 0LL);
  return 3221225473LL;
}
