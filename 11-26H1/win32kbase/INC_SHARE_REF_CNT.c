/*
 * XREFs of INC_SHARE_REF_CNT @ 0x140019290
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140019490 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x140019E80 (-TrackObjectReferenceIncrement@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall INC_SHARE_REF_CNT(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rsi
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int16 v13; // [rsp+2Ch] [rbp-1Ch]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = a1;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  HANDLELOCK::vLockHandle(&v11, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u, 1LL);
  if ( v12 )
  {
    v4 = v11;
    v5 = *((_BYTE *)v11 + 14);
    switch ( v5 )
    {
      case 5:
        v6 = *(_QWORD *)(a2 + 680);
        v7 = 3LL;
        break;
      case 4:
        v6 = *(_QWORD *)(a2 + 112);
        v7 = 2LL;
        break;
      case 16:
        v6 = *(_QWORD *)(a2 + 136);
        v7 = 0LL;
        break;
      default:
        goto LABEL_5;
    }
    TrackObjectReferenceIncrement(a1, v7, v6);
LABEL_5:
    ++*(_DWORD *)(a2 + 8);
    v8 = *(__int64 **)(v14 + 8);
    v9 = *v8;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v8 + 96))(v8, *v4);
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 48))(v8, v10);
    KeLeaveCriticalRegion();
    return;
  }
  HmgPentryFromPobj(a1);
}
