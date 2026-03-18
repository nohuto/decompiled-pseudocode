/*
 * XREFs of UserGetHipDeviceInfo @ 0x14028DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400828F0 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140082A30 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140197638 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DEVICEINFO *i; // r15
  __int64 v16; // r14
  __int64 v17; // r10
  __int64 v18; // rbp
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  char *v34; // rax
  char *v35; // rax
  char v37[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = *a1 - 4;
  v6 = v4;
  v7 = 0;
  v38 = v4;
  UserEnterUserCritSec(a1, a2, a3);
  UserSessionState = W32GetUserSessionState(v9, v8);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
  W32AcquirePushLockSharedEx(Lock, 0);
  v14 = W32GetUserSessionState(v13, v12);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v14 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 46) & 0x80u) != 0 )
    {
      v16 = *((_QWORD *)i + 57);
      v17 = *(_QWORD *)(v16 + 16);
      if ( v6 )
      {
        if ( v4 < 0x450 )
        {
          v3 = -1073741789;
          break;
        }
        v18 = 276LL * v7;
        a1[v18 + 1] = *(_DWORD *)(v16 + 24);
        a1[v18 + 2] = *(_DWORD *)(v17 + 1352);
        v19 = a1[v18 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v16 + 400) != 0LL ? 2 : 0);
        a1[v18 + 3] = v19;
        v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v16 + 368)))) & 4;
        a1[v18 + 3] = v20;
        v21 = v20 & 0xFFFC03FF | (*(unsigned __int8 *)(v16 + 776) << 10);
        a1[v18 + 3] = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(8 * (*(int *)(v16 + 368) >> 2))) & 8;
        a1[v18 + 3] = v22;
        v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(16 * (*(int *)(v16 + 368) >> 3))) & 0x10;
        a1[v18 + 3] = v23;
        v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(32 * (*(int *)(v16 + 368) >> 4))) & 0x20;
        a1[v18 + 3] = v24;
        v25 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v16 + 368) >> 5) << 6)) & 0x40;
        a1[v18 + 3] = v25;
        v26 = v25 ^ ((unsigned __int8)v25 ^ *(_DWORD *)(v16 + 368) & 0x80) & 0x80;
        a1[v18 + 3] = v26;
        v27 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v16 + 368) >> 9) << 8)) & 0x100;
        a1[v18 + 3] = v27;
        a1[v18 + 3] = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v16 + 368) >> 10) << 9)) & 0x200;
        a1[v18 + 4] = *(_DWORD *)(v17 + 2136);
        *(_OWORD *)&a1[v18 + 5] = *(_OWORD *)(v17 + 2120);
        *(_QWORD *)&a1[v18 + 9] = *(_QWORD *)(v17 + 1904);
        a1[v18 + 11] = *(_DWORD *)(v17 + 1916);
        a1[v18 + 16] = *(_DWORD *)(v17 + 1996);
        *(_QWORD *)&a1[v18 + 19] = *(_QWORD *)(v17 + 2112);
        *(_QWORD *)&a1[v18 + 17] = *(_QWORD *)(v17 + 2104);
        RtlStringCchCopyW((char *)&a1[v18 + 85], 128LL, (char *)(v17 + 1612));
        RtlStringCchCopyW((char *)&a1[v18 + 149], 128LL, (char *)(v28 + 1356));
        v31 = *(_QWORD *)(v30 + 1344);
        if ( v31 )
          v32 = ValidateHmonitorNoRip(v31, v29);
        else
          v32 = 0LL;
        v33 = a1[v18 + 3];
        if ( v32 )
        {
          a1[v18 + 3] = v33 | 1;
          *(_OWORD *)&a1[v18 + 12] = *(_OWORD *)GetMonitorRect((__int64)v37, v32);
        }
        else
        {
          a1[v18 + 3] = v33 & 0xFFFFFFFE;
          *(_OWORD *)&a1[v18 + 12] = 0LL;
        }
        v34 = (char *)&a1[v18];
        if ( *(_QWORD *)(v16 + 384) )
          RtlStringCbCopyUnicodeString(v34 + 84, 0x100uLL, (const struct _UNICODE_STRING *)(v16 + 376));
        else
          *((_WORD *)v34 + 42) = 0;
        v35 = (char *)&a1[v18];
        if ( *(_QWORD *)(v16 + 384) )
          RtlStringCbCopyUnicodeString(v35 + 852, 0x100uLL, (const struct _UNICODE_STRING *)(v16 + 904));
        else
          *((_WORD *)v35 + 426) = 0;
        v6 = v38;
        v4 -= 1104;
      }
      ++v7;
    }
  }
  W32ReleasePushLockSharedEx(Lock, 0LL);
  *a1 = 1104 * v7 + 4;
  UserLeaveUserCritSec();
  return v3;
}
